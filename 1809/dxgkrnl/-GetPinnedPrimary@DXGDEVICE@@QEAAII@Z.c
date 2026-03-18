/*
 * XREFs of ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C001A184
 * Callers:
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00D02A4 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C01FFE94 (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::GetPinnedPrimary(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // rbx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v5, this + 32);
  LODWORD(v2) = (*((_DWORD *)this + v2 + 272) >> 8) & 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  return (unsigned int)v2;
}
