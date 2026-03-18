/*
 * XREFs of ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00B2B30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0024F2C (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00641C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress(VIDMM_DEVICE_COMMAND_UPDATEGPUVA *P)
{
  __int64 v2; // rax
  VIDMM_GLOBAL *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  struct VIDMM_PAGING_QUEUE *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v10[11]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x50uLL);
  v2 = *((_QWORD *)P + 11);
  v3 = (VIDMM_GLOBAL *)*((_QWORD *)P + 1);
  LODWORD(v10[0]) = 119;
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *((unsigned int *)P + 4);
  v10[1] = v4;
  v6 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v4 + 72) + 176 * v5);
  v10[4] = P;
  if ( (int)VIDMM_GLOBAL::QueueDeferredCommand(v3, v6, (struct _VIDMM_DEFERRED_COMMAND *)v10, 0, 0LL) < 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 24744LL;
    WdLogEvent5_WdAssertion(v9);
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(P);
  }
}
