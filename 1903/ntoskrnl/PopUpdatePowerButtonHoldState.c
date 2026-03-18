/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x140301890
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1402F1880 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
  v5 = 1LL << ((dword_140438A64 + dword_140438A68) & 0x3F);
  if ( a1 )
  {
    qword_140438A70 |= v5;
    v3 = 1;
    ++dword_140438A68;
  }
  else
  {
    qword_140438A70 &= ~v5;
    ++dword_140438A64;
  }
  if ( v3 != (qword_140438A38 & 1) )
  {
    if ( a1 )
    {
      ++HIDWORD(qword_140438A38);
      LODWORD(qword_140438A38) = qword_140438A38 | 1;
    }
    else
    {
      LODWORD(qword_140438A38) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140438A10, CriticalWorkQueue);
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
