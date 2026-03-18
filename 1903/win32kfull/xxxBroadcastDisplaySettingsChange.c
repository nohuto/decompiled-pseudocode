/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C0115C40
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0115BC0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C020D290 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     GetPrimaryMonitorRect @ 0x1C0115DC4 (GetPrimaryMonitorRect.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, unsigned int a3)
{
  __m128i *PrimaryMonitorRect; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  bool v13; // zf
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF
  BOOL v15; // [rsp+68h] [rbp+10h] BYREF

  EtwTraceChangeDisplayModeBroadcast(0LL);
  PrimaryMonitorRect = (__m128i *)GetPrimaryMonitorRect(v14);
  v7 = _mm_srli_si128(*PrimaryMonitorRect, 8);
  xxxBroadcastMessageEx(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    0x7Eu,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (struct _LARGE_STRING *)((unsigned __int16)(v7.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRect) | ((unsigned __int16)(v7.m128i_i16[2] - HIDWORD(PrimaryMonitorRect->m128i_i64[0])) << 16)),
    1u,
    0LL,
    1,
    a3);
  if ( (dword_1C032C7F8 & 1) == 0 )
  {
    dword_1C032C7F8 |= 1u;
    v9 = *(_QWORD *)(*(_QWORD *)(GetDispInfo(v9, v8) + 96) + 40LL);
    word_1C032C7FC = *(_WORD *)(v9 + 64);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(GetDispInfo(v9, v8) + 96) + 40LL);
  result = *(unsigned __int16 *)(v11 + 64);
  if ( word_1C032C7FC != (_WORD)result )
  {
    word_1C032C7FC = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v11, v10) + 96) + 40LL) + 64LL);
    v13 = word_1C032C7FC == *(_WORD *)(gpsi + 6998LL);
    result = v13;
    v15 = v13;
    if ( !v13 )
      result = ZwUpdateWnfStateData(&WNF_SPI_PRIMARY_MONITOR_DPI_CHANGED, &v15, 4LL, 0LL, *(_QWORD *)&gSessionId, 0, 0);
  }
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0x1Au, 0LL, 0LL, 1u, 0LL, 1, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0x15u, 0LL, 0LL, 1u, 0LL, 1, a3);
  }
  return result;
}
