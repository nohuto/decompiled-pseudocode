/*
 * XREFs of ?CAppLayoutAnimationData_CreateInstance@@YAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BE008
 * Callers:
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1803B7F18 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CAppLayoutAnimationData@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1803BDF94 (--0CAppLayoutAnimationData@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 */

__int64 __fastcall CAppLayoutAnimationData_CreateInstance(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rbx
  void *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rdi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  v6 = 0LL;
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))CAppLayoutAnimationData::CAppLayoutAnimationData(
                                                             (__int64)v8,
                                                             a1,
                                                             a2);
    v9 = v6;
  }
  if ( v9 )
  {
    v13 = (**v6)(v6, &GUID_7c93abb6_c8f6_47f7_b9be_628444a831bc, a4);
    v10 = v13;
    if ( v13 >= 0 )
      goto LABEL_8;
    v12 = (unsigned int)v13;
    v11 = 51LL;
  }
  else
  {
    v10 = -2147024882;
    v11 = 50LL;
    v12 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutanimationdata.cpp",
    (const char *)v12);
LABEL_8:
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v9)[2])(v9);
  return v10;
}
