/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x18010CDA0
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x18010CCDC (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010CDA0 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x18010CD2C (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010CDA0 (RtlpHpLfhOwnerLockUnlock.c)
 */

__int64 __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v4; // edi
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  volatile signed __int64 *v14; // rcx
  __int64 v15; // r14

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 16, a2, a3, a4);
  RtlpHpLfhOwnerListLockUnlock(a1, (_QWORD *)(a1 + 24), (unsigned __int64 *)v4, a4);
  result = RtlpHpLfhOwnerListLockUnlock(v7, (_QWORD *)(a1 + 40), (unsigned __int64 *)v4, v8);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    LOBYTE(v13) = *(_BYTE *)(a1 + 2);
    v14 = (volatile signed __int64 *)(a1 + 80);
    if ( v6 )
    {
      if ( (v4 & 2) != 0 )
        *v14 = 1LL;
      result = RtlReleaseSRWLockExclusive(v14);
    }
    else
    {
      result = RtlAcquireSRWLockExclusive((unsigned __int64)v14, v10, v11, v12);
    }
    if ( (_BYTE)v13 )
    {
      v15 = 0LL;
      v13 = (unsigned __int8)v13;
      do
      {
        result = RtlpHpLfhOwnerLockUnlock(*(_QWORD *)(v15 + *(_QWORD *)(a1 + 96)), v4);
        v15 += 8LL;
        --v13;
      }
      while ( v13 );
    }
  }
  if ( v6 )
  {
    if ( (v4 & 2) != 0 )
      *(_QWORD *)(a1 + 16) = 1LL;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
  }
  return result;
}
