/*
 * XREFs of ??_EGameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001A530
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025C80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180025CF0.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vftable';
  *((_QWORD *)this + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>'};
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 120LL))(v4, *((_QWORD *)this + 5));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x93,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    if ( *((_QWORD *)this + 6) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 120LL))(v6, *((_QWORD *)this + 6));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x99,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v7);
    }
  }
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    *((_QWORD *)this + 16) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(v8);
  }
  v9 = *((_QWORD *)this + 13);
  if ( v9 )
  {
    *((_QWORD *)this + 13) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9);
  }
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    *((_QWORD *)this + 10) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v10);
  }
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 4);
  if ( v14 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release((volatile signed __int32 *)(2 * v14));
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x88uLL);
  return this;
}
