/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C00636E0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2230 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C01D2600 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     GetPrimaryMonitorRect @ 0x1C00650A4 (GetPrimaryMonitorRect.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, unsigned int a3)
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
    (HWND)*(unsigned __int16 *)(gpsi + 6996LL),
    (struct _LARGE_STRING *)((unsigned __int16)(v7.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRect) | ((unsigned __int16)(v7.m128i_i16[2] - HIDWORD(PrimaryMonitorRect->m128i_i64[0])) << 16)),
    1u,
    0LL,
    1,
    a3);
  if ( (dword_1C0327204 & 1) == 0 )
  {
    dword_1C0327204 |= 1u;
    word_1C0327208 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 96) + 40LL) + 64LL);
  }
  result = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 96) + 40LL) + 64LL);
  if ( word_1C0327208 != (_WORD)result )
  {
    word_1C0327208 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 96) + 40LL) + 64LL);
    v9 = word_1C0327208 == *(_WORD *)(gpsi + 6998LL);
    result = v9;
    v11 = v9;
    if ( !v9 )
      result = ZwUpdateWnfStateData(&WNF_SPI_PRIMARY_MONITOR_DPI_CHANGED, &v11, 4LL, 0LL, gSessionId, 0, 0);
  }
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 26LL, 0LL, 0LL, 1u, 0LL, 1, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 21LL, 0LL, 0LL, 1u, 0LL, 1, a3);
  }
  return result;
}
