/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1C010CD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(int a1)
{
  int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v2 = *(_DWORD *)(gptiCurrent + 1200LL);
  if ( a1 )
    v3 = v2 | 0x10000;
  else
    v3 = v2 & 0xFFFEFFFF;
  *(_DWORD *)(gptiCurrent + 1200LL) = v3;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return 1LL;
}
