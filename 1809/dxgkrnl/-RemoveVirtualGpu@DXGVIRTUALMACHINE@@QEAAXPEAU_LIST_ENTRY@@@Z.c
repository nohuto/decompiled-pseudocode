/*
 * XREFs of ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00363FC
 * Callers:
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C01E5E70 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C01E72E0 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::RemoveVirtualGpu(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v7 = 0;
  v6 = (char *)(this + 8);
  if ( this[9] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 8));
    v7 = 2;
  }
  Flink = a2->Flink;
  if ( a2->Flink )
  {
    if ( Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    a2->Blink = 0LL;
    a2->Flink = 0LL;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
