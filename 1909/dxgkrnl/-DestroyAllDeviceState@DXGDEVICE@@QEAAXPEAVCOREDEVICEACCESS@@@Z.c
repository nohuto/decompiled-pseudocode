/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01246E4
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0CB8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0124C54 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000CA50 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00E2C1C (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123538 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123890 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01240C8 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C0124928 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C0124A24 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C0124A4C (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C0124AAC (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0124B10 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C0124C14 (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C022E4F4 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C022E870 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C022E8C8 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct DXGOVERLAY **i; // rsi
  char v8; // si
  __int64 v9; // rcx
  struct DXGCONTEXT ****v10; // rdi
  struct DXGCONTEXT ***v11; // rdx
  struct DXGPAGINGQUEUE **j; // rdi
  unsigned int v13; // edx
  DXGADAPTER *v14; // rcx
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v16 + 24) = 752LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(v5);
  v6[3] = this;
  v6[4] = *((unsigned int *)this + 83);
  v6[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v6);
  *((_DWORD *)this + 18) = 1;
  DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u, 0);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 632LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  for ( i = (struct DXGOVERLAY **)((char *)this + 376); *i != (struct DXGOVERLAY *)i; DXGDEVICE::DestroyOverlay(
                                                                                        this,
                                                                                        *i) )
    ;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  if ( *((_DWORD *)this + 116) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations(this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 216), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u, 0);
    if ( *((_QWORD *)this + 82) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v8 = 0;
      }
      else
      {
        v8 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1LL);
      if ( v8 )
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)a2);
      if ( *((DXGDEVICE **)this + 86) != (DXGDEVICE *)((char *)this + 688) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 152LL))(*((_QWORD *)this + 82));
    }
    DXGDEVICE::DrainResources(this);
    DXGDEVICE::DrainAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, (struct COREDEVICEACCESS *)a2);
  }
  v10 = (struct DXGCONTEXT ****)((char *)this + 360);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == (struct DXGCONTEXT ***)v10 )
      break;
    DXGDEVICE::DestroyContext(this, v11, 0LL);
  }
  if ( *((DXGDEVICE **)this + 86) != (DXGDEVICE *)((char *)this + 688) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v11);
    v17[3] = 275LL;
    v17[4] = 43LL;
    v17[5] = this;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  for ( j = (struct DXGPAGINGQUEUE **)((char *)this + 392);
        *j != (struct DXGPAGINGQUEUE *)j;
        DXGDEVICE::DestroyPagingQueue((PERESOURCE *)this, *j, 0LL) )
  {
    ;
  }
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  DXGDEVICE::DestroyAllTrackedWorkloads(this);
  v13 = *((_DWORD *)this + 83);
  if ( v13 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 5), v13);
    *((_DWORD *)this + 83) = 0;
  }
  v14 = (DXGADAPTER *)*((_QWORD *)this + 216);
  if ( v14 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v14);
    *((_QWORD *)this + 216) = 0LL;
  }
  v15 = (struct _ERESOURCE *)*((_QWORD *)this + 13);
  if ( v15 )
  {
    ExDeleteResourceLite(v15);
    operator delete(*((void **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
}
