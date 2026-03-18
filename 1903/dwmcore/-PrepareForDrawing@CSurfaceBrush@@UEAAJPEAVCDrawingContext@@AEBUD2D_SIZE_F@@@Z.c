/*
 * XREFs of ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800BA450
 * Callers:
 *     <none>
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180014464 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::PrepareForDrawing(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !*((_QWORD *)a2 + 45) && !*((_QWORD *)a2 + 787) )
  {
    v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 12);
    v10 = 0LL;
    if ( (**v4)(v4, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v10) >= 0 )
    {
      LOBYTE(v7) = CDrawingContext::IsNormalDesktopRender(a2);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v8 + 176))(v9, *((_QWORD *)a2 + 52), 0LL, v7);
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
