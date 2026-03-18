/*
 * XREFs of EnlistKeyBodyWithKCB @ 0x14075E5F8
 * Callers:
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140A0E368 (CmpCreateRegistryRoot.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 */

char __fastcall EnlistKeyBodyWithKCB(ULONG_PTR *a1, char a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 **v7; // rcx

  v2 = (__int64 *)(a1 + 4);
  a1[5] = (ULONG_PTR)(a1 + 4);
  a1[4] = (ULONG_PTR)(a1 + 4);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1[1] + 8 * v5 + 136), (signed __int64)a1, 0LL);
    if ( !v6 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 4 )
    {
      if ( (a2 & 1) != 0 )
        CmpUnlockKcb(a1[1]);
      if ( (a2 & 2) == 0 )
        CmpLockKcbExclusive(a1[1]);
      v6 = a1[1] + 120;
      v7 = *(__int64 ***)(a1[1] + 128);
      if ( *v7 != (__int64 *)v6 )
        __fastfail(3u);
      *v2 = v6;
      v2[1] = (__int64)v7;
      *v7 = v2;
      *(_QWORD *)(v6 + 8) = v2;
      if ( (a2 & 3) == 0 )
        LOBYTE(v6) = CmpUnlockKcb(a1[1]);
      return v6;
    }
  }
  return v6;
}
