/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x180110320
 * Callers:
 *     RtlpTpInitializeData @ 0x18002F1A4 (RtlpTpInitializeData.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800313A4 (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x180031670 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180031710 (TpSetPoolMaxThreadsSoftLimit.c)
 */

void __fastcall TpSetDefaultPoolMaxThreads(ULONG a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  unsigned int v4; // eax
  ULONG v5; // eax
  ULONG v6; // edi
  _TP_POOL *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8

  v2 = 8 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
    v2 = 768;
  v3 = 4 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x180 )
    v3 = 384;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return;
    goto LABEL_10;
  }
  if ( a1 <= v3 )
    return;
  v4 = v2;
  if ( a1 > v2 )
LABEL_10:
    v4 = a1;
  if ( !v4 )
    return;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
  v5 = TppPoolpGlobalPoolMaxThreads;
  v6 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_17;
  }
  else if ( a1 > v3 )
  {
    v6 = v2;
    if ( a1 <= v2 )
    {
LABEL_18:
      if ( v6 )
        v5 = v6;
      TppPoolpGlobalPoolMaxThreads = v5;
      goto LABEL_21;
    }
LABEL_17:
    v6 = a1;
    goto LABEL_18;
  }
LABEL_21:
  RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v6 )
  {
    v7 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool();
    v8 = (__int64)v7;
    if ( v7 )
    {
      TpSetPoolMaxThreads(v7, v6);
      TpSetPoolMaxThreadsSoftLimit(v8, 0LL, v9);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
}
