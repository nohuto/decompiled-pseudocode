/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1C00336D0
 * Callers:
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0031A00 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00CC364 (VidSchSignalPagingFences.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00081E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011240 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00113C4 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C0031E10 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(
        __int64 a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        char *a4)
{
  __int64 Value; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  char v13; // [rsp+40h] [rbp-30h]
  _QWORD v14[4]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v15; // [rsp+68h] [rbp-8h]

  Value = a3.Value;
  v7 = a1;
  if ( (*(_BYTE *)&a3.0 & 4) == a3.0 )
  {
    v10 = *((_QWORD *)*a2 + 1);
    v15 = 0;
    v14[0] = v10 + 1648;
    AcquireSpinLock::Acquire((Acquire *)v14);
    v13 = 0;
    v12[1] = v12;
    v12[0] = v12;
    v9 = VidSchiSignalSyncObjectsFromCpu(
           (struct HwQueueStagingList *)v12,
           (_QWORD *)v7,
           a2,
           (struct _D3DDDICB_SIGNALFLAGS)Value,
           a4);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v12);
    AcquireSpinLock::Release((AcquireSpinLock *)v14);
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = Value;
    v9 = -1073741811;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
  }
  return v9;
}
