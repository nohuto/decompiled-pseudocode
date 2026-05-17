/*
 * XREFs of sub_180066D0C @ 0x180066D0C
 * Callers:
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_180066D0C(signed __int64 *a1, signed __int64 *a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // r8

  a2[1] = (signed __int64)NtCurrentTeb()->ClientId.UniqueThread;
  _m_prefetchw(a1);
  result = *a1;
  do
  {
    v3 = result;
    *a2 = result;
    result = _InterlockedCompareExchange64(a1, (signed __int64)a2, result);
  }
  while ( result != v3 );
  return result;
}
