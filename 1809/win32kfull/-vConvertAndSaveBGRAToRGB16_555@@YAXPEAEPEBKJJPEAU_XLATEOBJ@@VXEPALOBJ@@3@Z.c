/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16_555@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02A6DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vConvertAndSaveBGRAToRGB16_555(__int64 a1, int *a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // r9
  _WORD *v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r8
  unsigned int v11; // ecx
  int v12; // edx

  v4 = a4;
  v6 = 0LL;
  v7 = (_WORD *)(a1 + 2 * v4);
  v8 = a3;
  result = (unsigned __int64)&v7[v8];
  v10 = (v8 * 2) >> 1;
  if ( (unsigned __int64)v7 > result )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *a2;
      ++v6;
      v12 = *a2++;
      result = (unsigned __int8)v11 >> 3;
      *v7++ = result | (4 * ((v11 >> 8) & 0xF8 | (32 * (BYTE2(v12) & 0xF8))));
    }
    while ( v6 != v10 );
  }
  return result;
}
