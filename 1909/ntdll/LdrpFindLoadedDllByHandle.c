/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x18001869C
 * Callers:
 *     LdrGetDllFullName @ 0x180013620 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpGetDelayloadExportDll @ 0x18002113C (LdrpGetDelayloadExportDll.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800773A0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrIsModuleSxsRedirected @ 0x1800CE730 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE870 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800CED00 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v10; // rax

  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v3 = LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v7 = LdrpModuleBaseAddressIndex;
      if ( (qword_1801662E0 & 1) != 0 && LdrpModuleBaseAddressIndex )
        v7 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
      while ( v7 )
      {
        if ( a1 >= *(_QWORD *)(v7 - 152) )
        {
          if ( a1 <= *(_QWORD *)(v7 - 152) )
          {
            v3 = v7 - 200;
            v10 = *(_QWORD *)(v7 - 200 + 152);
            if ( *(_DWORD *)(v10 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v10 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v3 + 276));
            if ( a3 )
              *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 152) + 56LL);
            break;
          }
          v8 = *(_QWORD *)(v7 + 8);
        }
        else
        {
          v8 = *(_QWORD *)v7;
        }
        if ( (qword_1801662E0 & 1) != 0 && v8 )
          v7 ^= v8;
        else
          v7 = v8;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v3;
  return v3 == 0 ? 0xC0000135 : 0;
}
