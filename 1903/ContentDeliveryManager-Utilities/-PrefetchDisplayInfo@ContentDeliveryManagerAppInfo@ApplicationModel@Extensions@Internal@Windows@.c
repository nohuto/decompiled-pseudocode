/*
 * XREFs of ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x18009E5D8
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIAppInfo@25@@Z @ 0x18009E320 (-RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180031DF0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x18009E510 (-get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA.c)
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x18009E9C4 (--$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@.c)
 *     ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18009EB60 (--$LookupWString@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@P.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::PrefetchDisplayInfo(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int Properties; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *v9; // rcx
  char v10; // al
  void **v11; // rdx
  void **v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // [rsp+28h] [rbp-39h] BYREF
  __int64 v16; // [rsp+30h] [rbp-31h] BYREF
  void **v17; // [rsp+38h] [rbp-29h] BYREF
  void *v18[2]; // [rsp+40h] [rbp-21h] BYREF
  __int64 v19; // [rsp+50h] [rbp-11h]
  unsigned __int64 v20; // [rsp+58h] [rbp-9h]
  _QWORD v21[2]; // [rsp+60h] [rbp-1h] BYREF
  void *v22[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+80h] [rbp+1Fh]
  unsigned __int64 v24; // [rsp+88h] [rbp+27h]
  void *v25[2]; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v26; // [rsp+A0h] [rbp+3Fh]
  unsigned __int64 v27; // [rsp+A8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v21[1] = -2LL;
  v2 = (__int64 *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) )
    return;
  v3 = (__int64 *)*((_QWORD *)this + 9);
  if ( !v3 )
    return;
  v15 = 0LL;
  v4 = *v3;
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 64))(v3, &v15);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_24;
  v16 = 0LL;
  Properties = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_Properties(
                 (__int64)this + 16,
                 &v16);
  v9 = retaddr;
  if ( Properties < 0 )
  {
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x45,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfo.cpp",
      (const char *)(unsigned int)Properties);
    JUMPOUT(0x18009E7F6LL);
  }
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  v17 = v18;
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  v10 = PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
          v16,
          v8,
          v25);
  v11 = v25;
  if ( !v10 )
    v11 = v18;
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  std::wstring::assign(v22, v11, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v27 >= 8 )
    operator delete(v25[0]);
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  if ( v20 >= 8 )
    operator delete(v18[0]);
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  v21[0] = v15;
  v12 = v22;
  if ( v24 >= 8 )
    v12 = (void **)v22[0];
  v17 = v12;
  v13 = *v2;
  *v2 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo,Windows::ApplicationModel::IAppDisplayInfo,unsigned short const *,Windows::ApplicationModel::IAppDisplayInfo *>(
          v2,
          &v17,
          v21);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfo.cpp",
      (const char *)(unsigned int)v14);
LABEL_24:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x42,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfo.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_25;
  }
  if ( v24 >= 8 )
    operator delete(v22[0]);
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
}
