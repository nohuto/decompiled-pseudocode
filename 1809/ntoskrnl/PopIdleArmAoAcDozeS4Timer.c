/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x1402E4E1C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14058C0C0 (PopUmpoProcessPowerMessage.c)
 *     PopIdleCsStateChanged @ 0x140878964 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140878A2C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIdleChooseDozeS4Time @ 0x1402E4F38 (PopIdleChooseDozeS4Time.c)
 *     PopIsDozeSupported @ 0x1405B1814 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1405B1968 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x140876830 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
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
      if ( !byte_140418704 )
      {
        KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v8, 0LL, 0LL);
        byte_140418704 = 1;
        v1 = 1;
        dword_140418708 = v3;
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
