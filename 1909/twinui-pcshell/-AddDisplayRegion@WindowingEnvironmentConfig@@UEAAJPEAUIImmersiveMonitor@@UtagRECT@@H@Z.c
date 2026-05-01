/*
 * XREFs of ?AddDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@UtagRECT@@H@Z @ 0x1802CE100
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e5434191a426e1e6c5461e9f90ae0298___ @ 0x1802CCAE4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e5434191a426e1e6c5461e9f90ae0298.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::AddDisplayRegion(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3,
        int a4)
{
  int v6; // eax
  __int64 v7; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ecx
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  RTL_SRWLOCK *SRWLock; // [rsp+20h] [rbp-58h]
  _QWORD v14[6]; // [rsp+28h] [rbp-50h] BYREF
  float v15[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IImmersiveMonitor *v17; // [rsp+88h] [rbp+10h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF

  v18 = a4;
  v17 = a2;
  v14[5] = -2LL;
  v15[0] = (float)a3->left;
  v15[1] = (float)a3->top;
  v15[2] = (float)(a3->right - a3->left);
  v6 = a3->bottom - a3->top;
  v15[3] = (float)v6;
  v7 = *((_QWORD *)this + 6);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    v14[0] = (char *)this - 32;
    v14[1] = &v17;
    v14[2] = a3;
    v14[3] = &v18;
    v14[4] = v15;
    CurrentThreadId = GetCurrentThreadId();
    v10 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e5434191a426e1e6c5461e9f90ae0298___(
            v9,
            CurrentThreadId,
            (__int64)v14);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        214LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v10);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDA,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v11);
  }
  return result;
}
