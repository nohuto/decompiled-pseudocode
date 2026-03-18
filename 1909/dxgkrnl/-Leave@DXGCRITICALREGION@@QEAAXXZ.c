/*
 * XREFs of ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F298
 * Callers:
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C0032690 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015FC34 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EE4B8 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C01EE700 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EEED0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F5034 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCRITICALREGION::Leave(DXGCRITICALREGION *this, __int64 a2)
{
  __int64 v3; // rax

  if ( !*((_BYTE *)this + 1) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 775LL;
    WdLogEvent5_WdAssertion(v3);
  }
  *((_BYTE *)this + 1) = 0;
  KeLeaveCriticalRegion();
}
