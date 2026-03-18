/*
 * XREFs of Short2Bcd @ 0x1C0025460
 * Callers:
 *     UsbhGetLocationIdString @ 0x1C00228A4 (UsbhGetLocationIdString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Short2Bcd(unsigned __int16 a1)
{
  unsigned __int16 v1; // r9
  unsigned __int16 v2; // r10
  __int16 v3; // r11
  int v4; // edx
  int v5; // eax
  __int16 v6; // dx

  v1 = 0;
  v2 = a1;
  v3 = 1000;
  if ( a1 > 0x270Fu )
    v2 = 0;
  do
  {
    v4 = v2 % v3;
    if ( v2 == v4 )
      v5 = 0;
    else
      v5 = v2 - v4;
    v6 = v5 / v3;
    v1 = v6 | (16 * v1);
    v2 -= v3 * v6;
    v3 /= 10;
  }
  while ( v3 );
  return v1;
}
