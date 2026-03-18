/*
 * XREFs of _dynamic_initializer_for__CCompositionSpotLight::sc_Direction__ @ 0x180001FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__CCompositionSpotLight::sc_Direction__()
{
  __int64 result; // rax
  __int64 v1; // [rsp+10h] [rbp-18h]

  result = 0LL;
  LODWORD(v1) = 0;
  xmmword_18033AB00 = (unsigned __int64)CCompositionLight::SetDirectionProperty;
  qword_18033AB10 = v1;
  return result;
}
