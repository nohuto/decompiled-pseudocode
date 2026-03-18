/*
 * XREFs of ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062A6C
 * Callers:
 *     VidMmCloseAdapter @ 0x1C0014ED0 (VidMmCloseAdapter.c)
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C003B884 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C005F178 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C005F788 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0061370 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00A9F44 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C005C34C (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C00624E8 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C006301C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::CloseAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r15
  __int64 v6; // rsi
  bool v7; // r8
  _DWORD *v8; // rsi
  __int64 v9; // rax
  _BYTE v10[32]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v11[12]; // [rsp+40h] [rbp-78h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = this;
  }
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 208LL);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, this + 30);
  v6 = *((_QWORD *)this[2] + v5);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) <= 1 )
  {
    if ( *(_QWORD *)(v6 + 496) )
    {
      memset(v11, 0, 0x58uLL);
      v11[5] = *((_QWORD *)a2 + 5040);
      v11[0] = -4294967181LL;
      v11[6] = v6;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v11, v7);
    }
    VIDMM_PROCESS::DestroyAdapterInfo((VIDMM_PROCESS *)this, v5);
    _InterlockedDecrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v5);
    if ( *((_DWORD *)a2 + 926) )
    {
      v8 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
      do
        VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v2++), v8[v5]);
      while ( v2 < *((_DWORD *)a2 + 926) );
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
