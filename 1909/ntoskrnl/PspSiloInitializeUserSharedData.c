/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x1408C57F4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C50A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     MmCreateSection @ 0x140650DB0 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1406A3A80 (MmMapViewInSystemSpace.c)
 *     PspSiloInitializeSuiteMask @ 0x1408C55E8 (PspSiloInitializeSuiteMask.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1408C5658 (PspSiloInitializeSystemRootBuffer.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1408D4B90 (RtlpGetNtProductTypeFromRegistry.c)
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
