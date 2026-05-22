/*
 * XREFs of ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180067880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180069360 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HeatDeviceCollection::OnDeviceAttach(
        HeatDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  void *v6; // rbx
  int DeviceId; // eax
  unsigned int *v8; // r9
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rdi
  struct DeviceInfo *v13[3]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[16]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct RIMDevice *v18; // [rsp+98h] [rbp+20h] BYREF

  v13[1] = (struct DeviceInfo *)-2LL;
  v18 = 0LL;
  memset_0(v14, 0, 0x28uLL);
  v6 = operator new(0x3D8uLL);
  memset_0(v6, 0, 0x3D8uLL);
  *((_DWORD *)v6 + 2) = 984;
  v13[2] = (struct DeviceInfo *)v6;
  v13[0] = (struct DeviceInfo *)v6;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, v13);
  v9 = DeviceId;
  if ( DeviceId < 0 )
  {
    v10 = 110LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
    goto LABEL_9;
  }
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v18, v8);
  v9 = DeviceId;
  if ( DeviceId < 0 )
  {
    v10 = 115LL;
    goto LABEL_5;
  }
  v11 = *((_QWORD *)v18 + 2);
  RIMEnableMonitorMappingForDevice(*((_QWORD *)this + 10), v11, 0LL);
  if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v11, v14) >= 0 )
  {
    *((_QWORD *)v6 + 3) = v15;
    *((_DWORD *)v6 + 8) = v16;
  }
  *a3 = v13[0];
  v6 = 0LL;
  v9 = 0;
LABEL_9:
  if ( v6 )
    operator delete(v6, (const struct std::nothrow_t *)0x3D8);
  return v9;
}
