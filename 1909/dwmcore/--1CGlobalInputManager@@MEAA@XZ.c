/*
 * XREFs of ??1CGlobalInputManager@@MEAA@XZ @ 0x180235B18
 * Callers:
 *     ??_ECGlobalInputManager@@MEAAPEAXI@Z @ 0x180235D20 (--_ECGlobalInputManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800E7514 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x180235CA8 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??_GCMit@@QEAAPEAXI@Z @ 0x180235D68 (--_GCMit@@QEAAPEAXI@Z.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x18023A21C (-Stop@CMit@@QEAAXXZ.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x18023A264 (-Stop@CISMInputThread@@QEAAXXZ.c)
 */

void __fastcall CGlobalInputManager::~CGlobalInputManager(CGlobalInputManager *this)
{
  CMit *v2; // rcx
  unsigned int v3; // edx
  CDWMInputThread *v4; // rcx
  CISMInputThread *v5; // rcx
  __int64 *v6; // rdi
  CMit *v7; // rcx
  unsigned int v8; // edx
  CMit *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx

  *(_QWORD *)this = &CGlobalInputManager::`vftable';
  v2 = (CMit *)*((_QWORD *)this + 30);
  if ( v2 )
  {
    CMit::Stop(v2);
    v4 = (CDWMInputThread *)*((_QWORD *)this + 30);
    if ( v4 )
      CDWMInputThread::`scalar deleting destructor'(v4, v3);
  }
  v5 = (CISMInputThread *)*((_QWORD *)this + 31);
  if ( v5 )
  {
    CISMInputThread::Stop(v5);
    v6 = (__int64 *)*((_QWORD *)this + 31);
    if ( v6 )
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v6 + 5);
      operator delete(v6);
    }
  }
  v7 = (CMit *)*((_QWORD *)this + 32);
  if ( v7 )
  {
    CMit::Stop(v7);
    v9 = (CMit *)*((_QWORD *)this + 32);
    if ( v9 )
      CMit::`scalar deleting destructor'(v9, v8);
  }
  if ( *((_QWORD *)this + 38) )
    (*(void (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 34) + 48LL))(
      *((_QWORD *)this + 34),
      L"EdgyNotificationEndpoint",
      0LL);
  CGlobalInputManager::s_pInputManager = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 37,
    0LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 35,
    0LL);
  v10 = *((_QWORD *)this + 34);
  if ( v10 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 33);
  if ( v11 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  operator delete(*((void **)this + 27));
  operator delete(*((void **)this + 23));
  v12 = (void *)*((_QWORD *)this + 18);
  if ( v12 )
  {
    std::_Deallocate<16,0>(v12, (*((_QWORD *)this + 20) - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  operator delete(*((void **)this + 10));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
