/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C001161C
 * Callers:
 *     _GetClientRect @ 0x1C0011124 (_GetClientRect.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00111D0 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxSoundSentry @ 0x1C015BAE0 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
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
