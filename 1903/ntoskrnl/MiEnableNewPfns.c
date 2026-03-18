/*
 * XREFs of MiEnableNewPfns @ 0x1402BD970
 * Callers:
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiEnableNewPfns(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int16 a3)
{
  ULONG_PTR v3; // rbp
  ULONG_PTR v4; // rdi
  bool v5; // dl
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  BOOL v9; // r14d
  unsigned __int8 v10; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  __int16 v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  char v17; // r14
  unsigned __int8 v18; // r8
  struct _KPRCB *v19; // rcx
  __int64 v20; // r14
  unsigned __int8 v21; // si
  struct _KPRCB *v22; // rcx
  int v23; // [rsp+20h] [rbp-68h]
  unsigned __int64 v24; // [rsp+30h] [rbp-58h]
  unsigned __int64 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+40h] [rbp-48h]
  unsigned __int8 v28; // [rsp+A0h] [rbp+18h]
  int v29; // [rsp+A8h] [rbp+20h]

  v3 = a2;
  v4 = BugCheckParameter2;
  v5 = (a3 & 0x100) == 0;
  v29 = v5;
  v23 = (a3 & 0x100) != 0 ? 1025 : 2;
  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = v3 - BugCheckParameter2;
  v26 = v3 - BugCheckParameter2;
  if ( (a3 & 0x1000) != 0 )
  {
    v8 = v7 >> 18;
    if ( v7 >> 18 )
    {
      v9 = (a3 & 0x100) == 0;
      do
      {
        v10 = MiLockPageInline(v6);
        MiInsertLargePageInNodeList(v4, v9, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v10);
        v6 += 12582912LL;
        v4 += 0x40000LL;
        --v8;
      }
      while ( v8 );
    }
  }
  else if ( BugCheckParameter2 < v3 )
  {
    v12 = (a3 & 0x100) != 0 ? 1025 : 2;
    do
    {
      v13 = (KeFeatureBits & 0x2000000000LL) == 0;
      do
      {
        v14 = MiLargePageSizes[v13];
        v25 = v14;
        if ( ((v14 - 1) & v4) == 0 && v3 - v4 >= v14 )
          break;
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 <= 1 );
      if ( (unsigned int)v13 > 1 )
      {
        v21 = MiLockPageInline(v6);
        MiInsertPageInFreeOrZeroedList(v4, v12);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
        {
          v22 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
        __writecr8(v21);
        v6 += 48LL;
        v20 = 1LL;
      }
      else
      {
        v24 = v6 + 48 * v14;
        v15 = v24 - 48;
        v16 = MiLargePageContainingFrames[v13] & 0xFFFFFFFFFLL;
        v17 = v5 & 7;
        do
        {
          v28 = MiLockPageInline(v15);
          *(_QWORD *)(v15 + 40) = v16 | *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL;
          *(_BYTE *)(v15 + 34) = v17 | *(_BYTE *)(v15 + 34) & 0xF8;
          *(_QWORD *)(v15 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), -(__int64)(v29 == 0) & 0xFFFFFFFDLL);
          if ( v15 == v6 )
          {
            MiInsertLargePageInNodeList(v4, v29, 0);
            v18 = v28;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
          {
            v19 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v19);
          }
          __writecr8(v28);
          v15 -= 48LL;
        }
        while ( v15 >= v6 );
        v6 = v24;
        v20 = v25;
        v3 = a2;
        v12 = v23;
      }
      v5 = v29;
      v4 += v20;
    }
    while ( v4 < v3 );
    v7 = v26;
  }
  MiReturnResidentAvailable(v7);
}
