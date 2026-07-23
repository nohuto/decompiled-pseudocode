/*
 * XREFs of RtlTimelineBitmapMerge @ 0x14008E430
 * Callers:
 *     KeFoldProcessStatisticsThread @ 0x14008D88C (KeFoldProcessStatisticsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTimelineBitmapMerge(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx

  result = *a2;
  v4 = *a1;
  if ( (unsigned int)result > v4 )
  {
    *a1 = result;
    if ( (unsigned int)result - v4 >= 0x20 )
    {
      v6 = 0;
      a1[1] = 0;
    }
    else
    {
      a1[1] <<= result - v4;
      v6 = a1[1];
    }
    result = v6 | a2[1];
    a1[1] = result;
  }
  else
  {
    v5 = v4 - result;
    if ( v5 < 0x20 )
    {
      result = a2[1] << v5;
      a1[1] |= result;
    }
  }
  return result;
}
