/*
 * XREFs of ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z @ 0x180084654
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180083E6C (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall InitializeInputInfoWithPointerInfo(
        const struct tagPOINTER_INFO_UNION *a1,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

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
        (void *)0x5ED,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        a4);
      JUMPOUT(0x1800846BFLL);
  }
  *((_DWORD *)a2 + 13) = *((_DWORD *)a1 + 2);
}
