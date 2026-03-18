/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C00E7080
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterRawInputDevices @ 0x1C00E762C (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C0168100 (memmove.c)
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
  void *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD v20[5]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v21; // [rsp+68h] [rbp-40h]
  __int64 v22; // [rsp+78h] [rbp-30h]
  char v23; // [rsp+C8h] [rbp+20h] BYREF

  memset(v20, 0, 24);
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
  PsGetCurrentProcessWin32Process(v7, v6);
  if ( Src && a2 && a3 == 16 && (v11 = 16LL * a2, ProbeForRead(Src, v11, 8u), v20[3] = v11, v11 <= 0xFFFFFFFF) )
  {
    v12 = v11;
    v13 = Win32AllocPoolWithQuota((unsigned int)v11, 1769108309LL);
    v14 = (void *)v13;
    if ( !v13 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v13, v20, (__int64)Win32FreePool);
    if ( (unsigned int)v11 >= v11 )
      v12 = 16 * a2;
    memmove(v14, Src, v12);
    v21 = gObjDummyLock;
    v22 = *((_QWORD *)&gObjDummyLock + 2);
    v15 = (unsigned int)RegisterRawInputDevices(v14, a2, 0LL);
    EtwTraceAuditApiRegisterRawInputDevices(v15);
    if ( v14 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v20, v16, v17);
  }
  else
  {
    LODWORD(v15) = 0;
    UserSetLastError(87LL, v8, v9, v10);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v23);
  UserSessionSwitchLeaveCrit(v18);
  return (int)v15;
}
