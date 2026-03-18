/*
 * XREFs of ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C01FF530
 * Callers:
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C01FF59C (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C01FF640 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?VidMmReportMultiAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0038EE8 (-VidMmReportMultiAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?VidMmReportMultiGlobalAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGADAPTERALLOCATION@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C0038F70 (-VidMmReportMultiGlobalAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGADAPTERALLOCATION@@PEAVDXG.c)
 */

void __fastcall DXGDEVICE::ReportAllocationState(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  struct DXGSHAREDRESOURCE *v5; // r9
  __int64 v6; // rax

  if ( (*((_BYTE *)this + 1749) & 1) == 0 )
  {
    v5 = 0LL;
    if ( a3 )
    {
      v6 = *((_QWORD *)a2 + 5);
      if ( v6 )
        v5 = *(struct DXGSHAREDRESOURCE **)(v6 + 56);
      VIDMM_EXPORT::VidMmReportMultiGlobalAlloc(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
        this,
        *((struct DXGADAPTERALLOCATION **)a2 + 6),
        v5);
    }
    VIDMM_EXPORT::VidMmReportMultiAlloc(*(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL), this, a2);
  }
}
