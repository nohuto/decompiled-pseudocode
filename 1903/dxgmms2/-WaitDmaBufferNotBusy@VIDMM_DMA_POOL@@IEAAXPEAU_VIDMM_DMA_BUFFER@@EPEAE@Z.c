/*
 * XREFs of ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C005A418
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C005A140 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00830A8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00B6638 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     VidSchIsWorkerThread @ 0x1C00012F0 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000EC10 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0077960 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0077C4C (VidSchRegisterCompletionEvent.c)
 */

void __fastcall VIDMM_DMA_POOL::WaitDmaBufferNotBusy(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        char a3,
        unsigned __int8 *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  _QWORD *v16; // rax
  int v17; // ecx
  unsigned int v18; // eax
  _QWORD v19[20]; // [rsp+28h] [rbp-59h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v13 + 32) = a2;
  }
  if ( a4 )
    *a4 = 0;
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[2]) = 0;
  v8 = *(_QWORD *)this;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 528LL)) )
  {
    v14 = *((unsigned int *)a2 + 12);
    v15 = *((_QWORD *)a2 + 5);
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v16[3] = 270LL;
    v16[4] = 22LL;
    v16[5] = a2;
    v16[6] = v15;
    v16[7] = v14;
    WdLogEvent5_WdCriticalError(v16);
    v8 = *(_QWORD *)this;
  }
  v11 = *((_DWORD *)a2 + 7);
  LOBYTE(v19[19]) = a3;
  if ( (v11 & 2) == 0 )
  {
    v12 = *((_QWORD *)this + 3);
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 412) & 0x10) != 0 )
      {
        v19[3] = *(_QWORD *)(v12 + 296);
        v17 = v19[3] != 0LL ? 4 : 0;
        v18 = v19[4] & 0xFFFFFFFB;
      }
      else
      {
        v19[3] = *(_QWORD *)(v12 + 272);
        v17 = v19[3] != 0LL ? 2 : 0;
        v18 = v19[4] & 0xFFFFFFFD;
      }
      LODWORD(v19[4]) = v18 | v17;
    }
  }
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 528LL), v19);
  while ( *((_BYTE *)a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 528LL), v19, 1LL) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      break;
    }
  }
  VidSchiInterlockedRemoveEntryList(
    (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 528LL) + 1664LL),
    v19,
    0LL);
}
