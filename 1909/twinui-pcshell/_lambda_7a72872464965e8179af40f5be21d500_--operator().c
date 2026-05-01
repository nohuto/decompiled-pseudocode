/*
 * XREFs of _lambda_7a72872464965e8179af40f5be21d500_::operator() @ 0x1800ADB60
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800ADDD4 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180025D60 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180049F78 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_7a72872464965e8179af40f5be21d500_::operator()(__int64 **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v7; // r8
  int v8; // eax
  char v9; // bl
  __int64 v10; // r8
  __int64 *v11; // rbx
  int v12; // eax
  __int64 *v13; // rdx
  __int64 v14; // rcx
  char v15[8]; // [rsp+28h] [rbp-69h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-61h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-59h] BYREF
  __int64 v18; // [rsp+40h] [rbp-51h] BYREF
  __int128 v19[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v20; // [rsp+68h] [rbp-29h]
  int v21; // [rsp+70h] [rbp-21h]
  __int64 v22; // [rsp+78h] [rbp-19h]
  _BYTE hstringHeader[44]; // [rsp+80h] [rbp-11h] BYREF
  __int128 v24; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+C0h] [rbp+2Fh]
  __m128i v26; // [rsp+C8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v22 = -2LL;
  LODWORD(v18) = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)**a1 + 72LL))(**a1, &v24);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBDA,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  *(_DWORD *)hstringHeader = 44;
  *(_OWORD *)&hstringHeader[4] = v24;
  *(_QWORD *)&hstringHeader[20] = v25;
  *(__m128i *)&hstringHeader[28] = v26;
  v19[0] = *(_OWORD *)hstringHeader;
  v19[1] = *(_OWORD *)&hstringHeader[16];
  v20 = *(__int64 *)((char *)v26.m128i_i64 + 4);
  v21 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 12));
  if ( DWORD1(v24) == 3 )
  {
    v17 = 0LL;
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1[1];
    v6 = **v5;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>((__int64 *)&v17);
    v8 = v6(v5, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, v7);
    v3 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE0,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_13:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      return v3;
    }
    v16 = v17;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    v15[0] = 0;
    *(_QWORD *)&hstringHeader[24] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)hstringHeader,
      L"InitialPositionIsForDrag",
      0x19u,
      0x18u);
    v9 = 1;
    LODWORD(v18) = 1;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                &v16,
                *(__int64 *)&hstringHeader[24],
                v10,
                v15) < 0
      || !v15[0] )
    {
      v9 = 0;
    }
    if ( v9 )
    {
      DWORD2(v19[0]) = 4;
      v11 = *a1;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(*a1);
      v12 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
              v11,
              v19);
      v3 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBE8,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        goto LABEL_13;
      }
      v13 = a1[2];
      v14 = **a1;
      **a1 = 0LL;
      v18 = *v13;
      *v13 = v14;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  return 0LL;
}
