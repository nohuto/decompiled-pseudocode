/*
 * XREFs of _lambda_1dd5c0261d80117c1c27db3ac49c0127_::operator() @ 0x180062CAC
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_1dd5c0261d80117c1c27db3ac49c0127___ @ 0x180062B28 (ActivateExperienceWithPropertySetCore__lambda_1dd5c0261d80117c1c27db3ac49c0127___.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1dd5c0261d80117c1c27db3ac49c0127_::operator()(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *v8; // rdi
  HSTRING_HEADER *v9; // rbx
  PVOID Reserved1; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  char v14; // [rsp+40h] [rbp-98h] BYREF
  __int64 v15; // [rsp+48h] [rbp-90h]
  HSTRING_HEADER v16; // [rsp+50h] [rbp-88h] BYREF
  HSTRING_HEADER v17; // [rsp+70h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v15 = -2LL;
  v8 = &v14;
  if ( *(_QWORD *)(a1 + 24) )
    v8 = *(char **)(a1 + 24);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, (const WCHAR **)(a1 + 8));
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, (const WCHAR **)a1)[1].Reserved.Reserved1;
  v11 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64, PVOID, _QWORD, int, char *))(*(_QWORD *)a2 + 32LL))(
          a2,
          Reserved1,
          a3,
          v9[1].Reserved.Reserved1,
          *(_QWORD *)(a1 + 16),
          a4,
          v8);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF1,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v11);
  return v12;
}
