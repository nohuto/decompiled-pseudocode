/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x1402E4C2C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14058B0C0 (PopUmpoProcessPowerMessage.c)
 *     PopIdleCsStateChanged @ 0x140877704 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408777CC (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x1400FC170 (KeSetTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIdleChooseDozeS4Time @ 0x1402E4D48 (PopIdleChooseDozeS4Time.c)
 *     PopIsDozeSupported @ 0x1405B0814 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1405B0968 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1408755D0 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 */

__int64 PopIdleArmAoAcDozeS4Timer()
{
  __int64 result; // rax
  char v1; // bp
  KIRQL v2; // si
  unsigned int v3; // ebx
  __int64 v4; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v6[104]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v7; // [rsp+90h] [rbp+8h] BYREF
  __int64 v8; // [rsp+98h] [rbp+10h] BYREF

  PopFilterCapabilities(&PopCapabilities, v6);
  result = PopIsDozeSupported(v6);
  v1 = 0;
  if ( (_BYTE)result )
  {
    result = PopIdleChooseDozeS4Time(&v8, &v7);
    if ( (_BYTE)result )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
      v3 = v7;
      v4 = v8;
      if ( !byte_140417684 )
      {
        KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v8, 0LL, 0LL);
        byte_140417684 = 1;
        v1 = 1;
        dword_140417688 = v3;
      }
      KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        v3 = v7;
        v4 = v8;
      }
      result = v2;
      __writecr8(v2);
      if ( v1 )
        return PopTraceSystemIdleS0LowPowerDozeTimerArmed(v3, v4);
    }
  }
  return result;
}
