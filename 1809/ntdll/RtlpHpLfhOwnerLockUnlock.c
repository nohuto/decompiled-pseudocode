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

void __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, unsigned int a2)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rbp
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // r14

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  RtlpHpLfhOwnerListLockUnlock(a1, (_RTL_SRWLOCK **)(a1 + 24), a2);
  RtlpHpLfhOwnerListLockUnlock(v5, (_RTL_SRWLOCK **)(a1 + 40), a2);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 2);
    v7 = (_RTL_SRWLOCK *)(a1 + 80);
    if ( v4 )
    {
      if ( (a2 & 2) != 0 )
        v7->Value = 1LL;
      RtlReleaseSRWLockExclusive(v7);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v7);
    }
    if ( (_BYTE)v6 )
    {
      v8 = 0LL;
      v6 = (unsigned __int8)v6;
      do
      {
        RtlpHpLfhOwnerLockUnlock(*(_QWORD *)(v8 + *(_QWORD *)(a1 + 96)), a2);
        v8 += 8LL;
        --v6;
      }
      while ( v6 );
    }
  }
  if ( v4 )
  {
    if ( (a2 & 2) != 0 )
      *(_QWORD *)(a1 + 16) = 1LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  }
}
