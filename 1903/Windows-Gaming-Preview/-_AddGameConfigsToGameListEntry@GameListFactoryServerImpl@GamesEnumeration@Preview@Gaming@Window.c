/*
 * XREFs of ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001C0D8
 * Callers:
 *     _lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::operator() @ 0x18001BBF0 (_lambda_2bb0be94c8b34b0b06b3ace075c36ca6_--operator().c)
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator() @ 0x18001C5F8 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000E854 (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800116A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800116A0.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x180015500 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@UG.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026AE8 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180028CF0 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 *     __security_check_cookie @ 0x1800426D0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
        __int64 a1,
        __int64 a2,
        volatile signed __int64 **a3,
        __int64 *a4)
{
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // r15d
  int v11; // ecx
  __int128 v12; // xmm6
  int GameFromGameConfigStore; // eax
  int v14; // ebx
  volatile signed __int64 *v15; // rcx
  __int64 v16; // rbx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v17; // rax
  volatile signed __int64 *v18; // rdi
  const struct std::nothrow_t *v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  const struct std::nothrow_t *v25; // rdx
  void *v27[6]; // [rsp+38h] [rbp-99h] BYREF
  __int128 v28[2]; // [rsp+68h] [rbp-69h] BYREF
  __int128 v29; // [rsp+88h] [rbp-49h] BYREF
  __int64 v30; // [rsp+98h] [rbp-39h]
  unsigned int v31; // [rsp+A0h] [rbp-31h] BYREF
  int *v32; // [rsp+A8h] [rbp-29h]
  int v33; // [rsp+B0h] [rbp-21h] BYREF
  _DWORD v34[9]; // [rsp+B4h] [rbp-1Dh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v27[2] = (void *)-2LL;
  v30 = a2;
  v32 = &v33;
  v33 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v31);
  *v32 = v7;
  if ( v7 >= 0 && v31 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v30 + 48LL))(v30, 0LL, v34);
    *v32 = v8;
  }
  v9 = 0;
  v10 = v31;
  v11 = 0;
  while ( 1 )
  {
    if ( *v32 < 0 || v11 == v10 )
      return 0LL;
    v12 = *(_OWORD *)v34;
    *(_OWORD *)&v34[5] = *(_OWORD *)v34;
    v27[0] = 0LL;
    v28[0] = *(_OWORD *)v34;
    GameFromGameConfigStore = GetGameFromGameConfigStore(*a4, v28, v27);
    v14 = GameFromGameConfigStore;
    if ( GameFromGameConfigStore < 0 )
      break;
    v15 = *a3;
    if ( *a3 )
    {
      v29 = v12;
      GameFromGameConfigStore = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfig(
                                  v15 + 3,
                                  &v29,
                                  v27,
                                  a4);
      v14 = GameFromGameConfigStore;
      if ( GameFromGameConfigStore < 0 )
      {
        v24 = 596LL;
        goto LABEL_34;
      }
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 128);
      *a3 = 0LL;
      v17 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                                 0x138uLL,
                                                                                 (const struct std::nothrow_t *)&std::nothrow);
      if ( !v17 )
      {
        v14 = -2147024882;
LABEL_31:
        v23 = (unsigned int)v14;
        v24 = 589LL;
        goto LABEL_35;
      }
      v18 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v17);
      v27[3] = (void *)v18;
      v27[4] = 0LL;
      v28[1] = v12;
      v14 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
              (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v18,
              (v16 + 8) & -(__int64)(v16 != 0));
      if ( v14 >= 0 )
      {
        if ( v18 )
        {
          v20 = *((_QWORD *)v18 + 17);
          v27[1] = (void *)v20;
          while ( v20 >= 0 )
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange64(v18 + 17, v20 + 1, v20);
            if ( v21 == v20 )
              goto LABEL_19;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v20 + 16));
        }
LABEL_19:
        *a3 = v18;
        if ( v18 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v18);
        v14 = 0;
      }
      else if ( v18 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v18);
      }
      if ( v14 < 0 )
        goto LABEL_31;
    }
    if ( v27[0] )
      operator delete(v27[0], v19);
    v11 = ++v9;
    if ( *v32 >= 0 && v9 < v31 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v30 + 48LL))(v30, v9, v34);
      *v32 = v22;
      v11 = v9;
    }
  }
  v24 = 579LL;
LABEL_34:
  v23 = (unsigned int)GameFromGameConfigStore;
LABEL_35:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)v23);
  if ( v27[0] )
    operator delete(v27[0], v25);
  return (unsigned int)v14;
}
