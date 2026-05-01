/*
 * XREFs of _lambda_344d118cde8247a665c09f3d1d41eb56_::operator() @ 0x1800A9F74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_344d118cde8247a665c09f3d1d41eb56___::Run @ 0x1800ABE80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_344d118cde8247a665c09f3d1d41eb56___--Run.c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18006B4E0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BD74 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ??1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C7C8 (--1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18032FCF4 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180332F7C (-RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803330DC (-RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV-$basic_string@GU-$char_traits@G.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180333F60 (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180334EE0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803389DC (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180338B48 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180340F0C (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_344d118cde8247a665c09f3d1d41eb56_::operator()(__int64 *a1)
{
  int v2; // esi
  TouchKeyboardExperienceManager **v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v9[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v9);
  v9[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivation::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v9);
  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    v3 = (TouchKeyboardExperienceManager **)(a1 + 4);
    v4 = TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)a1[4]);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v4 = TouchKeyboardExperienceManager::RegisterForViewEvents(*v3, a1);
      v5 = v4;
      if ( v4 >= 0 )
      {
        if ( (unsigned __int64)a1[3] >= 8 )
          a1 = (__int64 *)*a1;
        v2 = ActivateApplicationForExperienceWithPropertySet(
               (const unsigned __int16 *)a1,
               L"MultiViewMode",
               0LL,
               0LL,
               1u,
               0LL);
        v4 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges(*v3);
        v5 = v4;
        if ( v4 >= 0 )
        {
          v4 = TouchKeyboardExperienceManager::RegisterForApplicationStateChanges(*v3);
          v5 = v4;
          if ( v4 >= 0 )
          {
            wil::srwlock::lock_exclusive((RTL_SRWLOCK *)*v3 + 90, SRWLock);
            *((_DWORD *)*v3 + 178) = 1;
            *((_BYTE *)*v3 + 716) = 0;
            if ( SRWLock[0] )
              ReleaseSRWLockExclusive(SRWLock[0]);
            KeyboardHosting::TabTipAdapter::OnInputAppActivated(*((KeyboardHosting::TabTipAdapter **)*v3 + 91));
            goto LABEL_17;
          }
          v6 = 1983LL;
        }
        else
        {
          v6 = 1982LL;
        }
      }
      else
      {
        v6 = 1973LL;
      }
    }
    else
    {
      v6 = 1972LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_20;
  }
  v2 = -2147024255;
LABEL_17:
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v9,
    (unsigned int)v2);
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7CB,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v5 = v2;
LABEL_20:
  TouchKeyboardExperienceTelemetryLogger::InputAppActivation::~InputAppActivation((TouchKeyboardExperienceTelemetryLogger::InputAppActivation *)v9);
  return v5;
}
