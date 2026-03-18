/*
 * XREFs of ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00B04BC
 * Callers:
 *     VidMmReportVidMmDeviceState @ 0x1C0025470 (VidMmReportVidMmDeviceState.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ABABC (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A3C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0pq @ 0x1C002672C (McTemplateK0pq.c)
 *     ?ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00B05A0 (-ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::ReportState(VIDMM_DEVICE *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  const GUID *v4; // r8
  VIDMM_DEVICE *i; // rdi
  unsigned int j; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v11, (struct DXGPUSHLOCK *const)(v1 + 360));
    for ( i = (VIDMM_DEVICE *)*((_QWORD *)this + 18); i != (VIDMM_DEVICE *)((char *)this + 144); i = *(VIDMM_DEVICE **)i )
    {
      if ( *((int *)i + 10) > 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0pq(v3, &EventVidMmReportAllocationResidency, v4);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  }
  for ( j = 0; j < *((_DWORD *)this + 15); ++j )
  {
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v7 + 176LL * j));
    v8 = *((_QWORD *)this + 10);
    v9 = 176LL * j;
    if ( v8 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v8 + v9));
    v10 = *((_QWORD *)this + 11);
    if ( v10 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v10 + v9));
  }
}
