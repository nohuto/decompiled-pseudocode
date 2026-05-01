/*
 * XREFs of ?_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18001B370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800118F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800118F0.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAVGameListEntryUpdateHandler@2345@@Details@WRL@Microsoft@@YAJPEAPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@9Shell@WindowsInternal@@$$QEAPEAVGameListEntryUpdateHandler@4567@@Z @ 0x18001DF28 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIU.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_ @ 0x18001F2B0 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Wind.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025C80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *a2)
{
  int v4; // eax
  int v5; // edi
  int updated; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  RTL_SRWLOCK *v9; // r14
  _DWORD *Ptr; // rbx
  signed __int32 v11; // eax
  volatile signed __int64 *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  volatile signed __int64 *v18; // [rsp+78h] [rbp+38h] BYREF
  _QWORD *v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v16[1] = -2LL;
  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *, _QWORD **))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v19);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    v20 = *((_QWORD *)this + 16);
    updated = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *,Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *>(
                &v18,
                &v15,
                &v14,
                &v20,
                *((_QWORD *)this + 7),
                v19);
    v5 = updated;
    if ( updated >= 0 )
    {
      v16[0] = v18;
      v9 = (RTL_SRWLOCK *)((char *)this + 80);
      v5 = 0;
      Ptr = 0LL;
      AcquireSRWLockExclusive(v9 + 1);
      if ( v9->Ptr )
      {
        Ptr = v9->Ptr;
        do
          v11 = Ptr[3];
        while ( v11 != 0x7FFFFFFF && v11 != _InterlockedCompareExchange(Ptr + 3, v11 + 1, v11) );
      }
      if ( v9 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(v9 + 1);
      if ( !Ptr )
        goto LABEL_17;
      v5 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_(
             v16,
             Ptr,
             v9);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(Ptr);
      if ( v5 >= 0 )
        goto LABEL_17;
      v7 = (unsigned int)v5;
      v8 = 365LL;
    }
    else
    {
      v7 = (unsigned int)updated;
      v8 = 363LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v7);
LABEL_17:
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v12);
    }
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x164,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v4);
LABEL_19:
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  }
  return (unsigned int)v5;
}
