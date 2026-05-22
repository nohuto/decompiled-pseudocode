/*
 * XREFs of ?Initialize@MobileButtonDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800A144C
 * Callers:
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800A1154 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800200C4 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::Initialize(
        MobileButtonDeviceCollection *this,
        void **a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 65774;
  v4 = HIDDeviceCollection::Initialize(this, (__int64)a2, (struct _RIM_USAGE_ANDPAGE *const)&v8, a4, 0x28u, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x55,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
