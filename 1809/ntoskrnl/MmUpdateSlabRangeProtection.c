/*
 * XREFs of MmUpdateSlabRangeProtection @ 0x1409F85B8
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiCompareSlabEntry @ 0x1402C2154 (MiCompareSlabEntry.c)
 *     MiInsertSlabEntry @ 0x1402C2C94 (MiInsertSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x1402C2E44 (MiRemoveSlabEntry.c)
 */

__int64 __fastcall MmUpdateSlabRangeProtection(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  ULONG_PTR BugCheckParameter4; // rdi
  void *v6; // r14
  KIRQL v7; // r15
  unsigned __int64 v8; // rbx
  int v9; // ebp
  int v10; // eax
  unsigned __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+8h] BYREF

  BugCheckParameter2 = a1;
  result = (unsigned int)dword_14043DA04;
  v4 = a2;
  BugCheckParameter4 = a3;
  if ( (dword_14043DA04 & 8) != 0 )
  {
    if ( a3 == 32 )
    {
      v6 = &unk_14043F1F8;
    }
    else
    {
      if ( a3 != 2 )
        return result;
      v6 = &unk_14043F240;
    }
    if ( a2 )
    {
      do
      {
        v7 = ExAcquireSpinLockExclusive(&dword_14043F298);
        v8 = qword_14043F288;
        if ( (qword_14043F290 & 1) != 0 && qword_14043F288 )
          v8 = (unsigned __int64)&qword_14043F288 ^ qword_14043F288;
        v9 = qword_14043F290 & 1;
        if ( !v8 )
          goto LABEL_28;
        do
        {
          v10 = MiCompareSlabEntry(&BugCheckParameter2, v8);
          if ( v10 >= 0 )
          {
            if ( v10 <= 0 )
              break;
            v11 = *(_QWORD *)(v8 + 8);
          }
          else
          {
            v11 = *(_QWORD *)v8;
          }
          if ( v9 && v11 )
            v8 ^= v11;
          else
            v8 = v11;
        }
        while ( v8 );
        if ( !v8 )
LABEL_28:
          KeBugCheckEx(0x1Au, 0x3030312uLL, BugCheckParameter2, v4, BugCheckParameter4);
        MiRemoveSlabEntry((__int64)&MiSystemPartition, (_RTL_RB_TREE *)&qword_14043F288, v8);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043F298);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v7);
        result = MiInsertSlabEntry((__int64)&MiSystemPartition, (__int64)v6, v8);
        BugCheckParameter2 += 512LL;
        v4 -= 512LL;
      }
      while ( v4 );
    }
  }
  return result;
}
