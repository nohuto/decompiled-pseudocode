/*
 * XREFs of NtUserDestroyCursor @ 0x1C0014430
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserDestroyCursor(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rcx
  char v16; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  LOBYTE(v4) = 3;
  v5 = HMValidateHandle(a1, v4);
  v8 = 0;
  v9 = v5;
  if ( v5 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
LABEL_4:
        v8 = DestroyCursor((struct tagCURSOR *)v9);
        goto LABEL_5;
      }
      v15 = 87LL;
    }
    else
    {
      if ( PsGetCurrentProcess(v7, v6) == gpepCSRSS
        || *(_QWORD *)(v9 + 24) == PsGetCurrentProcessWin32Process(gpepCSRSS) )
      {
        goto LABEL_4;
      }
      v15 = 5LL;
    }
    UserSetLastError(v15);
  }
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
