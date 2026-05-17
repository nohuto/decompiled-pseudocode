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
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]
  int v15; // [rsp+60h] [rbp-18h]

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
      TpSetPoolMaxThreads(LdrpThreadPool, (_PEB_LDR_DATA *)(v3 - 1), v4, v5);
      v9 = 0LL;
      v10 = 0LL;
      v12 = 0LL;
      v13 = 0;
      v11 = 0LL;
      v8 = LdrpThreadPool;
      v7 = 3;
      v14 = 1;
      v15 = 72;
      return (unsigned int)TpAllocWork(
                             (_PEB_LDR_DATA *)&LdrpMapAndSnapWork,
                             (__int64)LdrpWorkCallback,
                             0LL,
                             (__int64)&v7);
    }
  }
  return (unsigned int)v2;
}
