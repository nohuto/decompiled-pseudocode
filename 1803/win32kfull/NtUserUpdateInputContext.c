/*
 * XREFs of NtUserUpdateInputContext @ 0x1C00F9A20
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     UpdateInputContext @ 0x1C00F9AAC (UpdateInputContext.c)
 */

__int64 __fastcall NtUserUpdateInputContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  int updated; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( (*gpsi & 4) != 0 )
  {
    v7 = HMValidateHandle(a1, 17);
    updated = 0;
    if ( v7 )
      updated = UpdateInputContext(v7, a2, a3);
  }
  else
  {
    UserSetLastError(120LL, v6);
    updated = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return updated;
}
