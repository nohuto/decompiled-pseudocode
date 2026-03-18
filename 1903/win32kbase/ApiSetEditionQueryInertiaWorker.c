/*
 * XREFs of ApiSetEditionQueryInertiaWorker @ 0x1C019DDF8
 * Callers:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C017E100 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionQueryInertiaWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int InertiaWorker; // edi
  int v5; // edx

  v2 = a2;
  InertiaWorker = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      360,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsEditionQueryInertiaWorkerSupported() >= 0 )
    InertiaWorker = EditionQueryInertiaWorker(a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      361,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return InertiaWorker;
}
