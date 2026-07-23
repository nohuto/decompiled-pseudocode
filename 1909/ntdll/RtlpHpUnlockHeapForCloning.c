/*
 * XREFs of RtlpHpUnlockHeapForCloning @ 0x18010AA24
 * Callers:
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F1230 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockUnlock @ 0x18010AAC0 (RtlpHpLfhContextLockUnlock.c)
 */

void __fastcall RtlpHpUnlockHeapForCloning(_RTL_SRWLOCK *a1, int a2)
{
  __int64 v4; // rsi
  _RTL_SRWLOCK *v5; // rcx
  unsigned __int64 *v6; // rax

  v4 = 2LL;
  RtlpHpLfhContextLockUnlock(&a1[104], a2 != 0 ? 3 : 1);
  v5 = a1 + 28;
  if ( a2 )
    v5->Value = 1LL;
  RtlReleaseSRWLockExclusive(v5);
  if ( a2 )
  {
    v6 = (unsigned __int64 *)&a1[46];
    do
    {
      *v6 = 1LL;
      v6 += 24;
      --v4;
    }
    while ( v4 );
  }
  RtlReleaseSRWLockExclusive(a1 + 46);
  RtlReleaseSRWLockExclusive(a1 + 70);
  RtlpHpHeapUnlock((__int64)a1, a2);
}
