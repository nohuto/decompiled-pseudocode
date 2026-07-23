/*
 * XREFs of KiEnumerateNmiSxCallback @ 0x140001BF0
 * Callers:
 *     KiEnumerateCallback @ 0x140001B90 (KiEnumerateCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiEnumerateNmiSxCallback(PVOID **a1, unsigned __int8 *a2, _QWORD *a3)
{
  PVOID *v3; // rax
  PVOID *v4; // r9
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 v8; // bl
  __int64 result; // rax
  PVOID *v10; // rcx

  v3 = *a1;
  v4 = &KiNmiCallbackListHead;
  if ( *a1 == &KiNmiCallbackListHead )
    goto LABEL_5;
  if ( v3 )
    goto LABEL_10;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  *a2 = CurrentIrql;
  v3 = (PVOID *)KiNmiCallbackListHead;
  if ( KiNmiCallbackListHead )
  {
LABEL_10:
    *a3 = v3[1];
    v10 = (PVOID *)*v3;
    result = 1LL;
    if ( v10 )
      v4 = v10;
    *a1 = v4;
  }
  else
  {
LABEL_5:
    v8 = *a2;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    __writecr8(v8);
    return 0LL;
  }
  return result;
}
