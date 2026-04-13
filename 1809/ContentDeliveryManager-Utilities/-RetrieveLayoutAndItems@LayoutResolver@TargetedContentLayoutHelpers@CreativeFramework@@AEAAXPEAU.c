/*
 * XREFs of ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009F864
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E47C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18007A260 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18009C690 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18009EABC (-ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ.c)
 *     ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x18009EC7C (-GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA-AV.c)
 *     ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x18009EEA0 (-FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedCon.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x18009F268 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x1800A1500 (--$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEA.c)
 *     ??$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA?AVVectorIterator@?$VectorRange@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAU?$IVectorView@PEAUHSTRING__@@@012@@Z @ 0x1800A1588 (--$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA-AVVectorIterator@-$VectorRange@U-$IVec.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800A184C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAUHSTRING__@@@Collections@Foundat.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *a1,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v13; // rcx
  WCHAR *v14; // rbx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  bool v17; // r14
  int i; // eax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  int j; // eax
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  __int64 v27; // rcx
  HSTRING v28; // r14
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  const char *StringRawBuffer; // rax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v32; // [rsp+38h] [rbp-D0h] BYREF
  int v33; // [rsp+40h] [rbp-C8h] BYREF
  WCHAR *v34; // [rsp+48h] [rbp-C0h] BYREF
  WCHAR *v35; // [rsp+50h] [rbp-B8h]
  unsigned int v36; // [rsp+58h] [rbp-B0h]
  HSTRING string[2]; // [rsp+60h] [rbp-A8h] BYREF
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v38; // [rsp+70h] [rbp-98h]
  WCHAR *v39; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v40[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v41; // [rsp+90h] [rbp-78h] BYREF
  struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v44; // [rsp+A8h] [rbp-60h]
  _BYTE v45[8]; // [rsp+B0h] [rbp-58h] BYREF
  int v46; // [rsp+B8h] [rbp-50h]
  HSTRING v47; // [rsp+C0h] [rbp-48h]
  __int64 v48; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v43 = -2LL;
  try
  {
    v38 = a1;
    v42 = a2;
    v44 = a3;
    v33 = 0;
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(a1);
    v39 = (WCHAR *)L"Windows.Services.TargetedContent.Internal.TargetedContentSubscriptionInternal";
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, (const WCHAR **)&v39);
    v32 = 0LL;
    v5 = RoActivateInstance(*(_QWORD *)(v4 + 24), &v32);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x672,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v5);
    }
    else
    {
      v48 = 0LL;
      v6 = (**(__int64 (__fastcall ***)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, GUID *, __int64 *))v32)(
             v32,
             &GUID_1547dcdf_43fb_4ea7_b3c0_d10f3b1f34ff,
             &v41);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v33 = 3;
        if ( v32 )
          (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v32 + 16LL))(v32);
        v32 = 0LL;
        v8 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v41);
        v9 = retaddr;
        if ( v8 >= 0 )
        {
          v10 = v32;
          v34 = 0LL;
          v33 = 11;
          v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *> *>(v32);
          if ( v11 >= 0 )
            v11 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, WCHAR **))(*(_QWORD *)v10 + 64LL))(
                    v10,
                    &v34);
          v12 = retaddr;
          if ( v11 >= 0 )
          {
            v33 = 7;
            v13 = v32;
            if ( v32 )
            {
              v32 = 0LL;
              (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v13 + 16LL))(v13);
            }
            v14 = v34;
            v34 = 0LL;
            v39 = v14;
            v32 = (struct Windows::Services::TargetedContent::ITargetedContentCollection *)v14;
            if ( v41 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
            v15 = (*(__int64 (__fastcall **)(WCHAR *, _BYTE *))(*(_QWORD *)v14 + 56LL))(v14, v40);
            v16 = retaddr;
            if ( v15 >= 0 )
            {
              CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::ContentIdsReceived<unsigned int &>(
                v44,
                v40);
              v17 = 1;
              v35 = v14;
              v36 = 0;
              string[0] = 0LL;
              Windows::Foundation::Collections::end<HSTRING__ *>(v45, v14);
              for ( i = v36; i != v46; i = ++v36 )
              {
                WindowsDeleteString(string[0]);
                string[0] = 0LL;
                v19 = (*(__int64 (__fastcall **)(WCHAR *, _QWORD, HSTRING *))(*(_QWORD *)v35 + 48LL))(v35, v36, string);
                v20 = retaddr;
                if ( v19 < 0 )
                  goto LABEL_51;
                CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
                  (__int64)retaddr,
                  (__int64 *)&v34,
                  string[0]);
                v21 = (__int64)v34;
                if ( v34 )
                {
                  v22 = (*(__int64 (__fastcall **)(WCHAR *, int *))(*(_QWORD *)v34 + 64LL))(v34, &v33);
                  v23 = retaddr;
                  if ( v22 < 0 )
                    goto LABEL_52;
                  v17 = v33 == 2;
                  if ( v33 != 2 )
                  {
                    if ( v34 )
                      (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v34 + 16LL))(v34);
                    break;
                  }
                  v21 = (__int64)v34;
                }
                if ( v21 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              }
              WindowsDeleteString(v47);
              v47 = 0LL;
              WindowsDeleteString(string[0]);
              if ( v17 )
              {
                v35 = v14;
                v36 = 0;
                string[0] = 0LL;
                Windows::Foundation::Collections::end<HSTRING__ *>(v45, v14);
                for ( j = v36; j != v46; j = ++v36 )
                {
                  WindowsDeleteString(string[0]);
                  string[0] = 0LL;
                  v25 = (*(__int64 (__fastcall **)(WCHAR *, _QWORD, HSTRING *))(*(_QWORD *)v35 + 48LL))(
                          v35,
                          v36,
                          string);
                  v26 = retaddr;
                  if ( v25 < 0 )
                    goto LABEL_53;
                  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
                    (__int64)retaddr,
                    (__int64 *)&v34,
                    string[0]);
                  v27 = (__int64)v34;
                  if ( v34 )
                  {
                    v28 = string[0];
                    v32 = 0LL;
                    v29 = (*(__int64 (__fastcall **)(WCHAR *, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v34 + 72LL))(
                            v34,
                            &v32);
                    v30 = retaddr;
                    if ( v29 < 0 )
                      goto LABEL_54;
                    if ( !*(_QWORD *)a1 )
                      CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(
                        (HSTRING *)a1,
                        v32,
                        v28,
                        v42);
                    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
                      a1,
                      v32,
                      v28,
                      0);
                    if ( v32 )
                      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v32 + 16LL))(v32);
                    v27 = (__int64)v34;
                  }
                  if ( v27 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
                }
                WindowsDeleteString(v47);
                v47 = 0LL;
                WindowsDeleteString(string[0]);
              }
              if ( v14 )
                (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v14 + 16LL))(v14);
              goto LABEL_58;
            }
LABEL_50:
            wil::details::in1diag3::Throw_Hr(
              v16,
              (void *)0x195,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
              (const char *)(unsigned int)v15);
LABEL_51:
            wil::details::in1diag3::Throw_Hr(
              v20,
              (void *)0x16A8,
              (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
              (const char *)(unsigned int)v19);
LABEL_52:
            wil::details::in1diag3::Throw_Hr(
              v23,
              (void *)0x1A1,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
              (const char *)(unsigned int)v22);
LABEL_53:
            wil::details::in1diag3::Throw_Hr(
              v26,
              (void *)0x16A8,
              (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
              (const char *)(unsigned int)v25);
LABEL_54:
            wil::details::in1diag3::Throw_Hr(
              v30,
              (void *)0x17D,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
              (const char *)(unsigned int)v29);
            JUMPOUT(0x18009FE11LL);
          }
LABEL_49:
          wil::details::in1diag3::Throw_Hr(
            v12,
            (void *)0x643,
            (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
            (const char *)(unsigned int)v11);
          goto LABEL_50;
        }
LABEL_48:
        wil::details::in1diag3::Throw_Hr(
          v9,
          (void *)0x65B,
          (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
          (const char *)(unsigned int)v8);
        goto LABEL_49;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v6);
    goto LABEL_48;
  }
  catch ( ... )
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(*((HSTRING *)v38 + 1), 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (void *)0x1BB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Subscription ID: %ls",
      StringRawBuffer);
  }
LABEL_58:
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v44);
}
