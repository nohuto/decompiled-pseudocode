/*
 * XREFs of _lambda_8c85894c38574ac9f74aa209c69d94d2_::operator() @ 0x18009A9F0
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180055B10 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180027DE0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x18033A6B4 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_8c85894c38574ac9f74aa209c69d94d2_::operator()(void ***a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v6; // r8
  int v7; // eax
  char v8; // bl
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // r8
  void **v10; // rbx
  int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  char v14[8]; // [rsp+28h] [rbp-69h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-61h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-59h] BYREF
  __int64 v17; // [rsp+40h] [rbp-51h] BYREF
  __int128 v18; // [rsp+48h] [rbp-49h]
  __int128 v19; // [rsp+58h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-29h]
  int v21; // [rsp+70h] [rbp-21h]
  __int64 v22; // [rsp+78h] [rbp-19h]
  _BYTE hstringHeader[44]; // [rsp+80h] [rbp-11h] BYREF
  __int128 v24; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+C0h] [rbp+2Fh]
  __m128i v26; // [rsp+C8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v22 = -2LL;
  LODWORD(v17) = 0;
  v2 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)**a1 + 72LL))(**a1, &v24);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC6,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  memset_0(hstringHeader, 0, sizeof(hstringHeader));
  *(_DWORD *)hstringHeader = 44;
  *(_OWORD *)&hstringHeader[4] = v24;
  *(_QWORD *)&hstringHeader[20] = v25;
  *(__m128i *)&hstringHeader[28] = v26;
  v18 = *(_OWORD *)hstringHeader;
  v19 = *(_OWORD *)&hstringHeader[16];
  v20 = *(__int64 *)((char *)v26.m128i_i64 + 4);
  v21 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 12));
  if ( DWORD1(v24) == 3 )
  {
    v16 = 0LL;
    v5 = *(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1[1];
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>((__int64 *)&v16);
    v7 = (*v5)(*a1[1], &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, v6);
    v3 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBCC,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_13:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      return v3;
    }
    v15 = v16;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v14[0] = 0;
    *(_QWORD *)&hstringHeader[24] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)hstringHeader,
      L"InitialPositionIsForDrag",
      0x19u,
      0x18u);
    v8 = 1;
    LODWORD(v17) = 1;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                &v15,
                *(__int64 *)&hstringHeader[24],
                v9,
                v14) < 0
      || !v14[0] )
    {
      v8 = 0;
    }
    if ( v8 )
    {
      DWORD2(v18) = 4;
      v10 = *a1;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)*a1);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(v10);
      v3 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBD4,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        goto LABEL_13;
      }
      v12 = (__int64 *)a1[2];
      v13 = (__int64)**a1;
      **a1 = 0LL;
      v17 = *v12;
      *v12 = v13;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  return 0LL;
}
