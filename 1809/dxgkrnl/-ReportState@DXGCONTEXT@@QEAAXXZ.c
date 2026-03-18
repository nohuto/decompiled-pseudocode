/*
 * XREFs of ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C01DE8B4
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C01FF640 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C0035A6C (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?VidMmReportDmaPoolState@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DMA_POOL@@@Z @ 0x1C0035AF4 (-VidMmReportDmaPoolState@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DMA_POOL@@@Z.c)
 *     McTemplateK0pppp @ 0x1C0035B6C (McTemplateK0pppp.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0035C0C (McTemplateK0pqqqqqqqqppp.c)
 *     McTemplateK0ppp @ 0x1C003C574 (McTemplateK0ppp.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0238590 (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this, __int64 a2, const GUID *a3)
{
  struct VIDMM_DMA_POOL *v4; // rdx
  __int64 v5; // rcx
  __int64 *i; // rbx
  DXGDEVICESYNCOBJECT *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int128 v11; // [rsp+80h] [rbp-28h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v11 = *(_OWORD *)((char *)this + 200);
    McTemplateK0pqqqqqqqqppp(
      DWORD1(v11),
      &EventReportContext,
      (const GUID *)v11,
      *((_QWORD *)this + 2),
      *((_DWORD *)this + 96),
      *((_DWORD *)this + 97),
      (_DWORD)v11,
      DWORD1(v11),
      DWORD2(v11),
      HIDWORD(v11),
      (unsigned int)*(_OWORD *)((char *)this + 216),
      0,
      this,
      *((unsigned int *)this + 6),
      0LL);
  }
  v4 = (struct VIDMM_DMA_POOL *)*((_QWORD *)this + 29);
  if ( v4 )
    VIDMM_EXPORT::VidMmReportDmaPoolState(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL), v4);
  if ( (*((_DWORD *)this + 99) & 0x10) != 0 )
  {
    v5 = *((_QWORD *)this + 35);
    if ( v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp(v5, (__int64)v4, a3, this, v5, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
    if ( *((_QWORD *)this + 36) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 288LL))();
    for ( i = (__int64 *)*((_QWORD *)this + 50); i != (__int64 *)((char *)this + 400) && i; i = (__int64 *)*i )
    {
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp(*((unsigned int *)i + 6), &EventReportHwQueue, a3, i[2], *((unsigned int *)i + 6), i);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i[2] + 16) + 16LL) + 520LL) + 8LL)
                                      + 288LL))(i[5]);
    }
    v7 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v7 )
      DXGDEVICESYNCOBJECT::ReportState(v7);
  }
  else if ( *((_QWORD *)this + 32) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 280LL))();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp(v9, v8, v10, this, *((_QWORD *)this + 32), *((_QWORD *)this + 23), *((_QWORD *)this + 24));
  }
  if ( !*((_BYTE *)this + 433) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)this + 304));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
      *((struct DXGDEVICE **)this + 2),
      (struct _LIST_ENTRY *)((char *)this + 328));
    *((_QWORD *)this + 39) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 304, 0LL);
    KeLeaveCriticalRegion();
  }
}
