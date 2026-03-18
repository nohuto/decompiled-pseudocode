/*
 * XREFs of ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C00362D0
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E63F0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E77D0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::ActivateVirtualGpu(struct _KTHREAD **this)
{
  DXGPUSHLOCK *v2; // rcx
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v5 = 0;
  v2 = (DXGPUSHLOCK *)(this + 8);
  v4 = v2;
  if ( this[9] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v2);
    v5 = 2;
  }
  ++*((_DWORD *)this + 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
