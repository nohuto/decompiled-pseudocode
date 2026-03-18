/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C00598F0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _RegisterRawInputDevices @ 0x1C0059A48 (_RegisterRawInputDevices.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  SIZE_T v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // rax
  void *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v17[64]; // [rsp+48h] [rbp-40h] BYREF
  char v18; // [rsp+A8h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v18);
  if ( Src && a2 && a3 == 16 && (v7 = 16LL * a2, ProbeForRead(Src, v7, 8u), v7 <= 0xFFFFFFFF) )
  {
    v8 = v7;
    v9 = Win32AllocPoolWithQuota((unsigned int)v7, 1769108309LL);
    v10 = (void *)v9;
    if ( !v9 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v9, v17, Win32FreePool);
    if ( (unsigned int)v7 >= v7 )
      v8 = 16 * a2;
    memmove(v10, Src, v8);
    v11 = (unsigned int)RegisterRawInputDevices(v10, a2, 0LL);
    EtwTraceAuditApiRegisterRawInputDevices(v11);
    if ( v10 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v17);
  }
  else
  {
    LODWORD(v11) = 0;
    UserSetLastError(87LL, v6);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v18);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return (int)v11;
}
