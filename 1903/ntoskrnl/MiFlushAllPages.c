/*
 * XREFs of MiFlushAllPages @ 0x140160B64
 * Callers:
 *     MmFlushAllPagesEx @ 0x140160B18 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x14059E438 (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140142F6C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x140160C18 (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
