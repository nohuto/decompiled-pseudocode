/*
 * XREFs of sub_180102784 @ 0x180102784
 * Callers:
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     sub_180102028 @ 0x180102028 (sub_180102028.c)
 *     sub_18010251C @ 0x18010251C (sub_18010251C.c)
 *     sub_180115154 @ 0x180115154 (sub_180115154.c)
 */

void __fastcall sub_180102784(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&stru_180166390);
  if ( (dword_180166398 & 1) != 0 && (dword_180166398 & 2) != 0 && sub_18010251C(a1, 0, (PVOID *)&v5) >= 0 )
  {
    v4 = sub_180102028(v5, a2);
    if ( v4 )
      sub_180115154(&qword_1801663A0, v4);
  }
  RtlReleaseSRWLockShared(&stru_180166390);
}
