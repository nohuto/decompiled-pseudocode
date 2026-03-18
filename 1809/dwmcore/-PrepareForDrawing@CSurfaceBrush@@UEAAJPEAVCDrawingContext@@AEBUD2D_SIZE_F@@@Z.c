/*
 * XREFs of ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180046B90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180013414 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::PrepareForDrawing(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rcx
  unsigned __int8 IsNormalDesktopRender; // al
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !*((_QWORD *)a2 + 45) && !*((_QWORD *)a2 + 787) )
  {
    v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
    v10 = 0LL;
    if ( (**v4)(v4, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v10) >= 0 )
    {
      IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(a2);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v8 + 176))(
        v9,
        *((_QWORD *)a2 + 52),
        0LL,
        IsNormalDesktopRender);
    }
    v5 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return 0LL;
}
