/*
 * XREFs of ?FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800C9A70
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180057918 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800C9B48 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::FillEffect(
        ID2D1DeviceContext **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Effect *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_POINT_2F *a5,
        enum D2D1_INTERPOLATION_MODE a6,
        enum D2D1_COMPOSITE_MODE a7)
{
  const struct D2D_POINT_2F *v11; // r8
  FLOAT y; // xmm1_4
  _DWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-50h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  (*(void (__fastcall **)(const struct ID2DContextOwner *, _BYTE *))(*(_QWORD *)a2 + 16LL))(a2, v15);
  (*(void (__fastcall **)(ID2D1DeviceContext *, _BYTE *))(*(_QWORD *)this[29] + 240LL))(this[29], v15);
  v11 = 0LL;
  if ( a5 )
  {
    v11 = (const struct D2D_POINT_2F *)v14;
    y = a5->y;
    v14[0] = LODWORD(a5->x);
    *(FLOAT *)&v14[1] = y;
  }
  ID2D1DeviceContext::DrawImage(this[29], a3, v11, a4, a6, a7);
  return 0LL;
}
