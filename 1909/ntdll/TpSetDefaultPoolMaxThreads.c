/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x18010EA70
 * Callers:
 *     RtlpTpInitializeData @ 0x180030DFC (RtlpTpInitializeData.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002F2D4 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     TpSetPoolMaxThreads @ 0x180062EC0 (TpSetPoolMaxThreads.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007EE6C (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180080410 (TpSetPoolMaxThreadsSoftLimit.c)
 */

void __fastcall TpSetDefaultPoolMaxThreads(ULONG a1)
{
  _TP_POOL *v2; // rax
  _TP_POOL *v3; // rsi
  int v4; // ebp
  unsigned int v5; // ebp
  int v6; // eax
  unsigned int v7; // r14d
  unsigned int v8; // eax
  ULONG v9; // eax
  ULONG v10; // edi
  __int64 v11; // r8

  v2 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool();
  v3 = v2;
  if ( !v2 || (v4 = *((_DWORD *)v2 + 110)) == 0 )
    v4 = MEMORY[0x7FFE03C0];
  v5 = 8 * v4;
  if ( v5 < 0x300 )
    v5 = 768;
  if ( !v2 || (v6 = *((_DWORD *)v2 + 110)) == 0 )
    v6 = MEMORY[0x7FFE03C0];
  v7 = 4 * v6;
  if ( (unsigned int)(4 * v6) < 0x180 )
    v7 = 384;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return;
    goto LABEL_16;
  }
  if ( a1 <= v7 )
    return;
  v8 = v5;
  if ( a1 > v5 )
LABEL_16:
    v8 = a1;
  if ( !v8 )
    return;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
  v9 = TppPoolpGlobalPoolMaxThreads;
  v10 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_23;
  }
  else if ( a1 > v7 )
  {
    v10 = v5;
    if ( a1 <= v5 )
    {
LABEL_24:
      if ( v10 )
        v9 = v10;
      TppPoolpGlobalPoolMaxThreads = v9;
      goto LABEL_27;
    }
LABEL_23:
    v10 = a1;
    goto LABEL_24;
  }
LABEL_27:
  RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v10 )
  {
    if ( v3 )
    {
      TpSetPoolMaxThreads(v3, v10);
      TpSetPoolMaxThreadsSoftLimit((__int64)v3, 0LL, v11);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
}
