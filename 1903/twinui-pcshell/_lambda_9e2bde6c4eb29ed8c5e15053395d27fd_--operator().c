/*
 * XREFs of _lambda_9e2bde6c4eb29ed8c5e15053395d27fd_::operator() @ 0x18029FB04
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9e2bde6c4eb29ed8c5e15053395d27fd___::Run @ 0x1802A11E0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9e2bde6c4eb29ed8c5e15053395d27fd___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_9e2bde6c4eb29ed8c5e15053395d27fd_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  int v5; // eax
  _DWORD *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h]
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = **a1;
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        254LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    if ( v9 )
    {
      if ( v9 == 1 )
        *(_DWORD *)*a1[1] = 4;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)**a1 + 112LL))(**a1, &v10);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          266LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v5);
      v6 = (_DWORD *)*a1[1];
      if ( (unsigned int)(v10 - 2) > 1 )
        *v6 = 0;
      else
        *v6 = 2;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x121,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v4);
  }
  return 0LL;
}
