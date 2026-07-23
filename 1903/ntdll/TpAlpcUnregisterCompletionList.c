/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x1800785A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007874C @ 0x18007874C (sub_18007874C.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  result = sub_18007874C(a1, 0LL, 1LL);
  if ( !(_DWORD)result || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    result = sub_18010EFC8(v4, v3, v5);
  *(_DWORD *)(a1 + 288) &= ~2u;
  return result;
}
