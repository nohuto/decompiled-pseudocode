/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C02655B0
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C0265190 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02658B0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01416F0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiFdoStopMiracastSession @ 0x1C01427A0 (DpiFdoStopMiracastSession.c)
 *     DpiPnpEnableVga @ 0x1C0145BA0 (DpiPnpEnableVga.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0145E18 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiFdoStopAdapter @ 0x1C0266DB0 (DpiFdoStopAdapter.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C026877C (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C02734C8 (DpiLdaStopAllAdaptersInChain.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  unsigned int v4; // edi
  PVOID DeviceExtension; // rbx
  __int64 v6; // rdx
  int v7; // r14d
  void *v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  int started; // r14d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  union _LARGE_INTEGER v16[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v17[10]; // [rsp+30h] [rbp-78h] BYREF

  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v4 = 0;
  DeviceExtension = a1->DeviceExtension;
  v17[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 5;
  LOBYTE(v17[6]) = -1;
  v16[0].QuadPart = -300000000LL;
  DpiFdoStopMiracastSession((__int64)a1, 1, v16, 0x82u);
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 483) )
  {
    DxgkStartCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  }
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v7 = *((_DWORD *)DeviceExtension + 60);
  if ( *((_DWORD *)DeviceExtension + 126) )
  {
    DpiLdaStopAllAdaptersInChain(a1);
  }
  else if ( v7 == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  v8 = (void *)*((_QWORD *)DeviceExtension + 152);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)DeviceExtension + 152) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 59) != 4 )
  {
    v8 = (void *)(*((_DWORD *)DeviceExtension + 69) & 7);
    *((_DWORD *)DeviceExtension + (_QWORD)v8 + 61) = *((_DWORD *)DeviceExtension + 60);
    v9 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v9;
    *((_DWORD *)DeviceExtension + 59) = 4;
  }
  v10 = WdLogNewEntry5_WdEvent(v8, v6);
  *(_QWORD *)(v10 + 24) = a1;
  WdLogEvent5_WdEvent(v10);
  if ( *((_BYTE *)DeviceExtension + 483) )
  {
    DxgkStopCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  }
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 5) <= 1 )
  {
    if ( v7 == 2 )
    {
      Global = DXGGLOBAL::GetGlobal(v11);
      started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 77));
      if ( *((_BYTE *)DeviceExtension + 1144) )
      {
        AcquireMiniportListMutex();
        if ( dword_1C008EA88 == 2 )
          DpiEnableMsBddFallbackDriver(v17);
        if ( (struct _DEVICE_OBJECT *)qword_1C008E9D8 == a1 )
          qword_1C008E9D8 = 0LL;
        _InterlockedExchange64(&qword_1C008E788, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      DpiPnpEnableVga(1u, 0, started, (__int64)v17);
    }
    else if ( *((_BYTE *)DeviceExtension + 1144) )
    {
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C008E9D8 == a1 )
        qword_1C008E9D8 = 0LL;
      _InterlockedExchange64(&qword_1C008E788, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    ++Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    Irp->IoStatus.Status = 0;
    return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  }
  return v4;
}
