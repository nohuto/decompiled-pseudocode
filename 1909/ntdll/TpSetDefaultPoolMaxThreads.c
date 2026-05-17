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

signed __int64 __fastcall TpSetDefaultPoolMaxThreads(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // ebp
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // r14d
  signed __int64 result; // rax
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9

  v4 = a1;
  v5 = TpPoolReferenceExistingGlobalPool(a1, a2, a3, a4);
  v6 = v5;
  if ( !v5 || (v7 = *(_DWORD *)(v5 + 440)) == 0 )
    v7 = MEMORY[0x7FFE03C0];
  v8 = 8 * v7;
  if ( v8 < 0x300 )
    v8 = 768;
  if ( !v5 || (v9 = *(_DWORD *)(v5 + 440)) == 0 )
    v9 = MEMORY[0x7FFE03C0];
  v10 = 4 * v9;
  if ( (unsigned int)(4 * v9) < 0x180 )
    v10 = 384;
  result = (unsigned int)TppPoolpGlobalPoolMaxThreads;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( v4 <= TppPoolpGlobalPoolMaxThreads )
      return result;
    goto LABEL_16;
  }
  if ( v4 <= v10 )
    return result;
  result = v8;
  if ( v4 > v8 )
LABEL_16:
    result = v4;
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
  v12 = TppPoolpGlobalPoolMaxThreads;
  v13 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( v4 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_23;
  }
  else if ( v4 > v10 )
  {
    v13 = v8;
    if ( v4 <= v8 )
    {
LABEL_24:
      if ( v13 )
        v12 = v13;
      TppPoolpGlobalPoolMaxThreads = v12;
      goto LABEL_27;
    }
LABEL_23:
    v13 = v4;
    goto LABEL_24;
  }
LABEL_27:
  result = RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v13 )
  {
    if ( v6 )
    {
      TpSetPoolMaxThreads(v6, (_PEB_LDR_DATA *)v13, v14, v15);
      TpSetPoolMaxThreadsSoftLimit(v6, 0LL, v16, v17);
      return TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (__int64)&TppPoolpGlobalPoolLock);
    }
  }
  return result;
}
