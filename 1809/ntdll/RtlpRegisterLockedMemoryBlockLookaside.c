/*
 * XREFs of RtlpRegisterLockedMemoryBlockLookaside @ 0x180079B9C
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x1800799F0 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180079C30 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180079CE0 (RtlLockModuleSection.c)
 */

__int64 __fastcall RtlpRegisterLockedMemoryBlockLookaside(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  int v4; // esi
  int v5; // eax
  __int64 v7; // rbx
  __int64 (__fastcall **v8)(); // rdi
  __int64 (__fastcall **v9)(); // rdi

  v4 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryBlockLookasideLock, a2, a3, a4);
  v5 = RtlpLockedMemoryBlockLookasideCount;
  if ( RtlpLockedMemoryBlockLookasideCount )
  {
LABEL_2:
    RtlpLockedMemoryBlockLookasideCount = v5 + 1;
  }
  else
  {
    v7 = 0LL;
    v8 = RtlpMemoryBlockLookasideCriticalRoutines;
    while ( 1 )
    {
      v4 = RtlLockModuleSection(*v8);
      if ( v4 < 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
      ++v8;
      if ( (unsigned int)v7 >= 4 )
      {
        v5 = RtlpLockedMemoryBlockLookasideCount;
        goto LABEL_2;
      }
    }
    if ( (_DWORD)v7 )
    {
      v9 = &RtlpMemoryBlockLookasideCriticalRoutines[v7];
      do
      {
        RtlUnlockModuleSection(*--v9);
        LODWORD(v7) = v7 - 1;
      }
      while ( (_DWORD)v7 );
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  return (unsigned int)v4;
}
