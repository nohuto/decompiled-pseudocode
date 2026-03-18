/*
 * XREFs of UpdateSizeTrackingInfo @ 0x1C01C5C90
 * Callers:
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01F6F30 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     GetWindowExtendedMargin @ 0x1C0059034 (GetWindowExtendedMargin.c)
 *     ?IsLeftOrRightArranged@@YAEPEBUtagWND@@@Z @ 0x1C01C1010 (-IsLeftOrRightArranged@@YAEPEBUtagWND@@@Z.c)
 */

__int64 __fastcall UpdateSizeTrackingInfo(struct tagWND *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __m128i *MonitorWorkRectForWindow; // rax
  int v10; // ebx
  BOOL v11; // ecx
  int v12; // eax
  int v13; // ebx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int16 v15; // [rsp+50h] [rbp+8h] BYREF
  __int16 v16; // [rsp+52h] [rbp+Ah]

  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 664LL);
  v7 = *(_QWORD *)(v6 + 232);
  if ( *(_QWORD *)(v6 + 216) != v7 )
    return 0LL;
  MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v14, v7, a1);
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(*MonitorWorkRectForWindow, 8)) - _mm_cvtsi128_si32(*MonitorWorkRectForWindow);
  if ( IsLeftOrRightArranged(a1) && (unsigned int)GetWindowExtendedMargin((__int64)a1, (__int64)&v15) )
    v10 += v16 + v15;
  v11 = 0;
  v12 = v10 - *a3;
  if ( v12 <= 0 )
    return 0LL;
  v13 = v10 - *a2;
  if ( v13 > 0 )
    v11 = v13 > *(_DWORD *)(v6 + 108);
  if ( v12 < *(_DWORD *)(v6 + 112) )
    *(_DWORD *)(v6 + 112) = v12;
  if ( v11 )
    *(_DWORD *)(v6 + 104) = v13;
  return 1LL;
}
