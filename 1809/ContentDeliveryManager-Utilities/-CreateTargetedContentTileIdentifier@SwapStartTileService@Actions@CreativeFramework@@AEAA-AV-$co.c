/*
 * XREFs of ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180084558
 * Callers:
 *     _lambda_1b0ba9034b3100f9197d57c2e75c8407_::operator() @ 0x18008420C (_lambda_1b0ba9034b3100f9197d57c2e75c8407_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180082F40 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086D8C (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
const WCHAR *__fastcall CreativeFramework::Actions::SwapStartTileService::CreateTargetedContentTileIdentifier(
        __int64 a1,
        const WCHAR *a2,
        char *a3,
        const WCHAR *a4)
{
  const WCHAR *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+38h] [rbp-61h] BYREF
  const WCHAR *v13; // [rsp+40h] [rbp-59h] BYREF
  const WCHAR *v14[3]; // [rsp+48h] [rbp-51h] BYREF
  void *v15[3]; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-21h]
  _BYTE v17[32]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v18[32]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v14[1] = (const WCHAR *)-2LL;
  v14[2] = a2;
  v13 = a4;
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v15, a3);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(&v12);
  *(_QWORD *)a2 = 0LL;
  v5 = (const WCHAR *)v15;
  if ( v16 >= 8 )
    v5 = (const WCHAR *)v15[0];
  v14[0] = v5;
  v6 = v12;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v17, &v13);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v18, v14);
  v9 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const WCHAR *))(*(_QWORD *)v6 + 48LL))(
          v6,
          *(_QWORD *)(v8 + 24),
          *(_QWORD *)(v7 + 24),
          a2);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x18008467DLL);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v16 >= 8 )
    operator delete(v15[0]);
  return a2;
}
