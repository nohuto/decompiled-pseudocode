/*
 * XREFs of ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0240F0C
 * Callers:
 *     IsSmallerThanScreen @ 0x1C00A5C9C (IsSmallerThanScreen.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     SelectWindowRgn @ 0x1C010A774 (SelectWindowRgn.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C001CCF4 (GetMonitorRectForDpi.c)
 *     GetDpiCacheSlot @ 0x1C0020A38 (GetDpiCacheSlot.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

HRGN __fastcall GetMonitorRegionForDpi(struct tagMONITOR *a1, unsigned __int16 a2)
{
  HRGN result; // rax
  int DpiCacheSlot; // eax
  __int64 v5; // r11
  int v6; // ecx
  __int64 v7; // rdi
  __m128i v8; // [rsp+20h] [rbp-38h] BYREF
  __m128i v9; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return (HRGN)*((_QWORD *)a1 + 9);
  DpiCacheSlot = GetDpiCacheSlot(a2);
  v6 = 0;
  if ( DpiCacheSlot != -1 )
    v6 = DpiCacheSlot;
  v7 = v5 + 8LL * v6;
  result = *(HRGN *)(v7 + 80);
  if ( !result )
  {
    v9 = *GetMonitorRectForDpi(&v8, v5, a2);
    SetOrCreateRectRgnIndirectPublic(v7 + 80, &v9);
    return *(HRGN *)(v7 + 80);
  }
  return result;
}
