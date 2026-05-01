/*
 * XREFs of _lambda_c7b169fba69fd79fe9f607e958de189f_::operator() @ 0x18006BE78
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x18006B7F0 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c7b169fba69fd79fe9f607e958de189f_::operator()(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *v8; // rdi
  HSTRING_HEADER *v9; // rbx
  PVOID Reserved1; // rdx
  char v12; // [rsp+40h] [rbp-98h] BYREF
  __int64 v13; // [rsp+48h] [rbp-90h]
  HSTRING_HEADER v14; // [rsp+50h] [rbp-88h] BYREF
  HSTRING_HEADER v15; // [rsp+70h] [rbp-68h] BYREF

  v13 = -2LL;
  v8 = &v12;
  if ( *(_QWORD *)(a1 + 24) )
    v8 = *(char **)(a1 + 24);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, (const WCHAR **)(a1 + 8));
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, (const WCHAR **)a1)[1].Reserved.Reserved1;
  return (*(__int64 (__fastcall **)(__int64, PVOID, __int64, PVOID, _QWORD, int, char *))(*(_QWORD *)a2 + 32LL))(
           a2,
           Reserved1,
           a3,
           v9[1].Reserved.Reserved1,
           *(_QWORD *)(a1 + 16),
           a4,
           v8);
}
