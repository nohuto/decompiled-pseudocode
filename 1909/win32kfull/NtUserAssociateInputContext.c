/*
 * XREFs of NtUserAssociateInputContext @ 0x1C00FA320
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     AssociateInputContextEx @ 0x1C00FA3E0 (AssociateInputContextEx.c)
 */

__int64 __fastcall NtUserAssociateInputContext(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  char v14; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
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
    v10 = HMValidateHandle(a2, 17);
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v12);
  return v11;
}
