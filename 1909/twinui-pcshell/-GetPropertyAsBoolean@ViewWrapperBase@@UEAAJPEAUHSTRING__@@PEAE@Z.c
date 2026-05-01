/*
 * XREFs of ?GetPropertyAsBoolean@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x1802B75C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::GetPropertyAsBoolean(ViewWrapperBase *this, HSTRING a2, unsigned __int8 *a3)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0;
  v6 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockShared(v6);
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, HSTRING, unsigned __int8 *))(**(_QWORD **)(*((_QWORD *)this + 20)
                                                                                              + 504LL)
                                                                                + 240LL))(
           *(_QWORD *)(*((_QWORD *)this + 20) + 504LL),
           v7,
           a2,
           a3);
  }
  else
  {
    v8 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x586,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v8;
}
