/*
 * XREFs of ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800827E0
 * Callers:
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x180082B48 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x180082DEC (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005893C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA.c)
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180082248 (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x18008411C (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800CB098 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800CB108 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=2
__int64 __fastcall CreativeFramework::Actions::GetEntitlementForRecord(
        _QWORD *a1,
        WCHAR *a2,
        WCHAR *a3,
        const WCHAR **a4,
        const WCHAR **a5,
        char a6)
{
  CreativeFramework::Actions *v10; // rcx
  char v11; // cl
  __int64 v12; // r13
  HRESULT v13; // eax
  HSTRING_HEADER *v14; // rbx
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // r13
  HSTRING_HEADER *v19; // r12
  HRESULT v20; // eax
  HSTRING_HEADER *v21; // rbx
  HSTRING_HEADER *v22; // rax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 result; // rax
  int v26; // [rsp+28h] [rbp-150h]
  char v27; // [rsp+40h] [rbp-138h] BYREF
  HSTRING_HEADER *v28; // [rsp+48h] [rbp-130h] BYREF
  const WCHAR *v29[3]; // [rsp+50h] [rbp-128h] BYREF
  __int64 (__fastcall *v30)(__int64, PVOID, PVOID, HSTRING, PVOID, char, PVOID); // [rsp+68h] [rbp-110h]
  HSTRING_HEADER *v31; // [rsp+70h] [rbp-108h]
  HSTRING_HEADER *v32; // [rsp+78h] [rbp-100h]
  _QWORD *v33; // [rsp+80h] [rbp-F8h]
  __int64 v34; // [rsp+88h] [rbp-F0h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-E8h] BYREF
  HSTRING string; // [rsp+A8h] [rbp-D0h] BYREF
  HSTRING_HEADER v37; // [rsp+B0h] [rbp-C8h] BYREF
  HSTRING_HEADER v38; // [rsp+D0h] [rbp-A8h] BYREF
  HSTRING_HEADER v39; // [rsp+F0h] [rbp-88h] BYREF
  HSTRING_HEADER v40; // [rsp+110h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v34 = -2LL;
  v33 = a1;
  v29[2] = a2;
  v29[1] = a3;
  v31 = (HSTRING_HEADER *)a5;
  if ( a6 )
    goto LABEL_7;
  if ( dword_18018F940 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18018F940);
    if ( dword_18018F940 == -1 )
    {
      byte_18018F944 = CreativeFramework::Actions::IsMsaConnected(v10);
      Init_thread_footer(&dword_18018F940);
    }
  }
  if ( !byte_18018F944 )
LABEL_7:
    v11 = 1;
  else
    v11 = 0;
  v27 = v11;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetCachedFeatureEnabledState();
    v11 = v27;
  }
  v29[0] = *a4;
  if ( v11 )
    goto LABEL_14;
  v12 = *a1;
  v30 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, HSTRING, PVOID, char, PVOID))(*(_QWORD *)*a1 + 80LL);
  v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, v29);
  v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, a5);
  string = 0LL;
  v13 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    goto LABEL_20;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)a3);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)a2);
  v16 = v30(
          v12,
          v15[1].Reserved.Reserved1,
          v14[1].Reserved.Reserved1,
          string,
          v32[1].Reserved.Reserved1,
          v27,
          v28[1].Reserved.Reserved1);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x79,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_21;
  }
  if ( !v27 )
    goto LABEL_16;
LABEL_14:
  v18 = *a1;
  v30 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, HSTRING, PVOID, char, PVOID))(*(_QWORD *)*a1 + 80LL);
  v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, v29);
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, a5);
  string = 0LL;
  v20 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
  if ( v20 < 0 )
  {
LABEL_21:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
    goto LABEL_22;
  }
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, (const WCHAR **)a3);
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)a2);
  LOBYTE(v26) = v27;
  v23 = v30(
          v18,
          v22[1].Reserved.Reserved1,
          v21[1].Reserved.Reserved1,
          string,
          v19[1].Reserved.Reserved1,
          v26,
          v31[1].Reserved.Reserved1);
  v24 = retaddr;
  if ( v23 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x8F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v23);
    JUMPOUT(0x180082B40LL);
  }
LABEL_16:
  LODWORD(v28) = 0;
  result = ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
             (_DWORD)a2,
             (_DWORD)a3,
             (unsigned int)&v27,
             (unsigned int)&v28,
             (__int64)v29);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
