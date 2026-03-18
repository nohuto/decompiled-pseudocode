/*
 * XREFs of ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01FE00C
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C01FFA58 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C01D8500 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainCoreAllocations(struct _KTHREAD **this)
{
  struct DXGALLOCATION *v2; // r9
  struct _KTHREAD *v3; // rsi
  __int64 v4; // rbx
  struct _KTHREAD *v5; // rdi
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, this + 20);
  v3 = this[6];
  if ( v3 )
  {
    do
    {
      v4 = *((_QWORD *)v3 + 7);
      v5 = (struct _KTHREAD *)*((_QWORD *)v3 + 8);
      *((_QWORD *)v3 + 7) = 0LL;
      *((_QWORD *)v3 + 8) = 0LL;
      DXGDEVICE::DestroyCoreAllocations((DXGDEVICE *)this, 0LL, (const GUID *)v3, v2);
      *((_QWORD *)v3 + 7) = v4;
      *((_QWORD *)v3 + 8) = v5;
      v3 = v5;
    }
    while ( v5 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
