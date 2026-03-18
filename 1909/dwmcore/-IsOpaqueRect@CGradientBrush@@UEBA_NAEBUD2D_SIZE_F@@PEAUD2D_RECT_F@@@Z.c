/*
 * XREFs of ?IsOpaqueRect@CGradientBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801F3D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CGradientBrush::IsOpaqueRect(CGradientBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  bool result; // al
  struct D2D_RECT_F v6; // [rsp+20h] [rbp-18h]

  if ( !*((_BYTE *)this + 176)
    || !*((_BYTE *)this + 177)
    || (*(unsigned __int8 (__fastcall **)(CGradientBrush *))(*(_QWORD *)this + 232LL))(this) )
  {
    return 0;
  }
  result = 1;
  *(_QWORD *)&v6.left = 0LL;
  *(struct D2D_SIZE_F *)&v6.right = *a2;
  *a3 = v6;
  return result;
}
