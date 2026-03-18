/*
 * XREFs of ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C0229F64
 * Callers:
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EFE30 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

bool __fastcall DXGVIRTUALMACHINE::IsVailEnabled(DXGVIRTUALMACHINE *this)
{
  bool v2; // si
  __int64 v3; // rax

  v2 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
    v2 = *(_QWORD *)(v3 + 88) != 0LL;
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
