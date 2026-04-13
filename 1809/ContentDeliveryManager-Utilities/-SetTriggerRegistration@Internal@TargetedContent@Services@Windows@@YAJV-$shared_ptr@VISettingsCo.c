/*
 * XREFs of ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072B2C
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180063218 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180036010 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18006C7E4 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006EC2C (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x18006EF18 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006F354 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAUHSTRING__@@@Z @ 0x1800725B0 (-SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@Cre.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072608 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180073F10 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetInt64@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_W_J@Z @ 0x1800740B0 (-SetInt64@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?SetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_WH@Z @ 0x180074278 (-SetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800A92A0 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall Windows::Services::TargetedContent::Internal::SetTriggerRegistration(
        _QWORD *a1,
        struct CreativeFramework::Triggers::PropertySetHelper *a2)
{
  HSTRING v2; // rbx
  HRESULT v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  HSTRING v12; // r9
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  HSTRING v15; // r9
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  HSTRING v18; // r9
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  HSTRING v21; // r9
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  HSTRING v24; // r9
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  HSTRING v27; // r9
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  HSTRING v30; // r9
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  HSTRING v33; // r9
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  HSTRING v36; // r9
  int v37; // eax
  wil::details::in1diag3 *v38; // rcx
  HSTRING v39; // r9
  int v40; // eax
  wil::details::in1diag3 *v41; // rcx
  HSTRING v42; // r9
  int v43; // eax
  wil::details::in1diag3 *v44; // rcx
  HSTRING v45; // r9
  int v46; // eax
  wil::details::in1diag3 *v47; // rcx
  int v48; // eax
  wil::details::in1diag3 *v49; // rcx
  int v50; // eax
  wil::details::in1diag3 *v51; // rcx
  int v52; // eax
  wil::details::in1diag3 *v53; // rcx
  int v54; // eax
  wil::details::in1diag3 *v55; // rcx
  int v56; // eax
  wil::details::in1diag3 *v57; // rcx
  int v58; // eax
  __int64 v59; // rdx
  wil::details::in1diag3 *v60; // rcx
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v61; // r8
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rdx
  HSTRING v66; // rcx
  __int64 v67; // rdx
  HSTRING v68; // rcx
  __int64 v69; // rcx
  wil::details::in1diag3 *v70; // rcx
  int v71; // eax
  wil::details::in1diag3 *v72; // rcx
  wchar_t *v73; // rbx
  HSTRING v74; // r9
  int v75; // eax
  wil::details::in1diag3 *v76; // rcx
  int v77; // eax
  wil::details::in1diag3 *v78; // rcx
  int v79; // eax
  wil::details::in1diag3 *v80; // rcx
  volatile signed __int32 *v81; // rsi
  const char *v82; // r9
  __int64 v83; // rcx
  __int64 (__fastcall ***v84)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v85; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v86; // rcx
  volatile signed __int32 *v87; // rsi
  volatile signed __int32 *v89; // rsi
  HSTRING string; // [rsp+30h] [rbp-158h] BYREF
  char v91[8]; // [rsp+38h] [rbp-150h] BYREF
  __int64 v92; // [rsp+40h] [rbp-148h] BYREF
  HSTRING v93; // [rsp+48h] [rbp-140h] BYREF
  __int64 (__fastcall ***v94)(_QWORD, GUID *, HSTRING *); // [rsp+50h] [rbp-138h] BYREF
  __int64 v95; // [rsp+58h] [rbp-130h]
  char *v96; // [rsp+60h] [rbp-128h]
  __int64 v97; // [rsp+68h] [rbp-120h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v98; // [rsp+70h] [rbp-118h] BYREF
  int v99; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v100; // [rsp+7Ch] [rbp-10Ch] BYREF
  unsigned int v101; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v102; // [rsp+84h] [rbp-104h] BYREF
  unsigned int v103; // [rsp+88h] [rbp-100h]
  HSTRING v104; // [rsp+90h] [rbp-F8h] BYREF
  const WCHAR *v105; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v107; // [rsp+A8h] [rbp-E0h] BYREF
  const WCHAR *v108; // [rsp+B0h] [rbp-D8h] BYREF
  wchar_t *v109; // [rsp+B8h] [rbp-D0h] BYREF
  _QWORD *v110; // [rsp+C0h] [rbp-C8h]
  __int64 v111; // [rsp+C8h] [rbp-C0h] BYREF
  volatile signed __int32 *v112; // [rsp+D0h] [rbp-B8h]
  __int64 v113; // [rsp+D8h] [rbp-B0h]
  HSTRING_HEADER v114; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v115; // [rsp+F8h] [rbp-90h] BYREF
  char v116[24]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v117; // [rsp+118h] [rbp-70h]
  char v118[32]; // [rsp+120h] [rbp-68h] BYREF
  char v119[32]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v113 = -2LL;
  v110 = a1;
  v98 = 0LL;
  v97 = 0LL;
  v115 = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Storage.ApplicationDataCompositeValue", 0x2Du, &v114, (HSTRING *)&v115);
  try
  {
    if ( v5 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    }
    else
    {
      v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
             v115,
             (__int64 *)&v98);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v8 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))v98)(
               v98,
               &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
               &v97);
        v9 = retaddr;
        if ( v8 >= 0 )
        {
          CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
            (CreativeFramework::Triggers::PropertySetHelper *)&v94,
            v98);
          WindowsDeleteString(0LL);
          string = 0LL;
          v10 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 48LL))(
                  a2,
                  &string);
          v11 = retaddr;
          if ( v10 >= 0 )
          {
            v2 = string;
            if ( !WindowsIsStringEmpty(string) )
              Windows::Services::TargetedContent::Internal::SetStringValue(
                (Windows::Services::TargetedContent::Internal *)&v94,
                L"Action",
                (wchar_t *)v2,
                v12);
            WindowsDeleteString(string);
            string = 0LL;
            v13 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 176LL))(
                    a2,
                    &string);
            v14 = retaddr;
            if ( v13 >= 0 )
            {
              v2 = string;
              if ( !WindowsIsStringEmpty(string) )
                Windows::Services::TargetedContent::Internal::SetStringValue(
                  (Windows::Services::TargetedContent::Internal *)&v94,
                  L"CreativeId",
                  (wchar_t *)v2,
                  v15);
              WindowsDeleteString(string);
              string = 0LL;
              v16 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 192LL))(
                      a2,
                      &string);
              v17 = retaddr;
              if ( v16 >= 0 )
              {
                v2 = string;
                if ( !WindowsIsStringEmpty(string) )
                  Windows::Services::TargetedContent::Internal::SetStringValue(
                    (Windows::Services::TargetedContent::Internal *)&v94,
                    L"Placement",
                    (wchar_t *)v2,
                    v18);
                WindowsDeleteString(string);
                string = 0LL;
                v19 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 64LL))(
                        a2,
                        &string);
                v20 = retaddr;
                if ( v19 >= 0 )
                {
                  v2 = string;
                  if ( !WindowsIsStringEmpty(string) )
                    Windows::Services::TargetedContent::Internal::SetStringValue(
                      (Windows::Services::TargetedContent::Internal *)&v94,
                      L"Id",
                      (wchar_t *)v2,
                      v21);
                  WindowsDeleteString(string);
                  string = 0LL;
                  v22 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 96LL))(
                          a2,
                          &string);
                  v23 = retaddr;
                  if ( v22 >= 0 )
                  {
                    v2 = string;
                    if ( !WindowsIsStringEmpty(string) )
                      Windows::Services::TargetedContent::Internal::SetStringValue(
                        (Windows::Services::TargetedContent::Internal *)&v94,
                        L"Predicate",
                        (wchar_t *)v2,
                        v24);
                    WindowsDeleteString(string);
                    string = 0LL;
                    v25 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 160LL))(
                            a2,
                            &string);
                    v26 = retaddr;
                    if ( v25 >= 0 )
                    {
                      v2 = string;
                      if ( !WindowsIsStringEmpty(string) )
                        Windows::Services::TargetedContent::Internal::SetStringValue(
                          (Windows::Services::TargetedContent::Internal *)&v94,
                          L"Intent",
                          (wchar_t *)v2,
                          v27);
                      WindowsDeleteString(string);
                      string = 0LL;
                      v28 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 144LL))(
                              a2,
                              &string);
                      v29 = retaddr;
                      if ( v28 >= 0 )
                      {
                        v2 = string;
                        if ( !WindowsIsStringEmpty(string) )
                          Windows::Services::TargetedContent::Internal::SetStringValue(
                            (Windows::Services::TargetedContent::Internal *)&v94,
                            L"Predecessor",
                            (wchar_t *)v2,
                            v30);
                        WindowsDeleteString(string);
                        string = 0LL;
                        v31 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 128LL))(
                                a2,
                                &string);
                        v32 = retaddr;
                        if ( v31 >= 0 )
                        {
                          v2 = string;
                          if ( !WindowsIsStringEmpty(string) )
                            Windows::Services::TargetedContent::Internal::SetStringValue(
                              (Windows::Services::TargetedContent::Internal *)&v94,
                              L"Path",
                              (wchar_t *)v2,
                              v33);
                          WindowsDeleteString(string);
                          string = 0LL;
                          v34 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 208LL))(
                                  a2,
                                  &string);
                          v35 = retaddr;
                          if ( v34 >= 0 )
                          {
                            v2 = string;
                            if ( !WindowsIsStringEmpty(string) )
                              Windows::Services::TargetedContent::Internal::SetStringValue(
                                (Windows::Services::TargetedContent::Internal *)&v94,
                                L"ruleFilePath",
                                (wchar_t *)v2,
                                v36);
                            WindowsDeleteString(string);
                            string = 0LL;
                            v37 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 224LL))(
                                    a2,
                                    &string);
                            v38 = retaddr;
                            if ( v37 >= 0 )
                            {
                              v2 = string;
                              if ( !WindowsIsStringEmpty(string) )
                                Windows::Services::TargetedContent::Internal::SetStringValue(
                                  (Windows::Services::TargetedContent::Internal *)&v94,
                                  L"event",
                                  (wchar_t *)v2,
                                  v39);
                              v40 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, int *))(*(_QWORD *)a2 + 80LL))(
                                      a2,
                                      &v99);
                              v41 = retaddr;
                              if ( v40 >= 0 )
                              {
                                v105 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v99);
                                v2 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                    (__int64)v118,
                                                    &v105)
                                                + 24);
                                if ( !WindowsIsStringEmpty(v2) )
                                  Windows::Services::TargetedContent::Internal::SetStringValue(
                                    (Windows::Services::TargetedContent::Internal *)&v94,
                                    L"Trigger",
                                    (wchar_t *)v2,
                                    v42);
                                WindowsDeleteString(string);
                                string = 0LL;
                                v43 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))(*(_QWORD *)a2 + 288LL))(
                                        a2,
                                        &string);
                                v44 = retaddr;
                                if ( v43 >= 0 )
                                {
                                  v2 = string;
                                  if ( !WindowsIsStringEmpty(string) )
                                    Windows::Services::TargetedContent::Internal::SetStringValue(
                                      (Windows::Services::TargetedContent::Internal *)&v94,
                                      L"scoreName",
                                      (wchar_t *)v2,
                                      v45);
                                  v46 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64 *))(*(_QWORD *)a2 + 240LL))(
                                          a2,
                                          &v106);
                                  v47 = retaddr;
                                  if ( v46 >= 0 )
                                  {
                                    if ( v106 <= 0
                                      || (v48 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt64(&v94),
                                          v49 = retaddr,
                                          v48 >= 0) )
                                    {
                                      v50 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, unsigned int *))(*(_QWORD *)a2 + 256LL))(
                                              a2,
                                              &v100);
                                      v51 = retaddr;
                                      if ( v50 >= 0 )
                                      {
                                        v52 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt32(
                                                &v94,
                                                L"options",
                                                v100);
                                        v53 = retaddr;
                                        if ( v52 >= 0 )
                                        {
                                          v54 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, unsigned int *))(*(_QWORD *)a2 + 112LL))(
                                                  a2,
                                                  &v101);
                                          v55 = retaddr;
                                          if ( v54 >= 0 )
                                          {
                                            v56 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt32(
                                                    &v94,
                                                    L"predicateKind",
                                                    v101);
                                            v57 = retaddr;
                                            if ( v56 >= 0 )
                                            {
                                              v58 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64 *))(*(_QWORD *)a2 + 304LL))(
                                                      a2,
                                                      &v107);
                                              v60 = retaddr;
                                              if ( v58 >= 0 )
                                              {
                                                v108 = L"scoreValue";
                                                LODWORD(v2) = (_DWORD)v96;
                                                if ( (int)v96 < 0 )
                                                {
                                                  wil::details::in1diag3::Return_Hr(
                                                    retaddr,
                                                    (void *)0x159,
                                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\pro"
                                                             "pertysethelper.h",
                                                    (const char *)(unsigned int)v96);
                                                  goto LABEL_66;
                                                }
                                                v92 = 0LL;
                                                v62 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v95 + 120LL))(
                                                        v95,
                                                        v59,
                                                        &v92);
                                                LODWORD(v2) = v62;
                                                if ( v62 >= 0 )
                                                {
                                                  v91[0] = 0;
                                                  v93 = 0LL;
                                                  v64 = (**v94)(v94, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v93);
                                                  LODWORD(v2) = v64;
                                                  if ( v64 >= 0 )
                                                  {
                                                    v2 = v93;
                                                    v67 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                                        (__int64)v116,
                                                                        &v108)
                                                                    + 24);
                                                    v64 = (*(__int64 (__fastcall **)(HSTRING, __int64, __int64, char *))(*(_QWORD *)v2 + 80LL))(
                                                            v2,
                                                            v67,
                                                            v92,
                                                            v91);
                                                    LODWORD(v2) = v64;
                                                    v117 = 0LL;
                                                    if ( v64 >= 0 )
                                                    {
                                                      v68 = v93;
                                                      if ( v93 )
                                                      {
                                                        v93 = 0LL;
                                                        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v68 + 16LL))(v68);
                                                      }
                                                      v69 = v92;
                                                      if ( v92 )
                                                      {
                                                        v92 = 0LL;
                                                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
                                                      }
                                                      LODWORD(v2) = 0;
LABEL_66:
                                                      v70 = retaddr;
                                                      if ( (int)v2 >= 0 )
                                                      {
                                                        v71 = Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions(
                                                                (Windows::Services::TargetedContent::Internal *)&v94,
                                                                a2,
                                                                v61);
                                                        v72 = retaddr;
                                                        if ( v71 >= 0 )
                                                        {
                                                          v109 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(2);
                                                          v73 = *(wchar_t **)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                                                (__int64)v119,
                                                                                (const WCHAR **)&v109)
                                                                            + 24);
                                                          if ( !WindowsIsStringEmpty((HSTRING)v73) )
                                                            Windows::Services::TargetedContent::Internal::SetStringValue(
                                                              (Windows::Services::TargetedContent::Internal *)&v94,
                                                              L"triggerState",
                                                              v73,
                                                              v74);
                                                          v75 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, unsigned int *))(*(_QWORD *)a2 + 272LL))(
                                                                  a2,
                                                                  &v102);
                                                          v76 = retaddr;
                                                          if ( v75 >= 0 )
                                                          {
                                                            v77 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt32(
                                                                    &v94,
                                                                    L"conditionFlags",
                                                                    v102);
                                                            v78 = retaddr;
                                                            if ( v77 >= 0 )
                                                            {
                                                              CreativeFramework::CommonHelper::SettingsContainer::GetValues(
                                                                *a1,
                                                                &v111);
                                                              Windows::Services::TargetedContent::Internal::CreateTriggerKey(
                                                                &v104,
                                                                (__int64)a2);
                                                              v79 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
                                                                      v111,
                                                                      v104,
                                                                      v94);
                                                              v80 = retaddr;
                                                              if ( v79 >= 0 )
                                                              {
                                                                WindowsDeleteString(v104);
                                                                v104 = 0LL;
                                                                v81 = v112;
                                                                if ( v112 )
                                                                {
                                                                  if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
                                                                  {
                                                                    (**(void (__fastcall ***)(volatile signed __int32 *))v81)(v81);
                                                                    if ( _InterlockedExchangeAdd(v81 + 3, 0xFFFFFFFF) == 1 )
                                                                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 8LL))(v81);
                                                                  }
                                                                }
                                                                WindowsDeleteString(string);
                                                                string = 0LL;
                                                                v83 = v95;
                                                                if ( v95 )
                                                                {
                                                                  v95 = 0LL;
                                                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
                                                                }
                                                                v84 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v94;
                                                                if ( v94 )
                                                                {
                                                                  v94 = 0LL;
                                                                  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v84)[2])(v84);
                                                                }
                                                                v85 = v97;
                                                                if ( v97 )
                                                                {
                                                                  v97 = 0LL;
                                                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
                                                                }
                                                                v86 = v98;
                                                                if ( v98 )
                                                                {
                                                                  v98 = 0LL;
                                                                  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v86 + 16LL))(v86);
                                                                }
                                                                goto LABEL_125;
                                                              }
LABEL_121:
                                                              wil::details::in1diag3::Throw_Hr(
                                                                v80,
                                                                (void *)0x22E,
                                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\uti"
                                                                         "ls\\lib\\triggermanager\\triggermanagersettings.cpp",
                                                                (const char *)(unsigned int)v79);
                                                              JUMPOUT(0x18007380CLL);
                                                            }
LABEL_120:
                                                            wil::details::in1diag3::Throw_Hr(
                                                              v78,
                                                              (void *)0x22A,
                                                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils"
                                                                       "\\lib\\triggermanager\\triggermanagersettings.cpp",
                                                              (const char *)(unsigned int)v77);
                                                            goto LABEL_121;
                                                          }
LABEL_119:
                                                          wil::details::in1diag3::Throw_Hr(
                                                            v76,
                                                            (void *)0x229,
                                                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\"
                                                                     "lib\\triggermanager\\triggermanagersettings.cpp",
                                                            (const char *)(unsigned int)v75);
                                                          goto LABEL_120;
                                                        }
LABEL_118:
                                                        wil::details::in1diag3::Throw_Hr(
                                                          v72,
                                                          (void *)0x225,
                                                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\li"
                                                                   "b\\triggermanager\\triggermanagersettings.cpp",
                                                          (const char *)(unsigned int)v71);
                                                        goto LABEL_119;
                                                      }
LABEL_117:
                                                      wil::details::in1diag3::Throw_Hr(
                                                        v70,
                                                        (void *)0x223,
                                                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\"
                                                                 "triggermanager\\triggermanagersettings.cpp",
                                                        (const char *)(unsigned int)v2);
                                                      goto LABEL_118;
                                                    }
                                                    v65 = 353LL;
                                                  }
                                                  else
                                                  {
                                                    v65 = 352LL;
                                                  }
                                                  wil::details::in1diag3::Return_Hr(
                                                    retaddr,
                                                    (void *)v65,
                                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\pro"
                                                             "pertysethelper.h",
                                                    (const char *)(unsigned int)v64);
                                                  v66 = v93;
                                                  if ( v93 )
                                                  {
                                                    v93 = 0LL;
                                                    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v66 + 16LL))(v66);
                                                  }
                                                }
                                                else
                                                {
                                                  wil::details::in1diag3::Return_Hr(
                                                    retaddr,
                                                    (void *)0x15C,
                                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\pro"
                                                             "pertysethelper.h",
                                                    (const char *)(unsigned int)v62);
                                                }
                                                v63 = v92;
                                                if ( v92 )
                                                {
                                                  v92 = 0LL;
                                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
                                                }
                                                goto LABEL_66;
                                              }
LABEL_116:
                                              wil::details::in1diag3::Throw_Hr(
                                                v60,
                                                (void *)0x222,
                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\trigger"
                                                         "manager\\triggermanagersettings.cpp",
                                                (const char *)(unsigned int)v58);
                                              goto LABEL_117;
                                            }
LABEL_115:
                                            wil::details::in1diag3::Throw_Hr(
                                              v57,
                                              (void *)0x21F,
                                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggerma"
                                                       "nager\\triggermanagersettings.cpp",
                                              (const char *)(unsigned int)v56);
                                            goto LABEL_116;
                                          }
LABEL_114:
                                          wil::details::in1diag3::Throw_Hr(
                                            v55,
                                            (void *)0x21E,
                                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermana"
                                                     "ger\\triggermanagersettings.cpp",
                                            (const char *)(unsigned int)v54);
                                          goto LABEL_115;
                                        }
LABEL_113:
                                        wil::details::in1diag3::Throw_Hr(
                                          v53,
                                          (void *)0x21B,
                                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanage"
                                                   "r\\triggermanagersettings.cpp",
                                          (const char *)(unsigned int)v52);
                                        goto LABEL_114;
                                      }
LABEL_112:
                                      wil::details::in1diag3::Throw_Hr(
                                        v51,
                                        (void *)0x21A,
                                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\"
                                                 "triggermanagersettings.cpp",
                                        (const char *)(unsigned int)v50);
                                      goto LABEL_113;
                                    }
LABEL_111:
                                    wil::details::in1diag3::Throw_Hr(
                                      v49,
                                      (void *)0x216,
                                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\t"
                                               "riggermanagersettings.cpp",
                                      (const char *)(unsigned int)v48);
                                    goto LABEL_112;
                                  }
LABEL_110:
                                  wil::details::in1diag3::Throw_Hr(
                                    v47,
                                    (void *)0x213,
                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\tri"
                                             "ggermanagersettings.cpp",
                                    (const char *)(unsigned int)v46);
                                  goto LABEL_111;
                                }
LABEL_109:
                                wil::details::in1diag3::Throw_Hr(
                                  v44,
                                  (void *)0x20F,
                                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\trigg"
                                           "ermanagersettings.cpp",
                                  (const char *)(unsigned int)v43);
                                goto LABEL_110;
                              }
LABEL_108:
                              wil::details::in1diag3::Throw_Hr(
                                v41,
                                (void *)0x20D,
                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\trigger"
                                         "managersettings.cpp",
                                (const char *)(unsigned int)v40);
                              goto LABEL_109;
                            }
LABEL_107:
                            wil::details::in1diag3::Throw_Hr(
                              v38,
                              (void *)0x20A,
                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggerma"
                                       "nagersettings.cpp",
                              (const char *)(unsigned int)v37);
                            goto LABEL_108;
                          }
LABEL_106:
                          wil::details::in1diag3::Throw_Hr(
                            v35,
                            (void *)0x208,
                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                            (const char *)(unsigned int)v34);
                          goto LABEL_107;
                        }
LABEL_105:
                        wil::details::in1diag3::Throw_Hr(
                          v32,
                          (void *)0x206,
                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                          (const char *)(unsigned int)v31);
                        goto LABEL_106;
                      }
LABEL_104:
                      wil::details::in1diag3::Throw_Hr(
                        v29,
                        (void *)0x204,
                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                        (const char *)(unsigned int)v28);
                      goto LABEL_105;
                    }
LABEL_103:
                    wil::details::in1diag3::Throw_Hr(
                      v26,
                      (void *)0x202,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                      (const char *)(unsigned int)v25);
                    goto LABEL_104;
                  }
LABEL_102:
                  wil::details::in1diag3::Throw_Hr(
                    v23,
                    (void *)0x200,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                    (const char *)(unsigned int)v22);
                  goto LABEL_103;
                }
LABEL_101:
                wil::details::in1diag3::Throw_Hr(
                  v20,
                  (void *)0x1FE,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                  (const char *)(unsigned int)v19);
                goto LABEL_102;
              }
LABEL_100:
              wil::details::in1diag3::Throw_Hr(
                v17,
                (void *)0x1FC,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                (const char *)(unsigned int)v16);
              goto LABEL_101;
            }
LABEL_99:
            wil::details::in1diag3::Throw_Hr(
              v14,
              (void *)0x1FA,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
              (const char *)(unsigned int)v13);
            goto LABEL_100;
          }
LABEL_98:
          wil::details::in1diag3::Throw_Hr(
            v11,
            (void *)0x1F8,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v10);
          goto LABEL_99;
        }
LABEL_97:
        wil::details::in1diag3::Throw_Hr(
          v9,
          (void *)0x1F4,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v8);
        goto LABEL_98;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x1F3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_97;
  }
  catch ( ... )
  {
    v103 = wil::details::in1diag3::Return_CaughtException(
             retaddr,
             (void *)0x232,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
             v82);
    v89 = (volatile signed __int32 *)v110[1];
    if ( v89 && _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v89)(v89);
      if ( _InterlockedExchangeAdd(v89 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 8LL))(v89);
    }
    return v103;
  }
LABEL_125:
  v87 = (volatile signed __int32 *)a1[1];
  if ( v87 )
  {
    if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v87)(v87);
      if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
    }
  }
  return 0LL;
}
