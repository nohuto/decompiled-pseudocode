/*
 * XREFs of GetWindowBordersWithDpiAwareness @ 0x1C0032DF0
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C01303AC (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0033E80 (GetWindowBordersForDpiWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r9
  unsigned int v3; // r10d
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v8; // rax

  v2 = *(_DWORD **)(a1 + 40);
  v3 = 0;
  LODWORD(v4) = a1;
  if ( (v2[58] & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1, a2, a1);
    v5 = *(_QWORD *)(v4 + 16);
  }
  else if ( (v2[72] & 0xF) == 0
         && (v5 = *(_QWORD *)(a1 + 16), (v8 = *(_QWORD *)(v5 + 448)) != 0)
         && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(v5 + 416) + 284LL);
  }
  if ( *(_DWORD *)(v5 + 624) <= 0x9900u )
    v3 = *(_DWORD *)(v5 + 640);
  return GetWindowBordersForDpiWithCompatFlags2(v2[7], v2[6], v4, 0, WindowDpiLastNotify, v3);
}
