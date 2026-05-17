/*
 * XREFs of LdrpEnableParallelLoading @ 0x180062C10
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     TpAllocWork @ 0x180062D10 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x180062EC0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062F30 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x180062FD4 (TpAllocPoolInternal.c)
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rdx
  int v7; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]
  int v15; // [rsp+60h] [rbp-18h]

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
    if ( (RtlGetSuiteMask(v2) & 0x10000) != 0 )
      v3 = 0;
  }
  v4 = TpAllocPoolInternal(&LdrpThreadPool, 1LL);
  if ( v4 >= 0 )
  {
    TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
    v5 = 1LL;
    if ( v3 > 1 )
      v5 = v3 - 1;
    TpSetPoolMaxThreads(LdrpThreadPool, v5);
    if ( v3 > 1 && !LdrpDetourExist )
    {
      v9 = 0LL;
      v10 = 0LL;
      v12 = 0LL;
      v13 = 0;
      v11 = 0LL;
      v8 = LdrpThreadPool;
      v7 = 3;
      v14 = 1;
      v15 = 72;
      return (unsigned int)((__int64 (__fastcall *)(__int64 *, void (*)(), _QWORD, int *))TpAllocWork)(
                             &LdrpMapAndSnapWork,
                             LdrpWorkCallback,
                             0LL,
                             &v7);
    }
  }
  return (unsigned int)v4;
}
