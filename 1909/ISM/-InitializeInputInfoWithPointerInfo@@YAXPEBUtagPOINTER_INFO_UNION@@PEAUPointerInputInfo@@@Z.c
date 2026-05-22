/*
 * XREFs of ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUPointerInputInfo@@@Z @ 0x1800BCAB4
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BC664 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180014D7C (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x1801418DC (-GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InitializeInputInfoWithPointerInfo(
        const struct tagPOINTER_INFO_UNION *a1,
        struct PointerInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  struct KeyboardModifierState *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct KeyboardModifierState *v8; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)a2 + 1) = *((_DWORD *)a1 + 4);
  *((_DWORD *)a2 + 2) = *((_DWORD *)a1 + 16);
  *((_QWORD *)a2 + 2) = *((_QWORD *)a1 + 10);
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      *(_DWORD *)a2 = 8;
      break;
    case 3:
      *(_DWORD *)a2 = 16;
      break;
    case 4:
      *(_DWORD *)a2 = 2;
      break;
    case 5:
      *(_DWORD *)a2 = 32;
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        1924LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        a4);
      __debugbreak();
  }
  v8 = 0LL;
  v5 = KeyboardModifierState::Create(&v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1928LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  KeyboardModifierState::GetCurrentKeyboardModifierState(v8, (unsigned int *)a2 + 34);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
