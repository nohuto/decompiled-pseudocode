/*
 * XREFs of ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800797EC
 * Callers:
 *     ??1CAnalogCompositorManager@@AEAA@XZ @ 0x18004E194 (--1CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004DA14 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180079A24 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180079A7C (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18007A550 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18007A768 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

void __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher(
        Windows::Mirage::HolographicDriverDetectedWatcher *this,
        void *a2)
{
  CONFIGRET v3; // eax
  DWORD v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rsi
  unsigned int v7; // edx
  wil::details::event_watcher_state *v8; // rcx
  wil::details::event_watcher_state *v9; // rcx
  wil::details *v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 5) )
  {
    v3 = CM_Unregister_Notification();
    v4 = CM_MapCrToWin32Err(v3, 0x507u);
    if ( v4 )
    {
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x7D, v5, (const char *)v4, v11);
      __debugbreak();
    }
    *((_QWORD *)this + 5) = 0LL;
  }
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v6 + 152));
    SRWLock = (PSRWLOCK)(v6 + 152);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 148), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v6, v7);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  v8 = (wil::details::event_watcher_state *)*((_QWORD *)this + 3);
  if ( v8 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v8, (unsigned int)a2);
  v9 = (wil::details::event_watcher_state *)*((_QWORD *)this + 2);
  if ( v9 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v9, (unsigned int)a2);
  v10 = (wil::details *)*((_QWORD *)this + 1);
  if ( v10 )
    wil::details::CloseHandle(v10, a2);
  if ( *(_QWORD *)this )
    wil::details::CloseHandle(*(wil::details **)this, a2);
}
