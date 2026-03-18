/*
 * XREFs of ?IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180019DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CNineGridBrush::IsOpaqueRect(CNineGridBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  if ( !*((_BYTE *)this + 112) )
  {
    v4 = *((_QWORD *)this + 9);
    if ( v4 )
      return (*(unsigned __int8 (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v4 + 288LL))(
               v4,
               a2,
               a3) != 0;
  }
  return v3;
}
