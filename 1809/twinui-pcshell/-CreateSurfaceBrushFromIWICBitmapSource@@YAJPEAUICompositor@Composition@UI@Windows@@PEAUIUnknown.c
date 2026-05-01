/*
 * XREFs of ?CreateSurfaceBrushFromIWICBitmapSource@@YAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIWICBitmapSource@@PEAPEAUICompositionSurfaceBrush@234@@Z @ 0x1801D9A74
 * Callers:
 *     ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1801DA018 (-CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CreateSurfaceBrushFromIWICBitmapSource(
        struct Windows::UI::Composition::ICompositor *a1,
        struct IUnknown *a2,
        struct IWICBitmapSource *a3,
        struct Windows::UI::Composition::ICompositionSurfaceBrush **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __m128 v15; // xmm7
  __m128 v16; // xmm6
  __int64 v17; // rbx
  int v18; // eax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rbx
  int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // rbx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v29; // rax
  __int64 v31; // [rsp+48h] [rbp-99h] BYREF
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v32; // [rsp+50h] [rbp-91h] BYREF
  __int64 v33; // [rsp+58h] [rbp-89h] BYREF
  __int64 v34; // [rsp+60h] [rbp-81h] BYREF
  int v35[2]; // [rsp+68h] [rbp-79h] BYREF
  __int64 v36; // [rsp+70h] [rbp-71h] BYREF
  __int64 v37; // [rsp+78h] [rbp-69h] BYREF
  __int64 v38; // [rsp+80h] [rbp-61h] BYREF
  __int64 v39; // [rsp+88h] [rbp-59h] BYREF
  __int64 v40; // [rsp+90h] [rbp-51h] BYREF
  int v41; // [rsp+98h] [rbp-49h] BYREF
  int v42; // [rsp+9Ch] [rbp-45h]
  __int64 v43; // [rsp+A0h] [rbp-41h]
  _QWORD v44[2]; // [rsp+A8h] [rbp-39h] BYREF
  int v45; // [rsp+B8h] [rbp-29h]
  int v46; // [rsp+BCh] [rbp-25h]
  float v47; // [rsp+C0h] [rbp-21h]
  float v48; // [rsp+C4h] [rbp-1Dh]
  float v49[4]; // [rsp+C8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+5Fh]

  v43 = -2LL;
  *a4 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64 *, char *))a3->lpVtbl->GetSize)(
         a3,
         &v31,
         (char *)&v31 + 4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    v10 = (**(__int64 (__fastcall ***)(struct Windows::UI::Composition::ICompositor *, GUID *, __int64 *))a1)(
            a1,
            &GUID_6b556968_2d25_11e2_99f6_8bc36088709b,
            &v40);
    v9 = v10;
    if ( v10 < 0 )
    {
      v11 = 21LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
        (const char *)(unsigned int)v10);
LABEL_39:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
      return v9;
    }
    v44[0] = 0LL;
    v44[1] = v31;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v40 + 32LL))(v40, v44, 1LL);
    v9 = v10;
    if ( v10 < 0 )
    {
      v11 = 26LL;
      goto LABEL_7;
    }
    v39 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
    v12 = (**(__int64 (__fastcall ***)(struct Windows::UI::Composition::ICompositor *, GUID *, __int64 *))a1)(
            a1,
            &GUID_25297d5c_3ad4_4c9c_b5cf_e36a38512330,
            &v39);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
        (const char *)(unsigned int)v12);
LABEL_38:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
      goto LABEL_39;
    }
    v38 = 0LL;
    v13 = v39;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
    v14 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64 *))(*(_QWORD *)v13 + 40LL))(v13, a2, &v38);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
        (const char *)(unsigned int)v14);
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      goto LABEL_38;
    }
    *(_QWORD *)v35 = 0LL;
    v15 = 0LL;
    v15.m128_f32[0] = (float)(int)v31;
    v16 = 0LL;
    v16.m128_f32[0] = (float)SHIDWORD(v31);
    v17 = v38;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v35);
    v18 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v17 + 48LL))(
            v17,
            _mm_unpacklo_ps(v15, v16).m128_u64[0],
            87LL);
    v9 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
        (const char *)(unsigned int)v18);
LABEL_36:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v35);
      goto LABEL_37;
    }
    v34 = 0LL;
    v19 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v35;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    v20 = (**v19)(v19, &GUID_fd04e6e3_fe0c_4c3c_ab19_a07601a576ee, &v34);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
        (const char *)(unsigned int)v20);
LABEL_35:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      goto LABEL_36;
    }
    v33 = 0LL;
    v21 = v34;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, int *))(*(_QWORD *)v21 + 24LL))(
            v21,
            0LL,
            &GUID_e8f7fe7a_191c_466d_ad95_975678bda998,
            &v33,
            &v41);
    v9 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
        (const char *)(unsigned int)v22);
LABEL_34:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      goto LABEL_35;
    }
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
    v23 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, _QWORD, __int64 *))(*(_QWORD *)v33 + 40LL))(
            v33,
            a3,
            0LL,
            &v37);
    v9 = v23;
    if ( v23 < 0 )
    {
      v24 = 50LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
        (const char *)(unsigned int)v23);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
      goto LABEL_34;
    }
    v49[0] = (float)v41;
    v49[1] = (float)v42;
    v49[2] = (float)v41 + (float)(int)v31;
    v49[3] = (float)v42 + (float)SHIDWORD(v31);
    v45 = 0;
    v46 = 0;
    v47 = (float)(int)v31;
    v48 = (float)SHIDWORD(v31);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 624LL))(v33, 1LL);
    (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v33 + 208LL))(v33, v37, v49);
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
    v9 = v23;
    if ( v23 < 0 )
    {
      v24 = 71LL;
      goto LABEL_22;
    }
    v36 = 0LL;
    v25 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v35;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
    v26 = (**v25)(v25, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, &v36);
    v9 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
        (const char *)(unsigned int)v26);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      goto LABEL_33;
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    v27 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositor *, __int64, struct Windows::UI::Composition::ICompositionSurfaceBrush **))(*(_QWORD *)a1 + 192LL))(
            a1,
            v36,
            &v32);
    v9 = v27;
    if ( v27 >= 0 )
    {
      v27 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionSurfaceBrush *, __int64))(*(_QWORD *)v32 + 88LL))(
              v32,
              2LL);
      v9 = v27;
      if ( v27 >= 0 )
      {
        v29 = v32;
        v32 = 0LL;
        *a4 = v29;
        v9 = 0;
        goto LABEL_31;
      }
      v28 = 79LL;
    }
    else
    {
      v28 = 78LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
      (const char *)(unsigned int)v27);
LABEL_31:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (__int64)"internal\\onecoreuapshell\\private\\inc\\util_wic_comp.h",
    (const char *)(unsigned int)v8);
  return v9;
}
