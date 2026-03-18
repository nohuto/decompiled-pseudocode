/*
 * XREFs of ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C003C9C0
 * Callers:
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C0215D50 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C02173B0 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

bool __fastcall DXGVIRTUALMACHINE::ResetVirtualGpu(struct _KTHREAD **this)
{
  DXGPUSHLOCK *v2; // rcx
  bool v3; // zf
  bool v4; // bl
  char v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v8 = 0;
  v2 = (DXGPUSHLOCK *)(this + 8);
  v7 = v2;
  if ( this[9] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v2);
    v8 = 2;
  }
  v3 = (*((_DWORD *)this + 1))-- == 1;
  v4 = v3;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  return v4;
}
