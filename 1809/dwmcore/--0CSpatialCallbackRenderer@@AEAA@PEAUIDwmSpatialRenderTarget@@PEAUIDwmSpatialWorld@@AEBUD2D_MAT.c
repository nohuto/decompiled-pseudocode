/*
 * XREFs of ??0CSpatialCallbackRenderer@@AEAA@PEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MM@Z @ 0x180183878
 * Callers:
 *     ?Create@CSpatialCallbackRenderer@@SAJPEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMPEAPEAV1@@Z @ 0x1801839B4 (-Create@CSpatialCallbackRenderer@@SAJPEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

CSpatialCallbackRenderer *__fastcall CSpatialCallbackRenderer::CSpatialCallbackRenderer(
        CSpatialCallbackRenderer *this,
        struct IDwmSpatialRenderTarget *a2,
        struct IDwmSpatialWorld *a3,
        const struct D2D_MATRIX_4X4_F *a4,
        const struct D2D_VECTOR_3F *a5,
        float a6,
        float a7)
{
  CSpatialCallbackRenderer *result; // rax

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CSpatialCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CSpatialCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDwmSpatialRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 4) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDwmSpatialWorld *))(*(_QWORD *)a3 + 8LL))(a3);
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)&a4->_11;
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)&a4->m[1][0];
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)&a4->m[2][0];
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)&a4->m[3][0];
  *(struct D2D_VECTOR_3F *)((char *)this + 104) = *a5;
  result = this;
  *((float *)this + 29) = a6;
  *((float *)this + 30) = a7;
  return result;
}
