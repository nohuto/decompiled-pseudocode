/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x1402E4C3C
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1402D6DA0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
  v5 = 1LL << ((dword_140411204 + dword_140411208) & 0x3F);
  if ( a1 )
  {
    qword_140411210 |= v5;
    v3 = 1;
    ++dword_140411208;
  }
  else
  {
    qword_140411210 &= ~v5;
    ++dword_140411204;
  }
  if ( v3 != (qword_1404111D8 & 1) )
  {
    if ( a1 )
    {
      ++HIDWORD(qword_1404111D8);
      LODWORD(qword_1404111D8) = qword_1404111D8 | 1;
    }
    else
    {
      LODWORD(qword_1404111D8) = 0;
    }
    PopQueueWorkItem((__int64)&unk_1404111B0, CriticalWorkQueue);
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
