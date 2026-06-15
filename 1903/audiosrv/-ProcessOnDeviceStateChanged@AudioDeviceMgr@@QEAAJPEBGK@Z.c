/*
 * XREFs of ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x180146624
 * Callers:
 *     ?Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x1801463F0 (-Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180145FB4 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x1801464C0 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::ProcessOnDeviceStateChanged(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        int a3)
{
  unsigned int v4; // edi
  struct IEndpointDevice *v5; // rbx
  int EndpointDevice; // eax
  __int64 *SpinCount; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct IEndpointDevice *v11[3]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v11[1] = (struct IEndpointDevice *)-2LL;
  v4 = 0;
  v5 = 0LL;
  v11[0] = 0LL;
  v12 = 0;
  v13 = 0;
  if ( a3 != 1 && a3 != 8 )
  {
    EndpointDevice = AudioDeviceMgr::ProcessOnDeviceRemoved(this, a2);
    if ( EndpointDevice >= 0 )
      goto LABEL_13;
    goto LABEL_6;
  }
  EndpointDevice = AudioDeviceMgr::GetEndpointDevice(this, a2, &v12, v11);
  v5 = v11[0];
  if ( EndpointDevice < 0 )
  {
LABEL_6:
    v4 = EndpointDevice;
    goto LABEL_13;
  }
  SpinCount = (__int64 *)this->SpinCount;
  if ( SpinCount )
  {
    v8 = *SpinCount;
    if ( v12 )
      (*(void (__fastcall **)(__int64 *, struct IEndpointDevice *))(v8 + 24))(SpinCount, v11[0]);
    else
      (*(void (__fastcall **)(__int64 *, struct IEndpointDevice *))(v8 + 40))(SpinCount, v11[0]);
  }
  v9 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)v5 + 32LL))(v5, &v13);
  if ( v9 < 0 )
    v4 = v9;
LABEL_13:
  if ( v5 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v5 + 16LL))(v5);
  return v4;
}
