/*
 * XREFs of ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800676F8
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180068F14 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall HeatDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct HeatDeviceCollection **a4)
{
  HIDDeviceCollection *v7; // rax
  HIDDeviceCollection *v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 && a3 && a4 )
  {
    v7 = (HIDDeviceCollection *)malloc(0xAC8uLL);
    v8 = v7;
    if ( v7 )
    {
      memset_0(v7, 0, 0xAC8uLL);
      HIDDeviceCollection::HIDDeviceCollection(v8, a1);
      *((_QWORD *)v8 + 3) = a2;
      *(_QWORD *)v8 = &HeatDeviceCollection::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      *a4 = v8;
      return 0LL;
    }
    v9 = -2147024882;
    v10 = 41LL;
  }
  else
  {
    v9 = -2147024809;
    v10 = 36LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
    (const char *)v9);
  return v9;
}
