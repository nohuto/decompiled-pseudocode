/*
 * XREFs of DelistKeyBodyFromKCB @ 0x1407F2690
 * Callers:
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 */

__int64 __fastcall DelistKeyBodyFromKCB(__int64 *a1, char a2)
{
  char v3; // r8
  unsigned int i; // r9d
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdx

  v3 = 0;
LABEL_2:
  for ( i = 0; i < 4; ++i )
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1[1] + 8LL * i + 128), 0LL, (signed __int64)a1);
    if ( a1 == (__int64 *)result )
      goto LABEL_14;
    if ( (unsigned __int64)(result - 1) <= 1 )
    {
      CmpLockKcbExclusive(a1[1]);
      v3 = 1;
      goto LABEL_2;
    }
  }
  if ( !a2 && !v3 )
  {
    CmpLockKcbExclusive(a1[1]);
    v3 = 1;
  }
  result = (__int64)(a1 + 4);
  v7 = a1[4];
  if ( *(__int64 **)(v7 + 8) != a1 + 4 || (v8 = (__int64 *)a1[5], *v8 != result) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
LABEL_14:
  if ( v3 )
    return CmpUnlockKcb(a1[1]);
  return result;
}
