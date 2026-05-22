/*
 * XREFs of _lambda_3f084708ee41b48d6da9ecc3660b6220_::_lambda_invoker_cdecl_ @ 0x1800EDFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_3f084708ee41b48d6da9ecc3660b6220_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  DWORD TickCount; // ebx
  __int64 v6; // rcx
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rcx
  int v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-C0h]
  int v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+6Ch] [rbp-94h]
  int v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+74h] [rbp-8Ch]
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+588h]

  if ( !*(_BYTE *)(a1 + 96) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1AC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      a4);
    __debugbreak();
  }
  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v13, 0, 0x640uLL);
  v6 = *(_QWORD *)(a1 + 80);
  v14 = PerformanceCount;
  v16 = 1;
  v17 = 1;
  *(_QWORD *)v11 = 0LL;
  v15 = 1600;
  v13[0] = 8;
  v13[2] = TickCount;
  v7 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v6 + 32LL))(v6, v11, &v11[1]);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1BE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x1800EE106LL);
  }
  v8 = *(_BYTE *)(a1 + 1096) == 0;
  v19 = v11[0];
  v20 = v11[1];
  v18 = 3;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a1 + 104);
    v13[1] = *(_DWORD *)(a1 + 112);
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 24LL))(v9, v13);
  }
  return 0LL;
}
