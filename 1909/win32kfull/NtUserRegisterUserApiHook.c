/*
 * XREFs of NtUserRegisterUserApiHook @ 0x1C000F1C0
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterUserApiHook @ 0x1C000F248 (_RegisterUserApiHook.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserRegisterUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  v8 = (int)RegisterUserApiHook(a1, a2, a3, a4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
