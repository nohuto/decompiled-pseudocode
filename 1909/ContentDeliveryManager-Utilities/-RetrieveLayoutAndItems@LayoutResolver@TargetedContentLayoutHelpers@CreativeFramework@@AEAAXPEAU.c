/*
 * XREFs of ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A36B8
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A2280 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18007BE60 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800A0428 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800A28C4 (-ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ.c)
 *     ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x1800A2A84 (-GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA-AV.c)
 *     ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800A2CA8 (-FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedCon.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800A3098 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x1800A53BC (--$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEA.c)
 *     ??$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA?AVvector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAU?$IVectorView@PEAUHSTRING__@@@012@@Z @ 0x1800A5444 (--$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA-AVvector_iterator@-$vector_range@U-$IV.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800A5878 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAUHSTRING__@@@Collections@Foundat.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *a1,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  HSTRING_HEADER *v4; // rbx
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
  bool v17; // r12
  int i; // eax
  WCHAR *v19; // rsi
  __int64 (__fastcall *v20)(WCHAR *, _QWORD, HSTRING *); // rdi
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  int j; // eax
  WCHAR *v27; // rsi
  __int64 (__fastcall *v28)(WCHAR *, _QWORD, HSTRING *); // rdi
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // rcx
  HSTRING v32; // rdi
  __int64 v33; // rax
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  const char *StringRawBuffer; // rax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v37; // [rsp+38h] [rbp-E0h] BYREF
  int v38; // [rsp+40h] [rbp-D8h] BYREF
  WCHAR *v39; // [rsp+48h] [rbp-D0h] BYREF
  WCHAR *v40; // [rsp+50h] [rbp-C8h]
  unsigned int v41; // [rsp+58h] [rbp-C0h]
  HSTRING string[2]; // [rsp+60h] [rbp-B8h] BYREF
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v43; // [rsp+70h] [rbp-A8h]
  WCHAR *v44; // [rsp+80h] [rbp-98h] BYREF
  char v45[8]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v46; // [rsp+90h] [rbp-88h] BYREF
  struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *v47; // [rsp+98h] [rbp-80h]
  __int64 v48; // [rsp+A0h] [rbp-78h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v49; // [rsp+A8h] [rbp-70h]
  HSTRING_HEADER v50; // [rsp+B0h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v48 = -2LL;
  try
  {
    v43 = a1;
    v47 = a2;
    v49 = a3;
    v38 = 0;
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(a1);
    v44 = (WCHAR *)L"Windows.Services.TargetedContent.Internal.TargetedContentSubscriptionInternal";
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v50, (const WCHAR **)&v44);
    v37 = 0LL;
    v5 = RoActivateInstance(v4[1].Reserved.Reserved1, &v37);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x662,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v5);
    }
    else
    {
      v6 = (**(__int64 (__fastcall ***)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, GUID *, __int64 *))v37)(
             v37,
             &GUID_1547dcdf_43fb_4ea7_b3c0_d10f3b1f34ff,
             &v46);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v38 = 3;
        if ( v37 )
          (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v37 + 16LL))(v37);
        v37 = 0LL;
        v8 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v46);
        v9 = retaddr;
        if ( v8 >= 0 )
        {
          v10 = v37;
          v39 = 0LL;
          v38 = 19;
          v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *> *>(v37);
          if ( v11 >= 0 )
            v11 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, WCHAR **))(*(_QWORD *)v10 + 64LL))(
                    v10,
                    &v39);
          v12 = retaddr;
          if ( v11 >= 0 )
          {
            v38 = 11;
            v13 = v37;
            if ( v37 )
            {
              v37 = 0LL;
              (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v13 + 16LL))(v13);
            }
            v14 = v39;
            v39 = 0LL;
            v44 = v14;
            v37 = (struct Windows::Services::TargetedContent::ITargetedContentCollection *)v14;
            if ( v46 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
            v15 = (*(__int64 (__fastcall **)(WCHAR *, char *))(*(_QWORD *)v14 + 56LL))(v14, v45);
            v16 = retaddr;
            if ( v15 >= 0 )
            {
              CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::ContentIdsReceived<unsigned int &>(
                v49,
                v45);
              v17 = 1;
              v40 = v14;
              v41 = 0;
              string[0] = 0LL;
              Windows::Foundation::Collections::end<HSTRING__ *>(&v50, v14);
              for ( i = v41; i != *(_DWORD *)&v50.Reserved.Reserved2[8]; i = ++v41 )
              {
                v19 = v40;
                v20 = *(__int64 (__fastcall **)(WCHAR *, _QWORD, HSTRING *))(*(_QWORD *)v40 + 48LL);
                WindowsDeleteString(string[0]);
                string[0] = 0LL;
                v21 = v20(v19, v41, string);
                v22 = retaddr;
                if ( v21 < 0 )
                  goto LABEL_51;
                CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
                  (__int64)retaddr,
                  (__int64 *)&v39,
                  string[0]);
                v23 = (__int64)v39;
                if ( v39 )
                {
                  v24 = (*(__int64 (__fastcall **)(WCHAR *, int *))(*(_QWORD *)v39 + 64LL))(v39, &v38);
                  v25 = retaddr;
                  if ( v24 < 0 )
                    goto LABEL_52;
                  v17 = v38 == 2;
                  if ( v38 != 2 )
                  {
                    if ( v39 )
                      (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v39 + 16LL))(v39);
                    break;
                  }
                  v23 = (__int64)v39;
                }
                if ( v23 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
              }
              WindowsDeleteString(*(HSTRING *)&v50.Reserved.Reserved2[16]);
              *(_QWORD *)&v50.Reserved.Reserved2[16] = 0LL;
              WindowsDeleteString(string[0]);
              if ( v17 )
              {
                v40 = v14;
                v41 = 0;
                string[0] = 0LL;
                Windows::Foundation::Collections::end<HSTRING__ *>(&v50, v14);
                for ( j = v41; j != *(_DWORD *)&v50.Reserved.Reserved2[8]; j = ++v41 )
                {
                  v27 = v40;
                  v28 = *(__int64 (__fastcall **)(WCHAR *, _QWORD, HSTRING *))(*(_QWORD *)v40 + 48LL);
                  WindowsDeleteString(string[0]);
                  string[0] = 0LL;
                  v29 = v28(v27, v41, string);
                  v30 = retaddr;
                  if ( v29 < 0 )
                    goto LABEL_53;
                  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
                    (__int64)retaddr,
                    (__int64 *)&v39,
                    string[0]);
                  v31 = (__int64)v39;
                  if ( v39 )
                  {
                    v32 = string[0];
                    v33 = *(_QWORD *)v39;
                    v37 = 0LL;
                    v34 = (*(__int64 (__fastcall **)(WCHAR *, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(v33 + 72))(
                            v39,
                            &v37);
                    v35 = retaddr;
                    if ( v34 < 0 )
                      goto LABEL_54;
                    if ( !*(_QWORD *)a1 )
                      CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(
                        (HSTRING *)a1,
                        v37,
                        v32,
                        v47);
                    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
                      a1,
                      v37,
                      v32,
                      0);
                    if ( v37 )
                      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v37 + 16LL))(v37);
                    v31 = (__int64)v39;
                  }
                  if ( v31 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                }
                WindowsDeleteString(*(HSTRING *)&v50.Reserved.Reserved2[16]);
                *(_QWORD *)&v50.Reserved.Reserved2[16] = 0LL;
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
              v22,
              (void *)0x152D,
              (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
              (const char *)(unsigned int)v21);
LABEL_52:
            wil::details::in1diag3::Throw_Hr(
              v25,
              (void *)0x1A1,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
              (const char *)(unsigned int)v24);
LABEL_53:
            wil::details::in1diag3::Throw_Hr(
              v30,
              (void *)0x152D,
              (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
              (const char *)(unsigned int)v29);
LABEL_54:
            wil::details::in1diag3::Throw_Hr(
              v35,
              (void *)0x17D,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
              (const char *)(unsigned int)v34);
            JUMPOUT(0x1800A3C78LL);
          }
LABEL_49:
          wil::details::in1diag3::Throw_Hr(
            v12,
            (void *)0x633,
            (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
            (const char *)(unsigned int)v11);
          goto LABEL_50;
        }
LABEL_48:
        wil::details::in1diag3::Throw_Hr(
          v9,
          (void *)0x64B,
          (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
          (const char *)(unsigned int)v8);
        goto LABEL_49;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6);
    goto LABEL_48;
  }
  catch ( ... )
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(*((HSTRING *)v43 + 1), 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (void *)0x1BB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Subscription ID: %ls",
      StringRawBuffer);
  }
LABEL_58:
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v49);
}
