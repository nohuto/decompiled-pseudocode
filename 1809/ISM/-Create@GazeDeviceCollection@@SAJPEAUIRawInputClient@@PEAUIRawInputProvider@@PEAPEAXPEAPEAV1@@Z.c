/*
 * XREFs of ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180067C8C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180068F14 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800690D0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct GazeDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rbx
  HIDDeviceCollection *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r9d
  HIDDeviceCollection *v12; // rdi
  int v13; // esi
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v9 = (HIDDeviceCollection *)malloc(0xAC8uLL);
    v12 = v9;
    if ( v9 )
      memset_0(v9, 0, 0xAC8uLL);
    if ( v12 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v12, a1);
      *(_QWORD *)v12 = &GazeDeviceCollection::`vftable';
      *((_QWORD *)v12 + 3) = a2;
    }
    v8 = v12;
    if ( v12 )
    {
      v18 = 1179649;
      v15 = HIDDeviceCollection::Initialize(v12, v10, (struct _RIM_USAGE_ANDPAGE *const)&v18, v11, 0x40u, a3);
      v13 = v15;
      if ( v15 >= 0 )
        v13 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
          (const char *)(unsigned int)v15);
      if ( v13 >= 0 )
      {
        v8 = 0LL;
        *a4 = v12;
        v13 = 0;
        goto LABEL_18;
      }
      v14 = 38LL;
    }
    else
    {
      v13 = -2147024882;
      v14 = 36LL;
    }
  }
  else
  {
    v13 = -2147024809;
    v14 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
    (const char *)(unsigned int)v13);
LABEL_18:
  if ( v8 )
    (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  return (unsigned int)v13;
}
