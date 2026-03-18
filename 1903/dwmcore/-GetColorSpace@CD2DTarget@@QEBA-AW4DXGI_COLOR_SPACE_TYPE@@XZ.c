/*
 * XREFs of ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18016A790
 * Callers:
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180161780 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DTarget::GetColorSpace(CD2DTarget *this)
{
  __int64 v1; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 104LL))(*((_QWORD *)this + 3));
  return *(unsigned int *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v1 + 120) + 24LL))(v1 + 120, v3) + 8);
}
