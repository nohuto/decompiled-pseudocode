/*
 * XREFs of NtUserAssociateInputContext @ 0x1C00FD6D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     AssociateInputContextEx @ 0x1C00FD77C (AssociateInputContextEx.c)
 */

__int64 __fastcall NtUserAssociateInputContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_10;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, v6);
    goto LABEL_10;
  }
  if ( a2 )
  {
    v8 = HMValidateHandle(a2, 17);
    if ( v8 )
      goto LABEL_5;
LABEL_10:
    v9 = 2;
    goto LABEL_6;
  }
  v8 = 0LL;
LABEL_5:
  v9 = AssociateInputContextEx(v7, v8, a3);
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v9;
}
