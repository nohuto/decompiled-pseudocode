/*
 * XREFs of DelistKeyBodyFromKCB @ 0x140602910
 * Callers:
 *     CmpDeleteKeyObject @ 0x140602160 (CmpDeleteKeyObject.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 */

char __fastcall DelistKeyBodyFromKCB(ULONG_PTR *a1, char a2)
{
  char v2; // r9
  unsigned int i; // r8d
  signed __int64 v6; // rax
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // rcx
  ULONG_PTR *v9; // rdx

  v2 = 0;
LABEL_2:
  for ( i = 0; i < 4; ++i )
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1[1] + 8LL * i + 136), 0LL, (signed __int64)a1);
    if ( a1 == (ULONG_PTR *)v6 )
      goto LABEL_13;
    if ( (unsigned __int64)(v6 - 1) <= 1 )
    {
      CmpLockKcbExclusive(a1[1]);
      v2 = 1;
      goto LABEL_2;
    }
  }
  if ( !a2 && !v2 )
  {
    v7 = a1[1];
    ExAcquirePushLockExclusiveEx(v7 + 48, 0LL);
    v2 = 1;
    *(_QWORD *)(v7 + 56) = KeGetCurrentThread();
  }
  v8 = a1[4];
  v6 = (signed __int64)(a1 + 4);
  if ( *(ULONG_PTR **)(v8 + 8) != a1 + 4 || (v9 = (ULONG_PTR *)a1[5], *v9 != v6) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
LABEL_13:
  if ( v2 )
    LOBYTE(v6) = CmpUnlockKcb(a1[1]);
  return v6;
}
