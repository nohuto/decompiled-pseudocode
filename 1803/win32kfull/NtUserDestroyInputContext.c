/*
 * XREFs of NtUserDestroyInputContext @ 0x1C01303E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     DestroyInputContext @ 0x1C0130450 (DestroyInputContext.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  if ( (*gpsi & 4) != 0 )
  {
    v2 = HMValidateHandle(a1, 17);
    v3 = 0;
    if ( v2 )
      v3 = DestroyInputContext(v2);
  }
  else
  {
    UserSetLastError(120LL, gpsi);
    v3 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v3;
}
