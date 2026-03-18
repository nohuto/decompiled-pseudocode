/*
 * XREFs of rimFindHoldingFrame @ 0x1C0058948
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C00588C0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 *     RIMRemoveHoldingFrame @ 0x1C00F92BC (RIMRemoveHoldingFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00F9344 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C00F94A0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00F9684 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00F993C (rimStorePointersInHoldingFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall rimFindHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rbx

  v2 = (_QWORD *)(a1 + 520);
  v3 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  do
  {
    v6 = v3[3];
    v7 = v3;
    if ( v6 == v5 )
      break;
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != v2 );
  if ( v3 == v2 )
    return 0LL;
  if ( v6 != v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v5);
  return v7;
}
