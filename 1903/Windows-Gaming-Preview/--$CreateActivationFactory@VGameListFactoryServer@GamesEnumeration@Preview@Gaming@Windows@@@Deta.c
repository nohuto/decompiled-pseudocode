/*
 * XREFs of ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180019D50 (--0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180019EE4 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002596C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer>(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v4; // rbx
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v9; // rax
  int CanCastTo; // esi
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v11; // rdi
  signed __int32 v12; // eax
  int v13; // ebx
  signed __int32 v14; // eax
  signed __int32 v15; // eax
  signed __int32 v16; // eax
  int v17; // ebx
  signed __int32 v18; // eax
  int v19; // eax
  signed __int32 v20; // eax
  int v21; // ebx
  signed __int32 v22; // eax
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v24; // [rsp+20h] [rbp-28h]

  *a1 |= 4u;
  v4 = 0LL;
  v24 = 0LL;
  v9 = (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)operator new(
                                                                              0x70uLL,
                                                                              (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
    CanCastTo = -2147024882;
    goto LABEL_32;
  }
  v11 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GameListFactoryServer(v9);
  CanCastTo = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize(v11);
  if ( CanCastTo >= 0 )
  {
    if ( v11 )
    {
      v15 = _InterlockedIncrement((volatile signed __int32 *)v11 + 17);
      if ( (*((_BYTE *)v11 + 88) & 4) == 0 && v15 == 2 )
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    v4 = v11;
    v24 = v11;
    if ( !v11 )
      goto LABEL_26;
    v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 17, 0xFFFFFFFF);
    v17 = *((_DWORD *)v11 + 22);
    v18 = v16 - 1;
    if ( v18 )
    {
      if ( (v17 & 4) != 0 || v18 != 1 )
        goto LABEL_25;
    }
    else
    {
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *, __int64))(*(_QWORD *)v11 + 56LL))(
        v11,
        1LL);
      if ( (v17 & 4) == 0 || !Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_25;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
LABEL_25:
    v4 = v11;
LABEL_26:
    CanCastTo = 0;
    goto LABEL_27;
  }
  if ( v11 )
  {
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 17, 0xFFFFFFFF);
    v13 = *((_DWORD *)v11 + 22);
    v14 = v12 - 1;
    if ( v14 )
    {
      if ( (v13 & 4) != 0 || v14 != 1 )
        goto LABEL_12;
    }
    else
    {
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *, __int64))(*(_QWORD *)v11 + 56LL))(
        v11,
        1LL);
      if ( (v13 & 4) == 0 || !Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_12;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
LABEL_12:
    v4 = 0LL;
  }
LABEL_27:
  if ( CanCastTo >= 0 )
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v4,
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      v19 = *a1;
      if ( (*a1 & 4) == 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v4 + 17);
        v19 = *a1;
        v4 = v24;
      }
      *((_DWORD *)v4 + 22) = v19;
      *((_QWORD *)v4 + 10) = a2;
      v4 = 0LL;
      v24 = 0LL;
      CanCastTo = 0;
    }
  }
LABEL_32:
  if ( v4 )
  {
    v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 17, 0xFFFFFFFF);
    v21 = *((_DWORD *)v24 + 22);
    v22 = v20 - 1;
    if ( v22 )
    {
      if ( (v21 & 4) == 0 && v22 == 1 )
        goto LABEL_39;
    }
    else
    {
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *, __int64))(*(_QWORD *)v24 + 56LL))(
        v24,
        1LL);
      if ( (v21 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_39:
        _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
    }
  }
  return (unsigned int)CanCastTo;
}
