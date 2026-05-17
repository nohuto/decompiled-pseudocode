/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x180034CB0
 * Callers:
 *     LdrFindEntryForAddress @ 0x180034C60 (LdrFindEntryForAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800DAB40 (AVrfCallAPILookupCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)a2, a3, a4);
  v7 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801662C0 & 1) != 0 && LdrpModuleBaseAddressIndex )
    v7 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  while ( v7 )
  {
    v8 = *(_QWORD *)(v7 - 152);
    if ( a1 < v8 )
    {
      v9 = *(_QWORD *)v7;
    }
    else
    {
      if ( a1 < v8 + *(unsigned int *)(v7 - 136) )
      {
        v10 = v7 - 200;
        v11 = *(_QWORD *)(v7 - 200 + 152);
        if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 276));
        *a2 = v10;
        if ( a3 )
          *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(v10 + 152) + 56LL);
        break;
      }
      v9 = *(_QWORD *)(v7 + 8);
    }
    if ( (qword_1801662C0 & 1) != 0 && v9 )
      v7 ^= v9;
    else
      v7 = v9;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v7 == 0 ? 0xC0000135 : 0;
}
