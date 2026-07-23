/*
 * XREFs of MiChangeAwePageAttributes @ 0x1402B01A4
 * Callers:
 *     MiIncrementAweMapCount @ 0x1402B0FA4 (MiIncrementAweMapCount.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiChangeAwePageAttributes(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  __int64 v6; // rdi
  unsigned __int8 v7; // si
  __int64 v8; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // rbx
  struct _KPRCB *v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 *v15; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v6 = a2 + 24;
  v7 = MiLockPageInline(a2);
  if ( *(_WORD *)(a2 + 32) > 2u
    || (*(_QWORD *)v6 & 0x3FFFFFFFFFFFFFFFLL) != 1
    || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v7);
    return 3221225496LL;
  }
  v11 = *(_QWORD *)(a2 + 16);
  _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v12);
  }
  __writecr8(v7);
  v13 = 0LL;
  v14 = 0LL;
  if ( v3 )
  {
    while ( *(_WORD *)(v6 + 8) <= 2u && (*(_QWORD *)v6 & 0x4000000000000000LL) == 0 )
    {
      *(_QWORD *)(v6 - 8) = v13;
      ++v14;
      v13 = v6 - 24;
      v6 += 48LL;
      if ( v14 >= v3 )
        goto LABEL_20;
    }
    while ( v13 )
    {
      v15 = (__int64 *)(v13 + 16);
      v13 = *(_QWORD *)(v13 + 16);
      *v15 = v11;
    }
    return 3221225496LL;
  }
LABEL_20:
  MiChangePageAttributeBatch(v13, a3, v11, v8);
  return 0LL;
}
