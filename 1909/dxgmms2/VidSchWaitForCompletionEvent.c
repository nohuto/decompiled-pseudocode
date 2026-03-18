/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1C007C5B4
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0010C38 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003A19C (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0079440 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007A0A0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C007A520 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007ACF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C007C36C (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C007C3D0 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchiAllocateDmaPacket @ 0x1C007D118 (VidSchiAllocateDmaPacket.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C007DAF4 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00850E8 (VidSchiWaitForDrainFlipQueue.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0085C54 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00CA604 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00CA6C4 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C00CA8A0 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CCFF8 (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C0009290 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x1C00094E0 (VidSchiCheckTimeoutForced.c)
 *     VidSchWaitForEvents @ 0x1C0010DE8 (VidSchWaitForEvents.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     VidSchiReportHwHang @ 0x1C003A6AC (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00C9BF0 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00C9D2C (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchWaitForCompletionEvent(__int64 a1, __int64 a2, const GUID *a3)
{
  int v5; // ecx
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rbp
  __int64 v17; // r13
  int v18; // r14d
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD v23[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+20h]

  v24 = 0LL;
  if ( (_DWORD)a3 != -1 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q(a1, (const EVENT_DESCRIPTOR *)"g", a3, (int)a3);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x40) != 0 )
  {
    v15 = *(unsigned int *)(a2 + 48);
    v16 = *(__int64 **)(a1 + 616);
    if ( (unsigned int)v15 < *(_DWORD *)(a1 + 688) )
      v16 += v15;
    v6 = *v16;
  }
  else if ( (v5 & 2) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 96LL);
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
  }
  if ( !*(_DWORD *)(a2 + 136) )
  {
    *(_DWORD *)(a2 + 64) = 0;
    if ( (v5 & 0x20) != 0 )
    {
      v7 = a2 + 96;
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 24);
      v13 = *(int *)(a2 + 16);
      if ( v12 )
      {
        v7 = 56 * v13 + v12 + 320;
      }
      else
      {
        v14 = 56 * v13;
        if ( (v5 & 1) != 0 )
          v7 = v6 + v14 + 240;
        else
          v7 = v14 + a1 + 1336;
      }
    }
    *(_QWORD *)(a2 + 72) = v7;
    ++*(_DWORD *)(a2 + 64);
    *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(a2 + 136);
    v9 = 0;
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 136) = v8 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v24 = -10000000LL * g_TdrConfig[1], *(_QWORD *)(a2 + 56) = &v24, VidSchiCheckTimeoutForced(a1)) )
    {
      v9 = 1;
      v10 = 258;
    }
    else
    {
      v10 = VidSchWaitForEvents(
              a1,
              *(_DWORD *)(a2 + 64),
              (PVOID *)(a2 + 72),
              *(union _LARGE_INTEGER **)(a2 + 56),
              *(_BYTE *)(a2 + 152));
    }
    if ( (*(_DWORD *)(a2 + 20) != 1 || v10 != 258)
      && (KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 152)
       || !v6
       || !*(_DWORD *)(v6 + 2012) && !*(_DWORD *)(v6 + 2016)) )
    {
      return v10;
    }
    v17 = 0LL;
    if ( v9 )
    {
      v18 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v18 = 3;
    }
    else
    {
      v18 = 2;
      v17 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 308LL) & 0x200) != 0 )
    {
      v19 = __rdtsc();
      v20 = __readmsr(0x400000F6u);
      v21 = *((unsigned int *)KeGetCurrentPrcb() + 17);
      v25 = 10 * (v19 - v20) / v21;
      v22 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v21, 10 * (v19 - v20) % v21);
      v22[5] = v25;
      v22[3] = v20;
      v22[4] = v19;
      WdLogEvent5_WdPresentTokenEvent(v22);
      if ( v20 > v19 || v25 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( VidSchIsTDRPending(a1) || v18 != 2 || !*(_BYTE *)(a1 + 44) )
    {
LABEL_54:
      if ( v6 )
      {
        if ( v18 == 2 && *(_DWORD *)(v6 + 2016) )
          v18 = (*(_BYTE *)(v6 + 2009) != 0) + 10;
        *(_BYTE *)(v6 + 2009) = 0;
        *(_DWORD *)(v6 + 2012) = 0;
        *(_BYTE *)(v6 + 2010) = 0;
        *(_DWORD *)(v6 + 2016) = 0;
      }
      goto LABEL_59;
    }
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 2016) )
        goto LABEL_54;
      if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v6, v23) || !(unsigned __int8)VidSchiResetEngines(v6, v23[0]) )
      {
        v18 = 9;
        *(_DWORD *)(v6 + 2012) = 0;
        *(_BYTE *)(v6 + 2010) = 0;
        goto LABEL_59;
      }
      *(_DWORD *)(v6 + 2012) = 0;
      *(_BYTE *)(v6 + 2010) = 0;
    }
    else
    {
LABEL_59:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v18, v17) )
        return v10;
    }
  }
}
