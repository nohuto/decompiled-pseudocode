/*
 * XREFs of ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800862B8
 * Callers:
 *     _lambda_84d899b7d93de90bfed2062708934b25_::operator() @ 0x180085F68 (_lambda_84d899b7d93de90bfed2062708934b25_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180084C60 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088B38 (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall CreativeFramework::Actions::SwapStartTileService::CreateTargetedContentTileIdentifier(
        __int64 a1,
        __int64 *a2,
        char *a3,
        const WCHAR *a4)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, PVOID, __int64 *); // r15
  HSTRING_HEADER *v7; // rsi
  const WCHAR *v8; // rax
  HSTRING_HEADER *v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  const WCHAR *v13; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-49h] BYREF
  void *v15[3]; // [rsp+60h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-19h]
  HSTRING_HEADER v17; // [rsp+80h] [rbp-11h] BYREF
  HSTRING_HEADER v18; // [rsp+A0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v14[1] = -2LL;
  v14[2] = a2;
  v13 = a4;
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v15, a3);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(v14);
  *a2 = 0LL;
  v5 = v14[0];
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 *))(*(_QWORD *)v14[0] + 48LL);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v13);
  v8 = (const WCHAR *)v15;
  if ( v16 >= 8 )
    v8 = (const WCHAR *)v15[0];
  v13 = v8;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v13);
  v10 = *a2;
  *a2 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = v6(v5, v9[1].Reserved.Reserved1, v7[1].Reserved.Reserved1, a2);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x1800863EFLL);
  }
  if ( v14[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  if ( v16 >= 8 )
    operator delete(v15[0]);
  return a2;
}
