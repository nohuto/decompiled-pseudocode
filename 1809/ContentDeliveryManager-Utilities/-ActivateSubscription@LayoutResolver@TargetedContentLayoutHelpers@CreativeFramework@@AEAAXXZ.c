/*
 * XREFs of ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18009EABC
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009F864 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18007A260 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800A1624 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Servi.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  _QWORD *v3; // rcx
  int ActivationFactory; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  const WCHAR *v7; // rbx
  int v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  const WCHAR *v11; // rcx
  __int64 v12; // rcx
  const WCHAR *v13; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v14; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v15[1] = -2LL;
  v13 = L"Windows.Services.TargetedContent.TargetedContentSubscription";
  v14 = 0LL;
  v1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v16, &v13);
  try
  {
    v2 = v1;
    v3 = v14;
    v14 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 16LL))(v3, *v3);
    ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v2 + 24), &GUID_faddfe80_360d_4916_b53c_7ea27090d02a, &v14);
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
      v13 = 0LL;
      v5 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}((__int64)v14);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        v7 = v13;
        v15[0] = 0LL;
        v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *> *>(v13);
        if ( v8 >= 0 )
          v8 = (*(__int64 (__fastcall **)(const WCHAR *, _QWORD *))(*(_QWORD *)v7 + 64LL))(v7, v15);
        v10 = retaddr;
        if ( v8 >= 0 )
        {
          v11 = v13;
          if ( v13 )
          {
            v13 = 0LL;
            (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v11 + 16LL))(v11);
          }
          v12 = v15[0];
          if ( v15[0] )
          {
            v15[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
          if ( v14 )
            (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
          return;
        }
LABEL_17:
        wil::details::in1diag3::Throw_Hr(
          v10,
          (void *)0x643,
          (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
          (const char *)(unsigned int)v8);
        JUMPOUT(0x18009EC72LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x65B,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
    goto LABEL_17;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x112,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      v9);
  }
}
