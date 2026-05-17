/*
 * XREFs of sub_18010A8F4 @ 0x18010A8F4
 * Callers:
 *     sub_1800F1150 @ 0x1800F1150 (sub_1800F1150.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_18010A990 @ 0x18010A990 (sub_18010A990.c)
 */

void __fastcall sub_18010A8F4(__int64 a1, int a2)
{
  __int64 v4; // rsi
  volatile signed __int64 *v5; // rcx
  _QWORD *v6; // rax

  v4 = 2LL;
  sub_18010A990(a1 + 832, a2 != 0 ? 3 : 1);
  v5 = (volatile signed __int64 *)(a1 + 224);
  if ( a2 )
    *v5 = 1LL;
  RtlReleaseSRWLockExclusive(v5);
  if ( a2 )
  {
    v6 = (_QWORD *)(a1 + 368);
    do
    {
      *v6 = 1LL;
      v6 += 24;
      --v4;
    }
    while ( v4 );
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 560));
  sub_180016FFC(a1, a2);
}
