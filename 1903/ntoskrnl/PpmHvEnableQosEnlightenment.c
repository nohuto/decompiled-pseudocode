/*
 * XREFs of PpmHvEnableQosEnlightenment @ 0x14077369C
 * Callers:
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 * Callees:
 *     PpmConvertTime @ 0x140004E24 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x140284C54 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmReinitializeHeteroEngine @ 0x140772AA8 (PpmReinitializeHeteroEngine.c)
 */

struct _KPRCB *PpmHvEnableQosEnlightenment()
{
  struct _KPRCB *result; // rax
  __int64 Prcb; // rax
  unsigned int v2; // edx
  unsigned __int16 *v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+32h] [rbp-16h]
  __int16 v6; // [rsp+36h] [rbp-12h]
  ULONG v7; // [rsp+50h] [rbp+8h] BYREF

  result = KeGetCurrentPrcb();
  v5 = 0;
  v6 = 0;
  if ( result->PowerState.Hypervisor == ProcHypervisorPresent )
  {
    result = (struct _KPRCB *)HvlIsRootPowerSchedulerQosPresent();
    if ( (_BYTE)result )
    {
      if ( !PpmPerfVmQosSupported )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        v3[1] = (unsigned __int16 *)qword_14042A7F8[0];
        v3[0] = (unsigned __int16 *)PpmCheckRegistered;
        v4 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v3) )
        {
          Prcb = KeGetPrcb(v7);
          v2 = PpmPerfQosTransitionHysteresisOverride;
          if ( PpmPerfQosTransitionHysteresisOverride == -1 )
          {
            v2 = PpmPerfQosTransitionHysteresis19h2;
            if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
              v2 = PpmPerfQosTransitionHysteresis;
          }
          *(_QWORD *)(Prcb + 24296) = PpmConvertTime(v2, 0xF4240uLL, 1000000LL * *(unsigned int *)(Prcb + 68));
        }
        PpmPerfQosManageIdleProcessors = 0;
        PpmPerfVmQosSupported = 1;
        return (struct _KPRCB *)PpmReinitializeHeteroEngine(1);
      }
    }
  }
  return result;
}
