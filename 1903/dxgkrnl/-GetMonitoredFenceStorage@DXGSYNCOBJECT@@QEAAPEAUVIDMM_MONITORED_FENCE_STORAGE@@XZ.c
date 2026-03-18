/*
 * XREFs of ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0007124
 * Callers:
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00F1BF8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00F1F04 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1C011FE00 (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0247CFC (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C026CE0C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x1C026CF14 (-UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_MONITORED_FENCE_STORAGE *__fastcall DXGSYNCOBJECT::GetMonitoredFenceStorage(DXGSYNCOBJECT *this)
{
  __int64 v3; // rax

  if ( (unsigned int)(*((_DWORD *)this + 48) - 5) > 1 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 344LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return (DXGSYNCOBJECT *)((char *)this + 120);
}
