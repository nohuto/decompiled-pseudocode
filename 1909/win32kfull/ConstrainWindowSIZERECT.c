/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C006AAA8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConstrainWindowSIZERECT(int *a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // edx
  int v4; // edx
  __int64 result; // rax
  int v6; // edx

  v1 = *a1;
  v2 = 0x7FFF;
  if ( *a1 > 0x7FFF )
  {
    v1 = 0x7FFF;
  }
  else if ( v1 < -32768 )
  {
    v1 = -32768;
  }
  *a1 = v1;
  v3 = a1[1];
  if ( v3 <= 0x7FFF )
  {
    v2 = a1[1];
    if ( v3 < -32768 )
      v2 = -32768;
  }
  a1[1] = v2;
  v4 = a1[2];
  result = 0xFFFFLL;
  if ( v4 > 0xFFFF )
  {
    v4 = 0xFFFF;
  }
  else if ( v4 < 0 )
  {
    v4 = 0;
  }
  a1[2] = v4;
  v6 = a1[3];
  if ( v6 <= 0xFFFF )
  {
    result = (unsigned int)v6;
    if ( v6 < 0 )
      result = 0LL;
  }
  a1[3] = result;
  return result;
}
