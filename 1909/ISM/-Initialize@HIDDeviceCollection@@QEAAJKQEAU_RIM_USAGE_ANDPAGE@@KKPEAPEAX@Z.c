/*
 * XREFs of ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800200C4
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18001F11C (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18001FD94 (-Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x18001FE90 (-DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18001FECC (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18001FFC8 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Initialize@MobileButtonDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800A144C (-Initialize@MobileButtonDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800A2C00 (-Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800A39B4 (-Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800201EC (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180020328 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059990 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18009A210 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HIDDeviceCollection::Initialize(
        HIDDeviceCollection *this,
        __int64 a2,
        struct _RIM_USAGE_ANDPAGE *const a3,
        __int64 a4,
        unsigned int a5,
        void **a6)
{
  char v8; // si
  _DWORD *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16[2]; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = 1;
  v9 = operator new[](4uLL);
  *((_QWORD *)this + 343) = v9;
  if ( v9 )
  {
    *v9 = 0;
    *((_DWORD *)this + 688) = 1;
    **((_DWORD **)this + 343) = *(_DWORD *)a3;
    v10 = RIMDeviceCollection::InitializeSyncObjects(this);
    v11 = v10;
    if ( v10 < 0 )
    {
      v15 = 99LL;
    }
    else
    {
      *((_DWORD *)this + 8) = 32;
      *(_QWORD *)v16 = *((_QWORD *)this + 6);
      v12 = RIMRegisterForInput(32LL, 0LL, *((unsigned int *)this + 688), *((_QWORD *)this + 343));
      if ( v12 < 0 )
      {
        v11 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0x71,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
                (const char *)(unsigned int)v12,
                v16[0]);
        goto LABEL_8;
      }
      if ( !*((_QWORD *)this + 10) )
        *((_QWORD *)this + 10) = 0LL;
      v10 = RIMDeviceCollection::InitializeRIM(this, a5, a6);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v8 = 0;
        v11 = 0;
        goto LABEL_8;
      }
      v15 = 130LL;
    }
    v14 = (unsigned int)v10;
  }
  else
  {
    v11 = -2147024882;
    v14 = 2147942414LL;
    v15 = 89LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
    (const char *)v14);
LABEL_8:
  if ( v8 )
    RIMDeviceCollection::Close(this);
  return v11;
}
