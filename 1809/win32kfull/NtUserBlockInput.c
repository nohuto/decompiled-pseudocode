/*
 * XREFs of NtUserBlockInput @ 0x1C0211D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _BlockInput @ 0x1C01C903C (_BlockInput.c)
 */

__int64 __fastcall NtUserBlockInput(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v11; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  v5 = BlockInput(a1, v2, v3, v4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
