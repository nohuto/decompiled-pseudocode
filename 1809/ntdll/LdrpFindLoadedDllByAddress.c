/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x180034CB0
 * Callers:
 *     LdrFindEntryForAddress @ 0x180034C60 (LdrFindEntryForAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800DAB40 (AVrfCallAPILookupCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 Root; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && LdrpModuleBaseAddressIndex.Root )
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  while ( Root )
  {
    v7 = *(_QWORD *)(Root - 152);
    if ( a1 < v7 )
    {
      v8 = *(_QWORD *)Root;
    }
    else
    {
      if ( a1 < v7 + *(unsigned int *)(Root - 136) )
      {
        v9 = Root - 200;
        v10 = *(_QWORD *)(Root - 200 + 152);
        if ( *(_DWORD *)(v10 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v10 - 56LL) & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 276));
        *a2 = v9;
        if ( a3 )
          *a3 = *(_DWORD *)(*(_QWORD *)(v9 + 152) + 56LL);
        break;
      }
      v8 = *(_QWORD *)(Root + 8);
    }
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v8 )
      Root ^= v8;
    else
      Root = v8;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return Root == 0 ? 0xC0000135 : 0;
}
