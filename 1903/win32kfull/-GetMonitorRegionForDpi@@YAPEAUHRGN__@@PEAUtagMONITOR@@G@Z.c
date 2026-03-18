/*
 * XREFs of ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0259CCC
 * Callers:
 *     SelectWindowRgn @ 0x1C0114004 (SelectWindowRgn.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 *     IsSmallerThanScreen @ 0x1C012E1F0 (IsSmallerThanScreen.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C0091AB8 (GetMonitorRectForDpi.c)
 *     GetDpiCacheSlot @ 0x1C00A9364 (GetDpiCacheSlot.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

HRGN __fastcall GetMonitorRegionForDpi(struct tagMONITOR *a1, unsigned __int16 a2)
{
  HRGN result; // rax
  int DpiCacheSlot; // eax
  __int64 v5; // r11
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

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
    v9 = *(_OWORD *)GetMonitorRectForDpi(&v8, v5, a2);
    SetOrCreateRectRgnIndirectPublic(v7 + 80, &v9);
    return *(HRGN *)(v7 + 80);
  }
  return result;
}
