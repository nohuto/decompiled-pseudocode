/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x140303EBC
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1406A1068 (PopUmpoProcessPowerMessage.c)
 *     PopIdleCsStateChanged @ 0x1408B65E4 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408B66AC (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopIdleChooseDozeS4Time @ 0x140303FE8 (PopIdleChooseDozeS4Time.c)
 *     PopIsDozeSupported @ 0x1406A203C (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1406A2194 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1408B2360 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
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

  memset(v6, 0, 0x4CuLL);
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
      if ( !byte_140442FA4 )
      {
        KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v8, 0LL, 0LL);
        byte_140442FA4 = 1;
        v1 = 1;
        dword_140442FA8 = v3;
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
