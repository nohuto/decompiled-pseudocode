/*
 * XREFs of wil::ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03___ @ 0x18009240C
 * Callers:
 *     _lambda_a6e83045e007bd3aeabbed1653bdb15e_::operator() @ 0x18009322C (_lambda_a6e83045e007bd3aeabbed1653bdb15e_--operator().c)
 * Callees:
 *     _lambda_0b76205be84400ecfc27954a2135cf03_::operator() @ 0x1800928A8 (_lambda_0b76205be84400ecfc27954a2135cf03_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_0b76205be84400ecfc27954a2135cf03___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_0b76205be84400ecfc27954a2135cf03_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
