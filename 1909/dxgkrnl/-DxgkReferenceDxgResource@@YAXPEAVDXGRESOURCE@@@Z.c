/*
 * XREFs of ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00FFA44
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00089DC (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkAcquireHandleDataCB @ 0x1C0137CA0 (DxgkAcquireHandleDataCB.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C014DD10 (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01540A0 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkReferenceDxgResource(struct _EX_RUNDOWN_REF *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rax

  if ( !ExAcquireRundownProtection(a1 + 9) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, v2);
    v4[3] = 275LL;
    v4[4] = 38LL;
    v4[5] = a1;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
}
