/*
 * XREFs of RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C006AF5C
 * Callers:
 *     RIMUnregisterForInput @ 0x1C006A630 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 */

int __fastcall RIMSignalAllPriorPnpWorkToCompleteWaiters(__int64 a1)
{
  _UNKNOWN **v2; // rax
  LONG v3; // r8d

  v2 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LODWORD(v2) = WPP_RECORDER_SF_q(
                    (_DWORD)gRimLog,
                    4,
                    1,
                    43,
                    (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
                    a1);
  v3 = *(_DWORD *)(a1 + 880);
  if ( v3 )
  {
    LODWORD(v2) = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 872), 0, v3, 0);
    *(_DWORD *)(a1 + 880) = 0;
  }
  return (int)v2;
}
