/*
 * XREFs of ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800690D0
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800620A8 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180064EB4 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180066C2C (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x180067820 (-DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180067C8C (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CameraControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18006836C (-Create@CameraControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18005DD2C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18005E604 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18005E704 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HIDDeviceCollection::Initialize(
        HIDDeviceCollection *this,
        __int64 a2,
        struct _RIM_USAGE_ANDPAGE *const a3,
        __int64 a4,
        unsigned int a5,
        void **lpTargetHandle)
{
  char v8; // si
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  v18 = 0LL;
  v8 = 1;
  v9 = operator new[](4uLL);
  *((_QWORD *)this + 343) = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 89LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)v11);
    goto LABEL_14;
  }
  *v9 = 0;
  *((_DWORD *)this + 688) = 1;
  **((_DWORD **)this + 343) = *(_DWORD *)a3;
  v13 = RIMDeviceCollection::InitializeSyncObjects(this);
  v10 = v13;
  if ( v13 < 0 )
  {
    v12 = 99LL;
LABEL_11:
    v11 = (unsigned int)v13;
    goto LABEL_12;
  }
  *((_DWORD *)this + 8) = 32;
  v14 = RIMRegisterForInput(
          32LL,
          0LL,
          *((unsigned int *)this + 688),
          *((_QWORD *)this + 343),
          *((_QWORD *)this + 6),
          *((_QWORD *)this + 8),
          *((_QWORD *)this + 9),
          this,
          RIMDeviceCollection::OnDeviceChangeCallbackStatic,
          &v18,
          -2LL,
          this,
          1);
  if ( v14 < 0 )
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x71,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)v14);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v18;
  v13 = RIMDeviceCollection::InitializeRIM((HANDLE *)this, a5, lpTargetHandle);
  v10 = v13;
  if ( v13 < 0 )
  {
    v12 = 130LL;
    goto LABEL_11;
  }
  v8 = 0;
  v10 = 0;
LABEL_14:
  if ( v8 )
    RIMDeviceCollection::Close((HANDLE *)this);
  return v10;
}
