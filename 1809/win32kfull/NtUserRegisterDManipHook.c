/*
 * XREFs of NtUserRegisterDManipHook @ 0x1C0125A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterDManipHook @ 0x1C0125A60 (_RegisterDManipHook.c)
 */

__int64 NtUserRegisterDManipHook()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char v6; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  v0 = (int)RegisterDManipHook();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
