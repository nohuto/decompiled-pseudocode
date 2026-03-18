/*
 * XREFs of ?AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01C085C
 * Callers:
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01C7C30 (DxgkAcquireAdapterOpmI2CSync.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::AcquireOpmI2CSync(struct _KTHREAD **this)
{
  __int64 v2; // rax

  if ( this[26] == KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 3595LL;
    WdLogEvent5_WdAssertion(v2);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 25));
}
