/*
 * XREFs of WPP_SF_qs @ 0x1C0069858
 * Callers:
 *     ndisQueuePowerIrp @ 0x1C0069BBC (ndisQueuePowerIrp.c)
 *     ndisPowerIrpWorker @ 0x1C00F5600 (ndisPowerIrpWorker.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qs(unsigned __int16 a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = a3;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  if ( !a4 )
    a4 = "NULL";
  ndisWppFastTraceMessage(&WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1, &v6, 8LL, a4, v5, 0LL);
}
