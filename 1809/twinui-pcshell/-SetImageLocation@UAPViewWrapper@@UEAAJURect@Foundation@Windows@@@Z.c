/*
 * XREFs of ?SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x18023D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UAPViewWrapper::SetImageLocation(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 - 368) + 296LL);
  AcquireSRWLockShared(v4);
  v5 = *(_QWORD *)(a1 - 344);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 - 368) + 520LL) + 152LL))(
      *(_QWORD *)(*(_QWORD *)(a1 - 368) + 520LL),
      v5,
      a2);
    v6 = 0;
  }
  else
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
