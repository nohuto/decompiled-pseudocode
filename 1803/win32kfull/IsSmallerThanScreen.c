/*
 * XREFs of IsSmallerThanScreen @ 0x1C00C10E4
 * Callers:
 *     xxxSetSysMenu @ 0x1C00C2450 (xxxSetSysMenu.c)
 *     ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C00F68F0 (-ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0035B48 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C022AF90 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

_BOOL8 __fastcall IsSmallerThanScreen(struct tagWND *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct tagMONITOR *v6; // rbp
  __m128i *MonitorWorkRectForWindow; // rax
  __m128i v8; // xmm1
  __int64 v9; // rax
  unsigned __int64 v10; // xmm0_8
  int v11; // esi
  int v12; // edi
  _DWORD *v13; // rdx
  unsigned __int16 WindowCompositedDpi; // ax
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v6 = _MonitorFromWindowInternal(a1, 1LL, 0LL, a4);
  MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v16, (__int64)v6, a1);
  v8 = *MonitorWorkRectForWindow;
  v9 = MonitorWorkRectForWindow->m128i_i64[0];
  v10 = _mm_srli_si128(v8, 8).m128i_u64[0];
  v11 = v10 - v9;
  v12 = HIDWORD(v10) - HIDWORD(v9);
  if ( a2 )
  {
    WindowCompositedDpi = GetWindowCompositedDpi(a1);
    *a2 = GetMonitorRegionForDpi(v6, WindowCompositedDpi);
  }
  v13 = (_DWORD *)*((_QWORD *)a1 + 5);
  return v13[24] - v13[22] < v11 || v13[25] - v13[23] < v12;
}
