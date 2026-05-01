/*
 * XREFs of ?v_CanHandleCloseRequest@WindowWrapper@@EEAA_NXZ @ 0x1802A40F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_820046f5618fddc4d3b34d10d64e374d___ @ 0x1802A37B0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_820046f5618fddc4d3b34d10d64e374d.c)
 */

char __fastcall WindowWrapper::v_CanHandleCloseRequest(WindowWrapper *this)
{
  char v2; // di
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v9; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  v2 = 0;
  v9 = 0;
  *(_QWORD *)&v7 = (char *)this - 8;
  *((_QWORD *)&v7 + 1) = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_820046f5618fddc4d3b34d10d64e374d___(
         v4,
         CurrentThreadId,
         &v7);
  if ( v5 >= 0 )
    return v9 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x76,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
    (const char *)(unsigned int)v5);
  return v2;
}
