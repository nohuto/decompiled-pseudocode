/*
 * XREFs of VidSchiSetPriorityContext @ 0x1C0012490
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C0068C70 (VidSchSubmitCommand.c)
 *     VidSchSetPriorityContext @ 0x1C007B380 (VidSchSetPriorityContext.c)
 *     VidSchSubmitGlobalCommand @ 0x1C007E47C (VidSchSubmitGlobalCommand.c)
 *     VidSchSetAbsolutePriorityContext @ 0x1C00C93F0 (VidSchSetAbsolutePriorityContext.c)
 * Callees:
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C00135F4 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     McTemplateK0pqq @ 0x1C00267A4 (McTemplateK0pqq.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C002B3E0 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002B718 (-VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiSetPriorityContext(struct _VIDSCH_CONTEXT *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  char v5; // bl
  __int64 v6; // r14
  int v7; // r8d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 **v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rax
  unsigned __int64 QuadPart; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 12);
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1648), &LockHandle);
  if ( *((_DWORD *)a1 + 100) != (_DWORD)v4 )
  {
    v8 = *((unsigned int *)a1 + 101);
    v9 = gulPriorityToPriorityClass[v4];
    *((_DWORD *)a1 + 101) = gulPublicPriorityToSchedulingPriority[v4];
    *((_DWORD *)a1 + 100) = v4;
    *((_QWORD *)a1 + 58) = *(_QWORD *)(v6 + 8 * v9 + 2024);
    *((_QWORD *)a1 + 59) = *(_QWORD *)(v6 + 8 * v9 + 2072);
    if ( (*((_DWORD *)a1 + 46) & 2) == 0 )
      *((_QWORD *)a1 + 55) = *((_QWORD *)a1 + 58);
    if ( (_DWORD)v8 != *((_DWORD *)a1 + 101) )
    {
      if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
      {
        v11 = (__int64 *)((char *)a1 + 8);
        v12 = *((_QWORD *)a1 + 1);
        if ( *(struct _VIDSCH_CONTEXT **)(v12 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8)
          || (v13 = (__int64 **)*((_QWORD *)a1 + 2), *v13 != v11)
          || (*v13 = (__int64 *)v12,
              *(_QWORD *)(v12 + 8) = v13,
              VidSchiUpdateReadyBitsInNewPriority((struct _VIDSCH_NODE *)v2, a1),
              v9 = 16LL * *((unsigned int *)a1 + 101) + v2 + 2024,
              v14 = *(__int64 ***)(v9 + 8),
              *v14 != (__int64 *)v9) )
        {
          __fastfail(3u);
        }
        *((_QWORD *)a1 + 2) = v14;
        *v11 = v9;
        *v14 = v11;
        *(_QWORD *)(v9 + 8) = v11;
        if ( *(_QWORD *)(v2 + 16 * v8 + 2024) == v2 + 16 * v8 + 2024 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1752) &= ~(1 << v8);
        }
        v5 = 1;
      }
      if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *((unsigned int *)a1 + 101) + 1760);
        v15 = *((unsigned int *)a1 + 101);
        if ( *(_DWORD *)(v2 + 4 * v15 + 1760) == 1 )
        {
          LODWORD(v9) = *((_DWORD *)a1 + 101);
          *(_DWORD *)(v2 + 1756) |= 1 << v15;
        }
        if ( (*(_DWORD *)(v2 + 4 * v8 + 1760))-- == 1 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1756) &= ~(1 << v8);
        }
        if ( *(struct _VIDSCH_CONTEXT **)(v2 + 8LL * *(unsigned int *)(v2 + 1552) + 1560) == a1 )
        {
          QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
          VidSchiStopExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, v8, QuadPart, PerformanceFrequency.QuadPart);
          VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, *((_DWORD *)a1 + 101), QuadPart);
        }
        v5 = 1;
      }
      if ( bTracingEnabled )
      {
        v10 = *((_QWORD *)a1 + 7);
        if ( !v10 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v10) = (_DWORD)a1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqq(v9, (unsigned int)&EventChangePriority, v7, v10, *((_DWORD *)a1 + 100), *((_DWORD *)a1 + 101));
      }
      if ( v5 )
      {
        *(_QWORD *)(v6 + 1144) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v6 + 1112), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
