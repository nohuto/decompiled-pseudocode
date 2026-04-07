/*
 * XREFs of ?CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z @ 0x1800B9BAC
 * Callers:
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800B9D18 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcBucketedScaleFactor(struct tagSIZE a1, struct tagSIZE a2)
{
  unsigned int v2; // r8d
  LONG cy; // eax
  LONG cx; // [rsp+10h] [rbp+10h]

  cx = a1.cx;
  v2 = 400;
  if ( 20 * ((int)(16300 * a2.cx / 0x6900u + 16300 * a2.cy / 0x6900u) / 2 / 0x14u) )
    v2 = 20 * ((int)(16300 * a2.cx / 0x6900u + 16300 * a2.cy / 0x6900u) / 2 / 0x14u);
  if ( a1.cx <= a1.cy )
  {
    a1.cx = a1.cy;
    cy = cx;
  }
  else
  {
    cy = a1.cy;
  }
  if ( v2 <= 0x64 )
    return 100;
  do
  {
    if ( 100 * cy / v2 >= 0x180 && 100 * a1.cx / v2 >= 0x280 )
      break;
    v2 -= 20;
  }
  while ( v2 > 0x64 );
  if ( v2 <= 0x64 )
    return 100;
  return v2;
}
