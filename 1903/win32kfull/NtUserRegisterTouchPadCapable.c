/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1C01388F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(int a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  v2 = *(_DWORD *)(gptiCurrent + 1224LL) | 0x10000;
  if ( !a1 )
    v2 = *(_DWORD *)(gptiCurrent + 1224LL) & 0xFFFEFFFF;
  *(_DWORD *)(gptiCurrent + 1224LL) = v2;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
  UserSessionSwitchLeaveCrit(v3);
  return 1LL;
}
