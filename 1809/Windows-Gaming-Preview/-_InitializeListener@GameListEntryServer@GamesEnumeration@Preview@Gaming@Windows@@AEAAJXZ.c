/*
 * XREFs of ?_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027DDC
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026914 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800102D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800102D0.c)
 *     wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64___lambda_d22facc111afee216f03a1c91e368862___ @ 0x18002C014 (wil--MakeAgileCallbackNoThrow_Windows--Foundation--ITypedEventHandler_WindowsIntern_ea_18002C014.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeListener(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v3; // rbx
  int v4; // esi
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  _QWORD v11[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h]

  if ( !*((_QWORD *)this + 32) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  v3 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v4 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::QueryInterface(
         (__int64)this,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v14);
  if ( v4 >= 0 )
  {
    v13 = 0LL;
    v7 = v14;
    v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v14 + 24))(v14, &v13);
    v8 = v13;
    if ( v4 >= 0 )
    {
      v3 = v13;
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v8 = v13;
      }
      v15 = v3;
      if ( v8 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
      v4 = 0;
      goto LABEL_16;
    }
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v6 = *v7;
    v5 = v7;
    goto LABEL_6;
  }
  v5 = v14;
  if ( v14 )
  {
    v6 = *v14;
LABEL_6:
    (*(void (__fastcall **)(__int64 *))(v6 + 16))(v5);
  }
LABEL_16:
  if ( v4 >= 0 )
  {
    v11[0] = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v11[1] = this;
    wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64___lambda_d22facc111afee216f03a1c91e368862___(
      &v13,
      v11);
    if ( v11[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
    v9 = v13;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 32) + 152LL))(
            *((_QWORD *)this + 32),
            v13,
            (char *)this + 264);
    v4 = v10;
    if ( v10 >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x231,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x214,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
