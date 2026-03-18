/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x140301340
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1402F15E0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // al
  int v3; // r11d
  KIRQL v4; // bl
  __int64 v5; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << ((dword_1404389E4 + dword_1404389E8) & 0x3F);
  if ( a1 )
  {
    qword_1404389F0 |= v5;
    v3 = 1;
    ++dword_1404389E8;
  }
  else
  {
    qword_1404389F0 &= ~v5;
    ++dword_1404389E4;
  }
  if ( v3 != (qword_1404389B8 & 1) )
  {
    if ( a1 )
    {
      ++HIDWORD(qword_1404389B8);
      LODWORD(qword_1404389B8) = qword_1404389B8 | 1;
    }
    else
    {
      LODWORD(qword_1404389B8) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140438990, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
