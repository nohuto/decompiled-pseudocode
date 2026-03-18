/*
 * XREFs of ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C004216C
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0240D88 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0243918 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
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
