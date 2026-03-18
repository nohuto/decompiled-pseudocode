/*
 * XREFs of ??0CD2DLayer@@IEAA@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180038C78
 * Callers:
 *     ?Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@PEAPEAV1@@Z @ 0x180038B6C (-Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CD2DLayer *__fastcall CD2DLayer::CD2DLayer(
        CD2DLayer *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1Geometry *a3,
        const struct D2D_MATRIX_3X2_F *a4,
        float a5,
        enum D2D1_ANTIALIAS_MODE a6,
        enum D2D1_LAYER_OPTIONS1 a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  *((_BYTE *)this + 56) = 0;
  *(_QWORD *)this = &CD2DLayer::`vftable';
  *((_DWORD *)this + 16) = a6;
  *((_DWORD *)this + 17) = a7;
  *((_DWORD *)this + 18) = a8;
  *((_QWORD *)this + 3) = a3;
  *(struct D2D_RECT_F *)((char *)this + 8) = *a2;
  *((float *)this + 15) = a5;
  if ( a3 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a4 )
  {
    *((_OWORD *)this + 2) = *(_OWORD *)&a4->m11;
    *((_QWORD *)this + 6) = *(_QWORD *)&a4->m[2][0];
    *((_BYTE *)this + 56) = 1;
  }
  return this;
}
