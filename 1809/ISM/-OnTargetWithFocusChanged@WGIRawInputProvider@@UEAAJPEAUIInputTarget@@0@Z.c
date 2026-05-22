/*
 * XREFs of ?OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x18006B120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x18006B700 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnTargetWithFocusChanged(
        WGIRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  unsigned int v13; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+28h] BYREF

  v11[1] = -2LL;
  v14 = 0;
  v13 = 0;
  if ( a3 )
  {
    v11[0] = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           v11);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v11[0] + 32LL))(v11[0], &v14);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x18006B24ELL);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v11[0] + 72LL))(v11[0], &v13);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v7 = v11[0];
    if ( v11[0] )
    {
      v11[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v8 = WGIRawInputProvider::SetInputFocusProcess((WGIRawInputProvider *)((char *)this - 8), v14, v13);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBB,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
