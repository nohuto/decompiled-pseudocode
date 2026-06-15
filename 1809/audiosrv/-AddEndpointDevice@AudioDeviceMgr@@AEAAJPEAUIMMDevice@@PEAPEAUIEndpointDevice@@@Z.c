/*
 * XREFs of ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180050830
 * Callers:
 *     ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x18005830C (-EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180141F54 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18004D498 (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18005070C (-GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x1800507B0 (-GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAP.c)
 *     ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x180050A8C (-CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180141C78 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::AddEndpointDevice(
        AudioDeviceMgr *this,
        struct IMMDevice *a2,
        struct IEndpointDevice **a3)
{
  unsigned int v6; // edi
  struct IEndpointCollection *v7; // rbx
  int DataFlow; // eax
  AudioDeviceMgr *v9; // rcx
  struct IEndpointDevice *v11; // [rsp+20h] [rbp-20h] BYREF
  struct IEndpointCollection *v12[3]; // [rsp+28h] [rbp-18h] BYREF
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v13; // [rsp+78h] [rbp+38h] BYREF
  int v14; // [rsp+88h] [rbp+48h] BYREF

  v12[1] = (struct IEndpointCollection *)-2LL;
  v6 = 0;
  v11 = 0LL;
  v7 = 0LL;
  v12[0] = 0LL;
  if ( a2 )
  {
    DataFlow = EndpointDevice::CreateInstance(a2, &v11);
    if ( DataFlow < 0
      || (DataFlow = AudioDeviceMgr::GetDataFlow(v9, a2, &v13), DataFlow < 0)
      || (DataFlow = AudioDeviceMgr::GetEndpointCollection(this, v13, v12), v7 = v12[0], DataFlow < 0)
      || (DataFlow = (*(__int64 (__fastcall **)(struct IEndpointCollection *, struct IEndpointDevice *))(*(_QWORD *)v12[0] + 32LL))(
                       v12[0],
                       v11),
          DataFlow < 0)
      || (DataFlow = AudioDeviceMgr::CreatePhoneTopology(this, a2, &v14), DataFlow < 0) )
    {
      v6 = DataFlow;
    }
    else if ( a3 )
    {
      ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v11, a3);
    }
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IEndpointCollection *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v11 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v11 + 16LL))(v11);
  return v6;
}
