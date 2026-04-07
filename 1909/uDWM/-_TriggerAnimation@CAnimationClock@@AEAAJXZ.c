/*
 * XREFs of ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000940C
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180008334 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180006B28 (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x180006F54 (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180008944 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180008C04 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x18003B988 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040AB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180092248 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimationClock::_TriggerAnimation(CAnimationClock *this)
{
  __int128 v2; // xmm0
  int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  CBaseObject *v7; // rbx
  int v8; // eax
  CBaseObject *v9; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD hObject[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v11[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
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
    v8 = NtDCompositionCommitSynchronizationObject();
    if ( v8 < 0 )
    {
      v3 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xDA,
             (unsigned int)"windows\\dwm\\udwm\\animationclock.cpp",
             (const char *)(unsigned int)v8,
             (int)v9);
      goto LABEL_4;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 112,
      0LL);
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 26)
                                                              + 224LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
           v4,
           &hObject[1]);
    if ( v3 >= 0 )
    {
      v9 = 0LL;
      v6 = CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
             hObject[1],
             &v9);
      v7 = v9;
      v3 = v6;
      if ( v6 >= 0 )
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v9 + 2) + 16LL) + 936LL))(
               *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL),
               *(unsigned int *)(*((_QWORD *)v9 + 2) + 24LL),
               *((_QWORD *)this + 11));
      CloseHandle((HANDLE)hObject[1]);
      if ( v7 )
        CBaseObject::Release(v7);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, v3);
LABEL_4:
  AnimationClockLoggingTelemetry::TriggerClock::~TriggerClock((AnimationClockLoggingTelemetry::TriggerClock *)v11);
  return (unsigned int)v3;
}
