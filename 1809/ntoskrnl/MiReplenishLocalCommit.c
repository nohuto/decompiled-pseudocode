/*
 * XREFs of MiReplenishLocalCommit @ 0x140123C64
 * Callers:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x14018812C (MiSyncCommitSignals.c)
 */

signed __int64 __fastcall MiReplenishLocalCommit(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  signed __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx

  v5 = a3 + a4;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7656), a3 + a4, a3);
  if ( a3 == result )
  {
    v9 = *(_QWORD *)(a1 + 6432);
    if ( v5 >= v9 && a3 < v9 || (v10 = *(_QWORD *)(a1 + 6424), v5 >= v10) && a3 < v10 )
      MiSyncCommitSignals(a1, 0LL);
    if ( v5 > *(_QWORD *)(a1 + 6400) )
      *(_QWORD *)(a1 + 6400) = v5;
    _m_prefetchw((const void *)(a2 + 24600));
    v11 = *(unsigned int *)(a2 + 24600);
    for ( i = a4 + v11; i <= 0x200; i = (int)result + a4 )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 24600), v11 + a4, v11);
      if ( (int)result == v11 )
        return result;
      v11 = (int)result;
    }
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7656), -a4);
    v14 = *(_QWORD *)(a1 + 6432);
    if ( v13 >= v14 && v13 - a4 < v14 )
      return MiSyncCommitSignals(a1, 0LL);
    v15 = *(_QWORD *)(a1 + 6424);
    result = v13 - a4;
    if ( v13 - a4 < v15 && v13 >= v15 )
      return MiSyncCommitSignals(a1, 0LL);
  }
  return result;
}
