/*
 * XREFs of ??$CreateActivationFactory@VGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18003AA70
 * Callers:
 *     <none>
 * Callees:
 *     ??0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18003A6B8 (--0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameModeUserConfigurationStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18003B07C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_18003B07C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer>(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v6; // rbx
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v9; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v10; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v11; // rdi
  signed __int32 v12; // eax
  signed __int32 v13; // eax
  int v14; // ebx
  signed __int32 v15; // eax
  int CanCastTo; // esi
  int v17; // eax
  signed __int32 v18; // eax
  int v19; // ebx
  signed __int32 v20; // eax
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v22; // [rsp+20h] [rbp-28h]

  v6 = 0LL;
  v22 = 0LL;
  v9 = (Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *)operator new(
                                                                                               0x98uLL,
                                                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
    CanCastTo = -2147024882;
    goto LABEL_20;
  }
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GameModeUserConfigurationFactoryServer(v9);
  v11 = v10;
  if ( v10 )
  {
    v12 = _InterlockedIncrement((volatile signed __int32 *)v10 + 17);
    if ( (*((_BYTE *)v11 + 88) & 4) == 0 && v12 == 2 )
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  }
  v6 = v11;
  v22 = v11;
  if ( v11 )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 17, 0xFFFFFFFF);
    v14 = *((_DWORD *)v11 + 22);
    v15 = v13 - 1;
    if ( v15 )
    {
      if ( (v14 & 4) != 0 || v15 != 1 )
        goto LABEL_14;
    }
    else
    {
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *, __int64))(*(_QWORD *)v11 + 56LL))(
        v11,
        1LL);
      if ( (v14 & 4) == 0 || !Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_14;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
LABEL_14:
    v6 = v11;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v11,
                a3,
                a4);
  if ( CanCastTo >= 0 )
  {
    v17 = *a1;
    if ( (*a1 & 4) == 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)v11 + 17, 1u);
      v17 = *a1;
    }
    v6 = 0LL;
    *((_DWORD *)v11 + 22) = v17;
    v22 = 0LL;
    CanCastTo = 0;
    *((_QWORD *)v11 + 10) = a2;
  }
LABEL_20:
  if ( v6 )
  {
    v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 17, 0xFFFFFFFF);
    v19 = *((_DWORD *)v22 + 22);
    v20 = v18 - 1;
    if ( v20 )
    {
      if ( (v19 & 4) == 0 && v20 == 1 )
        goto LABEL_27;
    }
    else
    {
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *, __int64))(*(_QWORD *)v22 + 56LL))(
        v22,
        1LL);
      if ( (v19 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_27:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return (unsigned int)CanCastTo;
}
