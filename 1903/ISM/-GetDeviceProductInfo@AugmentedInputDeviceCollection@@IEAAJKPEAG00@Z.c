/*
 * XREFs of ?GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z @ 0x180099724
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180099830 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A684 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::GetDeviceProductInfo(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5)
{
  int Device; // ebx
  __int64 v10; // rdx
  int v12; // ebx
  struct RIMDevice *v13; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 v15; // [rsp+40h] [rbp-28h]
  unsigned __int16 v16; // [rsp+42h] [rbp-26h]
  unsigned __int16 v17; // [rsp+44h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13 = 0LL;
  memset_0(v14, 0, 0x28uLL);
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v13, 0LL);
  if ( Device < 0 )
  {
    v10 = 132LL;
    goto LABEL_3;
  }
  v12 = RIMGetDeviceProperties(*((_QWORD *)this + 10), *((_QWORD *)v13 + 2), v14);
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    Device = v12 | 0x10000000;
    if ( Device >= 0 )
      return (unsigned int)Device;
    v10 = 134LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  *a3 = v15;
  *a4 = v16;
  *a5 = v17;
  return 0LL;
}
