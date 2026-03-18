/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C01FF640
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C708C (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FF18 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C0035A6C (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     McTemplateK0ppqpttq @ 0x1C0039008 (McTemplateK0ppqpttq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C01DE8B4 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C01FF530 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C01FF59C (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0238590 (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this, __int64 a2, const GUID *a3)
{
  DXGCONTEXT *i; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct DXGALLOCATION *j; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  DXGDEVICESYNCOBJECT *k; // rbx
  _BYTE v13[32]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppqpttq(
      (__int64)this,
      &EventReportDevice,
      (const GUID *)*((unsigned __int8 *)this + 1745),
      *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
      *((_DWORD *)this + 82),
      this,
      *((unsigned __int8 *)this + 1745),
      *((unsigned __int8 *)this + 1746),
      *((_DWORD *)this + 83));
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 45); i != (DXGDEVICE *)((char *)this + 360) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i, a2, a3);
  v5 = *((_QWORD *)this + 81);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 544LL);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v14, Current);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 56LL))(v5);
    if ( v14 )
    {
      v8 = v14 + 144;
      *(_QWORD *)(v14 + 152) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( *((_QWORD *)this + 82) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, (struct _KTHREAD **)this + 20);
  for ( j = (struct DXGALLOCATION *)*((_QWORD *)this + 6); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    DXGDEVICE::ReportAllocationState(this, j, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 8036LL;
    WdLogEvent5_WdAssertion(v11);
  }
  for ( k = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 51);
        k != (DXGDEVICE *)((char *)this + 408) && k;
        k = *(DXGDEVICESYNCOBJECT **)k )
  {
    DXGDEVICESYNCOBJECT::ReportState(k);
  }
  if ( (*((_BYTE *)this + 1749) & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 664));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
      this,
      (struct _LIST_ENTRY *)this + 43);
    *((_QWORD *)this + 84) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 664, 0LL);
    KeLeaveCriticalRegion();
  }
}
