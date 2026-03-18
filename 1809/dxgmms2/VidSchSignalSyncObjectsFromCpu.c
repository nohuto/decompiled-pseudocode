/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1C0032CB0
 * Callers:
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00311C0 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     VidSchSignalPagingFences @ 0x1C00C98C4 (VidSchSignalPagingFences.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C00315C0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(__int64 a1, struct _VIDSCH_SYNC_OBJECT **a2, __int64 a3, char *a4)
{
  __int64 v4; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned int v9; // ebx
  _QWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  char v12; // [rsp+40h] [rbp-38h]
  _BYTE v13[40]; // [rsp+48h] [rbp-30h] BYREF

  v4 = (unsigned int)a3;
  v7 = a1;
  if ( (a3 & 4) == (_DWORD)a3 )
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v13, (unsigned __int64 *)(*((_QWORD *)*a2 + 1) + 1648LL), a3, 0);
    v12 = 0;
    v11[1] = v11;
    v11[0] = v11;
    v9 = VidSchiSignalSyncObjectsFromCpu(
           (struct HwQueueStagingList *)v11,
           (_QWORD *)v7,
           a2,
           (struct _D3DDDICB_SIGNALFLAGS)v4,
           a4);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v11);
    AcquireSpinLock::Release((AcquireSpinLock *)v13);
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = v4;
    v9 = -1073741811;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
  }
  return v9;
}
