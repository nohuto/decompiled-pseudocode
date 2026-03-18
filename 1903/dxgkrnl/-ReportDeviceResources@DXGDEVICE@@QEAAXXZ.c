/*
 * XREFs of ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C022FDBC
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C022FE60 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C022FD34 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *i; // rbx
  BOOL v3; // ebp
  struct DXGALLOCATION *v4; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v5, this + 23);
  for ( i = this[7]; i; i = (struct _KTHREAD *)*((_QWORD *)i + 5) )
  {
    v3 = (*((_DWORD *)i + 1) & 1) == 0 || (*(_DWORD *)(*((_QWORD *)i + 7) + 12LL) & 2) == 0;
    v4 = (struct DXGALLOCATION *)*((_QWORD *)i + 3);
    while ( v4 )
    {
      DXGDEVICE::ReportAllocationState((DXGDEVICE *)this, v4, v3);
      v4 = (struct DXGALLOCATION *)*((_QWORD *)v4 + 8);
      if ( (*((_DWORD *)i + 1) & 1) != 0 )
        *(_DWORD *)(*((_QWORD *)i + 7) + 12LL) |= 2u;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
