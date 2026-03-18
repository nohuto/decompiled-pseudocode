/*
 * XREFs of ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00E1834
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C000E804 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkAcquireHandleDataCB @ 0x1C00F2AD0 (DxgkAcquireHandleDataCB.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C013A14C (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013F99C (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkReferenceDxgResource(struct _EX_RUNDOWN_REF *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( !ExAcquireRundownProtection(a1 + 9) )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v2);
    v3[3] = 275LL;
    v3[4] = 38LL;
    v3[5] = a1;
    v3[6] = 0LL;
    v3[7] = 0LL;
    WdLogEvent5_WdCriticalError(v3);
  }
}
