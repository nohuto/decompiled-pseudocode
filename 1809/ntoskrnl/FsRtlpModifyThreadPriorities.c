/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x140107D80
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14001794C (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlUninitializeOplock @ 0x14011B480 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x140130710 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013AAEC (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14013F6FC (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168D80 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B3914 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14026F858 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14081531C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x140815458 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400BBF70 (PsBoostThreadIoEx.c)
 *     FsRtlpDoBoost @ 0x140107E44 (FsRtlpDoBoost.c)
 */

void __fastcall FsRtlpModifyThreadPriorities(__int64 a1, __int64 a2, char a3)
{
  unsigned int CurrentThread; // ebp
  __int64 v6; // rcx
  int v7; // r9d
  _QWORD *i; // rdi

  if ( a3 )
  {
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = a1 + 144;
    }
    else
    {
      if ( !a2 )
      {
LABEL_13:
        for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
          FsRtlpDoBoost(i[5], CurrentThread, a1 + 32, (_DWORD)i + 48, a1);
        return;
      }
      v6 = *(_QWORD *)(a2 + 40);
      v7 = a2 + 48;
    }
    if ( v6 )
    {
      FsRtlpDoBoost(v6, CurrentThread, a1 + 32, v7, a1);
      return;
    }
    goto LABEL_13;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a2 + 40), 1, 1, (void *)a1);
      *(_DWORD *)(a2 + 48) &= ~0x20u;
    }
  }
  else if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 )
  {
    PsBoostThreadIoEx(*(_QWORD *)(a1 + 24), 1, 1, (void *)a1);
    *(_DWORD *)(a1 + 144) &= ~0x20u;
  }
}
