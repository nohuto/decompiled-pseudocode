/*
 * XREFs of ?SetCustomResourceSet@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180250E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_53b5c290c68dcef29a9df5086c06bf0e___ @ 0x18024EB44 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_53b5c290c68dcef29a9df5086c06bf0e.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetCustomResourceSet(
        WindowWrapperBase *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]
  HSTRING v13; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v4 = *((_QWORD *)this + 31);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
    v10[0] = (char *)this - 32;
    v10[1] = &v13;
    v10[2] = &v14;
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_53b5c290c68dcef29a9df5086c06bf0e___(
           v6,
           CurrentThreadId,
           (__int64)v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2172LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v7);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x880,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
