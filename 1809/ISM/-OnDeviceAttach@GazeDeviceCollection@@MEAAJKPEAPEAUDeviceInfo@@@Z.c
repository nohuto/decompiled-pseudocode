/*
 * XREFs of ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180067F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180069360 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180069F34 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::OnDeviceAttach(
        GazeDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  _DWORD *v6; // rbx
  int DeviceId; // eax
  unsigned int *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  GazeHidDevice *v11; // rsi
  unsigned int v12; // edi
  struct GazeDeviceInfo *v13; // rdx
  struct DeviceInfo *v14; // rax
  __int64 v15; // rcx
  struct GazeDeviceInfo *v16; // rcx
  struct DeviceInfo *v18; // [rsp+20h] [rbp-30h] BYREF
  struct RIMDevice *v19[4]; // [rsp+28h] [rbp-28h] BYREF
  char v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct GazeDeviceInfo *v22; // [rsp+88h] [rbp+38h] BYREF

  v19[1] = (struct RIMDevice *)-2LL;
  v19[0] = 0LL;
  v22 = 0LL;
  v6 = operator new(0x3D8uLL);
  memset_0(v6, 0, 0x3D8uLL);
  v6[2] = 984;
  v18 = (struct DeviceInfo *)v6;
  v19[2] = (struct RIMDevice *)&v18;
  v19[3] = (struct RIMDevice *)&v22;
  v20 = 1;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, &v18);
  v9 = DeviceId;
  if ( DeviceId < 0 )
  {
    v10 = 135LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
    v16 = v22;
    goto LABEL_11;
  }
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, v19, v8);
  v9 = DeviceId;
  if ( DeviceId < 0 )
  {
    v10 = 139LL;
    goto LABEL_9;
  }
  v11 = v19[0];
  v12 = *((_DWORD *)v19[0] + 14) + 1032;
  v22 = (struct GazeDeviceInfo *)operator new(v12);
  memset_0(v22, 0, v12);
  v13 = v22;
  v14 = v18;
  v15 = 7LL;
  do
  {
    *(_OWORD *)v13 = *(_OWORD *)v14;
    *((_OWORD *)v13 + 1) = *((_OWORD *)v14 + 1);
    *((_OWORD *)v13 + 2) = *((_OWORD *)v14 + 2);
    *((_OWORD *)v13 + 3) = *((_OWORD *)v14 + 3);
    *((_OWORD *)v13 + 4) = *((_OWORD *)v14 + 4);
    *((_OWORD *)v13 + 5) = *((_OWORD *)v14 + 5);
    *((_OWORD *)v13 + 6) = *((_OWORD *)v14 + 6);
    v13 = (struct GazeDeviceInfo *)((char *)v13 + 128);
    *((_OWORD *)v13 - 1) = *((_OWORD *)v14 + 7);
    v14 = (struct DeviceInfo *)((char *)v14 + 128);
    --v15;
  }
  while ( v15 );
  *(_OWORD *)v13 = *(_OWORD *)v14;
  *((_OWORD *)v13 + 1) = *((_OWORD *)v14 + 1);
  *((_OWORD *)v13 + 2) = *((_OWORD *)v14 + 2);
  *((_OWORD *)v13 + 3) = *((_OWORD *)v14 + 3);
  *((_OWORD *)v13 + 4) = *((_OWORD *)v14 + 4);
  *((_QWORD *)v13 + 10) = *((_QWORD *)v14 + 10);
  *((_DWORD *)v22 + 2) = v12;
  DeviceId = GazeHidDevice::Initialize(v11, v22);
  v9 = DeviceId;
  if ( DeviceId < 0 )
  {
    v10 = 156LL;
    goto LABEL_9;
  }
  *a3 = v22;
  v16 = 0LL;
  v22 = 0LL;
  v9 = 0;
LABEL_11:
  if ( v18 )
  {
    operator delete(v18, (const struct std::nothrow_t *)0x3D8);
    v18 = 0LL;
    v16 = v22;
  }
  if ( v16 )
    operator delete(v16, (const struct std::nothrow_t *)0x408);
  return v9;
}
