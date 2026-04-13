/*
 * XREFs of ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800744C0
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180064D00 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180036F4C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18006E244 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800705F4 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x18007092C (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180070CC4 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAUHSTRING__@@@Z @ 0x180073F54 (-SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@Cre.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180073FAC (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800758DC (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetInt64@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_W_J@Z @ 0x180075A7C (-SetInt64@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?SetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_WH@Z @ 0x180075C44 (-SetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800AD370 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
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
  wchar_t *v12; // rbx
  HSTRING v13; // r9
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  wchar_t *v16; // rbx
  HSTRING v17; // r9
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  wchar_t *v20; // rbx
  HSTRING v21; // r9
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  wchar_t *v24; // rbx
  HSTRING v25; // r9
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  wchar_t *v28; // rbx
  HSTRING v29; // r9
  int v30; // eax
  wil::details::in1diag3 *v31; // rcx
  wchar_t *v32; // rbx
  HSTRING v33; // r9
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  wchar_t *v36; // rbx
  HSTRING v37; // r9
  int v38; // eax
  wil::details::in1diag3 *v39; // rcx
  wchar_t *v40; // rbx
  HSTRING v41; // r9
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  wchar_t *v44; // rbx
  HSTRING v45; // r9
  int v46; // eax
  wil::details::in1diag3 *v47; // rcx
  HSTRING v48; // r9
  int v49; // eax
  wil::details::in1diag3 *v50; // rcx
  wchar_t *Reserved1; // rbx
  HSTRING v52; // r9
  int v53; // eax
  wil::details::in1diag3 *v54; // rcx
  HSTRING v55; // r9
  int v56; // eax
  wil::details::in1diag3 *v57; // rcx
  int v58; // eax
  wil::details::in1diag3 *v59; // rcx
  int v60; // eax
  wil::details::in1diag3 *v61; // rcx
  int v62; // eax
  wil::details::in1diag3 *v63; // rcx
  int v64; // eax
  wil::details::in1diag3 *v65; // rcx
  int v66; // eax
  wil::details::in1diag3 *v67; // rcx
  int v68; // eax
  __int64 v69; // rdx
  wil::details::in1diag3 *v70; // rcx
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v71; // r8
  int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rdx
  HSTRING v76; // rcx
  __int64 (__fastcall *v77)(HSTRING, PVOID, __int64, char *); // rdi
  HSTRING_HEADER *v78; // rax
  HSTRING v79; // rcx
  __int64 v80; // rcx
  wil::details::in1diag3 *v81; // rcx
  int v82; // eax
  wil::details::in1diag3 *v83; // rcx
  wchar_t *v84; // rbx
  HSTRING v85; // r9
  int v86; // eax
  wil::details::in1diag3 *v87; // rcx
  int v88; // eax
  wil::details::in1diag3 *v89; // rcx
  int v90; // eax
  wil::details::in1diag3 *v91; // rcx
  volatile signed __int32 *v92; // rdi
  const char *v93; // r9
  __int64 v94; // rcx
  __int64 (__fastcall ***v95)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v96; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v97; // rcx
  volatile signed __int32 *v98; // rdi
  volatile signed __int32 *v100; // rdi
  HSTRING string; // [rsp+30h] [rbp-158h] BYREF
  char v102[8]; // [rsp+38h] [rbp-150h] BYREF
  __int64 v103; // [rsp+40h] [rbp-148h] BYREF
  HSTRING v104; // [rsp+48h] [rbp-140h] BYREF
  __int64 (__fastcall ***v105)(_QWORD, GUID *, HSTRING *); // [rsp+50h] [rbp-138h] BYREF
  __int64 v106; // [rsp+58h] [rbp-130h]
  char *v107; // [rsp+60h] [rbp-128h]
  __int64 v108; // [rsp+68h] [rbp-120h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v109; // [rsp+70h] [rbp-118h] BYREF
  int v110; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v111; // [rsp+7Ch] [rbp-10Ch] BYREF
  unsigned int v112; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v113; // [rsp+84h] [rbp-104h] BYREF
  unsigned int v114; // [rsp+88h] [rbp-100h]
  HSTRING v115; // [rsp+90h] [rbp-F8h] BYREF
  const WCHAR *v116; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v117; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v118; // [rsp+A8h] [rbp-E0h] BYREF
  const WCHAR *v119; // [rsp+B0h] [rbp-D8h] BYREF
  wchar_t *v120; // [rsp+B8h] [rbp-D0h] BYREF
  _QWORD *v121; // [rsp+C0h] [rbp-C8h]
  __int64 v122; // [rsp+C8h] [rbp-C0h] BYREF
  volatile signed __int32 *v123; // [rsp+D0h] [rbp-B8h]
  __int64 v124; // [rsp+D8h] [rbp-B0h]
  HSTRING_HEADER v125; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v126; // [rsp+F8h] [rbp-90h] BYREF
  HSTRING_HEADER v127; // [rsp+100h] [rbp-88h] BYREF
  __int64 v128; // [rsp+118h] [rbp-70h]
  HSTRING_HEADER v129; // [rsp+120h] [rbp-68h] BYREF
  HSTRING_HEADER v130; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v124 = -2LL;
  v121 = a1;
  v109 = 0LL;
  v108 = 0LL;
  v126 = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Storage.ApplicationDataCompositeValue", 0x2Du, &v125, (HSTRING *)&v126);
  try
  {
    if ( v5 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    }
    else
    {
      v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
             v126,
             (__int64 *)&v109);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        LODWORD(v2) = (_DWORD)v109;
        v8 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))v109)(
               v109,
               &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
               &v108);
        v9 = retaddr;
        if ( v8 >= 0 )
        {
          CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
            (CreativeFramework::Triggers::PropertySetHelper *)&v105,
            v109);
          string = 0LL;
          v2 = *(HSTRING *)(*(_QWORD *)a2 + 48LL);
          WindowsDeleteString(0LL);
          string = 0LL;
          v10 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                  a2,
                  &string);
          v11 = retaddr;
          if ( v10 >= 0 )
          {
            v12 = (wchar_t *)string;
            if ( !WindowsIsStringEmpty(string) )
              Windows::Services::TargetedContent::Internal::SetStringValue(
                (Windows::Services::TargetedContent::Internal *)&v105,
                L"Action",
                v12,
                v13);
            v2 = *(HSTRING *)(*(_QWORD *)a2 + 176LL);
            WindowsDeleteString(string);
            string = 0LL;
            v14 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                    a2,
                    &string);
            v15 = retaddr;
            if ( v14 >= 0 )
            {
              v16 = (wchar_t *)string;
              if ( !WindowsIsStringEmpty(string) )
                Windows::Services::TargetedContent::Internal::SetStringValue(
                  (Windows::Services::TargetedContent::Internal *)&v105,
                  L"CreativeId",
                  v16,
                  v17);
              v2 = *(HSTRING *)(*(_QWORD *)a2 + 192LL);
              WindowsDeleteString(string);
              string = 0LL;
              v18 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                      a2,
                      &string);
              v19 = retaddr;
              if ( v18 >= 0 )
              {
                v20 = (wchar_t *)string;
                if ( !WindowsIsStringEmpty(string) )
                  Windows::Services::TargetedContent::Internal::SetStringValue(
                    (Windows::Services::TargetedContent::Internal *)&v105,
                    L"Placement",
                    v20,
                    v21);
                v2 = *(HSTRING *)(*(_QWORD *)a2 + 64LL);
                WindowsDeleteString(string);
                string = 0LL;
                v22 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                        a2,
                        &string);
                v23 = retaddr;
                if ( v22 >= 0 )
                {
                  v24 = (wchar_t *)string;
                  if ( !WindowsIsStringEmpty(string) )
                    Windows::Services::TargetedContent::Internal::SetStringValue(
                      (Windows::Services::TargetedContent::Internal *)&v105,
                      L"Id",
                      v24,
                      v25);
                  v2 = *(HSTRING *)(*(_QWORD *)a2 + 96LL);
                  WindowsDeleteString(string);
                  string = 0LL;
                  v26 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                          a2,
                          &string);
                  v27 = retaddr;
                  if ( v26 >= 0 )
                  {
                    v28 = (wchar_t *)string;
                    if ( !WindowsIsStringEmpty(string) )
                      Windows::Services::TargetedContent::Internal::SetStringValue(
                        (Windows::Services::TargetedContent::Internal *)&v105,
                        L"Predicate",
                        v28,
                        v29);
                    v2 = *(HSTRING *)(*(_QWORD *)a2 + 160LL);
                    WindowsDeleteString(string);
                    string = 0LL;
                    v30 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                            a2,
                            &string);
                    v31 = retaddr;
                    if ( v30 >= 0 )
                    {
                      v32 = (wchar_t *)string;
                      if ( !WindowsIsStringEmpty(string) )
                        Windows::Services::TargetedContent::Internal::SetStringValue(
                          (Windows::Services::TargetedContent::Internal *)&v105,
                          L"Intent",
                          v32,
                          v33);
                      v2 = *(HSTRING *)(*(_QWORD *)a2 + 144LL);
                      WindowsDeleteString(string);
                      string = 0LL;
                      v34 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                              a2,
                              &string);
                      v35 = retaddr;
                      if ( v34 >= 0 )
                      {
                        v36 = (wchar_t *)string;
                        if ( !WindowsIsStringEmpty(string) )
                          Windows::Services::TargetedContent::Internal::SetStringValue(
                            (Windows::Services::TargetedContent::Internal *)&v105,
                            L"Predecessor",
                            v36,
                            v37);
                        v2 = *(HSTRING *)(*(_QWORD *)a2 + 128LL);
                        WindowsDeleteString(string);
                        string = 0LL;
                        v38 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                                a2,
                                &string);
                        v39 = retaddr;
                        if ( v38 >= 0 )
                        {
                          v40 = (wchar_t *)string;
                          if ( !WindowsIsStringEmpty(string) )
                            Windows::Services::TargetedContent::Internal::SetStringValue(
                              (Windows::Services::TargetedContent::Internal *)&v105,
                              L"Path",
                              v40,
                              v41);
                          v2 = *(HSTRING *)(*(_QWORD *)a2 + 208LL);
                          WindowsDeleteString(string);
                          string = 0LL;
                          v42 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                                  a2,
                                  &string);
                          v43 = retaddr;
                          if ( v42 >= 0 )
                          {
                            v44 = (wchar_t *)string;
                            if ( !WindowsIsStringEmpty(string) )
                              Windows::Services::TargetedContent::Internal::SetStringValue(
                                (Windows::Services::TargetedContent::Internal *)&v105,
                                L"ruleFilePath",
                                v44,
                                v45);
                            v2 = *(HSTRING *)(*(_QWORD *)a2 + 224LL);
                            WindowsDeleteString(string);
                            string = 0LL;
                            v46 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                                    a2,
                                    &string);
                            v47 = retaddr;
                            if ( v46 >= 0 )
                            {
                              v2 = string;
                              if ( !WindowsIsStringEmpty(string) )
                                Windows::Services::TargetedContent::Internal::SetStringValue(
                                  (Windows::Services::TargetedContent::Internal *)&v105,
                                  L"event",
                                  (wchar_t *)v2,
                                  v48);
                              v49 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, int *))(*(_QWORD *)a2 + 80LL))(
                                      a2,
                                      &v110);
                              v50 = retaddr;
                              if ( v49 >= 0 )
                              {
                                v116 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v110);
                                Reserved1 = (wchar_t *)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                         &v129,
                                                         &v116)[1].Reserved.Reserved1;
                                if ( !WindowsIsStringEmpty((HSTRING)Reserved1) )
                                  Windows::Services::TargetedContent::Internal::SetStringValue(
                                    (Windows::Services::TargetedContent::Internal *)&v105,
                                    L"Trigger",
                                    Reserved1,
                                    v52);
                                v2 = *(HSTRING *)(*(_QWORD *)a2 + 288LL);
                                WindowsDeleteString(string);
                                string = 0LL;
                                v53 = ((__int64 (__fastcall *)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING *))v2)(
                                        a2,
                                        &string);
                                v54 = retaddr;
                                if ( v53 >= 0 )
                                {
                                  v2 = string;
                                  if ( !WindowsIsStringEmpty(string) )
                                    Windows::Services::TargetedContent::Internal::SetStringValue(
                                      (Windows::Services::TargetedContent::Internal *)&v105,
                                      L"scoreName",
                                      (wchar_t *)v2,
                                      v55);
                                  v56 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64 *))(*(_QWORD *)a2 + 240LL))(
                                          a2,
                                          &v117);
                                  v57 = retaddr;
                                  if ( v56 >= 0 )
                                  {
                                    if ( v117 <= 0
                                      || (v58 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt64(&v105),
                                          v59 = retaddr,
                                          v58 >= 0) )
                                    {
                                      v60 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, unsigned int *))(*(_QWORD *)a2 + 256LL))(
                                              a2,
                                              &v111);
                                      v61 = retaddr;
                                      if ( v60 >= 0 )
                                      {
                                        v62 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt32(
                                                &v105,
                                                L"options",
                                                v111);
                                        v63 = retaddr;
                                        if ( v62 >= 0 )
                                        {
                                          v64 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, unsigned int *))(*(_QWORD *)a2 + 112LL))(
                                                  a2,
                                                  &v112);
                                          v65 = retaddr;
                                          if ( v64 >= 0 )
                                          {
                                            v66 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt32(
                                                    &v105,
                                                    L"predicateKind",
                                                    v112);
                                            v67 = retaddr;
                                            if ( v66 >= 0 )
                                            {
                                              v68 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64 *))(*(_QWORD *)a2 + 304LL))(
                                                      a2,
                                                      &v118);
                                              v70 = retaddr;
                                              if ( v68 >= 0 )
                                              {
                                                v119 = L"scoreValue";
                                                LODWORD(v2) = (_DWORD)v107;
                                                if ( (int)v107 < 0 )
                                                {
                                                  wil::details::in1diag3::Return_Hr(
                                                    retaddr,
                                                    (void *)0x159,
                                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\pro"
                                                             "pertysethelper.h",
                                                    (const char *)(unsigned int)v107);
                                                  goto LABEL_66;
                                                }
                                                v103 = 0LL;
                                                v72 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v106 + 120LL))(
                                                        v106,
                                                        v69,
                                                        &v103);
                                                LODWORD(v2) = v72;
                                                if ( v72 >= 0 )
                                                {
                                                  v102[0] = 0;
                                                  v104 = 0LL;
                                                  v74 = (**v105)(
                                                          v105,
                                                          &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
                                                          &v104);
                                                  LODWORD(v2) = v74;
                                                  if ( v74 >= 0 )
                                                  {
                                                    v2 = v104;
                                                    v77 = *(__int64 (__fastcall **)(HSTRING, PVOID, __int64, char *))(*(_QWORD *)v104 + 80LL);
                                                    v78 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                            &v127,
                                                            &v119);
                                                    v74 = v77(v2, v78[1].Reserved.Reserved1, v103, v102);
                                                    LODWORD(v2) = v74;
                                                    v128 = 0LL;
                                                    if ( v74 >= 0 )
                                                    {
                                                      v79 = v104;
                                                      if ( v104 )
                                                      {
                                                        v104 = 0LL;
                                                        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v79 + 16LL))(v79);
                                                      }
                                                      v80 = v103;
                                                      if ( v103 )
                                                      {
                                                        v103 = 0LL;
                                                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
                                                      }
                                                      LODWORD(v2) = 0;
LABEL_66:
                                                      v81 = retaddr;
                                                      if ( (int)v2 >= 0 )
                                                      {
                                                        v82 = Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions(
                                                                (Windows::Services::TargetedContent::Internal *)&v105,
                                                                a2,
                                                                v71);
                                                        v83 = retaddr;
                                                        if ( v82 >= 0 )
                                                        {
                                                          v120 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(2);
                                                          v84 = (wchar_t *)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                                             &v130,
                                                                             (const WCHAR **)&v120)[1].Reserved.Reserved1;
                                                          if ( !WindowsIsStringEmpty((HSTRING)v84) )
                                                            Windows::Services::TargetedContent::Internal::SetStringValue(
                                                              (Windows::Services::TargetedContent::Internal *)&v105,
                                                              L"triggerState",
                                                              v84,
                                                              v85);
                                                          v86 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, unsigned int *))(*(_QWORD *)a2 + 272LL))(
                                                                  a2,
                                                                  &v113);
                                                          v87 = retaddr;
                                                          if ( v86 >= 0 )
                                                          {
                                                            v88 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt32(
                                                                    &v105,
                                                                    L"conditionFlags",
                                                                    v113);
                                                            v89 = retaddr;
                                                            if ( v88 >= 0 )
                                                            {
                                                              CreativeFramework::CommonHelper::SettingsContainer::GetValues(
                                                                *a1,
                                                                &v122);
                                                              Windows::Services::TargetedContent::Internal::CreateTriggerKey(
                                                                &v115,
                                                                (__int64)a2);
                                                              v90 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
                                                                      v122,
                                                                      v115,
                                                                      v105);
                                                              v91 = retaddr;
                                                              if ( v90 >= 0 )
                                                              {
                                                                WindowsDeleteString(v115);
                                                                v115 = 0LL;
                                                                v92 = v123;
                                                                if ( v123 )
                                                                {
                                                                  if ( _InterlockedExchangeAdd(v123 + 2, 0xFFFFFFFF) == 1 )
                                                                  {
                                                                    (**(void (__fastcall ***)(volatile signed __int32 *))v92)(v92);
                                                                    if ( _InterlockedExchangeAdd(v92 + 3, 0xFFFFFFFF) == 1 )
                                                                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
                                                                  }
                                                                }
                                                                WindowsDeleteString(string);
                                                                string = 0LL;
                                                                v94 = v106;
                                                                if ( v106 )
                                                                {
                                                                  v106 = 0LL;
                                                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
                                                                }
                                                                v95 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v105;
                                                                if ( v105 )
                                                                {
                                                                  v105 = 0LL;
                                                                  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v95)[2])(v95);
                                                                }
                                                                v96 = v108;
                                                                if ( v108 )
                                                                {
                                                                  v108 = 0LL;
                                                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
                                                                }
                                                                v97 = v109;
                                                                if ( v109 )
                                                                {
                                                                  v109 = 0LL;
                                                                  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v97 + 16LL))(v97);
                                                                }
                                                                goto LABEL_125;
                                                              }
LABEL_121:
                                                              wil::details::in1diag3::Throw_Hr(
                                                                v91,
                                                                (void *)0x22E,
                                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\uti"
                                                                         "ls\\lib\\triggermanager\\triggermanagersettings.cpp",
                                                                (const char *)(unsigned int)v90);
                                                              JUMPOUT(0x1800751D4LL);
                                                            }
LABEL_120:
                                                            wil::details::in1diag3::Throw_Hr(
                                                              v89,
                                                              (void *)0x22A,
                                                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils"
                                                                       "\\lib\\triggermanager\\triggermanagersettings.cpp",
                                                              (const char *)(unsigned int)v88);
                                                            goto LABEL_121;
                                                          }
LABEL_119:
                                                          wil::details::in1diag3::Throw_Hr(
                                                            v87,
                                                            (void *)0x229,
                                                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\"
                                                                     "lib\\triggermanager\\triggermanagersettings.cpp",
                                                            (const char *)(unsigned int)v86);
                                                          goto LABEL_120;
                                                        }
LABEL_118:
                                                        wil::details::in1diag3::Throw_Hr(
                                                          v83,
                                                          (void *)0x225,
                                                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\li"
                                                                   "b\\triggermanager\\triggermanagersettings.cpp",
                                                          (const char *)(unsigned int)v82);
                                                        goto LABEL_119;
                                                      }
LABEL_117:
                                                      wil::details::in1diag3::Throw_Hr(
                                                        v81,
                                                        (void *)0x223,
                                                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\"
                                                                 "triggermanager\\triggermanagersettings.cpp",
                                                        (const char *)(unsigned int)v2);
                                                      goto LABEL_118;
                                                    }
                                                    v75 = 353LL;
                                                  }
                                                  else
                                                  {
                                                    v75 = 352LL;
                                                  }
                                                  wil::details::in1diag3::Return_Hr(
                                                    retaddr,
                                                    (void *)v75,
                                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\pro"
                                                             "pertysethelper.h",
                                                    (const char *)(unsigned int)v74);
                                                  v76 = v104;
                                                  if ( v104 )
                                                  {
                                                    v104 = 0LL;
                                                    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v76 + 16LL))(v76);
                                                  }
                                                }
                                                else
                                                {
                                                  wil::details::in1diag3::Return_Hr(
                                                    retaddr,
                                                    (void *)0x15C,
                                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\pro"
                                                             "pertysethelper.h",
                                                    (const char *)(unsigned int)v72);
                                                }
                                                v73 = v103;
                                                if ( v103 )
                                                {
                                                  v103 = 0LL;
                                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
                                                }
                                                goto LABEL_66;
                                              }
LABEL_116:
                                              wil::details::in1diag3::Throw_Hr(
                                                v70,
                                                (void *)0x222,
                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\trigger"
                                                         "manager\\triggermanagersettings.cpp",
                                                (const char *)(unsigned int)v68);
                                              goto LABEL_117;
                                            }
LABEL_115:
                                            wil::details::in1diag3::Throw_Hr(
                                              v67,
                                              (void *)0x21F,
                                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggerma"
                                                       "nager\\triggermanagersettings.cpp",
                                              (const char *)(unsigned int)v66);
                                            goto LABEL_116;
                                          }
LABEL_114:
                                          wil::details::in1diag3::Throw_Hr(
                                            v65,
                                            (void *)0x21E,
                                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermana"
                                                     "ger\\triggermanagersettings.cpp",
                                            (const char *)(unsigned int)v64);
                                          goto LABEL_115;
                                        }
LABEL_113:
                                        wil::details::in1diag3::Throw_Hr(
                                          v63,
                                          (void *)0x21B,
                                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanage"
                                                   "r\\triggermanagersettings.cpp",
                                          (const char *)(unsigned int)v62);
                                        goto LABEL_114;
                                      }
LABEL_112:
                                      wil::details::in1diag3::Throw_Hr(
                                        v61,
                                        (void *)0x21A,
                                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\"
                                                 "triggermanagersettings.cpp",
                                        (const char *)(unsigned int)v60);
                                      goto LABEL_113;
                                    }
LABEL_111:
                                    wil::details::in1diag3::Throw_Hr(
                                      v59,
                                      (void *)0x216,
                                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\t"
                                               "riggermanagersettings.cpp",
                                      (const char *)(unsigned int)v58);
                                    goto LABEL_112;
                                  }
LABEL_110:
                                  wil::details::in1diag3::Throw_Hr(
                                    v57,
                                    (void *)0x213,
                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\tri"
                                             "ggermanagersettings.cpp",
                                    (const char *)(unsigned int)v56);
                                  goto LABEL_111;
                                }
LABEL_109:
                                wil::details::in1diag3::Throw_Hr(
                                  v54,
                                  (void *)0x20F,
                                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\trigg"
                                           "ermanagersettings.cpp",
                                  (const char *)(unsigned int)v53);
                                goto LABEL_110;
                              }
LABEL_108:
                              wil::details::in1diag3::Throw_Hr(
                                v50,
                                (void *)0x20D,
                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\trigger"
                                         "managersettings.cpp",
                                (const char *)(unsigned int)v49);
                              goto LABEL_109;
                            }
LABEL_107:
                            wil::details::in1diag3::Throw_Hr(
                              v47,
                              (void *)0x20A,
                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggerma"
                                       "nagersettings.cpp",
                              (const char *)(unsigned int)v46);
                            goto LABEL_108;
                          }
LABEL_106:
                          wil::details::in1diag3::Throw_Hr(
                            v43,
                            (void *)0x208,
                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                            (const char *)(unsigned int)v42);
                          goto LABEL_107;
                        }
LABEL_105:
                        wil::details::in1diag3::Throw_Hr(
                          v39,
                          (void *)0x206,
                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                          (const char *)(unsigned int)v38);
                        goto LABEL_106;
                      }
LABEL_104:
                      wil::details::in1diag3::Throw_Hr(
                        v35,
                        (void *)0x204,
                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                        (const char *)(unsigned int)v34);
                      goto LABEL_105;
                    }
LABEL_103:
                    wil::details::in1diag3::Throw_Hr(
                      v31,
                      (void *)0x202,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                      (const char *)(unsigned int)v30);
                    goto LABEL_104;
                  }
LABEL_102:
                  wil::details::in1diag3::Throw_Hr(
                    v27,
                    (void *)0x200,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                    (const char *)(unsigned int)v26);
                  goto LABEL_103;
                }
LABEL_101:
                wil::details::in1diag3::Throw_Hr(
                  v23,
                  (void *)0x1FE,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                  (const char *)(unsigned int)v22);
                goto LABEL_102;
              }
LABEL_100:
              wil::details::in1diag3::Throw_Hr(
                v19,
                (void *)0x1FC,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                (const char *)(unsigned int)v18);
              goto LABEL_101;
            }
LABEL_99:
            wil::details::in1diag3::Throw_Hr(
              v15,
              (void *)0x1FA,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
              (const char *)(unsigned int)v14);
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
    v114 = wil::details::in1diag3::Return_CaughtException(
             retaddr,
             (void *)0x232,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
             v93);
    v100 = (volatile signed __int32 *)v121[1];
    if ( v100 && _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v100)(v100);
      if ( _InterlockedExchangeAdd(v100 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 8LL))(v100);
    }
    return v114;
  }
LABEL_125:
  v98 = (volatile signed __int32 *)a1[1];
  if ( v98 )
  {
    if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v98)(v98);
      if ( _InterlockedExchangeAdd(v98 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v98 + 8LL))(v98);
    }
  }
  return 0LL;
}
