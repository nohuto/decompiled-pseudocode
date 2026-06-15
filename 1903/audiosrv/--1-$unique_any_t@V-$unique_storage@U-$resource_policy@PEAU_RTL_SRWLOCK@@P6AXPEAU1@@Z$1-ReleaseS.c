/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BE2E0
 * Callers:
 *     _CStreamConnectionManagerImpl::GetInstance_::_1_::dtor$0 @ 0x180071E3A (_CStreamConnectionManagerImpl--GetInstance_--_1_--dtor$0.c)
 *     ??1CMonitorManager@@QEAA@XZ @ 0x1801078BC (--1CMonitorManager@@QEAA@XZ.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z @ 0x18010D1A0 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z.c)
 *     _CMonitorManager::CStreamConnectionImpl::SetStreamingState_::_1_::dtor$0 @ 0x18010D251 (_CMonitorManager--CStreamConnectionImpl--SetStreamingState_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
