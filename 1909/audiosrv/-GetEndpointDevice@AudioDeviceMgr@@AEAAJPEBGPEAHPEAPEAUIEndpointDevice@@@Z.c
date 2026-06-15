/*
 * XREFs of ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180145B04
 * Callers:
 *     ?GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIEndpointDevice@@@Z @ 0x1801459F0 (-GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?ProcessOnDefaultDeviceChanged@AudioDeviceMgr@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180145F5C (-ProcessOnDefaultDeviceChanged@AudioDeviceMgr@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x180146174 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800573D4 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180145828 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x180145860 (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::GetEndpointDevice(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        int *a3,
        struct IEndpointDevice **a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  int EndpointDeviceInCollection; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+30h] [rbp-10h]
  struct IEndpointDevice *v14; // [rsp+70h] [rbp+30h] BYREF
  struct IMMDevice *v15; // [rsp+78h] [rbp+38h] BYREF

  v8 = 0;
  v14 = 0LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( !a2 )
  {
    v8 = -2147024809;
    goto LABEL_20;
  }
  if ( !a4 )
  {
    v8 = -2147467261;
    goto LABEL_20;
  }
  if ( a3 )
    *a3 = 0;
  if ( (unsigned int)AudioDeviceMgr::FindEndpointDeviceInCollection((AudioDeviceMgr *)this, a2, &v14, 0LL) != -2147023728 )
    goto LABEL_16;
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)this[1].DebugInfo + 40LL))(
         this[1].DebugInfo,
         a2,
         &v15);
  if ( v9 >= 0 )
  {
    v9 = AudioDeviceMgr::AddEndpointDevice((AudioDeviceMgr *)this, v15, &v14);
    if ( v9 >= 0 )
    {
      if ( a3 )
        *a3 = 1;
      if ( v15 )
        ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->Release)(v15);
LABEL_16:
      if ( v14
        || (EndpointDeviceInCollection = AudioDeviceMgr::FindEndpointDeviceInCollection(
                                           (AudioDeviceMgr *)this,
                                           a2,
                                           &v14,
                                           0LL),
            EndpointDeviceInCollection >= 0) )
      {
        ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v14, a4);
      }
      else
      {
        v8 = EndpointDeviceInCollection;
      }
      goto LABEL_20;
    }
  }
  v8 = v9;
  if ( v15 )
    ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->Release)(v15);
LABEL_20:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v14 )
    (*(void (__fastcall **)(struct IEndpointDevice *, _QWORD))(*(_QWORD *)v14 + 16LL))(v14, *(_QWORD *)v14);
  return v8;
}
