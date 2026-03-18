/*
 * XREFs of ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B486C
 * Callers:
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00B3FE8 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     McTemplateK0ppx @ 0x1C00267E4 (McTemplateK0ppx.c)
 *     McTemplateK0ppxx @ 0x1C0026870 (McTemplateK0ppxx.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00B4FA0 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C00B6B8C (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

__int64 __fastcall VIDMM_WORKER_THREAD::SubmitPacket(
        VIDMM_GLOBAL **this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3,
        unsigned __int8 a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // esi
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  _QWORD *v18; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppx((__int64)this, (__int64)a2, (const GUID *)a3, a2, a3, *((_QWORD *)a3 + 5));
  v10 = (int *)((char *)a3 + 48);
  if ( *((_BYTE *)a3 + 24) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
    v13[3] = *v10;
    v13[4] = a3;
    v13[5] = *((_QWORD *)a3 + 8);
    v13[6] = *((_QWORD *)a3 + 7);
    v13[7] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v13);
    v14 = VIDMM_GLOBAL::ProcessDeferredCommand(
            *this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            (GUID *)a5,
            *((_BYTE *)a3 + 25),
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11),
            a4,
            a6);
    VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a3);
    VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(*((VIDMM_PROCESS_ADAPTER_INFO **)VidMmDevice
                                                                                 + 2));
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
    v18[3] = *v10;
    v18[4] = a3;
    v18[5] = *((unsigned __int8 *)a3 + 25);
    v18[6] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v18);
    *a5 = 0;
    *a6 = 0LL;
    v14 = VIDMM_GLOBAL::ProcessSystemCommand(
            *this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            *((_BYTE *)a3 + 25),
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11));
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppxx(v16, &EventPagingQueueComplete, v17, a2, a3, *((_QWORD *)a3 + 5), 0LL);
  return v14;
}
