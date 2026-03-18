/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02304D0
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F6318 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq @ 0x1C003F3A4 (McTemplateK0ppqpttq.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C020DFC8 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C02303A4 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C023042C (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C026D530 (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this, __int64 a2, const GUID *a3)
{
  unsigned __int8 v4; // r10
  int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  DXGCONTEXT *i; // rbx
  struct DXGALLOCATION *j; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  DXGDEVICESYNCOBJECT *k; // rbx
  _BYTE v15[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( bTracingEnabled )
  {
    a3 = (const GUID *)*((unsigned int *)this + 83);
    v4 = *((_BYTE *)this + 1745);
    v5 = *((_DWORD *)this + 82);
    v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
    v7 = *((_QWORD *)this + 2);
    v8 = *((_BYTE *)this + 1746);
    a2 = *(_QWORD *)(v7 + 16);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqpttq(v4, &EventReportDevice, a3, v6, a2, v5, this, v4, v8, (_DWORD)a3);
  }
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 45); i != (DXGDEVICE *)((char *)this + 360) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i, a2, a3);
  if ( *((_QWORD *)this + 81) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 56LL))();
  if ( *((_QWORD *)this + 82) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, (struct _KTHREAD **)this + 20);
  for ( j = (struct DXGALLOCATION *)*((_QWORD *)this + 6); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    DXGDEVICE::ReportAllocationState(this, j, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 8118LL;
    WdLogEvent5_WdAssertion(v13);
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
    (*(void (__fastcall **)(DXGDEVICE *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 712LL))(
      this,
      (char *)this + 688);
    *((_QWORD *)this + 84) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 664, 0LL);
    KeLeaveCriticalRegion();
  }
}
