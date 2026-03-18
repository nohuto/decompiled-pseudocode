/*
 * XREFs of ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1801D0AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180006248 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionPointLight::GetSceneLightRealization(
        CCompositionPointLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __m128 v13; // xmm6
  __int64 v14; // rcx
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  int v17; // ebx
  __int64 v18; // rdx
  struct D2D_VECTOR_4F v19; // [rsp+28h] [rbp-59h] BYREF
  struct D2D_VECTOR_4F v20; // [rsp+38h] [rbp-49h] BYREF
  _OWORD v21[4]; // [rsp+48h] [rbp-39h] BYREF
  int v22; // [rsp+88h] [rbp+7h]
  unsigned __int64 v23; // [rsp+98h] [rbp+17h] BYREF
  FLOAT z; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 21);
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 72LL))(v5, (char *)this + 256);
    if ( v6 < 0 )
    {
      v7 = 377LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionpointlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 80LL))(*((_QWORD *)this + 21));
    if ( v6 < 0 )
    {
      v7 = 378LL;
      goto LABEL_4;
    }
    v9 = *((_OWORD *)this + 11);
    v10 = *((_OWORD *)this + 12);
    v22 = *((_DWORD *)this + 60);
    v21[0] = v9;
    v11 = *((_OWORD *)this + 13);
    v21[1] = v10;
    v12 = *((_OWORD *)this + 14);
    v21[2] = v11;
    v21[3] = v12;
    CMILMatrix::Multiply((CMILMatrix *)v21, a2);
    LODWORD(v12) = *((_DWORD *)this + 72);
    v13 = (__m128)(unsigned int)FLOAT_1_0;
    v19.x = *((FLOAT *)this + 71);
    v19.z = *((FLOAT *)this + 73);
    LODWORD(v19.y) = v12;
    v19.w = 1.0;
    v20 = v19;
    CMILMatrix::Transform4DVector((CMILMatrix *)v21, &v19, &v20);
    v13.m128_f32[0] = 1.0 / v19.w;
    v14 = *((_QWORD *)this + 21);
    v15 = v13;
    v16 = v13;
    v15.m128_f32[0] = (float)(1.0 / v19.w) * v19.x;
    v16.m128_f32[0] = (float)(1.0 / v19.w) * v19.y;
    v23 = _mm_unpacklo_ps(v15, v16).m128_u64[0];
    v19.z = (float)(1.0 / v19.w) * v19.z;
    z = v19.z;
    v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(*(_QWORD *)v14 + 88LL))(v14, &v23, 0LL);
    if ( v17 >= 0 )
      return 0LL;
    v18 = 384LL;
  }
  else
  {
    v17 = -2147467259;
    v18 = 388LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionpointlight.cpp",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
