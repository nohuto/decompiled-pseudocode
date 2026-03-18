/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C00650A4
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00636E0 (xxxBroadcastDisplaySettingsChange.c)
 *     _GetClientRect @ 0x1C00E9968 (_GetClientRect.c)
 *     xxxSoundSentry @ 0x1C010FD10 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 */

_OWORD *__fastcall GetPrimaryMonitorRect(_OWORD *a1)
{
  __int64 DispInfo; // rax
  __int128 v3; // xmm0
  _OWORD *result; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DispInfo = GetDispInfo();
  v3 = *(_OWORD *)GetMonitorRect(v5, *(_QWORD *)(DispInfo + 96));
  result = a1;
  *a1 = v3;
  return result;
}
