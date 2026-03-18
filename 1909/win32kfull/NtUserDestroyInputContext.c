/*
 * XREFs of NtUserDestroyInputContext @ 0x1C0156F80
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DestroyInputContext @ 0x1C0156FFC (DestroyInputContext.c)
 */

__int64 __fastcall NtUserDestroyInputContext(unsigned __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  if ( (*gpsi & 4) != 0 )
  {
    v4 = HMValidateHandle(a1, 17);
    v5 = 0;
    if ( v4 )
      v5 = DestroyInputContext(v4);
  }
  else
  {
    UserSetLastError(120LL, gpsi, v2, v3);
    v5 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
