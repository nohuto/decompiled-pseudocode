/*
 * XREFs of ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x1800311B0
 * Callers:
 *     ??_EPenEventsDispatcherPrincipal@@UEAAPEAXI@Z @ 0x1800314B0 (--_EPenEventsDispatcherPrincipal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180033F50 (-_Freenode@-$_List_buy@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_pol.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXXZ @ 0x180034380 (-_Tidy@-$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?clear@?$list@IV?$allocator@I@std@@@std@@QEAAXXZ @ 0x1800344C0 (-clear@-$list@IV-$allocator@I@std@@@std@@QEAAXXZ.c)
 */

void __fastcall PenEventsDispatcherPrincipal::~PenEventsDispatcherPrincipal(PenEventsDispatcherPrincipal *this)
{
  __int64 *v1; // rbx
  void *v3; // rcx
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx

  v1 = (__int64 *)((char *)this + 208);
  std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Tidy((char *)this + 272);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v1 + 1,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v1);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 25);
  v3 = (void *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 20) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  std::list<unsigned int>::clear((char *)this + 128);
  std::_Deallocate<16,0>(*((void **)this + 16), (const struct std::nothrow_t *)0x18);
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 12) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 8);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) = *((_QWORD *)this + 8);
  *((_QWORD *)this + 9) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      std::_List_buy<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>::_Freenode();
      v7 = (_QWORD *)*((_QWORD *)this + 8);
      v6 = v8;
    }
    while ( v8 != v7 );
  }
  std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x20);
  Microsoft::BamoImpl::BamoPrincipalImpl::~BamoPrincipalImpl((PenEventsDispatcherPrincipal *)((char *)this + 16));
}
