/*
 * XREFs of ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B0A30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSurfaceDrawListBrush::IsColorConversionRequired(
        CSurfaceDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), v4);
  return v5 != a2;
}
