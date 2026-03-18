/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C6030
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C014FB48 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C00102E0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0010310 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C0019660 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C00EEC68 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F03C8 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01DF2BC (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // rcx
  DXGVIRTUALGPUMANAGER *v3; // rcx
  struct DXGSYNCOBJECT *v4; // rdi
  PERESOURCE *Global; // rax
  _QWORD *v6; // r14
  _QWORD *i; // rsi
  __int64 v8; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v9; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int j; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+51h] [rbp+9h]

  v14 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v13);
  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 188);
  if ( v2 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v2, 0LL);
  v3 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 187);
  if ( v3 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v3, 0LL);
  v4 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 84);
  if ( v4 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v3);
    DXGGLOBAL::DestroySyncObject(Global, v4, 0);
    *((_QWORD *)this + 84) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 56, 0LL);
  v6 = (_QWORD *)((char *)this + 240);
  *((_QWORD *)this + 8) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 30); i != v6; i = (_QWORD *)*i )
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
  while ( (_QWORD *)*v6 != v6 )
    DXGPROCESS::DestroyAdapterInfo(*(DXGPROCESS **)(*v6 - 24LL), (struct ADAPTER_RENDER **)(*v6 - 56LL));
  *((_QWORD *)this + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)this + 92, 0);
  DXGPUSHLOCK::AcquireExclusive(v11);
  v8 = 0LL;
  for ( j = 2; (unsigned int)v8 < *((_DWORD *)this + 190); v8 = (unsigned int)(v8 + 1) )
  {
    v9 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 96) + 8 * v8);
    if ( v9 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v9);
  }
  operator delete[](*((void **)this + 96));
  *((_DWORD *)this + 190) = 0;
  *((_QWORD *)this + 96) = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v13);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  if ( v14 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v13);
}
