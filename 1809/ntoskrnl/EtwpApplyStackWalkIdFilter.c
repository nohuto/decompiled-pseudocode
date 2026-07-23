/*
 * XREFs of EtwpApplyStackWalkIdFilter @ 0x1403147A4
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1408C3140 (EtwpApplyStackWalkFilterOnUserEvent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpPerfectHashFunctionSearch @ 0x140314BA4 (EtwpPerfectHashFunctionSearch.c)
 */

bool __fastcall EtwpApplyStackWalkIdFilter(unsigned __int16 a1, __int64 a2, unsigned int a3, char a4)
{
  bool v4; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v6; // r11
  unsigned __int8 v7; // al
  _BYTE *v8; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v10; // al
  _BYTE *v11; // rdx

  v4 = 1;
  if ( a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v6 = 2;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 384) + 48) )
    {
      v7 = EtwpPerfectHashFunctionSearch(a1);
      v4 = *v8 == v7;
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v6 && CurrentIrql < v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
  else if ( *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 384) + 48) )
  {
    v10 = EtwpPerfectHashFunctionSearch(a1);
    return *v11 == v10;
  }
  return v4;
}
