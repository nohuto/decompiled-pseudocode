/*
 * XREFs of ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x18009EC7C
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009F864 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004B050 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18007A260 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
        __int64 a1,
        __int64 *a2,
        HSTRING a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  int ActivationFactory; // eax
  int v8; // eax
  DWORD v9; // edx
  int v10; // r8d
  wil::details::in1diag3 *v11; // rcx
  void (__fastcall ***v12)(__int64, GUID *, __int64 *); // rdi
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  void (__fastcall ***v15)(__int64, GUID *, __int64 *); // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  const char *StringRawBuffer; // rax
  void (__fastcall ***v21)(__int64, GUID *, __int64 *); // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h] BYREF
  HSTRING v24; // [rsp+50h] [rbp-48h]
  __int64 *v25; // [rsp+58h] [rbp-40h]
  __int64 v26; // [rsp+60h] [rbp-38h]
  __int64 v27; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v26 = -2LL;
  v3 = a2;
  v25 = a2;
  v24 = a3;
  *a2 = 0LL;
  v21 = (void (__fastcall ***)(__int64, GUID *, __int64 *))L"Windows.Services.TargetedContent.TargetedContentContainer";
  v23 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v27, (const WCHAR **)&v21);
  try
  {
    v5 = v4;
    v6 = v23;
    v23 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v5 + 24), &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8, &v23);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x669,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v21 = 0LL;
      v8 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v23);
      v11 = retaddr;
      if ( v8 >= 0 )
      {
        v12 = v21;
        v22 = 0LL;
        v13 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(
                v21,
                v9,
                v10);
        if ( v13 >= 0 )
          v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), __int64 *))(*v12)[8])(
                  v12,
                  &v22);
        v14 = retaddr;
        if ( v13 >= 0 )
        {
          v15 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v15)[2])(v15);
          }
          v16 = v22;
          v17 = 0LL;
          v22 = 0LL;
          v18 = *v3;
          *v3 = v16;
          if ( v18 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            v17 = v22;
          }
          if ( v17 )
          {
            v22 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          return v3;
        }
LABEL_20:
        wil::details::in1diag3::Throw_Hr(
          v14,
          (void *)0x643,
          (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
          (const char *)(unsigned int)v13);
        JUMPOUT(0x18009EE96LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x65B,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v8);
    goto LABEL_20;
  }
  catch ( ... )
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v24, 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (void *)0x11F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Content ID: %ls",
      StringRawBuffer);
    return v25;
  }
  return v3;
}
