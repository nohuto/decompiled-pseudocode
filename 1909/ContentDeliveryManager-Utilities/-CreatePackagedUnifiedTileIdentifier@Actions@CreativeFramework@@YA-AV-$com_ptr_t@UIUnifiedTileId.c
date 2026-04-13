/*
 * XREFs of ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W@Z @ 0x180085170
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008580C (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088A3C (--$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
const WCHAR *__fastcall CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(
        const WCHAR *a1,
        const WCHAR *a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, PVOID, const WCHAR *); // rbp
  HSTRING_HEADER *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+28h] [rbp-60h] BYREF
  const WCHAR *v10[3]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER v11; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v10[1] = (const WCHAR *)-2LL;
  v10[2] = a1;
  v10[0] = a2;
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>(&v9);
  *(_QWORD *)a1 = 0LL;
  v3 = v9;
  v4 = *(__int64 (__fastcall **)(__int64, PVOID, const WCHAR *))(*(_QWORD *)v9 + 48LL);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, v10);
  v6 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = v4(v3, v5[1].Reserved.Reserved1, a1);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x18008525CLL);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return a1;
}
