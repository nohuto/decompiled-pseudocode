/*
 * XREFs of ExpFindCurrentThread @ 0x140108440
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400B1950 (ExpAcquireSharedStarveExclusive.c)
 *     ExpBoostIoAfterAcquire @ 0x1401082F0 (ExpBoostIoAfterAcquire.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140165F80 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14031BFB8 (ExpTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x140108584 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindCurrentThread(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 v6; // r10
  _QWORD *result; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx

  v6 = *(_QWORD *)(a1 + 48);
  result = (_QWORD *)(a1 + 48);
  if ( v6 != a2 )
  {
    v12 = 0LL;
    v13 = 0LL;
    if ( !v6 )
    {
      v13 = (_QWORD *)(a1 + 48);
      if ( a5 )
        v13 = 0LL;
    }
    v14 = *(_QWORD *)(a1 + 48) != 0LL;
    if ( !a6
      || (v15 = *(_QWORD *)(a1 + 16)) == 0
      || a6 >= *(_DWORD *)(v15 + 8)
      || (result = (_QWORD *)(v15 + 16LL * a6), *result != a2) )
    {
      v16 = *(_QWORD *)(a1 + 16);
      result = (_QWORD *)v16;
      if ( !v16
        || (v17 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72),
            v12 = (_QWORD *)(v16 + 16LL * *(unsigned int *)(v16 + 8)),
            result = (_QWORD *)(v16 + 16),
            v14 >= v17) )
      {
LABEL_9:
        if ( a4 )
        {
          if ( v13 || result < v12 && (v13 = result) != 0LL )
          {
            v18 = v13;
            result = v13;
LABEL_14:
            KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v18 - v16) >> 4;
            return result;
          }
          ExpExpandResourceOwnerTable(a1, a3);
        }
        return 0LL;
      }
      while ( *result != a2 )
      {
        if ( *result )
        {
          if ( ++v14 == v17 )
          {
            result += 2;
            goto LABEL_9;
          }
        }
        else
        {
          v19 = result;
          if ( v13 )
            v19 = v13;
          v13 = v19;
        }
        result += 2;
        if ( result == v12 )
          goto LABEL_9;
      }
      v18 = result;
      goto LABEL_14;
    }
  }
  return result;
}
