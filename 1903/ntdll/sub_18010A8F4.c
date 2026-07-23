/*
 * XREFs of sub_18010A8F4 @ 0x18010A8F4
 * Callers:
 *     sub_1800F1150 @ 0x1800F1150 (sub_1800F1150.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_18010A990 @ 0x18010A990 (sub_18010A990.c)
 */

void __fastcall sub_18010A8F4(_RTL_SRWLOCK *a1, int a2)
{
  __int64 v4; // rsi
  _RTL_SRWLOCK *v5; // rcx
  _RTL_SRWLOCK *v6; // rax

  v4 = 2LL;
  sub_18010A990(&a1[104], a2 != 0 ? 3 : 1);
  v5 = a1 + 28;
  if ( a2 )
    v5->Ptr = (PVOID)1;
  RtlReleaseSRWLockExclusive(v5);
  if ( a2 )
  {
    v6 = a1 + 46;
    do
    {
      v6->Ptr = (PVOID)1;
      v6 += 24;
      --v4;
    }
    while ( v4 );
  }
  RtlReleaseSRWLockExclusive(a1 + 46);
  RtlReleaseSRWLockExclusive(a1 + 70);
  sub_180016FFC((__int64)a1, a2);
}
