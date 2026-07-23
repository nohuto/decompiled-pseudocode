/*
 * XREFs of MiFreeUnmappedPageTables @ 0x140120930
 * Callers:
 *     MiDeleteSystemPageTableTail @ 0x140120800 (MiDeleteSystemPageTableTail.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiFreeUnmappedPageTables(ULONG_PTR a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rsi
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // r14
  unsigned __int8 v7; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = 0LL;
  v5 = a1;
  if ( a1 )
  {
    do
    {
      v6 = *(_QWORD *)v5;
      v7 = MiLockPageInline(v5);
      *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 6;
      if ( (unsigned int)MiDecrementShareCount(v5) == 3 )
        ++a2[1];
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = v7;
      __writecr8(v7);
      ++v3;
      v5 = v6;
    }
    while ( v6 );
  }
  a2[3] += v3;
  *a2 += v3;
  return result;
}
