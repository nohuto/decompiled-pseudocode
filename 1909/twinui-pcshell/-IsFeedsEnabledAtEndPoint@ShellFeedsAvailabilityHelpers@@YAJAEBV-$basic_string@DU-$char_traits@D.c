/*
 * XREFs of ?IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE1@Z @ 0x1800D259C
 * Callers:
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800C6934 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800BE534 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?ShellFeedsLauncher_ServerResponseProcessed@ShellFeedsTelemetry@@SAXXZ @ 0x1800D2F04 (-ShellFeedsLauncher_ServerResponseProcessed@ShellFeedsTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIJsonObjectStatics@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonObjectStatics@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801FDE50 (--$GetActivationFactory@V-$ComPtr@UIJsonObjectStatics@Json@Data@Windows@@@WRL@Microsoft@@@Founda.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint(
        const CHAR *lpMultiByteStr,
        _BYTE *a2,
        _BYTE *a3)
{
  LPCCH v5; // rbx
  __int64 v6; // rax
  const CHAR *v7; // r8
  int v8; // eax
  int v9; // edi
  unsigned int v10; // r14d
  WCHAR *lpWideCharStr; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, __int64 *, char *); // rsi
  const WCHAR *v17; // rax
  HSTRING_HEADER *v18; // rdi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID, __int64 *); // rsi
  HSTRING_HEADER *v21; // rdi
  int v22; // eax
  __int64 v23; // rbx
  char v24; // al
  int (__fastcall *v25)(__int64, PVOID, const WCHAR **); // rsi
  HSTRING_HEADER *v26; // rdi
  char v27; // al
  int v28; // eax
  unsigned int v29; // ebx
  char v30; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v31[3]; // [rsp+39h] [rbp-58h] BYREF
  int v32; // [rsp+3Ch] [rbp-55h] BYREF
  const WCHAR *v33; // [rsp+40h] [rbp-51h] BYREF
  __int64 v34; // [rsp+48h] [rbp-49h] BYREF
  __int64 v35; // [rsp+50h] [rbp-41h] BYREF
  __int64 v36[2]; // [rsp+58h] [rbp-39h] BYREF
  LPWSTR v37[2]; // [rsp+68h] [rbp-29h] BYREF
  __m128i si128; // [rsp+78h] [rbp-19h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-9h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v36[1] = -2LL;
  v5 = lpMultiByteStr;
  v32 = 0;
  *a2 = 0;
  v6 = *((_QWORD *)lpMultiByteStr + 2);
  if ( v6 )
  {
    v7 = lpMultiByteStr;
    if ( *((_QWORD *)lpMultiByteStr + 3) >= 0x10uLL )
      v7 = *(const CHAR **)lpMultiByteStr;
    v8 = MultiByteToWideChar(0xFDE9u, 0, v7, v6 + 1, 0LL, 0);
    v9 = v8;
    if ( !v8 )
    {
      v10 = 1;
      *a3 = 1;
      return v10;
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v37[0]) = 0;
    std::wstring::resize(v37, v8);
    lpWideCharStr = (WCHAR *)v37;
    if ( si128.m128i_i64[1] >= 8uLL )
      lpWideCharStr = v37[0];
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v5 = *(LPCCH *)v5;
    if ( !MultiByteToWideChar(0xFDE9u, 0, v5, -1, lpWideCharStr, v9) )
    {
      v10 = 1;
      *a3 = 1;
LABEL_34:
      std::wstring::_Tidy_deallocate(v37);
      return v10;
    }
    v36[0] = 0LL;
    v35 = 0LL;
    v40 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    v13 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonObjectStatics>>(
            v40,
            v36);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 428LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
        (const char *)(unsigned int)v13);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v36);
      goto LABEL_34;
    }
    v15 = v36[0];
    v16 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *, char *))(*(_QWORD *)v36[0] + 56LL);
    v17 = (const WCHAR *)v37;
    if ( si128.m128i_i64[1] >= 8uLL )
      v17 = v37[0];
    v33 = v17;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    v13 = v16(v15, v18[1].Reserved.Reserved1, &v35, &v30);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 432LL;
      goto LABEL_19;
    }
    if ( !v30 || (v19 = v35) == 0 )
    {
      v10 = 1;
      *a3 = 1;
      goto LABEL_33;
    }
    v34 = 0LL;
    v20 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v35 + 64LL);
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451678);
    v32 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    v22 = v20(v19, v21[1].Reserved.Reserved1, &v34);
    v23 = v34;
    if ( v22 < 0 || (v24 = 1, !v34) )
      v24 = 0;
    if ( v24 )
    {
      v33 = 0LL;
      v25 = *(int (__fastcall **)(__int64, PVOID, const WCHAR **))(*(_QWORD *)v34 + 48LL);
      v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180451680);
      v32 = 2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      if ( v25(v23, v26[1].Reserved.Reserved1, &v33) < 0 || (v27 = 1, !v33) )
        v27 = 0;
      if ( v27 )
      {
        v32 = 3;
        v28 = (*(__int64 (__fastcall **)(const WCHAR *, int *))(*(_QWORD *)v33 + 48LL))(v33, &v32);
        v29 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1C4,
            (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
            (const char *)(unsigned int)v28);
          v10 = v29;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
          goto LABEL_33;
        }
        if ( v32 == 1 )
        {
          ShellFeedsTelemetry::ShellFeedsLauncher_ServerResponseProcessed();
          (*(void (__fastcall **)(const WCHAR *, _BYTE *))(*(_QWORD *)v33 + 80LL))(v33, v31);
          *a2 = v31[0];
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v36);
    std::wstring::_Tidy_deallocate(v37);
  }
  return 0LL;
}
