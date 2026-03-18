/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x1402E494C
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1402D6AB0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x140138CA8 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
  v5 = 1LL << ((dword_140410164 + dword_140410168) & 0x3F);
  if ( a1 )
  {
    qword_140410170 |= v5;
    v3 = 1;
    ++dword_140410168;
  }
  else
  {
    qword_140410170 &= ~v5;
    ++dword_140410164;
  }
  if ( v3 != (qword_140410138 & 1) )
  {
    if ( a1 )
    {
      ++HIDWORD(qword_140410138);
      LODWORD(qword_140410138) = qword_140410138 | 1;
    }
    else
    {
      LODWORD(qword_140410138) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140410110, CriticalWorkQueue);
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
