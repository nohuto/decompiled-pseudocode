/*
 * XREFs of MiEnableNewPfns @ 0x1402A6418
 * Callers:
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiInsertLargePageInNodeList @ 0x140028C1C (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiEnableNewPfns(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int16 a3)
{
  int v3; // r12d
  ULONG_PTR v4; // r15
  ULONG_PTR v5; // rdi
  int v6; // r14d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  unsigned __int64 v12; // rbp
  unsigned __int8 v13; // r8
  struct _KPRCB *v14; // rcx
  unsigned __int8 v15; // si
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v17; // [rsp+30h] [rbp-58h]
  unsigned __int8 v19; // [rsp+A0h] [rbp+18h]
  __int16 v20; // [rsp+A8h] [rbp+20h]

  v3 = a3 & 0x100;
  v4 = a2;
  v5 = BugCheckParameter2;
  v6 = v3 != 0 ? 1025 : 2;
  v20 = v6;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = a2 - BugCheckParameter2;
  v17 = a2 - BugCheckParameter2;
  if ( BugCheckParameter2 < a2 )
  {
    do
    {
      v9 = (KeFeatureBits & 0x2000000000LL) == 0;
      do
      {
        v10 = MiLargePageSizes[v9];
        if ( ((v10 - 1) & v5) == 0 && v4 - v5 >= v10 )
          break;
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 <= 1 );
      if ( (unsigned int)v9 > 1 )
      {
        v15 = MiLockPageInline(v7);
        MiInsertPageInFreeOrZeroedList(v5, v6);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v15);
        v7 += 48LL;
        v10 = 1LL;
      }
      else
      {
        v11 = MiLargePageContainingFrames[v9] & 0xFFFFFFFFFLL;
        v12 = v7 + 48 * v10 - 48;
        do
        {
          v19 = MiLockPageInline(v12);
          *(_QWORD *)(v12 + 40) = v11 | *(_QWORD *)(v12 + 40) & 0xFFFFFFF000000000uLL;
          *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 1;
          *(_QWORD *)(v12 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v12 + 16), -(__int64)(v3 != 0) & 0xFFFFFFFDLL);
          if ( v12 == v7 )
          {
            MiInsertLargePageInNodeList(v5);
            v13 = v19;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
          {
            v14 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
          __writecr8(v19);
          v12 -= 48LL;
        }
        while ( v12 >= v7 );
        v7 += 48 * v10;
        LOWORD(v6) = v20;
        v4 = a2;
      }
      v5 += v10;
    }
    while ( v5 < v4 );
    v8 = v17;
  }
  MiReturnResidentAvailable(v8);
}
