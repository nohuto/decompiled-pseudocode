/*
 * XREFs of ?PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z @ 0x18008F8F0
 * Callers:
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008FA20 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067F1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18008A228 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x18008F750 (-PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::PinPackagedAppToTaskbar(
        PCWSTR packageFamilyName,
        PCWSTR packageRelativeApplicationId,
        const wchar_t *a3)
{
  char v3; // si
  unsigned int v6; // eax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  const wchar_t *v9; // rdx
  __int64 v10; // r8
  const wchar_t *v11; // r9
  CreativeFramework::Actions **v12; // rcx
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h]
  CreativeFramework::Actions *v15[3]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h]
  WCHAR applicationUserModelId[136]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v14 = -2LL;
  v3 = (char)a3;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(
         packageFamilyName,
         packageRelativeApplicationId,
         &applicationUserModelIdLength,
         applicationUserModelId);
  v7 = 0LL;
  if ( v6 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x18,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)v6);
    JUMPOUT(0x18008FA0ALL);
  }
  v16 = 7LL;
  v15[2] = 0LL;
  LOWORD(v15[0]) = 0;
  if ( applicationUserModelId[0] )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( applicationUserModelId[v8] );
    v7 = v8;
  }
  std::wstring::assign(v15, (char *)applicationUserModelId, v7);
  v12 = v15;
  if ( v16 >= 8 )
    v12 = (CreativeFramework::Actions **)v15[0];
  LOBYTE(v11) = v3;
  CreativeFramework::Actions::PinApp((const WCHAR *)v12, v9, v10, v11);
  if ( v16 >= 8 )
    operator delete(v15[0]);
}
