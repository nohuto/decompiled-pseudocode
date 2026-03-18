/*
 * XREFs of ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007ABE0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C00055D0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0039AC0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0062444 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0064400 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     VidSchFlushDevice @ 0x1C007C1F0 (VidSchFlushDevice.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C007D510 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::EnsureSchedulable(VIDMM_DEVICE *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rcx
  const GUID *v6; // r8
  int v7; // r9d
  __int64 v8; // rax

  if ( !(_BYTE)a2 || *((_BYTE *)this + 48) )
  {
    v3 = *(_QWORD *)this;
    *((_BYTE *)this + 48) = 1;
    v4 = v3 + 41240;
    if ( v4 && *(struct _KTHREAD **)(v4 + 8) == KeGetCurrentThread() )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v8 + 24) = 1449LL;
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v7 = *(_DWORD *)(v4 + 16);
        if ( v7 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v5, (const EVENT_DESCRIPTOR *)"g", v6, v7);
      }
      ExAcquirePushLockExclusiveEx(v4, 0LL);
    }
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    if ( (*((_DWORD *)this + 13) & 7) == 4 )
    {
      VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(this, 3LL);
      KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 152LL), 0, 0);
    }
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
