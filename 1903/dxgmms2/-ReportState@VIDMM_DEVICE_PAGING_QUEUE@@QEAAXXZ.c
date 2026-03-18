/*
 * XREFs of ?ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00B39A0
 * Callers:
 *     ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00B38BC (-ReportState@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0ppqqpx @ 0x1C0025EC8 (McTemplateK0ppqqpx.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::ReportState(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  __int64 v1; // rdi
  const GUID *v3; // r8
  _QWORD v4[10]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *((_QWORD *)this + 19);
  if ( v1 )
  {
    memset(v4, 0, sizeof(v4));
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqpx(
          **((_QWORD **)this + 17),
          &EventReportMonitoredFence,
          v3,
          *(_QWORD *)(**((_QWORD **)this + 17) + 24LL),
          v1,
          4,
          HIDWORD(v4[0]),
          0LL,
          v4[1]);
    }
  }
}
