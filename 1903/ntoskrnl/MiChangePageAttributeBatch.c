/*
 * XREFs of MiChangePageAttributeBatch @ 0x1400B87B0
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x14009F4C0 (MiInitializeMdlBatchPages.c)
 *     MiConvertContiguousPages @ 0x1400A1890 (MiConvertContiguousPages.c)
 *     MiZeroAndConvertLargePage @ 0x1400A2188 (MiZeroAndConvertLargePage.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x1402D56C8 (MiChangeAwePageAttributes.c)
 *     MiPerformFinalZeroing @ 0x1402D9624 (MiPerformFinalZeroing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     KeInvalidateAllCaches @ 0x1400B7B70 (KeInvalidateAllCaches.c)
 *     MiAbortCombineScan @ 0x1400B8A28 (MiAbortCombineScan.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400B8B20 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400B8B90 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiFlushHyperSpace @ 0x14017E198 (MiFlushHyperSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
  int v16; // r8d
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned __int8 v20; // al
  unsigned __int8 CurrentIrql; // al
  bool v22; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  int v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+70h] [rbp+8h]
  char v26; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v25 = a1;
    v6 = a1;
    v26 = 17;
LABEL_3:
    v7 = 0;
    v24 = 0;
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
        v26 = MiLockPageInline(v8);
      }
      v9 = 0;
      if ( (*(_BYTE *)(v8 + 34) & 0xC0) == 0xC0 )
        v9 = v10;
      MiAbortCombineScan(v8);
      v8 = *(_QWORD *)(v8 + 16);
      ++v7;
    }
    while ( v8 );
    if ( v9 || (MiFlushEntireTbDueToAttributeChange(a1, v6, a3, a4), v7 < dword_140465AC4) || a2 == 1 )
    {
      v11 = 0;
    }
    else
    {
      ++dword_140465ABC;
      KeInvalidateAllCaches();
      v11 = 1;
      v24 = 1;
    }
    v6 = v25;
    v12 = 0;
    v13 = v25;
    if ( v25 )
    {
      while ( 1 )
      {
        v14 = *(unsigned __int8 *)(v13 + 34);
        v15 = ((_BYTE)a2 << 6) | v14 & 0x3F;
        a1 = v14 >> 6;
        *(_BYTE *)(v13 + 34) = v15;
        if ( !v11 && !v9 && a2 != 1 && (_DWORD)a1 == 1 )
        {
          ++dword_140465AC0;
          v16 = -1073741824;
          if ( a2 == 2 )
            v16 = -805306366;
          v17 = MiMapPageInHyperSpaceWorker((v13 + 0x58000000000LL) / 48, 0LL, v16);
          KeInvalidateRangeAllCachesNoIpi(v17, 4096LL);
          LOBYTE(v18) = 17;
          MiUnmapPageInHyperSpaceWorker(v17, v18, 0x80000000LL);
          if ( a2 == 3 )
            MiFlushHyperSpace();
          v6 = v25;
          v11 = v24;
        }
        *(_QWORD *)(v13 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v12;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v12 == v7 )
          break;
        v19 = (_QWORD *)(v13 + 16);
        v13 = *(_QWORD *)(v13 + 16);
LABEL_25:
        if ( a3 != -1 )
          *v19 = a3;
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
        v22 = CurrentIrql < 2u;
        v20 = v26;
        if ( v22 || (unsigned __int8)v26 >= 2u )
          goto LABEL_33;
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      v20 = v26;
LABEL_33:
      __writecr8(v20);
      v6 = *(_QWORD *)(v13 + 16);
      v19 = (_QWORD *)(v13 + 16);
      v25 = v6;
      v13 = 0LL;
      goto LABEL_25;
    }
  }
}
