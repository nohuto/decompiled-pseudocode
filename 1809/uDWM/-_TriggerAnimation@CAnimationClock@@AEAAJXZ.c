/*
 * XREFs of ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180039610
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180027844 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001B8E4 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180027E44 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002814C (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800397AC (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800397D8 (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180043E08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008C55C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimationClock::_TriggerAnimation(CAnimationClock *this)
{
  __int128 v2; // xmm0
  signed int v3; // edi
  __int64 v4; // rdx
  CBaseObject *v6; // rbx
  int v7; // eax
  int v8; // [rsp+28h] [rbp-E0h]
  unsigned int v9[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE hObject[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v11[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v11,
    (__int64)"TriggerClock");
  v2 = *(_OWORD *)((char *)this + 120);
  v11[0] = &AnimationClockLoggingTelemetry::TriggerClock::`vftable';
  *(_OWORD *)&hObject[1] = v2;
  AnimationClockLoggingTelemetry::TriggerClock::StartActivity(
    (AnimationClockLoggingTelemetry::TriggerClock *)v11,
    (struct _GUID *)&hObject[1]);
  v3 = 0;
  if ( (unsigned __int64)(*((_QWORD *)this + 14) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v7 = NtDCompositionCommitSynchronizationObject();
    if ( v7 < 0 )
    {
      v3 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xDA,
             (unsigned int)"windows\\dwm\\udwm\\animationclock.cpp",
             (const char *)(unsigned int)v7,
             v8);
      goto LABEL_4;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 112,
      0LL);
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 26)
                                                              + 224LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
           v4,
           hObject);
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                 + 5)
                                                                              + 120LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
             hObject[0],
             1LL,
             v9);
      if ( v3 >= 0 )
      {
        v3 = CResource::WrapExistingResource(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
               v9[0],
               (struct CResource **)&hObject[1]);
        if ( v3 >= 0 )
        {
          v6 = (CBaseObject *)hObject[1];
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)hObject[1] + 2) + 1024LL))(
                 *((_QWORD *)hObject[1] + 2),
                 *((unsigned int *)hObject[1] + 6),
                 *((_QWORD *)this + 11));
          CBaseObject::Release(v6);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 128LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          v9[0]);
      }
      CloseHandle(hObject[0]);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, v3);
LABEL_4:
  AnimationClockLoggingTelemetry::TriggerClock::~TriggerClock((AnimationClockLoggingTelemetry::TriggerClock *)v11);
  return (unsigned int)v3;
}
