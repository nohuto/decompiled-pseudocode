/*
 * XREFs of NtUserBlockInput @ 0x1C02297A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _BlockInput @ 0x1C01DC9A8 (_BlockInput.c)
 */

__int64 __fastcall NtUserBlockInput(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rcx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v5 = BlockInput(a1, v2, v3, v4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
