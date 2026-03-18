/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C00111D0
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0010E80 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C020CFE0 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C001161C (GetPrimaryMonitorRect.c)
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, int a3)
{
  __m128i *PrimaryMonitorRect; // rax
  __m128i v7; // xmm0
  __int64 result; // rax
  bool v9; // zf
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF
  BOOL v11; // [rsp+68h] [rbp+10h] BYREF

  EtwTraceChangeDisplayModeBroadcast(0LL);
  PrimaryMonitorRect = (__m128i *)GetPrimaryMonitorRect(v10);
  v7 = _mm_srli_si128(*PrimaryMonitorRect, 8);
  xxxBroadcastMessageEx(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    126LL,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (unsigned __int16)(v7.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRect) | ((unsigned __int16)(v7.m128i_i16[2]
                                                                                            - HIDWORD(PrimaryMonitorRect->m128i_i64[0])) << 16),
    1,
    0LL,
    1,
    a3);
  if ( (dword_1C032A7E8 & 1) == 0 )
  {
    dword_1C032A7E8 |= 1u;
    word_1C032A7EC = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 96) + 40LL) + 64LL);
  }
  result = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 96) + 40LL) + 64LL);
  if ( word_1C032A7EC != (_WORD)result )
  {
    word_1C032A7EC = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 96) + 40LL) + 64LL);
    v9 = word_1C032A7EC == *(_WORD *)(gpsi + 6998LL);
    result = v9;
    v11 = v9;
    if ( !v9 )
      result = ZwUpdateWnfStateData(&WNF_SPI_PRIMARY_MONITOR_DPI_CHANGED, &v11, 4LL);
  }
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 26LL, 0LL, 0LL, 1, 0LL, 1, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 21LL, 0LL, 0LL, 1, 0LL, 1, a3);
  }
  return result;
}
