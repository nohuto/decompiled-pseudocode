/*
 * XREFs of NtUserUpdateInputContext @ 0x1C011F540
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UpdateInputContext @ 0x1C011F5D8 (UpdateInputContext.c)
 */

__int64 __fastcall NtUserUpdateInputContext(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  int updated; // ebx
  __int64 v10; // rcx
  char v12; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( (*gpsi & 4) != 0 )
  {
    LOBYTE(v6) = 17;
    v8 = HMValidateHandle(a1, v6, v7, gpsi);
    updated = 0;
    if ( v8 )
      updated = UpdateInputContext(v8, a2, a3);
  }
  else
  {
    UserSetLastError(120LL, v6, v7, gpsi);
    updated = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v10);
  return updated;
}
