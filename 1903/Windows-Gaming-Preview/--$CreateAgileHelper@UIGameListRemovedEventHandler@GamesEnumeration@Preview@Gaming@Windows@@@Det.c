/*
 * XREFs of ??$CreateAgileHelper@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAPEAU34567@@Z @ 0x18001E404
 * Callers:
 *     ?add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001B850 (-add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGa.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180010714 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler>(
        __int64 a1,
        _QWORD *a2)
{
  int AgileReference; // ebx
  __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rsi
  char *v7; // rdi
  _QWORD *v8; // rsi
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h]
  __int64 v15; // [rsp+88h] [rbp+48h]

  *a2 = 0LL;
  AgileReference = 0;
  v14 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  if ( a1 )
    AgileReference = RoGetAgileReference(0LL, &GUID_10c5648f_6c8f_4712_9b38_474bc22e76d8, a1, &v12);
  if ( AgileReference >= 0 )
  {
    v4 = v12;
    v12 = 0LL;
    v13 = v4;
    v5 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = 0LL;
    v7 = v5;
    if ( v5 )
    {
      v8 = v5 + 8;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 8));
      v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler'};
      *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_DWORD *)v7 + 15) = 1;
      if ( !v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v4 = v13;
      }
      *((_QWORD *)v7 + 8) = 0LL;
      if ( v7 + 64 != (char *)&v13 )
      {
        *((_QWORD *)v7 + 8) = v4;
        v4 = 0LL;
      }
      *(_QWORD *)v7 = off_180048D68;
      *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v6 = v7;
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v6 )
    {
      *a2 = v6;
      AgileReference = 0;
    }
    else
    {
      AgileReference = -2147024882;
    }
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)AgileReference;
}
