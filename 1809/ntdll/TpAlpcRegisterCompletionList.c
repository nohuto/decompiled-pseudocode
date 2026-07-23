/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x180088A50
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x1800322A4 (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( !(unsigned int)TppAlpcpValidateAlpc((_PEB_LDR_DATA *)a1, 0LL, 1LL) || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    TppRaiseInvalidParameter(v3, v2, v4);
  _InterlockedExchange((volatile __int32 *)(a1 + 284), 0);
  *(_DWORD *)(a1 + 288) |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(a1);
}
