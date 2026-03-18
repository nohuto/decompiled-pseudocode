/*
 * XREFs of SynthesizeTouchInputContainer @ 0x1C018CA00
 * Callers:
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x1C017D320 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C0145948 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C016E1FC (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C018C5AC (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeTouchInputContainer(_QWORD *a1)
{
  int InjectionDevice; // eax
  __int64 v3; // rax
  CInpLockGuard *v4; // rdx
  CTouchProcessor *v5; // rcx

  if ( TouchExtensibility::ghInjectionDevice )
  {
    if ( !HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19) )
      TouchExtensibility::ghInjectionDevice = 0LL;
    if ( TouchExtensibility::ghInjectionDevice )
      goto LABEL_6;
  }
  InjectionDevice = CreateInjectionDevice();
  if ( InjectionDevice )
  {
LABEL_6:
    v3 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
    InputTraceLogging::RIM::InjectInput(v3, 0);
    a1[4] = TouchExtensibility::ghInjectionDevice;
    *((_DWORD *)a1 + 18) = 1;
    CTouchProcessor::ProcessInjectedInput(v5, v4, (struct RIMCOMPLETEFRAME *)a1, 0, 0, 0);
    LOBYTE(InjectionDevice) = 1;
  }
  return InjectionDevice;
}
