/*
 * XREFs of MmUpdateSlabRangeProtection @ 0x1409F75A8
 * Callers:
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     MiCompareSlabEntry @ 0x1402C1E64 (MiCompareSlabEntry.c)
 *     MiInsertSlabEntry @ 0x1402C29A4 (MiInsertSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x1402C2B54 (MiRemoveSlabEntry.c)
 */

__int64 __fastcall MmUpdateSlabRangeProtection(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  ULONG_PTR BugCheckParameter4; // rdi
  void *v6; // r14
  KIRQL v7; // r15
  __int64 v8; // rbx
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+8h] BYREF

  BugCheckParameter2 = a1;
  result = (unsigned int)dword_14043C944;
  v4 = a2;
  BugCheckParameter4 = a3;
  if ( (dword_14043C944 & 8) != 0 )
  {
    if ( a3 == 32 )
    {
      v6 = &unk_14043E138;
    }
    else
    {
      if ( a3 != 2 )
        return result;
      v6 = &unk_14043E180;
    }
    if ( a2 )
    {
      do
      {
        v7 = ExAcquireSpinLockExclusive(&dword_14043E1D8);
        v8 = qword_14043E1C8;
        if ( (qword_14043E1D0 & 1) != 0 && qword_14043E1C8 )
          v8 = (unsigned __int64)&qword_14043E1C8 ^ qword_14043E1C8;
        v9 = qword_14043E1D0 & 1;
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
        MiRemoveSlabEntry((__int64)&MiSystemPartition, &qword_14043E1C8, v8);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043E1D8);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v7);
        result = MiInsertSlabEntry((__int64)&MiSystemPartition, (unsigned __int64)v6, v8);
        BugCheckParameter2 += 512LL;
        v4 -= 512LL;
      }
      while ( v4 );
    }
  }
  return result;
}
