/*
 * XREFs of ?Dispose@FxTimer@@UEAAEXZ @ 0x1C0055DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C0055DDC (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxTimer::Dispose(FxTimer *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = irql;
  this->m_RunningDown = 1;
  FxNonPagedObject::Unlock(this, v4, v5);
  FxTimer::FlushAndRundown(this);
  return 1;
}
