/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C00BA890
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00BCA60 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C01F6F80 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C00BA848 (GetPrimaryMonitorRect.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  bool v10; // zf
  __m128i v11; // [rsp+40h] [rbp-18h] BYREF
  BOOL v12; // [rsp+68h] [rbp+10h] BYREF

  EtwTraceChangeDisplayModeBroadcast(0LL);
  _mm_srli_si128(*GetPrimaryMonitorRect(&v11, v4), 8);
  xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 126LL, *(unsigned __int16 *)(gpsi + 6996LL));
  if ( (dword_1C03177FC & 1) == 0 )
  {
    dword_1C03177FC |= 1u;
    v6 = *(_QWORD *)(*(_QWORD *)(GetDispInfo(v6, v5) + 96) + 40LL);
    word_1C0317800 = *(_WORD *)(v6 + 64);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(GetDispInfo(v6, v5) + 96) + 40LL);
  result = *(unsigned __int16 *)(v8 + 64);
  if ( word_1C0317800 != (_WORD)result )
  {
    word_1C0317800 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v8, v7) + 96) + 40LL) + 64LL);
    v10 = word_1C0317800 == *(_WORD *)(gpsi + 6998LL);
    result = v10;
    v12 = v10;
    if ( !v10 )
      result = ZwUpdateWnfStateData(&WNF_SPI_PRIMARY_MONITOR_DPI_CHANGED, &v12, 4LL);
  }
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 26LL, 0LL);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 21LL, 0LL);
  }
  return result;
}
