/*
 * XREFs of ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180064EB4
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x180065010 (--0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800690D0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MobileButtonDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct MobileButtonDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rbx
  MobileButtonDeviceCollection *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r9d
  MobileButtonDeviceCollection *v12; // rbx
  HIDDeviceCollection *v13; // rsi
  int v14; // edi
  __int64 v15; // rdx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  MobileButtonDeviceCollection *v19; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v9 = (MobileButtonDeviceCollection *)malloc(0xB50uLL);
    v12 = v9;
    if ( v9 )
      memset_0(v9, 0, 0xB50uLL);
    v19 = v12;
    if ( v12 )
      v13 = MobileButtonDeviceCollection::MobileButtonDeviceCollection(v12, a1, a2);
    else
      v13 = 0LL;
    v8 = v13;
    if ( v13 )
    {
      LODWORD(v19) = 65774;
      v16 = HIDDeviceCollection::Initialize(v13, v10, (struct _RIM_USAGE_ANDPAGE *const)&v19, v11, 0x28u, a3);
      v14 = v16;
      if ( v16 >= 0 )
        v14 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x55,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
          (const char *)(unsigned int)v16);
      if ( v14 >= 0 )
      {
        v8 = 0LL;
        *a4 = v13;
        v14 = 0;
        goto LABEL_19;
      }
      v15 = 44LL;
    }
    else
    {
      v14 = -2147024882;
      v15 = 42LL;
    }
  }
  else
  {
    v14 = -2147024809;
    v15 = 38LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
    (const char *)(unsigned int)v14);
LABEL_19:
  if ( v8 )
    (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  return (unsigned int)v14;
}
