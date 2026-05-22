/*
 * XREFs of ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18009A538
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800A5440 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800201EC (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180020328 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059990 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18009A210 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::Initialize(
        RIMDeviceCollection *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  char v8; // si
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = 1;
  v9 = RIMDeviceCollection::InitializeSyncObjects(this);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 153LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  *((_DWORD *)this + 8) = a2;
  v12 = RIMRegisterForInput(a2, 0LL, 0LL, 0LL);
  if ( v12 < 0 )
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0xA7,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)v12);
    goto LABEL_11;
  }
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = 0LL;
  v9 = RIMDeviceCollection::InitializeRIM((HANDLE *)this, a3, a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 184LL;
    goto LABEL_9;
  }
  v8 = 0;
  v10 = 0;
LABEL_11:
  if ( v8 )
    RIMDeviceCollection::Close((HANDLE *)this);
  return v10;
}
