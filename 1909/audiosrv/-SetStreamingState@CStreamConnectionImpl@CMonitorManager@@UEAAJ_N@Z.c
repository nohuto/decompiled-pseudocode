/*
 * XREFs of ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z @ 0x18010CCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003890 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BDE10 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800C1B98 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?AddMonitor@CMonitorManager@@AEAAJV?$ComPtr@VCaptureMonitor@CMonitorManager@@@WRL@Microsoft@@@Z @ 0x180107A70 (-AddMonitor@CMonitorManager@@AEAAJV-$ComPtr@VCaptureMonitor@CMonitorManager@@@WRL@Microsoft@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18010C51C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18010C6A8 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CStreamConnectionImpl::SetStreamingState(
        CMonitorManager::CStreamConnectionImpl *this,
        char a2)
{
  unsigned int v4; // edi
  int restarted; // ebp
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+60h] [rbp+18h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 1, &v8);
  v4 = 0;
  if ( a2 != *((_BYTE *)this + 16) )
  {
    restarted = 0;
    if ( a2 )
    {
      v7 = *((_QWORD *)this + 4);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v7);
      CMonitorManager::AddMonitor(*((_QWORD *)this + 3), &v7);
      restarted = CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(*((CMonitorManager::CaptureMonitor **)this
                                                                               + 4));
      if ( restarted < 0 )
        CMonitorManager::RemoveMonitor(
          *((CMonitorManager **)this + 3),
          *((CMonitorManager::CaptureMonitor **)this + 4),
          0);
      else
        *((_BYTE *)this + 16) = 1;
    }
    else
    {
      CMonitorManager::RemoveMonitor(
        *((CMonitorManager **)this + 3),
        *((CMonitorManager::CaptureMonitor **)this + 4),
        1);
      *((_BYTE *)this + 16) = 0;
    }
    v4 = restarted;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
  return v4;
}
