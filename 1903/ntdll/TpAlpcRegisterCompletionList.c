/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x1800785E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007874C @ 0x18007874C (sub_18007874C.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( !(unsigned int)sub_18007874C(a1, 0LL, 1LL) || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    sub_18010EFC8(v3, v2, v4);
  _InterlockedExchange((volatile __int32 *)(a1 + 284), 0);
  *(_DWORD *)(a1 + 288) |= 2u;
  return sub_18003382C(a1);
}
