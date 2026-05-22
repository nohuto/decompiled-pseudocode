/*
 * XREFs of ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18005DE50
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x180069080 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18005DD2C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18005E604 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18005E704 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
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
  char v15; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF

  v17 = 0LL;
  v8 = 1;
  v15 = 1;
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
  v12 = RIMRegisterForInput(
          a2,
          0LL,
          0LL,
          0LL,
          *((_QWORD *)this + 6),
          *((_QWORD *)this + 8),
          *((_QWORD *)this + 9),
          this,
          RIMDeviceCollection::OnDeviceChangeCallbackStatic,
          &v17,
          -2LL,
          this,
          v15);
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
    *((_QWORD *)this + 10) = v17;
  v9 = RIMDeviceCollection::InitializeRIM(this, a3, a4);
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
