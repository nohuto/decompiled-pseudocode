/*
 * XREFs of KiTimer2ComputeDueTime @ 0x1400FBFE0
 * Callers:
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTimer2ComputeDueTime(unsigned __int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax

  if ( a1 + a2 < a1 || (result = a1 + a2, a1 + a2 == -1LL) )
  {
    if ( a3 )
      *a3 = 1;
    return -2LL;
  }
  else if ( a3 )
  {
    *a3 = 0;
  }
  return result;
}
