/*
 * XREFs of ?OnIdleStateChanged@WindowEventDispatcher@@UEAAJH@Z @ 0x180229690
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsSuspensionEnabled@ShellExperienceConfiguration@@YA_NXZ @ 0x180215D14 (-IsSuspensionEnabled@ShellExperienceConfiguration@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rdi
  ShellExperienceConfiguration *v5; // rcx
  bool IsSuspensionEnabled; // al
  const char *v7; // r9
  __int64 *Ptr; // rsi
  __int64 *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+70h] [rbp+18h]

  v4 = this + 33;
  AcquireSRWLockExclusive(this + 33);
  v17 = v4;
  IsSuspensionEnabled = ShellExperienceConfiguration::IsSuspensionEnabled(v5);
  try
  {
    if ( !IsSuspensionEnabled )
    {
      Ptr = (__int64 *)this[20].Ptr;
      v9 = (__int64 *)this[21].Ptr;
      while ( Ptr != v9 )
      {
        v10 = *Ptr;
        v16 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 248LL))(v10, &v13);
        if ( (*(_BYTE *)(v13 + 16) & 2) == 0 )
        {
          v11 = *(_QWORD *)v10;
          if ( a2 )
            (*(void (__fastcall **)(__int64))(v11 + 360))(v10);
          else
            (*(void (__fastcall **)(__int64))(v11 + 368))(v10);
        }
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v16);
        ++Ptr;
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1B1,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v7);
  }
  return result;
}
