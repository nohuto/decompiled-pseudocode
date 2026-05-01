/*
 * XREFs of ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180011E9C
 * Callers:
 *     ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_KPEA_K22@Z @ 0x18000B128 (-RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_KPEA_K22@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostComputeCommitEstimate(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rtt
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  unsigned __int64 v14; // rax

  v6 = a2 >> 4;
  if ( a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v6 = a1 >> 3;
  if ( v6 <= 0x1400000 )
    v6 = 20971520LL;
  v7 = v6 + a1 - 1;
  v8 = -1LL;
  v9 = v7 / v6 * v6;
  v10 = -1LL;
  if ( is_mul_ok(v7 / v6, v6) )
    v10 = v9;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v10 > a2 )
  {
    v13 = v6 + a2 - 1;
    v14 = v13 / v6 * v6;
    v10 = -1LL;
    if ( is_mul_ok(v13 / v6, v6) )
      v10 = v14;
  }
  if ( v10 != -1LL && v10 + v6 >= v10 )
    v8 = v10 + v6;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v10 >= a2 )
      v10 = a2;
    if ( a2 < v8 )
      v8 = a2;
  }
  v11 = 2 * v6;
  if ( 2 * v6 >= v10 )
    v11 = v10;
  v12 = v10 - v11;
  if ( a4 )
    *a4 = v8;
  if ( a3 )
    *a3 = v12;
}
