/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C02A0D00
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C02A08E0 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02A11C0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0153394 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1C01546E0 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C0154BE0 (DpiRequestIoPowerState.c)
 *     DpiPnpEnableVga @ 0x1C015A67C (DpiPnpEnableVga.c)
 *     DxgkFinishPnPTransition @ 0x1C017E4A0 (DxgkFinishPnPTransition.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0244224 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     _lambda_2f836dd47adc312419d8f41257eabf02_::operator() @ 0x1C0276844 (_lambda_2f836dd47adc312419d8f41257eabf02_--operator().c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C029E3CC (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoCloseDeviceFileObject @ 0x1C029EF84 (DpiFdoCloseDeviceFileObject.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C02AE8D4 (DpiLdaStopAllAdaptersInChain.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int v6; // r14d
  char v7; // r15
  __int64 DeviceExtension; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  struct _KEVENT *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r14d
  DXGADAPTER *v20; // rcx
  DXGGLOBAL *Global; // rax
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  union _LARGE_INTEGER v32; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v34[10]; // [rsp+50h] [rbp-39h] BYREF

  memset(v34, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v34[1]);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  DeviceExtension = (__int64)a1->DeviceExtension;
  v34[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v34[3]) = 5;
  LOBYTE(v34[6]) = -1;
  v32.QuadPart = -300000000LL;
  DpiFdoStopMiracastSession((__int64)a1, 1, &v32, 0x82u);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
  {
    if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
      v5 = DeviceExtension;
  }
  else
  {
    v12 = *(_QWORD *)(DeviceExtension + 2728);
    if ( v12 )
      v5 = *(_QWORD *)(v12 + 64);
  }
  if ( *(_DWORD *)(DeviceExtension + 240) == 2 )
  {
    v7 = 1;
    if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 236) - 5) <= 1 )
    {
      if ( v5 && *(_BYTE *)(v5 + 2743) )
        v13 = *(_QWORD *)(v5 + 5760);
      else
        v13 = 0x100000000LL;
      v14 = *((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 74);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, (struct DXGFASTMUTEX *const)(v14 + 80), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
      v15 = *(struct _KEVENT **)(v14 + 136);
      if ( v15 )
        KeResetEvent(v15);
      if ( v13 != 0x300000000LL )
      {
        v16 = 0x100000000LL;
        if ( v13 == 0x200000000LL )
        {
          v17 = *(_DWORD *)(v14 + 128);
          v13 = 0x100000000LL;
          if ( v17 != -1 )
            v13 = v17;
        }
        v18 = *(_DWORD *)(v14 + 72);
        if ( v13 == 0x100000000LL )
        {
          v19 = 0;
          if ( v18 )
          {
            do
              lambda_2f836dd47adc312419d8f41257eabf02_::operator()(
                v16,
                *(_QWORD *)(*(_QWORD *)(v14 + 40) + 8LL * v19++));
            while ( v19 < *(_DWORD *)(v14 + 72) );
          }
        }
        else if ( (unsigned int)v13 < v18 )
        {
          lambda_2f836dd47adc312419d8f41257eabf02_::operator()(
            0x100000000LL,
            *(_QWORD *)(*(_QWORD *)(v14 + 40) + 8LL * (unsigned int)v13));
        }
      }
      v6 = *(_DWORD *)(v14 + 144) + 1;
      *(_DWORD *)(v14 + 144) = v6;
      if ( v33[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
      v7 = 1;
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 236) == 6 && v5 )
  {
    if ( *(_BYTE *)(v5 + 480) )
    {
      if ( *(_DWORD *)(v5 + 3992) != 3 )
      {
        v20 = *(DXGADAPTER **)(v5 + 3896);
        if ( v20 )
        {
          if ( *((_DWORD *)v20 + 44) != 2 && *((_DWORD *)v20 + 44) != 4 )
            DXGADAPTER::Stop(v20, 0, 0);
          Global = DXGGLOBAL::GetGlobal((__int64)v20, v9);
          DXGGLOBAL::NotifyAdapterRemoval(Global);
          *(_DWORD *)(v5 + 3992) = 3;
        }
      }
    }
    else
    {
      DpiRequestIoPowerState(*(_QWORD *)(v5 + 24), 3, v11, 0);
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 504) )
  {
    DpiLdaStopAllAdaptersInChain(a1, v34);
  }
  else if ( *(_DWORD *)(DeviceExtension + 240) == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  DpiFdoCloseDeviceFileObject(DeviceExtension);
  v22 = *(_QWORD *)(DeviceExtension + 1288);
  if ( v22 )
  {
    ExFreePoolWithTag((PVOID)v22, 0);
    *(_QWORD *)(DeviceExtension + 1288) = 0LL;
  }
  if ( *(_DWORD *)(DeviceExtension + 236) != 4 )
  {
    v22 = *(_DWORD *)(DeviceExtension + 276) & 7;
    *(_DWORD *)(DeviceExtension + 4 * v22 + 244) = *(_DWORD *)(DeviceExtension + 240);
    v23 = *(_DWORD *)(DeviceExtension + 236);
    ++*(_DWORD *)(DeviceExtension + 276);
    *(_DWORD *)(DeviceExtension + 240) = v23;
    *(_DWORD *)(DeviceExtension + 236) = 4;
  }
  v24 = WdLogNewEntry5_WdEvent(v22);
  *(_QWORD *)(v24 + 24) = a1;
  WdLogEvent5_WdEvent(v24);
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 240) - 5) <= 1 )
  {
    v27 = *(_BYTE *)(DeviceExtension + 1152);
    if ( v7 )
    {
      if ( v27 )
      {
        AcquireMiniportListMutex();
        if ( dword_1C00A2A88 == 2 )
          DpiEnableMsBddFallbackDriver((__int64)v34, v28, v29);
        if ( (struct _DEVICE_OBJECT *)qword_1C00A29D8 == a1 )
          qword_1C00A29D8 = 0LL;
        _InterlockedExchange64(&qword_1C00A2788, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      if ( v5 && *(_BYTE *)(v5 + 2743) )
      {
        DxgkFinishPnPTransition(0x300000000LL, v25);
      }
      else
      {
        LOBYTE(v26) = 1;
        DpiPnpEnableVga(v26, 0LL, v6, (__int64)v34);
      }
    }
    else if ( v27 )
    {
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C00A29D8 == a1 )
        qword_1C00A29D8 = 0LL;
      _InterlockedExchange64(&qword_1C00A2788, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    a2->IoStatus.Status = 0;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  return v4;
}
