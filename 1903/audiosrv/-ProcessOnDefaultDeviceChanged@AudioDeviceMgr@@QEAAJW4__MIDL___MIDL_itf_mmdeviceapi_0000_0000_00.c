/*
 * XREFs of ?ProcessOnDefaultDeviceChanged@AudioDeviceMgr@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18014640C
 * Callers:
 *     ?Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x1801463B0 (-Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180145FB4 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::ProcessOnDefaultDeviceChanged(
        struct _RTL_CRITICAL_SECTION *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4)
{
  unsigned int v7; // edi
  int EndpointDevice; // eax
  struct IEndpointDevice *v9; // rbx
  ULONG_PTR SpinCount; // rcx
  struct IEndpointDevice *v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[1] = (struct IEndpointDevice *)-2LL;
  v7 = 0;
  v12[0] = 0LL;
  EndpointDevice = AudioDeviceMgr::GetEndpointDevice(a1, a4, 0LL, v12);
  v9 = v12[0];
  if ( EndpointDevice >= 0 )
  {
    SpinCount = a1->SpinCount;
    if ( SpinCount )
      (*(void (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, struct IEndpointDevice *))(*(_QWORD *)SpinCount + 48LL))(
        SpinCount,
        a2,
        a3,
        v12[0]);
  }
  else
  {
    v7 = EndpointDevice;
  }
  if ( v9 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v9 + 16LL))(v9);
  return v7;
}
