/*
 * XREFs of ?GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1801CF1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800097C0 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::GetSceneLightRealization(
        CCompositionDistantLight *this,
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
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  int v15; // ebx
  __int64 v16; // rdx
  struct D2D_VECTOR_3F v17; // [rsp+20h] [rbp-49h] BYREF
  FLOAT v18; // [rsp+38h] [rbp-31h]
  _OWORD v19[4]; // [rsp+40h] [rbp-29h] BYREF
  int v20; // [rsp+80h] [rbp+17h]
  struct D2D_VECTOR_3F v21; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 21);
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 72LL))(v5, (char *)this + 256);
    if ( v6 < 0 )
    {
      v7 = 271LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiondistantlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 80LL))(*((_QWORD *)this + 21));
    if ( v6 < 0 )
    {
      v7 = 272LL;
      goto LABEL_4;
    }
    v9 = *((_OWORD *)this + 11);
    v10 = *((_OWORD *)this + 12);
    v20 = *((_DWORD *)this + 60);
    v19[0] = v9;
    v11 = *((_OWORD *)this + 13);
    v19[1] = v10;
    v12 = *((_OWORD *)this + 14);
    v19[2] = v11;
    v19[3] = v12;
    CMILMatrix::Multiply((CMILMatrix *)v19, a2);
    v13 = (__m128)*((unsigned int *)this + 69);
    v14 = (__m128)*((unsigned int *)this + 68);
    v18 = *((float *)this + 70);
    *(_QWORD *)&v17.x = _mm_unpacklo_ps(v14, v13).m128_u64[0];
    v17.z = v18;
    CMILMatrix::Transform3DVector((CMILMatrix *)v19, &v21, &v17);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct D2D_VECTOR_3F *))(**((_QWORD **)this + 21) + 88LL))(
            *((_QWORD *)this + 21),
            0LL,
            &v21);
    if ( v15 >= 0 )
      return 0LL;
    v16 = 277LL;
  }
  else
  {
    v15 = -2147467259;
    v16 = 281LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiondistantlight.cpp",
    (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
