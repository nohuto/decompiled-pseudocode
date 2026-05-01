/*
 * XREFs of _lambda_b322da6b43750fc8b19fab06879e6370_::operator() @ 0x18030B59C
 * Callers:
 *     ??$LambdaCustomPaintProc@V_lambda_b322da6b43750fc8b19fab06879e6370_@@PEAUID2D1DeviceContext@@@@YAXPEAUID2D1DeviceContext@@AEBUtagSIZE@@_J@Z @ 0x18030B160 (--$LambdaCustomPaintProc@V_lambda_b322da6b43750fc8b19fab06879e6370_@@PEAUID2D1DeviceContext@@@@Y.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x180301DEC (-ConvertColor@D2DUtil@@YA-AU_D3DCOLORVALUE@@KM@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180302050 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18030B570 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 */

__int64 __fastcall lambda_b322da6b43750fc8b19fab06879e6370_::operator()(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        float a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  int v7; // ebx
  unsigned int Color; // edi
  struct _D3DCOLORVALUE *v10; // rax
  float *v11; // rcx
  float v12; // xmm6_4
  float v13; // xmm7_4
  __int128 v14; // xmm1
  int v15; // eax
  unsigned int v16; // edi
  int v17; // r14d
  int v18; // eax
  int v19; // eax
  void (__fastcall *v20)(__int64 *, struct _D3DCOLORVALUE *, __int64); // rax
  __int64 v21; // rax
  void (__fastcall *v22)(__int64 *, struct _D3DCOLORVALUE *, _QWORD); // rax
  __int64 v23; // rax
  void (__fastcall *v24)(__int64 *, struct _D3DCOLORVALUE *, __int64); // rax
  __int64 v26; // [rsp+48h] [rbp-89h] BYREF
  int v27[2]; // [rsp+50h] [rbp-81h] BYREF
  __int64 v28; // [rsp+58h] [rbp-79h] BYREF
  struct _D3DCOLORVALUE v29; // [rsp+60h] [rbp-71h] BYREF
  _DWORD v30[4]; // [rsp+70h] [rbp-61h] BYREF
  __int128 v31; // [rsp+80h] [rbp-51h] BYREF
  __int128 v32; // [rsp+90h] [rbp-41h] BYREF
  int v33; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v34; // [rsp+A4h] [rbp-2Dh]
  int v35; // [rsp+B4h] [rbp-1Dh]
  __int128 v36; // [rsp+B8h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v5 = HIDWORD(a3);
  v6 = HIDWORD(a3);
  v7 = a3;
  Color = CImmersiveColor::GetColor(0xABu);
  v10 = D2DUtil::ConvertColor(&v29, (struct _D3DCOLORVALUE *)Color, 0.0, a4);
  v11 = (float *)(*(_QWORD *)a1 + 352LL);
  v31 = *(_OWORD *)&v10->r;
  v12 = 1.0 - HighContrastAwareOpacity<float>::operator float(v11);
  v13 = 1.0
      - (float)(v12 / (float)(1.0 - HighContrastAwareOpacity<float>::operator float((float *)(*(_QWORD *)a1 + 340LL))));
  v14 = *(_OWORD *)&D2DUtil::ConvertColor(&v29, (struct _D3DCOLORVALUE *)Color, v13, a4)->r;
  v33 = 0;
  v28 = 0LL;
  v32 = v14;
  v35 = 1065353216;
  v36 = v14;
  v34 = v31;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64))(*a2 + 72))(a2, &v33, 2LL);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v17 = v6 - *(_DWORD *)(*(_QWORD *)a1 + 360LL);
    v30[0] = 0;
    v30[1] = 0;
    v30[2] = 0;
    *(_QWORD *)v27 = 0LL;
    *(float *)&v30[3] = (float)v17;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
    v18 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, __int64, int *))(*a2 + 80))(a2, v30, 0LL, v28, v27);
    v16 = v18;
    if ( v18 >= 0 )
    {
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v19 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int64 *))(*a2 + 64))(a2, &v31, 0LL, &v26);
      v16 = v19;
      if ( v19 >= 0 )
      {
        *(_QWORD *)&v29.r = 0LL;
        v20 = *(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, __int64))(*a2 + 136);
        *(_QWORD *)&v29.b = COERCE_UNSIGNED_INT((float)v7);
        v20(a2, &v29, v26);
        *(_QWORD *)&v29.r = 0LL;
        v21 = *a2;
        v29.a = (float)v17;
        v22 = *(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, _QWORD))(v21 + 136);
        v29.b = (float)v7;
        v22(a2, &v29, *(_QWORD *)v27);
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v26 + 64LL))(v26, &v32);
        v29.r = 0.0;
        v23 = *a2;
        v29.g = (float)v17;
        v29.b = (float)v7;
        v24 = *(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, __int64))(v23 + 136);
        v29.a = (float)(int)v5;
        v24(a2, &v29, v26);
        v16 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A3,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)v19);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A0,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return v16;
}
