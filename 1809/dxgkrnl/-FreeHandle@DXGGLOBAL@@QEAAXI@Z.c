/*
 * XREFs of ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0011834
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00DDC2C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C00F9388 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C02346A8 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGGLOBAL::FreeHandle(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v4; // rax

  if ( this[18] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 1013LL;
    WdLogEvent5_WdAssertion(v4);
  }
  HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 22), a2);
}
