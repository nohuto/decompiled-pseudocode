/*
 * XREFs of PpmCheckInitProcessors @ 0x140750028
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140750214 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x140866F00 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     KeOrAffinityEx @ 0x1400DC970 (KeOrAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1400ED8C0 (KeSubtractAffinityEx.c)
 *     PpmParkRegisterParking @ 0x1401897F0 (PpmParkRegisterParking.c)
 *     PpmCheckApplyParkConstraints @ 0x14018A338 (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity @ 0x14018A4D0 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x1402710E4 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmUpdateProcessorPolicy @ 0x14071DDD8 (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x14074F678 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x1407501A4 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x140750304 (PpmCheckReInit.c)
 */

void __fastcall PpmCheckInitProcessors(int a1)
{
  __int64 Prcb; // rax
  __int64 v2; // rax
  unsigned int v3; // edx
  int v4; // [rsp+28h] [rbp-E0h] BYREF
  ULONG v5; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v6; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 *v7[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v9[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v10; // [rsp+60h] [rbp-A8h]
  _QWORD v11[22]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v12[88]; // [rsp+118h] [rbp+10h] BYREF

  if ( a1 )
  {
    LODWORD(v11[0]) = 1310721;
    memset((char *)v11 + 4, 0, 0xA4uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v12);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v12, (unsigned __int16 *)PpmCheckRegistered, v11) )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
      return;
    }
  }
  KeOrAffinityEx((unsigned __int16 *)PpmCheckRegistered, (unsigned __int16 *)v11, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v11) )
  {
    v7[1] = (unsigned __int16 *)v11[1];
    v7[0] = (unsigned __int16 *)v11;
    LOWORD(v8) = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v7) )
    {
      Prcb = KeGetPrcb(v5);
      PpmAllocatePerfCheck(Prcb);
    }
    PopExecuteOnTargetProcessors((__int64)v11, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
  {
    LOWORD(v4) = 0;
    PpmAllowedActions |= 0x400u;
    v4 |= 0x400u;
    PpmUpdateProcessorPolicy(&v4, 0LL);
  }
  PpmCheckReInit();
  PpmCheckApplyParkConstraints();
  if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPresent
    && (unsigned __int8)HvlIsRootPowerSchedulerQosPresent()
    && !PpmPerfVmQosSupported )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v9[1] = (unsigned __int16 *)qword_140405158[0];
    LOWORD(v10) = 0;
    v9[0] = (unsigned __int16 *)PpmCheckRegistered;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v9) )
    {
      v2 = KeGetPrcb(v6);
      v3 = PpmPerfQosTransitionHysteresisOverride;
      if ( PpmPerfQosTransitionHysteresisOverride == -1 )
        v3 = PpmPerfQosTransitionHysteresis;
      *(_QWORD *)(v2 + 24296) = PpmConvertTime(v3, 0xF4240uLL, 1000000LL * *(unsigned int *)(v2 + 68));
    }
    PpmPerfQosManageIdleProcessors = 0;
    PpmPerfVmQosSupported = 1;
    PpmReinitializeHeteroEngine(1);
  }
}
