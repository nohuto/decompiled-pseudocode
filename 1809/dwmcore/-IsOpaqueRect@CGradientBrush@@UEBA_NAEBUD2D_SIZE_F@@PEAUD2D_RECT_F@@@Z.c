/*
 * XREFs of ?IsOpaqueRect@CGradientBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001C8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CGradientBrush::IsOpaqueRect(CGradientBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  bool result; // al
  struct D2D_RECT_F v6; // [rsp+20h] [rbp-18h]

  if ( !*((_BYTE *)this + 168)
    || !*((_BYTE *)this + 169)
    || (*(unsigned __int8 (__fastcall **)(CGradientBrush *))(*(_QWORD *)this + 192LL))(this) )
  {
    return 0;
  }
  result = 1;
  *(_QWORD *)&v6.left = 0LL;
  *(struct D2D_SIZE_F *)&v6.right = *a2;
  *a3 = v6;
  return result;
}
