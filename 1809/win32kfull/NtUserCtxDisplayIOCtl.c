/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C0212BC0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C01FB810 (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(char a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  __int64 v16; // rax
  void *v17; // rbx
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  v14 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v16 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v17 = (void *)v16;
    if ( !v16 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v16, v19, (__int64)Win32FreePool);
    memmove(v17, (const void *)a2, v3);
    v15 = CtxDisplayIOCtl(a1, (__int64)v17, v3);
    if ( v17 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v19, v11);
  }
  else
  {
    v15 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
