/*
 * XREFs of ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0019390
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00F5454 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0268EC8 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0115DE0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGGLOBAL::FreeHandle(struct _KTHREAD **this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax

  v2 = a2;
  if ( this[19] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 1022LL;
    WdLogEvent5_WdAssertion(v4);
  }
  HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 22), v2);
}
