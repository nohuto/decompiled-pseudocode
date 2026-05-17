/*
 * XREFs of LdrpSetModuleSigningLevel @ 0x18008C170
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 *     LdrpValidateIntegrityContinuity @ 0x1800833C0 (LdrpValidateIntegrityContinuity.c)
 * Callees:
 *     NtCompareSigningLevels @ 0x18009E1C0 (NtCompareSigningLevels.c)
 *     NtGetCachedSigningLevel @ 0x18009EBE0 (NtGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x18009FEE0 (ZwSetCachedSigningLevel.c)
 */

__int64 __fastcall LdrpSetModuleSigningLevel(__int64 a1, __int64 a2, __int64 a3, char a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  _BYTE *v6; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int CachedSigningLevel; // ebx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  v5 = (_BYTE *)(a2 + 284);
  v6 = a5;
  *a5 = 0;
  CachedSigningLevel = NtGetCachedSigningLevel(a1, a3, a2 + 284, 0LL, 0LL, 0LL);
  if ( CachedSigningLevel < 0 || (LOBYTE(v9) = *v5, LOBYTE(v8) = a4, (int)NtCompareSigningLevels(v9, v8) < 0) )
  {
    LOBYTE(v8) = a4;
    CachedSigningLevel = ZwSetCachedSigningLevel(4LL, v8, &v12);
    if ( CachedSigningLevel < 0 )
      *v6 = 1;
    else
      *v5 = a4;
  }
  return (unsigned int)CachedSigningLevel;
}
