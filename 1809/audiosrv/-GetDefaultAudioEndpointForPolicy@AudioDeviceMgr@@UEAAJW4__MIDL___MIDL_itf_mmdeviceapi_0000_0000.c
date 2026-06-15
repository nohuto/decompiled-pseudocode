/*
 * XREFs of ?GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIEndpointDevice@@@Z @ 0x180141E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180141C78 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180141F54 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::GetDefaultAudioEndpointForPolicy(
        AudioDeviceMgr *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v6; // edi
  struct IEndpointDevice *v7; // rbx
  int v8; // eax
  int EndpointDevice; // eax
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-18h] BYREF
  struct IEndpointDevice *v13; // [rsp+70h] [rbp+20h] BYREF

  v12[1] = -2LL;
  v6 = 0;
  v7 = 0LL;
  v13 = 0LL;
  v12[0] = 0LL;
  pv = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD *))(**((_QWORD **)a1 + 5) + 64LL))(
         *((_QWORD **)a1 + 5),
         a2,
         a3,
         v12);
  if ( v8 < 0 || (v8 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)v12[0] + 40LL))(v12[0], &pv), v8 < 0) )
  {
    v6 = v8;
  }
  else
  {
    EndpointDevice = AudioDeviceMgr::GetEndpointDevice(a1, (const unsigned __int16 *)pv, 0LL, &v13);
    if ( EndpointDevice >= 0 )
      ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v13, a4);
    else
      v6 = EndpointDevice;
    v7 = v13;
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  if ( v7 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
