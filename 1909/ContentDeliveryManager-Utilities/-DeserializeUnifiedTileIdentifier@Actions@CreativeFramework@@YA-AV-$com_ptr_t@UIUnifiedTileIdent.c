/*
 * XREFs of ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x180085080
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008580C (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180085E54 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008896C (--$GetActivationFactory@UIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@@wil@@.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(__int64 *a1, const WCHAR **a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, PVOID, __int64 *); // rbp
  HSTRING_HEADER *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  _QWORD v10[3]; // [rsp+28h] [rbp-60h] BYREF
  HSTRING_HEADER v11; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v10[1] = -2LL;
  v10[2] = a1;
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifierStatics>(v10);
  *a1 = 0LL;
  v4 = v10[0];
  v5 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v10[0] + 48LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, a2);
  v7 = *a1;
  *a1 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = v5(v4, v6[1].Reserved.Reserved1, a1);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x180085169LL);
  }
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  return a1;
}
