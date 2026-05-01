/*
 * XREFs of _lambda_6920fd0394d91195244b848df2c49eea_::operator() @ 0x180092D3C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6920fd0394d91195244b848df2c49eea___::Run @ 0x180093B10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6920fd0394d91195244b848df2c49eea___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800629D0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180088C90 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B41CC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ??1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802B4A44 (--1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802B9C5C (-RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802B9DBC (-RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV-$basic_string@GU-$char_traits@G.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802BA710 (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802BAB24 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802BC79C (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802BC8F4 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C3B3C (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6920fd0394d91195244b848df2c49eea_::operator()(__int64 *a1)
{
  const unsigned __int16 *v1; // rbx
  TouchKeyboardExperienceManager **v2; // rdi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v6; // r9
  int v7; // esi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v12[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  v1 = (const unsigned __int16 *)a1;
  v2 = (TouchKeyboardExperienceManager **)(a1 + 4);
  v3 = TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)a1[4]);
  if ( v3 < 0 )
  {
    v4 = 1666LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = TouchKeyboardExperienceManager::RegisterForViewEvents(*v2, v1);
  if ( v3 < 0 )
  {
    v4 = 1667LL;
    goto LABEL_3;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v12);
  v12[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivation::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v12);
  if ( *((_QWORD *)v1 + 3) >= 8uLL )
    v1 = *(const unsigned __int16 **)v1;
  v7 = ActivateApplicationForExperienceWithPropertySet(v1, L"MultiViewMode", 0LL, v6, 1u, 0LL);
  v8 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges(*v2);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = TouchKeyboardExperienceManager::RegisterForApplicationStateChanges(*v2);
    v9 = v8;
    if ( v8 >= 0 )
    {
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)*v2 + 86, SRWLock);
      *((_DWORD *)*v2 + 170) = 1;
      if ( SRWLock[0] )
        ReleaseSRWLockExclusive(SRWLock[0]);
      KeyboardHosting::TabTipAdapter::OnInputAppActivated(*((KeyboardHosting::TabTipAdapter **)*v2 + 87));
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v12,
        (unsigned int)v7);
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x69A,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
      v9 = v7;
      goto LABEL_18;
    }
    v10 = 1680LL;
  }
  else
  {
    v10 = 1679LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_18:
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::~InputAppActivation((TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v12);
  return v9;
}
