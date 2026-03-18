/*
 * XREFs of GetWindowBordersWithDpiAwareness @ 0x1C00920C8
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0093308 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCheckFullScreen @ 0x1C0096CF8 (xxxCheckFullScreen.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C0116B7C (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0093158 (GetWindowBordersForDpiWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(__int64 a1)
{
  _DWORD *v1; // r9
  unsigned int v2; // r10d
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v7; // rax

  v1 = *(_DWORD **)(a1 + 40);
  v2 = 0;
  LODWORD(v3) = a1;
  if ( (v1[58] & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    v4 = *(_QWORD *)(v3 + 16);
  }
  else if ( (v1[72] & 0xF) == 0
         && (v4 = *(_QWORD *)(a1 + 16), (v7 = *(_QWORD *)(v4 + 448)) != 0)
         && (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(v4 + 416) + 284LL);
  }
  if ( *(_DWORD *)(v4 + 624) <= 0x9900u )
    v2 = *(_DWORD *)(v4 + 640);
  return GetWindowBordersForDpiWithCompatFlags2(v1[7], v1[6], v3, 0, WindowDpiLastNotify, v2);
}
