/*
 * XREFs of NVMeIoPollingTimerExCallback @ 0x1C00158F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeIoPollingTimerExCallback(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h]

  v5 = 0;
  StorPortExtendedFunction(92LL, *a2, &v5);
  v3 = a2[1];
  v6 = 0;
  return StorPortNotification(4098LL, *a2, v3 + 216);
}
