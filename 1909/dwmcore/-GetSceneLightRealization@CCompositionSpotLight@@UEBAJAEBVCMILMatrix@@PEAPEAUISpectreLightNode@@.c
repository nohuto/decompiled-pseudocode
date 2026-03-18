/*
 * XREFs of ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1801D2100
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180006248 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800097C0 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::GetSceneLightRealization(
        CCompositionSpotLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v9; // rcx
  int v10; // xmm1_4
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __m128 v15; // xmm6
  __m128 v16; // xmm2
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm1
  int v20; // ebx
  __int64 v21; // rdx
  struct D2D_VECTOR_4F v22; // [rsp+28h] [rbp-79h] BYREF
  struct D2D_VECTOR_4F v23; // [rsp+38h] [rbp-69h] BYREF
  _DWORD v24[4]; // [rsp+48h] [rbp-59h] BYREF
  _OWORD v25[4]; // [rsp+58h] [rbp-49h] BYREF
  int v26; // [rsp+98h] [rbp-9h]
  unsigned __int64 v27; // [rsp+A8h] [rbp+7h] BYREF
  FLOAT z; // [rsp+B0h] [rbp+Fh]
  struct D2D_VECTOR_3F v29; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 21);
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 72LL))(v5, (char *)this + 304);
    if ( v6 < 0 )
    {
      v7 = 715LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionspotlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 80LL))(*((_QWORD *)this + 21));
    if ( v6 < 0 )
    {
      v7 = 716LL;
      goto LABEL_4;
    }
    v9 = *((_QWORD *)this + 21);
    v10 = *((_DWORD *)this + 94);
    v24[0] = *((_DWORD *)this + 93);
    v24[1] = v10;
    v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 96LL))(v9, v24);
    if ( v6 < 0 )
    {
      v7 = 719LL;
      goto LABEL_4;
    }
    v11 = *((_OWORD *)this + 11);
    v12 = *((_OWORD *)this + 12);
    v26 = *((_DWORD *)this + 60);
    v25[0] = v11;
    v13 = *((_OWORD *)this + 13);
    v25[1] = v12;
    v14 = *((_OWORD *)this + 14);
    v25[2] = v13;
    v25[3] = v14;
    CMILMatrix::Multiply((CMILMatrix *)v25, a2);
    LODWORD(v14) = *((_DWORD *)this + 88);
    v15 = (__m128)(unsigned int)FLOAT_1_0;
    v22.x = *((FLOAT *)this + 87);
    v22.z = *((FLOAT *)this + 89);
    LODWORD(v22.y) = v14;
    v22.w = 1.0;
    v23 = v22;
    CMILMatrix::Transform4DVector((CMILMatrix *)v25, &v22, &v23);
    v15.m128_f32[0] = 1.0 / v22.w;
    v16 = (__m128)*((unsigned int *)this + 91);
    v17 = v15;
    v18 = v15;
    v18.m128_f32[0] = (float)(1.0 / v22.w) * v22.y;
    v17.m128_f32[0] = (float)(1.0 / v22.w) * v22.x;
    v17.m128_u64[0] = _mm_unpacklo_ps(v17, v18).m128_u64[0];
    v19 = (__m128)*((unsigned int *)this + 90);
    v23.z = (float)(1.0 / v22.w) * v22.z;
    v27 = v17.m128_u64[0];
    v22.z = *((FLOAT *)this + 92);
    z = v23.z;
    v23.z = v22.z;
    *(_QWORD *)&v23.x = _mm_unpacklo_ps(v19, v16).m128_u64[0];
    CMILMatrix::Transform3DVector((CMILMatrix *)v25, &v29, (const struct D2D_VECTOR_3F *)&v23);
    v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, struct D2D_VECTOR_3F *))(**((_QWORD **)this + 21) + 88LL))(
            *((_QWORD *)this + 21),
            &v27,
            &v29);
    if ( v20 >= 0 )
      return 0LL;
    v21 = 727LL;
  }
  else
  {
    v20 = -2147467259;
    v21 = 731LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionspotlight.cpp",
    (const char *)(unsigned int)v20);
  return (unsigned int)v20;
}
