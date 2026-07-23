/*
 * XREFs of sub_18001869C @ 0x18001869C
 * Callers:
 *     LdrGetDllFullName @ 0x180013620 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     sub_18002113C @ 0x18002113C (sub_18002113C.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     LdrDisableThreadCalloutsForDll @ 0x180076F20 (LdrDisableThreadCalloutsForDll.c)
 *     LdrIsModuleSxsRedirected @ 0x1800CE670 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE7B0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800CEC40 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18001869C(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 Root; // rax
  unsigned __int64 v8; // rcx
  __int64 v10; // rax

  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == qword_1801653A8 )
    {
      v3 = qword_1801653A0;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(qword_1801653A0 + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&stru_1801660B0);
      Root = (unsigned __int64)stru_1801662C8.Root;
      if ( ((__int64)stru_1801662C8.Min & 1) != 0 && stru_1801662C8.Root )
        Root = (unsigned __int64)&stru_1801662C8 ^ (unsigned __int64)stru_1801662C8.Root;
      while ( Root )
      {
        if ( a1 >= *(_QWORD *)(Root - 152) )
        {
          if ( a1 <= *(_QWORD *)(Root - 152) )
          {
            v3 = Root - 200;
            v10 = *(_QWORD *)(Root - 200 + 152);
            if ( *(_DWORD *)(v10 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v10 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v3 + 276));
            if ( a3 )
              *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 152) + 56LL);
            break;
          }
          v8 = *(_QWORD *)(Root + 8);
        }
        else
        {
          v8 = *(_QWORD *)Root;
        }
        if ( ((__int64)stru_1801662C8.Min & 1) != 0 && v8 )
          Root ^= v8;
        else
          Root = v8;
      }
      RtlReleaseSRWLockExclusive(&stru_1801660B0);
    }
  }
  *a2 = v3;
  return v3 == 0 ? 0xC0000135 : 0;
}
