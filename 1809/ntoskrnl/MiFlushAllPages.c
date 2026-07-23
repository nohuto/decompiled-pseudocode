/*
 * XREFs of MiFlushAllPages @ 0x140153238
 * Callers:
 *     MmFlushAllPagesEx @ 0x1401531EC (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x14056FA20 (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     MiFlushAllPagesWorker @ 0x1401532B8 (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1402A7D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  _KPROCESS *v9; // rbx
  _BYTE v10[48]; // [rsp+20h] [rbp-48h] BYREF

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1144) )
    {
      v9 = *(_KPROCESS **)(a1 + 1264);
      KiStackAttachProcess(v9, 0LL, (__int64)v10);
      MiEmptyWorkingSetPrivatePagesByVa(&v9[1].IdealNode[12]);
      KiUnstackDetachProcess((__int64)v10, 0LL);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL);
    }
  }
  return result;
}
