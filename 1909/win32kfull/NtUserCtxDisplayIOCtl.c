/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C022A330
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C0212580 (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(char a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rax
  void *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  memset(v17, 0, 24);
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v7, v6, v8, v9) == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v12 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v13 = (void *)v12;
    if ( !v12 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v12, v17, (__int64)Win32FreePool);
    memmove(v13, (const void *)a2, v3);
    v11 = CtxDisplayIOCtl(a1, (__int64)v13, v3);
    if ( v13 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v17, v14, v15);
  }
  else
  {
    v11 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
