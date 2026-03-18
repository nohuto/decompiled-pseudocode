/*
 * XREFs of ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C0035384
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01C3778 (-IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

bool __fastcall DXGDEVICE::IsDisplayedPrimary(struct _KTHREAD **this, unsigned int a2, const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  const struct DXGALLOCATION *v6; // rbx
  struct _KTHREAD *v7; // rcx
  bool result; // al
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, this + 29);
  v6 = this[v3 + 112];
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  result = 1;
  if ( v6 != a3 )
  {
    v7 = this[216];
    if ( v7 != *((struct _KTHREAD **)this[2] + 2)
      || !ADAPTER_DISPLAY::IsAllocationDisplayed(*((ADAPTER_DISPLAY **)v7 + 315), a3) )
    {
      return 0;
    }
  }
  return result;
}
