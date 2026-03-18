/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x140887B58
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140887460 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     MmMapViewInSystemSpace @ 0x1405A23A0 (MmMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x14061B2D0 (MmCreateSection.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140703DE4 (RtlpGetNtProductTypeFromRegistry.c)
 *     PspSiloInitializeSuiteMask @ 0x14088796C (PspSiloInitializeSuiteMask.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1408879D0 (PspSiloInitializeSystemRootBuffer.c)
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

  ViewSize = 624LL;
  result = MmCreateSection((int)&Section, 983071LL, 0, &ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v4 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[140] = MappedBase;
      ServerSiloGlobals[141] = v3;
      v6 = PsAttachSiloToCurrentThread(a1);
      *(_DWORD *)ServerSiloGlobals[140] = -1;
      NtProductTypeFromRegistry = PspSiloInitializeSystemRootBuffer((__int64)a1);
      if ( NtProductTypeFromRegistry >= 0 )
      {
        v8 = ServerSiloGlobals[140];
        NtProductTypeFromRegistry = RtlpGetNtProductTypeFromRegistry(&ViewSize);
        if ( NtProductTypeFromRegistry >= 0 )
        {
          *(_DWORD *)(v8 + 16) = ViewSize;
          NtProductTypeFromRegistry = PspSiloInitializeSuiteMask(ServerSiloGlobals[140]);
          if ( NtProductTypeFromRegistry >= 0 )
          {
            *(_DWORD *)(ServerSiloGlobals[140] + 24LL) = -1;
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
