/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1C012CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(int a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v8; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v2 = *(_DWORD *)(gptiCurrent + 1208LL) | 0x10000;
  if ( !a1 )
    v2 = *(_DWORD *)(gptiCurrent + 1208LL) & 0xFFFEFFFF;
  *(_DWORD *)(gptiCurrent + 1208LL) = v2;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return 1LL;
}
