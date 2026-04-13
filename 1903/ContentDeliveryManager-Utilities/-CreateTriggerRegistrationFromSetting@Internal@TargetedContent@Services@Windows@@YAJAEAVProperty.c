/*
 * XREFs of ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180073178
 * Callers:
 *     _lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator() @ 0x180075188 (_lambda_e34527cb48b3e2822e62a7657f7a4fcf_--operator().c)
 *     std::_Func_impl_std::_Callable_obj__lambda_a229ec049bd8949c08ad0e1605aaf705__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800780E0 (std--_Func_impl_std--_Callable_obj__lambda_a229ec049bd8949c08ad0e1605aaf705__0__std_ea_1800780E0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005E480 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 *     ?ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentKnownTrigger@1234@PEB_W@Z @ 0x18006E068 (-ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentKnownTri.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x18007168C (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072F64 (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x18007560C (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?GetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAH_NH@Z @ 0x180075D48 (-GetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?Lookup@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180076C74 (-Lookup@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **a3)
{
  int v3; // edi
  HSTRING *v6; // r9
  HSTRING *v7; // r9
  char StringValue; // al
  wil::details::in1diag3 *v9; // rcx
  HSTRING *v10; // r9
  char v11; // al
  wil::details::in1diag3 *v12; // rcx
  HSTRING *v13; // r9
  HSTRING *v14; // r9
  HSTRING *v15; // r9
  char v16; // al
  wil::details::in1diag3 *v17; // rcx
  const WCHAR *StringRawBuffer; // rax
  int v19; // ecx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  HSTRING *v22; // r9
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  HSTRING *v25; // r9
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  HSTRING *v28; // r9
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  HSTRING *v31; // r9
  int v32; // eax
  wil::details::in1diag3 *v33; // rcx
  HSTRING *v34; // r9
  int v35; // eax
  wil::details::in1diag3 *v36; // rcx
  HSTRING *v37; // r9
  int v38; // eax
  wil::details::in1diag3 *v39; // rcx
  unsigned __int64 v40; // r9
  __int64 v41; // rdx
  int HasKey; // eax
  int v43; // eax
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  wil::details::in1diag3 *v49; // rcx
  int v50; // eax
  wil::details::in1diag3 *v51; // rcx
  int Int32; // eax
  wil::details::in1diag3 *v53; // rcx
  int v54; // eax
  wil::details::in1diag3 *v55; // rcx
  int v56; // eax
  wil::details::in1diag3 *v57; // rcx
  int v58; // eax
  wil::details::in1diag3 *v59; // rcx
  unsigned __int64 v60; // r9
  __int64 v61; // rdx
  int v62; // eax
  int v63; // eax
  unsigned __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  wil::details::in1diag3 *v69; // rcx
  int v70; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v71; // r8
  wil::details::in1diag3 *v72; // rcx
  int TriggerStateTransitionsFromSetting; // eax
  wil::details::in1diag3 *v74; // rcx
  int v75; // eax
  wil::details::in1diag3 *v76; // rcx
  int v77; // eax
  wil::details::in1diag3 *v78; // rcx
  struct CreativeFramework::Triggers::PropertySetHelper *v79; // rax
  struct CreativeFramework::Triggers::PropertySetHelper *v80; // rcx
  const char *v81; // r9
  __int64 result; // rax
  HSTRING v83; // [rsp+40h] [rbp-78h] BYREF
  struct CreativeFramework::Triggers::PropertySetHelper *v84; // [rsp+48h] [rbp-70h] BYREF
  HSTRING string; // [rsp+50h] [rbp-68h] BYREF
  HSTRING v86; // [rsp+58h] [rbp-60h] BYREF
  HSTRING v87; // [rsp+60h] [rbp-58h] BYREF
  HSTRING v88; // [rsp+68h] [rbp-50h] BYREF
  HSTRING v89; // [rsp+70h] [rbp-48h] BYREF
  HSTRING v90; // [rsp+78h] [rbp-40h] BYREF
  unsigned int v91; // [rsp+80h] [rbp-38h] BYREF
  __int64 v92; // [rsp+88h] [rbp-30h] BYREF
  _QWORD v93[5]; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v95; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v96; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v97; // [rsp+D8h] [rbp+20h] BYREF

  v93[1] = -2LL;
  *(_QWORD *)a2 = 0LL;
  WindowsDeleteString(0LL);
  v90 = 0LL;
  try
  {
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"CreativeId",
           (const wchar_t *)&v90,
           v6) )
    {
      WindowsDeleteString(0LL);
      v89 = 0LL;
      StringValue = Windows::Services::TargetedContent::Internal::GetStringValue(
                      this,
                      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Placement",
                      (const wchar_t *)&v89,
                      v7);
      v9 = retaddr;
      if ( StringValue )
      {
        WindowsDeleteString(0LL);
        v88 = 0LL;
        v11 = Windows::Services::TargetedContent::Internal::GetStringValue(
                this,
                (struct CreativeFramework::Triggers::PropertySetHelper *)L"Path",
                (const wchar_t *)&v88,
                v10);
        v12 = retaddr;
        if ( v11 )
        {
          WindowsDeleteString(0LL);
          v87 = 0LL;
          Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Action",
            (const wchar_t *)&v87,
            v13);
          WindowsDeleteString(0LL);
          v86 = 0LL;
          Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Intent",
            (const wchar_t *)&v86,
            v14);
          WindowsDeleteString(0LL);
          string = 0LL;
          v16 = Windows::Services::TargetedContent::Internal::GetStringValue(
                  this,
                  (struct CreativeFramework::Triggers::PropertySetHelper *)L"Trigger",
                  (const wchar_t *)&string,
                  v15);
          v17 = retaddr;
          if ( v16 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v19 = Windows::Services::TargetedContent::Internal::ResolveTriggerFromName(StringRawBuffer);
            v84 = 0LL;
            v20 = Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(
                    v19,
                    v90,
                    v89,
                    v88,
                    v87,
                    v86,
                    &v84);
            v21 = retaddr;
            if ( v20 >= 0 )
            {
              WindowsDeleteString(0LL);
              v83 = 0LL;
              if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                      this,
                      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Id",
                      (const wchar_t *)&v83,
                      v22)
                || (v23 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v84 + 72LL))(
                            v84,
                            v83),
                    v24 = retaddr,
                    v23 >= 0) )
              {
                WindowsDeleteString(v83);
                v83 = 0LL;
                if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                        this,
                        (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predicate",
                        (const wchar_t *)&v83,
                        v25)
                  || (v26 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v84 + 104LL))(
                              v84,
                              v83),
                      v27 = retaddr,
                      v26 >= 0) )
                {
                  WindowsDeleteString(v83);
                  v83 = 0LL;
                  if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                          this,
                          (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predecessor",
                          (const wchar_t *)&v83,
                          v28)
                    || (v29 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v84 + 152LL))(
                                v84,
                                v83),
                        v30 = retaddr,
                        v29 >= 0) )
                  {
                    WindowsDeleteString(v83);
                    v83 = 0LL;
                    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                            this,
                            (struct CreativeFramework::Triggers::PropertySetHelper *)L"ruleFilePath",
                            (const wchar_t *)&v83,
                            v31)
                      || (v32 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v84 + 216LL))(
                                  v84,
                                  v83),
                          v33 = retaddr,
                          v32 >= 0) )
                    {
                      WindowsDeleteString(v83);
                      v83 = 0LL;
                      if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                              this,
                              (struct CreativeFramework::Triggers::PropertySetHelper *)L"event",
                              (const wchar_t *)&v83,
                              v34)
                        || (v35 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v84 + 232LL))(
                                    v84,
                                    v83),
                            v36 = retaddr,
                            v35 >= 0) )
                      {
                        WindowsDeleteString(v83);
                        v83 = 0LL;
                        if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                                this,
                                (struct CreativeFramework::Triggers::PropertySetHelper *)L"scoreName",
                                (const wchar_t *)&v83,
                                v37)
                          || (v38 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v84 + 296LL))(
                                      v84,
                                      v83),
                              v39 = retaddr,
                              v38 >= 0) )
                        {
                          v3 = *((_DWORD *)this + 4);
                          if ( v3 < 0 )
                          {
                            v40 = (unsigned int)v3;
                            v41 = 361LL;
LABEL_21:
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)v41,
                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
                              (const char *)v40);
                            goto LABEL_35;
                          }
                          HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
                                     this,
                                     L"delay",
                                     &v95);
                          v3 = HasKey;
                          if ( HasKey < 0 )
                          {
                            v40 = (unsigned int)HasKey;
                            v41 = 366LL;
                            goto LABEL_21;
                          }
                          if ( (_BYTE)v95 )
                          {
                            v95 = 0LL;
                            v43 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
                                    this,
                                    L"delay",
                                    &v95);
                            v3 = v43;
                            if ( v43 < 0 )
                            {
                              v44 = (unsigned int)v43;
                              v45 = 376LL;
                              goto LABEL_27;
                            }
                            v47 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v95 + 104LL))(v95, &v92);
                            v3 = v47;
                            if ( v47 < 0 )
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x69,
                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
                                (const char *)(unsigned int)v47);
                              v44 = (unsigned int)v3;
                              v45 = 377LL;
LABEL_27:
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)v45,
                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
                                (const char *)v44);
                              v46 = v95;
                              if ( v95 )
                              {
                                v95 = 0LL;
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                              }
LABEL_35:
                              v49 = retaddr;
                              if ( v3 >= 0 )
                              {
                                v50 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64))(*(_QWORD *)v84 + 248LL))(
                                        v84,
                                        v92);
                                v51 = retaddr;
                                if ( v50 >= 0 )
                                {
                                  Int32 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                                            this,
                                            L"options",
                                            &v96);
                                  v53 = retaddr;
                                  if ( Int32 >= 0 )
                                  {
                                    v54 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v84 + 264LL))(
                                            v84,
                                            v96);
                                    v55 = retaddr;
                                    if ( v54 >= 0 )
                                    {
                                      v56 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                                              this,
                                              L"predicateKind",
                                              &v97);
                                      v57 = retaddr;
                                      if ( v56 >= 0 )
                                      {
                                        v58 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v84 + 120LL))(
                                                v84,
                                                v97);
                                        v59 = retaddr;
                                        if ( v58 >= 0 )
                                        {
                                          v3 = *((_DWORD *)this + 4);
                                          if ( v3 < 0 )
                                          {
                                            v60 = (unsigned int)v3;
                                            v61 = 361LL;
LABEL_43:
                                            wil::details::in1diag3::Return_Hr(
                                              retaddr,
                                              (void *)v61,
                                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
                                              (const char *)v60);
                                            goto LABEL_57;
                                          }
                                          v62 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
                                                  this,
                                                  L"scoreValue",
                                                  &v95);
                                          v3 = v62;
                                          if ( v62 < 0 )
                                          {
                                            v60 = (unsigned int)v62;
                                            v61 = 366LL;
                                            goto LABEL_43;
                                          }
                                          if ( (_BYTE)v95 )
                                          {
                                            v95 = 0LL;
                                            v63 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
                                                    this,
                                                    L"scoreValue",
                                                    &v95);
                                            v3 = v63;
                                            if ( v63 < 0 )
                                            {
                                              v64 = (unsigned int)v63;
                                              v65 = 376LL;
                                              goto LABEL_49;
                                            }
                                            v67 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v95 + 128LL))(
                                                    v95,
                                                    v93);
                                            v3 = v67;
                                            if ( v67 < 0 )
                                            {
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x77,
                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
                                                (const char *)(unsigned int)v67);
                                              v64 = (unsigned int)v3;
                                              v65 = 377LL;
LABEL_49:
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)v65,
                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
                                                (const char *)v64);
                                              v66 = v95;
                                              if ( v95 )
                                              {
                                                v95 = 0LL;
                                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
                                              }
LABEL_57:
                                              v69 = retaddr;
                                              if ( v3 >= 0 )
                                              {
                                                v70 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *))(*(_QWORD *)v84 + 312LL))(v84);
                                                v72 = retaddr;
                                                if ( v70 >= 0 )
                                                {
                                                  TriggerStateTransitionsFromSetting = Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting(
                                                                                         this,
                                                                                         v84,
                                                                                         v71);
                                                  v74 = retaddr;
                                                  if ( TriggerStateTransitionsFromSetting >= 0 )
                                                  {
                                                    v75 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                                                            this,
                                                            L"conditionFlags",
                                                            &v91);
                                                    v76 = retaddr;
                                                    if ( v75 >= 0 )
                                                    {
                                                      v77 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v84 + 280LL))(
                                                              v84,
                                                              v91);
                                                      v78 = retaddr;
                                                      if ( v77 >= 0 )
                                                      {
                                                        v79 = v84;
                                                        v84 = 0LL;
                                                        *(_QWORD *)a2 = v79;
                                                        WindowsDeleteString(v83);
                                                        v83 = 0LL;
                                                        v80 = v84;
                                                        if ( v84 )
                                                        {
                                                          v84 = 0LL;
                                                          (*(void (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *))(*(_QWORD *)v80 + 16LL))(v80);
                                                        }
                                                        WindowsDeleteString(string);
                                                        string = 0LL;
                                                        WindowsDeleteString(v86);
                                                        v86 = 0LL;
                                                        WindowsDeleteString(v87);
                                                        v87 = 0LL;
                                                        WindowsDeleteString(v88);
                                                        v88 = 0LL;
                                                        WindowsDeleteString(v89);
                                                        v89 = 0LL;
                                                        WindowsDeleteString(v90);
                                                        return 0LL;
                                                      }
LABEL_86:
                                                      wil::details::in1diag3::Throw_Hr(
                                                        v78,
                                                        (void *)0x1A3,
                                                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\"
                                                                 "triggermanager\\triggermanagersettings.cpp",
                                                        (const char *)(unsigned int)v77);
                                                      JUMPOUT(0x180073BA0LL);
                                                    }
LABEL_85:
                                                    wil::details::in1diag3::Throw_Hr(
                                                      v76,
                                                      (void *)0x1A2,
                                                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\t"
                                                               "riggermanager\\triggermanagersettings.cpp",
                                                      (const char *)(unsigned int)v75);
                                                    goto LABEL_86;
                                                  }
LABEL_84:
                                                  wil::details::in1diag3::Throw_Hr(
                                                    v74,
                                                    (void *)0x19F,
                                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\tri"
                                                             "ggermanager\\triggermanagersettings.cpp",
                                                    (const char *)(unsigned int)TriggerStateTransitionsFromSetting);
                                                  goto LABEL_85;
                                                }
LABEL_83:
                                                wil::details::in1diag3::Throw_Hr(
                                                  v72,
                                                  (void *)0x19D,
                                                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\trigg"
                                                           "ermanager\\triggermanagersettings.cpp",
                                                  (const char *)(unsigned int)v70);
                                                goto LABEL_84;
                                              }
LABEL_82:
                                              wil::details::in1diag3::Throw_Hr(
                                                v69,
                                                (void *)0x19C,
                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\trigger"
                                                         "manager\\triggermanagersettings.cpp",
                                                (const char *)(unsigned int)v3);
                                              goto LABEL_83;
                                            }
                                            v68 = v95;
                                            if ( v95 )
                                            {
                                              v95 = 0LL;
                                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
                                            }
                                          }
                                          else
                                          {
                                            v93[0] = 0LL;
                                          }
                                          v3 = 0;
                                          goto LABEL_57;
                                        }
LABEL_81:
                                        wil::details::in1diag3::Throw_Hr(
                                          v59,
                                          (void *)0x199,
                                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanage"
                                                   "r\\triggermanagersettings.cpp",
                                          (const char *)(unsigned int)v58);
                                        goto LABEL_82;
                                      }
LABEL_80:
                                      wil::details::in1diag3::Throw_Hr(
                                        v57,
                                        (void *)0x198,
                                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\"
                                                 "triggermanagersettings.cpp",
                                        (const char *)(unsigned int)v56);
                                      goto LABEL_81;
                                    }
LABEL_79:
                                    wil::details::in1diag3::Throw_Hr(
                                      v55,
                                      (void *)0x195,
                                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\t"
                                               "riggermanagersettings.cpp",
                                      (const char *)(unsigned int)v54);
                                    goto LABEL_80;
                                  }
LABEL_78:
                                  wil::details::in1diag3::Throw_Hr(
                                    v53,
                                    (void *)0x194,
                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\tri"
                                             "ggermanagersettings.cpp",
                                    (const char *)(unsigned int)Int32);
                                  goto LABEL_79;
                                }
LABEL_77:
                                wil::details::in1diag3::Throw_Hr(
                                  v51,
                                  (void *)0x191,
                                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\trigg"
                                           "ermanagersettings.cpp",
                                  (const char *)(unsigned int)v50);
                                goto LABEL_78;
                              }
LABEL_76:
                              wil::details::in1diag3::Throw_Hr(
                                v49,
                                (void *)0x190,
                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\trigger"
                                         "managersettings.cpp",
                                (const char *)(unsigned int)v3);
                              goto LABEL_77;
                            }
                            v48 = v95;
                            if ( v95 )
                            {
                              v95 = 0LL;
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
                            }
                          }
                          else
                          {
                            v92 = 0LL;
                          }
                          v3 = 0;
                          goto LABEL_35;
                        }
LABEL_75:
                        wil::details::in1diag3::Throw_Hr(
                          v39,
                          (void *)0x18C,
                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                          (const char *)(unsigned int)v38);
                        goto LABEL_76;
                      }
LABEL_74:
                      wil::details::in1diag3::Throw_Hr(
                        v36,
                        (void *)0x188,
                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                        (const char *)(unsigned int)v35);
                      goto LABEL_75;
                    }
LABEL_73:
                    wil::details::in1diag3::Throw_Hr(
                      v33,
                      (void *)0x184,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                      (const char *)(unsigned int)v32);
                    goto LABEL_74;
                  }
LABEL_72:
                  wil::details::in1diag3::Throw_Hr(
                    v30,
                    (void *)0x180,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                    (const char *)(unsigned int)v29);
                  goto LABEL_73;
                }
LABEL_71:
                wil::details::in1diag3::Throw_Hr(
                  v27,
                  (void *)0x17C,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                  (const char *)(unsigned int)v26);
                goto LABEL_72;
              }
LABEL_70:
              wil::details::in1diag3::Throw_Hr(
                v24,
                (void *)0x178,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                (const char *)(unsigned int)v23);
              goto LABEL_71;
            }
LABEL_69:
            wil::details::in1diag3::Throw_Hr(
              v21,
              (void *)0x173,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
              (const char *)(unsigned int)v20);
            goto LABEL_70;
          }
LABEL_68:
          wil::details::in1diag3::Throw_Hr(
            v17,
            (void *)0x170,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)0x80070490LL);
          goto LABEL_69;
        }
LABEL_67:
        wil::details::in1diag3::Throw_Hr(
          v12,
          (void *)0x16A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)0x80070490LL);
        goto LABEL_68;
      }
    }
    else
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x166,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL);
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x168,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    goto LABEL_67;
  }
  catch ( ... )
  {
    LODWORD(v95) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1A8,
                     (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                     v81);
    return (unsigned int)v95;
  }
  return result;
}
