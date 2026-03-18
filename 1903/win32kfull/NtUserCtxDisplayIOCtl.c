/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C022A950
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C0212AC0 (CtxDisplayIOCtl.c)
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
  __int64 v13; // r9
  void *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  memset(v19, 0, 24);
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v7, v6, v8, v9) == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v12 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v14 = (void *)v12;
    if ( !v12 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v12, v19, (__int64)Win32FreePool, v13);
    memmove(v14, (const void *)a2, v3);
    v11 = CtxDisplayIOCtl(a1, (__int64)v14, v3);
    if ( v14 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v19, v15, v16, v17);
  }
  else
  {
    v11 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
