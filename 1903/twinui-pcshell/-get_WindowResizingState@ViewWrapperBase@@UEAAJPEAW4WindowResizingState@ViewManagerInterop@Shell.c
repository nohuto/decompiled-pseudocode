/*
 * XREFs of ?get_WindowResizingState@ViewWrapperBase@@UEAAJPEAW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18029CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_WindowResizingState(
        ViewWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::WindowResizingState *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_DWORD *)a2 = 0;
  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockShared(v4);
  v5 = *((_QWORD *)this + 23);
  if ( !v5 )
  {
    v6 = -2147023728;
    v7 = 2147943568LL;
    v8 = 1676LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)v7);
    goto LABEL_7;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, enum Windows::Internal::Shell::ViewManagerInterop::WindowResizingState *))(**(_QWORD **)(*((_QWORD *)this + 20) + 504LL) + 280LL))(
         *(_QWORD *)(*((_QWORD *)this + 20) + 504LL),
         v5,
         a2);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 1678LL;
    goto LABEL_5;
  }
  v6 = 0;
LABEL_7:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
