/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x1408C5F14
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     MmCreateSection @ 0x14068AC90 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1406AD0D0 (MmMapViewInSystemSpace.c)
 *     PspSiloInitializeSuiteMask @ 0x1408C5D08 (PspSiloInitializeSuiteMask.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1408C5D78 (PspSiloInitializeSystemRootBuffer.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1408D5290 (RtlpGetNtProductTypeFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeUserSharedData(struct _LIST_ENTRY *a1)
{
  __int64 result; // rax
  PVOID v3; // rbx
  NTSTATUS v4; // edi
  _QWORD *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v6; // rbp
  int NtProductTypeFromRegistry; // ebx
  __int64 v8; // rsi
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF
  PVOID Section; // [rsp+70h] [rbp+18h] BYREF
  PVOID MappedBase; // [rsp+78h] [rbp+20h] BYREF

  ViewSize = 584LL;
  result = MmCreateSection((int)&Section, 983071LL, 0, &ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v4 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[138] = MappedBase;
      ServerSiloGlobals[139] = v3;
      v6 = PsAttachSiloToCurrentThread(a1);
      *(_DWORD *)ServerSiloGlobals[138] = -1;
      NtProductTypeFromRegistry = PspSiloInitializeSystemRootBuffer((__int64)a1);
      if ( NtProductTypeFromRegistry >= 0 )
      {
        v8 = ServerSiloGlobals[138];
        NtProductTypeFromRegistry = RtlpGetNtProductTypeFromRegistry(&ViewSize);
        if ( NtProductTypeFromRegistry >= 0 )
        {
          *(_DWORD *)(v8 + 16) = ViewSize;
          NtProductTypeFromRegistry = PspSiloInitializeSuiteMask(ServerSiloGlobals[138]);
          if ( NtProductTypeFromRegistry >= 0 )
          {
            *(_DWORD *)(ServerSiloGlobals[138] + 24LL) = -1;
            NtProductTypeFromRegistry = 0;
          }
        }
      }
      PsDetachSiloFromCurrentThread(v6);
      return (unsigned int)NtProductTypeFromRegistry;
    }
    else
    {
      ObfDereferenceObject(v3);
      return (unsigned int)v4;
    }
  }
  return result;
}
