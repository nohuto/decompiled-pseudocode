/*
 * XREFs of ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C022AF90
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 *     IsSmallerThanScreen @ 0x1C00C10E4 (IsSmallerThanScreen.c)
 *     SelectWindowRgn @ 0x1C00C4C7C (SelectWindowRgn.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

HRGN __fastcall GetMonitorRegionForDpi(struct tagMONITOR *a1, unsigned __int16 a2)
{
  HRGN result; // rax
  int DpiCacheSlot; // eax
  __int64 v5; // r11
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

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
    v11 = *(_OWORD *)GetMonitorRectForDpi(&v10, v5, a2);
    SetOrCreateRectRgnIndirectPublic(v7 + 80, &v11, v8, v9);
    return *(HRGN *)(v7 + 80);
  }
  return result;
}
