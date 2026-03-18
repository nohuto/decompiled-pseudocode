/*
 * XREFs of ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1C01F5120
 * Callers:
 *     <none>
 * Callees:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C0032F10 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DxgkLatencyToleranceTimerNotification(KSPIN_LOCK *a1, __int64 a2)
{
  DXGADAPTER::LatencyToleranceTimerNotification(a1, a2);
}
