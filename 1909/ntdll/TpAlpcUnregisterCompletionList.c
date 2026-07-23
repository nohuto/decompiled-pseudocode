/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x180078A20
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x180078BCC (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  result = TppAlpcpValidateAlpc(a1, 0LL, 1LL);
  if ( !(_DWORD)result || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    result = TppRaiseInvalidParameter(v4, v3, v5);
  *(_DWORD *)(a1 + 288) &= ~2u;
  return result;
}
