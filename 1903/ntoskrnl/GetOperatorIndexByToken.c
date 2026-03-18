/*
 * XREFs of GetOperatorIndexByToken @ 0x1408E533C
 * Callers:
 *     LocalGetConditionForString @ 0x1408E5E94 (LocalGetConditionForString.c)
 *     LocalpGetStringForCondition @ 0x1408E7AA0 (LocalpGetStringForCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  __int64 result; // rax
  _BYTE *i; // rdx

  result = 0LL;
  for ( i = &unk_140376008; *i != a1; i += 24 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x18 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
