/*
 * XREFs of ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x180057810
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x180057D48 (--1-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::InputReceivedStatic(char *a1, int a2, void *a3, const char *a4)
{
  wil::details::in1diag3 *v5; // rcx
  const void **v6; // rdx
  char *v7; // rbx
  char *v8; // rsi
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-678h] BYREF
  __int64 v13; // [rsp+30h] [rbp-668h]
  __int64 v14; // [rsp+38h] [rbp-660h]
  _BYTE v15[1600]; // [rsp+40h] [rbp-658h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+698h] [rbp+0h]

  v14 = -2LL;
  v5 = retaddr;
  if ( !a1 )
  {
LABEL_14:
    wil::details::in1diag3::_FailFast_Unexpected(
      v5,
      (void *)0x78,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      a4);
    JUMPOUT(0x18005798CLL);
  }
  if ( a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x79,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      a4);
LABEL_13:
    wil::details::in1diag3::FailFast_Hr(
      v10,
      (void *)0x98,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_14;
  }
  v12 = 0LL;
  v13 = 0LL;
  if ( a1[2033] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 2064));
    v6 = (const void **)(a1 + 2040);
    v7 = 0LL;
    v8 = 0LL;
    if ( &v12 != (__int128 *)(a1 + 2040) )
    {
      v7 = (char *)*v6;
      *(_QWORD *)&v12 = *v6;
      *v6 = 0LL;
      v8 = (char *)*((_QWORD *)a1 + 256);
      *((_QWORD *)&v12 + 1) = v8;
      *((_QWORD *)a1 + 256) = 0LL;
      v13 = *((_QWORD *)a1 + 257);
      *((_QWORD *)a1 + 257) = 0LL;
    }
    if ( a1 != (char *)-2064LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 2064));
    for ( ; v7 != v8; v7 += 1600 )
    {
      memcpy_0(v15, v7, sizeof(v15));
      v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)a1 + 2) + 24LL))(*((_QWORD *)a1 + 2), v15);
      v10 = retaddr;
      if ( v9 < 0 )
        goto LABEL_13;
    }
  }
  std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>(&v12);
  return 0LL;
}
