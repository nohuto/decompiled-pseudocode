/*
 * XREFs of NtUserDestroyCursor @ 0x1C00234B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002404C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

_BOOL8 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _BOOL8 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  LOBYTE(v4) = 3;
  v5 = HMValidateHandle(a1, v4);
  v10 = 0LL;
  v11 = v5;
  if ( v5 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v14 = 87LL;
LABEL_11:
        UserSetLastError(v14);
        goto LABEL_6;
      }
    }
    else if ( PsGetCurrentProcess(v7, v6, v8, v9) != gpepCSRSS
           && *(_QWORD *)(v11 + 24) != PsGetCurrentProcessWin32Process(gpepCSRSS, v15) )
    {
LABEL_10:
      v14 = 5LL;
      goto LABEL_11;
    }
    if ( *(_QWORD *)(v11 + 48) == v11 )
    {
      v10 = _DestroyCursor((struct tagCURSOR *)v11, a2);
      goto LABEL_6;
    }
    goto LABEL_10;
  }
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  UserSessionSwitchLeaveCrit(v12);
  return v10;
}
