/*
 * XREFs of PopFxAssignDeviceToDevNode @ 0x140191D54
 * Callers:
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
 *     PopFxRegisterDevice @ 0x140771EE0 (PopFxRegisterDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxAssignDeviceToDevNode(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  int v5; // ecx
  KIRQL v6; // di
  int v7; // eax
  int v8; // edx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v5 = *(_DWORD *)(a1 + 296);
  v6 = v4;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 296) = v5 & 0xFFFFFFF7;
    *(_WORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 100) = 0;
    *(_BYTE *)(a1 + 98) = 6;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
  }
  else
  {
    *(_DWORD *)(a1 + 296) = v5 & 0xFFFFFFFB;
  }
  v7 = *(_DWORD *)(a1 + 124);
  v8 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 120) = v8 - v7;
  *(_QWORD *)(a1 + 80) = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
