/*
 * XREFs of ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A4320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A464 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A5670 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HeatDeviceCollection::OnDeviceAttach(
        HeatDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  void *v6; // rbx
  int Device; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rdi
  struct DeviceInfo *v13[3]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct RIMDevice *v18; // [rsp+A8h] [rbp+20h] BYREF

  v13[1] = (struct DeviceInfo *)-2LL;
  v18 = 0LL;
  memset_0(v14, 0, 0x28uLL);
  v6 = operator new(0x620uLL);
  memset_0(v6, 0, 0x620uLL);
  *((_DWORD *)v6 + 2) = 1568;
  v13[2] = (struct DeviceInfo *)v6;
  v13[0] = (struct DeviceInfo *)v6;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, v13);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 110LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    goto LABEL_9;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v18, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = (unsigned int)(v10 + 115);
    goto LABEL_5;
  }
  v11 = *((_QWORD *)v18 + 2);
  RIMEnableMonitorMappingForDevice(*((_QWORD *)this + 10), v11);
  if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v11, v14) >= 0 )
  {
    *((_QWORD *)v6 + 4) = v15;
    *((_DWORD *)v6 + 10) = v16;
  }
  *a3 = v13[0];
  v6 = 0LL;
  v8 = 0;
LABEL_9:
  if ( v6 )
    operator delete(v6, (const struct std::nothrow_t *)0x620);
  return v8;
}
