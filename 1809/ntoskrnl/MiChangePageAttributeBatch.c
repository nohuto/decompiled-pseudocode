/*
 * XREFs of MiChangePageAttributeBatch @ 0x1400823E0
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x140011478 (MiInitializeMdlBatchPages.c)
 *     MiConvertContiguousPages @ 0x1400117AC (MiConvertContiguousPages.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiZeroAndConvertLargePage @ 0x140118D38 (MiZeroAndConvertLargePage.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x1402B01A4 (MiChangeAwePageAttributes.c)
 *     MiPerformFinalZeroing @ 0x1402BFEEC (MiPerformFinalZeroing.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140082700 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF400 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushHyperSpace @ 0x140176054 (MiFlushHyperSpace.c)
 *     KeInvalidateAllCaches @ 0x140177150 (KeInvalidateAllCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  unsigned int v7; // r14d
  __int64 v8; // rdi
  int v9; // ebp
  int v10; // esi
  int v11; // esi
  int v12; // r15d
  __int64 v13; // rdi
  unsigned int v14; // ecx
  char v15; // al
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rax
  unsigned __int8 v19; // al
  unsigned __int8 CurrentIrql; // al
  bool v21; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  int v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+70h] [rbp+8h]
  char v25; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v24 = a1;
    v6 = a1;
    v25 = 17;
LABEL_3:
    v7 = 0;
    v23 = 0;
    v8 = v6;
    v9 = 1;
    do
    {
      v10 = v9;
      if ( v7 >= 0x1000 )
        break;
      if ( v7 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          break;
      }
      else
      {
        v25 = MiLockPageInline(v8);
      }
      v9 = 0;
      if ( (*(_BYTE *)(v8 + 34) & 0xC0) == 0xC0 )
        v9 = v10;
      MiAbortCombineScan(v8);
      v8 = *(_QWORD *)(v8 + 16);
      ++v7;
    }
    while ( v8 );
    if ( v9 || (MiFlushEntireTbDueToAttributeChange(a1, v6, a3, a4), v7 < dword_14043B15C) || a2 == 1 )
    {
      v11 = 0;
    }
    else
    {
      ++dword_14043B154;
      KeInvalidateAllCaches();
      v11 = 1;
      v23 = 1;
    }
    v6 = v24;
    v12 = 0;
    v13 = v24;
    if ( v24 )
    {
      while ( 1 )
      {
        v14 = *(unsigned __int8 *)(v13 + 34);
        v15 = ((_BYTE)a2 << 6) | v14 & 0x3F;
        a1 = v14 >> 6;
        *(_BYTE *)(v13 + 34) = v15;
        if ( !v11 && !v9 && a2 != 1 && (_DWORD)a1 == 1 )
        {
          ++dword_14043B158;
          v16 = 3221225472LL;
          if ( a2 == 2 )
            v16 = 3489660930LL;
          v17 = MiMapPageInHyperSpaceWorker((v13 + 0x58000000000LL) / 48, 0LL, v16);
          KeInvalidateRangeAllCachesNoIpi(v17, 4096LL);
          MiUnmapPageInHyperSpaceWorker(v17, 0x11u, 0x80000000LL);
          if ( a2 == 3 )
            MiFlushHyperSpace();
          v6 = v24;
          v11 = v23;
        }
        *(_QWORD *)(v13 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v12;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v12 == v7 )
          break;
        v18 = (_QWORD *)(v13 + 16);
        v13 = *(_QWORD *)(v13 + 16);
LABEL_25:
        if ( a3 != -1 )
          *v18 = a3;
        if ( !v13 )
        {
          if ( !v6 )
            return;
          goto LABEL_3;
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v21 = CurrentIrql < 2u;
        v19 = v25;
        if ( v21 || (unsigned __int8)v25 >= 2u )
          goto LABEL_33;
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      v19 = v25;
LABEL_33:
      __writecr8(v19);
      v6 = *(_QWORD *)(v13 + 16);
      v18 = (_QWORD *)(v13 + 16);
      v24 = v6;
      v13 = 0LL;
      goto LABEL_25;
    }
  }
}
