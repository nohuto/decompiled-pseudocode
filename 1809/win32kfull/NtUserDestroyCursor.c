/*
 * XREFs of NtUserDestroyCursor @ 0x1C006D410
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rcx
  char v18; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v18);
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
        v17 = 87LL;
LABEL_11:
        UserSetLastError(v17);
        goto LABEL_6;
      }
    }
    else if ( PsGetCurrentProcess(v7, v6, v8, v9) != gpepCSRSS
           && *(_QWORD *)(v11 + 24) != PsGetCurrentProcessWin32Process(gpepCSRSS) )
    {
LABEL_10:
      v17 = 5LL;
      goto LABEL_11;
    }
    if ( *(_QWORD *)(v11 + 48) == v11 )
    {
      v10 = (unsigned __int8)_DestroyCursor((struct tagCURSOR *)v11, a2);
      goto LABEL_6;
    }
    goto LABEL_10;
  }
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v18);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v10;
}
