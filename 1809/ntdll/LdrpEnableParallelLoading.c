/*
 * XREFs of LdrpEnableParallelLoading @ 0x180031760
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDetectDetour @ 0x180028E48 (LdrpDetectDetour.c)
 *     TpAllocWork @ 0x18002D890 (TpAllocWork.c)
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 *     TpSetPoolMaxThreads @ 0x180031670 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180031860 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     RtlGetSuiteMask @ 0x180062DA0 (RtlGetSuiteMask.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  int v2; // esi
  unsigned int v3; // ebx
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  LdrpDetectDetour();
  if ( a1 )
  {
    v3 = a1;
    if ( a1 > 0x10 )
      v3 = 16;
  }
  else
  {
    v3 = 4;
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v3 = 0;
  }
  if ( v3 > 1 && !LdrpDetourExist )
  {
    v2 = TpAllocPoolInternal(&LdrpThreadPool, 1);
    if ( v2 >= 0 )
    {
      TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
      TpSetPoolMaxThreads(LdrpThreadPool, v3 - 1);
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.Pool = LdrpThreadPool;
      CallbackEnviron.Version = 3;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      return (unsigned int)TpAllocWork(&LdrpMapAndSnapWork, LdrpWorkCallback, 0LL, &CallbackEnviron);
    }
  }
  return (unsigned int)v2;
}
