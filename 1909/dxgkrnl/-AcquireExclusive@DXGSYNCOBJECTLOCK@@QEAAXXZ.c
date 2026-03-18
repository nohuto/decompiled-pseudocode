/*
 * XREFs of ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0036F28
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F67A8 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSYNCOBJECTLOCK::AcquireExclusive(DXGSYNCOBJECTLOCK *this, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx

  if ( *((_BYTE *)this + 8) )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v3[3] = 275LL;
    v3[4] = 4LL;
    v3[5] = this;
    v3[6] = 0LL;
    v3[7] = 0LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  v4 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 344), 1u);
  *((_BYTE *)this + 8) = 1;
}
