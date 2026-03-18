/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C010CD00
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterRawInputDevices @ 0x1C010D2AC (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  SIZE_T v11; // r14
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // r9
  void *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD v22[5]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v23; // [rsp+68h] [rbp-40h]
  __int64 v24; // [rsp+78h] [rbp-30h]
  char v25; // [rsp+C8h] [rbp+20h] BYREF

  memset(v22, 0, 24);
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v25);
  PsGetCurrentProcessWin32Process(v7, v6);
  if ( Src && a2 && a3 == 16 && (v11 = 16LL * a2, ProbeForRead(Src, v11, 8u), v22[3] = v11, v11 <= 0xFFFFFFFF) )
  {
    v12 = v11;
    v13 = Win32AllocPoolWithQuota((unsigned int)v11, 1769108309LL);
    v15 = (void *)v13;
    if ( !v13 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v13, v22, (__int64)Win32FreePool, v14);
    if ( (unsigned int)v11 >= v11 )
      v12 = 16 * a2;
    memmove(v15, Src, v12);
    v23 = gObjDummyLock;
    v24 = *((_QWORD *)&gObjDummyLock + 2);
    v16 = (unsigned int)RegisterRawInputDevices(v15, a2, 0LL);
    EtwTraceAuditApiRegisterRawInputDevices(v16);
    if ( v15 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v22, v17, v18, v19);
  }
  else
  {
    LODWORD(v16) = 0;
    UserSetLastError(87LL, v8, v9, v10);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v25);
  UserSessionSwitchLeaveCrit(v20);
  return (int)v16;
}
