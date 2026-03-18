/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C01EC900
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C01D6B70 (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(char a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  __int64 v14; // rax
  void *v15; // rbx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  v12 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v14 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v15 = (void *)v14;
    if ( !v14 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v14, v17, (__int64)Win32FreePool);
    memmove(v15, (const void *)a2, v3);
    v13 = CtxDisplayIOCtl(a1, (__int64)v15, v3);
    if ( v15 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v17);
  }
  else
  {
    v13 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
