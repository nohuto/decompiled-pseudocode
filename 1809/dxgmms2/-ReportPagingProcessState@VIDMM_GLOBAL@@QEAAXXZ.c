/*
 * XREFs of ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ABABC
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ABC38 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppqqpx @ 0x1C001913C (McTemplateK0ppqqpx.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00B04BC (-ReportState@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportPagingProcessState(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  const GUID *v3; // r8
  __int64 v4; // [rsp+28h] [rbp-80h]
  __int64 v5; // [rsp+30h] [rbp-78h]
  _QWORD v6[10]; // [rsp+50h] [rbp-58h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1748); i = (unsigned int)(i + 1) )
  {
    memset(v6, 0, sizeof(v6));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v5) = HIDWORD(v6[0]);
      LODWORD(v4) = 4;
      McTemplateK0ppqqpx(
        *((_QWORD *)this + i + 746),
        &EventReportMonitoredFence,
        v3,
        *((_QWORD *)this + 3),
        *((_QWORD *)this + i + 746),
        v4,
        v5,
        0LL,
        v6[1]);
    }
  }
  VIDMM_DEVICE::ReportState(*((VIDMM_DEVICE **)this + 5041));
}
