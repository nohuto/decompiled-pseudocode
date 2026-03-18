/*
 * XREFs of ?CopyPixels@CBitmapSourceD2DCacheAdapter@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180213F80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSourceD2DCacheAdapter::CopyPixels(__int64 a1, int *a2)
{
  int v2; // r10d
  int v3; // r11d
  __int64 v4; // rcx
  int v5; // eax
  _DWORD v7[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v4 = *(_QWORD *)(a1 + 8);
  v7[2] = a2[2] - *a2;
  v5 = a2[3];
  v7[0] = v2;
  v7[3] = v5 - v3;
  v7[1] = v3;
  return (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 48LL))(v4, v7);
}
