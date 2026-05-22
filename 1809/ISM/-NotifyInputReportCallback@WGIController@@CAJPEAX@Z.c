/*
 * XREFs of ?NotifyInputReportCallback@WGIController@@CAJPEAX@Z @ 0x18006F210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyInputReportCallback(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  unsigned int v4; // edi
  const struct std::nothrow_t *v5; // rdx
  int v6; // eax
  void *v7; // rcx
  _QWORD *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a1 )
  {
    v2 = 1157LL;
LABEL_5:
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x80070057LL);
    goto LABEL_8;
  }
  v3 = (_QWORD *)*a1;
  if ( !v3 )
  {
    v2 = 1158LL;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v3 + 24LL))(v3, a1[1]);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x488,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x18006F2D6LL);
  }
  v4 = 0;
LABEL_8:
  if ( a1 )
  {
    v7 = (void *)a1[1];
    if ( v7 )
      operator delete(v7, v5);
    v8 = (_QWORD *)*a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
    }
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  }
  return v4;
}
