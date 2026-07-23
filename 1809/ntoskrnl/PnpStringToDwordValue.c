/*
 * XREFs of PnpStringToDwordValue @ 0x14015D2EC
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x140289608 (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableExpression @ 0x140830190 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     wcstoul @ 0x140197E00 (wcstoul.c)
 */

bool __fastcall PnpStringToDwordValue(__int64 a1, unsigned int *a2)
{
  int v2; // r8d
  bool result; // al
  wchar_t *EndPtr; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_WORD *)a1 != 48 || ((*(_WORD *)(a1 + 2) - 88) & 0xFFDF) != 0 )
  {
    v2 = 10;
  }
  else
  {
    a1 += 4LL;
    v2 = 16;
  }
  *a2 = wcstoul((const wchar_t *)a1, &EndPtr, v2);
  result = 0;
  if ( EndPtr )
    return *EndPtr == 0;
  return result;
}
