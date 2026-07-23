/*
 * XREFs of MiProcessWsInSwapSupport @ 0x1400E5B14
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400E4F04 (MmInSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14085FCD0 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x14085FF3C (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiProcessWsInSwapRanges @ 0x1400E5BD8 (MiProcessWsInSwapRanges.c)
 */

__int64 __fastcall MiProcessWsInSwapSupport(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // r9
  __int64 v5; // rbp
  __int64 v6; // rcx
  _QWORD *v7; // rbp
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rsi

  v2 = *(_QWORD **)a1;
  v4 = v2;
  v5 = 2LL * *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  v7 = &v2[v5];
  if ( v2 < v7 )
  {
    do
    {
      v8 = v2[1] >> 12;
      result = v8 + v6;
      if ( (unsigned __int64)(v8 + v6) >= 0x1000 )
      {
        v10 = v8 - (4096 - v6);
        v2[1] = (4096 - v6) << 12;
        result = MiProcessWsInSwapRanges(v4, v2, a2);
        if ( v10 )
        {
          result = v2[1];
          v4 = v2;
          *v2 += result;
          v2[1] = v10 << 12;
          v2 -= 2;
        }
        else
        {
          v4 = v2 + 2;
        }
        v6 = 0LL;
      }
      else
      {
        v6 += v8;
      }
      v2 += 2;
    }
    while ( v2 < v7 );
    if ( v6 )
      return MiProcessWsInSwapRanges(v4, v2 - 2, a2);
  }
  return result;
}
