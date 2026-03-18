/*
 * XREFs of ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800542D4
 * Callers:
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800541D0 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180054454 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180054538 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DTarget::PushLayer(
        CD2DTarget *this,
        const __m128i *a2,
        struct ID2D1Geometry *a3,
        struct D2D_MATRIX_3X2_F *a4,
        float a5,
        enum D2D1_ANTIALIAS_MODE a6,
        enum D2D1_LAYER_OPTIONS1 a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rax
  unsigned __int64 v13; // xmm1_8
  __m128i v14; // xmm2
  __int64 v15; // rax
  _BYTE v16[4]; // [rsp+2Ch] [rbp-A5h] BYREF
  _BYTE v17[40]; // [rsp+38h] [rbp-99h]
  __int64 v18; // [rsp+60h] [rbp-71h]
  __int64 v19; // [rsp+68h] [rbp-69h]
  __int128 v20; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-51h]
  _OWORD v22[4]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-9h]

  v8 = *((_QWORD *)this + 2);
  v21 = 0LL;
  v20 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v8 + 232) + 240LL))(*(_QWORD *)(v8 + 232), &v20);
  CD2DContext::SetPrimitiveBlend(*((CD2DContext **)this + 2), a8);
  if ( a4 )
  {
    v13 = *(_QWORD *)&a4->m[2][0];
    v20 = *(_OWORD *)&a4->m11;
    v21 = v13;
  }
  else
  {
    v20 = _xmm;
    v21 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  memset_0(v16, 0, 0x44uLL);
  v14 = _mm_loadu_si128(a2);
  v18 = 0LL;
  *(_DWORD *)&v17[8] = a6;
  *(_OWORD *)&v17[12] = v20;
  LODWORD(v19) = a7;
  v15 = *((_QWORD *)this + 2);
  *(_QWORD *)&v17[28] = v21;
  *(_QWORD *)v17 = a3;
  *(float *)&v17[36] = a5;
  v22[2] = *(_OWORD *)&v17[16];
  v22[1] = *(_OWORD *)v17;
  v22[0] = v14;
  v22[3] = *(unsigned __int64 *)&v17[32];
  v23 = v19;
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v15 + 232) + 688LL))(
    *(_QWORD *)(v15 + 232),
    v22,
    0LL);
  CD2DTarget::ApplyCurrentClip(this);
  ++*((_DWORD *)this + 13);
}
