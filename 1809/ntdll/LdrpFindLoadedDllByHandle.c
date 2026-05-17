/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x180042010
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800221EC (LdrpGetDelayloadExportDll.c)
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllFullName @ 0x18003F4B0 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x180041E90 (LdrResolveDelayLoadedAPI.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x180045070 (LdrAddRefDll.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007BF90 (LdrDisableThreadCalloutsForDll.c)
 *     LdrIsModuleSxsRedirected @ 0x1800CFE50 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800CFF90 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D0430 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(unsigned __int64 a1, __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  v4 = 0LL;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v4 = LdrpNtDllDataTableEntry;
      if ( a3 )
        *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)a2, a3, a4);
      v8 = LdrpModuleBaseAddressIndex;
      if ( (qword_1801662C0 & 1) != 0 && LdrpModuleBaseAddressIndex )
        v8 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
      while ( v8 )
      {
        v9 = *(_QWORD *)(v8 - 152);
        if ( a1 < v9 )
        {
          v10 = *(_QWORD *)v8;
        }
        else
        {
          if ( a1 <= v9 )
          {
            v4 = v8 - 200;
            v11 = *(_QWORD *)(v8 - 200 + 152);
            if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v4 + 276));
            if ( a3 )
              *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL);
            break;
          }
          v10 = *(_QWORD *)(v8 + 8);
        }
        if ( (qword_1801662C0 & 1) != 0 && v10 )
          v8 ^= v10;
        else
          v8 = v10;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v4;
  return v4 == 0 ? 0xC0000135 : 0;
}
