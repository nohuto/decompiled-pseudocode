/*
 * XREFs of MiFlushAllPages @ 0x14016A738
 * Callers:
 *     MmFlushAllPagesEx @ 0x14016A6EC (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x14059E418 (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1401434AC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x14016A7C8 (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // r14
  __int64 UnbiasedInterruptTime; // rbp
  __int64 result; // rax
  _KPROCESS *v9; // rbx
  _BYTE v10[48]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
  memset(v10, 0, sizeof(v10));
  v6 = 10000000 * v4;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v4, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1144) )
    {
      v9 = *(_KPROCESS **)(a1 + 1264);
      KiStackAttachProcess(v9, 0, (__int64)v10);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].IdealNode[6]);
      KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
      return MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, v6, 0LL);
    }
  }
  return result;
}
