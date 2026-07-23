/*
 * XREFs of PopFxAssignDeviceToDevNode @ 0x140179DFC
 * Callers:
 *     PopFxRegisterDevice @ 0x140726430 (PopFxRegisterDevice.c)
 *     PopFxUnregisterDevice @ 0x14086BA0C (PopFxUnregisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
