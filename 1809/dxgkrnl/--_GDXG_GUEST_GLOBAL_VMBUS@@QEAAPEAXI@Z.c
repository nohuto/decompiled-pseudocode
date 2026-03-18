/*
 * XREFs of ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C003B910
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C020D74C (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C020F330 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[5];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  return P;
}
