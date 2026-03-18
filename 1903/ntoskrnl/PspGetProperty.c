/*
 * XREFs of PspGetProperty @ 0x1400BD130
 * Callers:
 *     PspGetJobProperty @ 0x1400BA9E0 (PspGetJobProperty.c)
 *     PsGetThreadProperty @ 0x1400BC150 (PsGetThreadProperty.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspGetProperty(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock(a1 + 2);
  v7 = (_QWORD *)*a1;
  v8 = 0LL;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( v7[2] != a2 )
    {
      v7 = (_QWORD *)*v7;
      if ( v7 == a1 )
        goto LABEL_3;
    }
    v8 = v7;
    if ( v7 )
      ObfReferenceObjectWithTag((PVOID)v7[3], 0x72507350u);
  }
LABEL_3:
  KxReleaseSpinLock(a1 + 2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( !v8 )
    return 3221226021LL;
  result = 0LL;
  *a3 = v8[3];
  return result;
}
