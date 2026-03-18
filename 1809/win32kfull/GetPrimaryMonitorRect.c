/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C00BA848
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00BA890 (xxxBroadcastDisplaySettingsChange.c)
 *     _GetClientRect @ 0x1C00BC9E8 (_GetClientRect.c)
 *     xxxSoundSentry @ 0x1C0154BE0 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 */

__m128i *__fastcall GetPrimaryMonitorRect(__m128i *a1, __int64 a2)
{
  __int64 DispInfo; // rax
  __m128i v4; // xmm0
  __m128i *result; // rax
  __m128i v6; // [rsp+20h] [rbp-18h] BYREF

  DispInfo = GetDispInfo(a1, a2);
  v4 = *GetMonitorRect(&v6, *(_QWORD *)(DispInfo + 96));
  result = a1;
  *a1 = v4;
  return result;
}
