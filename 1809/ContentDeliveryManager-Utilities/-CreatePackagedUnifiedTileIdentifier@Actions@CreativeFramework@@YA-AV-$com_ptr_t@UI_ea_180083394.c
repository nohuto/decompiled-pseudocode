/*
 * XREFs of ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180083394
 * Callers:
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180083648 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008394C (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086AE8 (--$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800882B8 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(
        __int64 *a1,
        const WCHAR *a2,
        const WCHAR *a3)
{
  unsigned int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  Microsoft::WRL::Details *v12; // rcx
  unsigned int v13; // eax
  UINT32 v14; // edx
  HRESULT v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+24h] [rbp-DCh]
  _QWORD v21[3]; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v21[1] = -2LL;
  v21[2] = a1;
  v20 = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a2, a3, &applicationUserModelIdLength, applicationUserModelId);
  v7 = retaddr;
  if ( v6 )
    goto LABEL_20;
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>(v21);
  *a1 = 0LL;
  v20 = 1;
  v8 = v21[0];
  v9 = -1LL;
  do
    ++v9;
  while ( applicationUserModelId[v9] );
  v10 = -1;
  v11 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v11 = v9;
  v12 = v9 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0LL;
  if ( v9 > 0xFFFFFFFF )
  {
LABEL_21:
    Microsoft::WRL::Details::RaiseException(v12);
    __debugbreak();
  }
  v13 = v11 + 1;
  if ( v11 + 1 >= v11 )
    v10 = v11 + 1;
  if ( v13 < v11 )
  {
    Microsoft::WRL::Details::RaiseException(v13 < v11 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v14 = v10 - 1;
  if ( v11 < v10 )
    v14 = v11;
  v15 = WindowsCreateStringReference(applicationUserModelId, v14, &hstringHeader, &string);
  if ( v15 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    JUMPOUT(0x180083552LL);
  }
  v16 = *a1;
  *a1 = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, string, a1);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v17);
LABEL_20:
    wil::details::in1diag3::_Throw_Win32(
      v7,
      (void *)0x4D,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)v6,
      applicationUserModelIdLength);
    goto LABEL_21;
  }
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
  return a1;
}
