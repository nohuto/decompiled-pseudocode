/*
 * XREFs of ?EnableInput@ViewWrapperBase@@UEAAJE@Z @ 0x1802B6CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::EnableInput(ViewWrapperBase *this, char a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockShared(v4);
  v6 = *((_QWORD *)this + 23);
  if ( v6 )
  {
    LOBYTE(v5) = a2 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 20) + 504LL) + 200LL))(
      *(_QWORD *)(*((_QWORD *)this + 20) + 504LL),
      v6,
      v5);
    v7 = 0;
  }
  else
  {
    v7 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v7;
}
