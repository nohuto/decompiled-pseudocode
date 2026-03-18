/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C0102F70
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     _RegisterRawInputDevices @ 0x1C010345C (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  SIZE_T v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD v20[8]; // [rsp+48h] [rbp-40h] BYREF
  char v21; // [rsp+A8h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
  if ( Src && a2 && a3 == 16 && (v9 = 16LL * a2, ProbeForRead(Src, v9, 8u), v9 <= 0xFFFFFFFF) )
  {
    v10 = v9;
    v11 = Win32AllocPoolWithQuota((unsigned int)v9, 1769108309LL);
    v12 = (void *)v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v11, v20, (__int64)Win32FreePool);
    if ( (unsigned int)v9 >= v9 )
      v10 = 16 * a2;
    memmove(v12, Src, v10);
    v13 = (unsigned int)RegisterRawInputDevices(v12, a2, 0LL);
    EtwTraceAuditApiRegisterRawInputDevices(v13);
    if ( v12 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v20, v14);
  }
  else
  {
    LODWORD(v13) = 0;
    UserSetLastError(87LL, v6, v7, v8);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return (int)v13;
}
