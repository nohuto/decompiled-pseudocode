/*
 * XREFs of GetIxEstimate @ 0x1C02C2DFC
 * Callers:
 *     fsc_MeasureGlyph @ 0x1C02B6BE8 (fsc_MeasureGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetIxEstimate(__int16 *a1)
{
  __int64 result; // rax
  __int16 v2; // dx

  result = 0LL;
  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == 0x7FFF )
      break;
    if ( a1[1] == 1 )
      result = (unsigned int)(result - v2);
    else
      result = (unsigned int)(v2 + (_DWORD)result);
    a1 = (__int16 *)*((_QWORD *)a1 + 1);
  }
  return result;
}
