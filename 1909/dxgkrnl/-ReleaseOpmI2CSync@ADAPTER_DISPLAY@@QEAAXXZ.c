/*
 * XREFs of ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01559F8
 * Callers:
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C01559C0 (DxgkReleaseAdapterOpmI2CSync.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseOpmI2CSync(struct _KTHREAD **this, __int64 a2)
{
  __int64 v3; // rax

  if ( this[40] != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 3831LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DXGFASTMUTEX::Release(this + 38);
}
