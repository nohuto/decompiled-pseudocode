/*
 * XREFs of MiDecrementAweMapCount @ 0x1402B031C
 * Callers:
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14085119C (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDecrementAweMapCount(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  unsigned __int8 v9; // bp
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  struct _KPRCB *CurrentPrcb; // rcx

  v7 = MiLockPageInline(a2);
  v8 = *(_QWORD *)(a2 + 24);
  v9 = v7;
  v10 = (v8 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v11 = v8 ^ (v10 ^ v8) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) = v11;
  if ( (a4 & 1) != 0 )
  {
    *(_QWORD *)(a2 + 24) = v11 | 0x4000000000000000LL;
  }
  else if ( (v8 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    v12 = *(_BYTE *)(a2 + 34);
    if ( (v12 & 8) != 0 )
    {
      v10 = 1LL;
    }
    else
    {
      *(_BYTE *)(a2 + 34) = v12 | 8;
      *(_QWORD *)(a2 + 16) = *a3;
      *a3 = a2;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v9);
  return v10;
}
