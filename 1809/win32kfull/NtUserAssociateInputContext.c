/*
 * XREFs of NtUserAssociateInputContext @ 0x1C011A220
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     AssociateInputContextEx @ 0x1C011A2E0 (AssociateInputContextEx.c)
 */

__int64 __fastcall NtUserAssociateInputContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v17; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_10;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, v6, v8, v9);
    goto LABEL_10;
  }
  if ( a2 )
  {
    LOBYTE(v6) = 17;
    v10 = HMValidateHandle(a2, v6);
    if ( v10 )
      goto LABEL_5;
LABEL_10:
    v11 = 2;
    goto LABEL_6;
  }
  v10 = 0LL;
LABEL_5:
  v11 = AssociateInputContextEx(v7, v10, a3);
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v11;
}
