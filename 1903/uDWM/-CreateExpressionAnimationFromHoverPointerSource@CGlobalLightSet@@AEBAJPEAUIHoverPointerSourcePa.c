/*
 * XREFs of ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x1800491A0
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x1800489AC (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800390F0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003BC3C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        _QWORD *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v26 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
  v7 = (**a2)(a2, &GUID_bcb4ad45_7609_4550_934f_16002a68fded, &v26);
  v8 = v7;
  if ( v7 < 0 )
  {
    v20 = 139LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v7,
      (int)v24);
    goto LABEL_11;
  }
  v9 = v26;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, &v25);
  v8 = v7;
  if ( v7 < 0 )
  {
    v20 = 140LL;
    goto LABEL_16;
  }
  v24 = 0LL;
  v10 = a3 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      v8 = -2147024809;
      v22 = 158LL;
      v21 = 2147942487LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)v21,
        (int)v24);
      goto LABEL_10;
    }
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Vector3(Hover.Point.x, Hover.Point.y, 256)",
      0x2Bu,
      0x2Au);
    v11 = v29;
    v29 = 0LL;
    v12 = v25;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 112LL))(v12, v11, &v24);
    v8 = v13;
    if ( v13 >= 0 )
      goto LABEL_6;
    v22 = 154LL;
LABEL_19:
    v21 = (unsigned int)v13;
    goto LABEL_20;
  }
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Vector3(Hover.Point.x, Hover.Point.y, 128)",
    0x2Bu,
    0x2Au);
  v18 = v29;
  v29 = 0LL;
  v19 = v25;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 112LL))(v19, v18, &v24);
  v8 = v13;
  if ( v13 < 0 )
  {
    v22 = 149LL;
    goto LABEL_19;
  }
LABEL_6:
  v27 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v27);
  v14 = (**v24)(v24, &GUID_464c4c2c_1caa_4061_9b40_e13fde1503ca, &v27);
  v8 = v14;
  if ( v14 < 0 )
  {
    v23 = 163LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v14,
      (int)v24);
    goto LABEL_9;
  }
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Hover", 6u, 5u);
  v15 = v29;
  v29 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 96LL))(v27, v15, v26);
  v8 = v14;
  if ( v14 < 0 )
  {
    v23 = 165LL;
    goto LABEL_23;
  }
  v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
  v24 = 0LL;
  v8 = 0;
  *a4 = v16;
LABEL_9:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v27);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
LABEL_11:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
  return v8;
}
