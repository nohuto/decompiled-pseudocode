/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F5034
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C016AD70 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC924 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C788 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C001B03C (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F1C0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F298 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9E80 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C013419C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01342DC (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C020EC84 (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this, __int64 a2)
{
  __int64 v3; // rdx
  DXGVIRTUALGPUMANAGER *v4; // rcx
  DXGVIRTUALGPUMANAGER *v5; // rcx
  struct DXGSYNCOBJECT *v6; // rdi
  PERESOURCE *Global; // rax
  _QWORD *v8; // r14
  _QWORD *i; // rsi
  __int64 v10; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _BYTE v14[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+28h] [rbp-20h]
  int j; // [rsp+30h] [rbp-18h]
  char v17; // [rsp+50h] [rbp+8h] BYREF
  char v18; // [rsp+51h] [rbp+9h]

  v18 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v17, a2);
  v4 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 188);
  if ( v4 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v4, 0LL);
  v5 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 187);
  if ( v5 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v5, 0LL);
  v6 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 84);
  if ( v6 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v5, v3);
    DXGGLOBAL::DestroySyncObject(Global, v6, 0);
    *((_QWORD *)this + 84) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 56, 0LL);
  v8 = (_QWORD *)((char *)this + 240);
  *((_QWORD *)this + 8) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 30); i != v8; i = (_QWORD *)*i )
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter((DXGPROCESS_ADAPTER_INFO *)(i - 7), (struct DXGPROCESS *)*(i - 3), this);
  *((_QWORD *)this + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 69) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 32LL))();
    *((_QWORD *)this + 69) = 0LL;
  }
  if ( *((_QWORD *)this + 66) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL) + 32LL))();
    *((_QWORD *)this + 66) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 56, 0LL);
  *((_QWORD *)this + 8) = KeGetCurrentThread();
  while ( (_QWORD *)*v8 != v8 )
    DXGPROCESS::DestroyAdapterInfo(*(DXGPROCESS **)(*v8 - 24LL), (struct ADAPTER_RENDER **)(*v8 - 56LL));
  *((_QWORD *)this + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)this + 92, 0);
  DXGPUSHLOCK::AcquireExclusive(v15);
  v10 = 0LL;
  for ( j = 2; (unsigned int)v10 < *((_DWORD *)this + 190); v10 = (unsigned int)(v10 + 1) )
  {
    v11 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 96) + 8 * v10);
    if ( v11 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v11);
  }
  operator delete[](*((void **)this + 96));
  *((_DWORD *)this + 190) = 0;
  *((_QWORD *)this + 96) = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v17, v12);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  if ( v18 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v17, v13);
}
