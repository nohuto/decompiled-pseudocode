/*
 * XREFs of GetOperatorIndexByToken @ 0x1408E4C44
 * Callers:
 *     LocalGetConditionForString @ 0x1408E579C (LocalGetConditionForString.c)
 *     LocalpGetStringForCondition @ 0x1408E73A8 (LocalpGetStringForCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  __int64 result; // rax
  _BYTE *i; // rdx

  result = 0LL;
  for ( i = &unk_1403760A8; *i != a1; i += 24 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x18 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
