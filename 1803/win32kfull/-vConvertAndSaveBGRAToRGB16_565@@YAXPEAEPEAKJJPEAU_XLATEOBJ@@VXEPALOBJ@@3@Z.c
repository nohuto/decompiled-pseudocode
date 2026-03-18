/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16_565@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C0293130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vConvertAndSaveBGRAToRGB16_565(__int64 a1, int *a2, int a3, int a4)
{
  _WORD *v5; // r10
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r9
  int v11; // ecx
  int v12; // eax
  __int16 v13; // dx

  v5 = (_WORD *)(a1 + 2LL * a4);
  v6 = a3;
  v7 = 0LL;
  v8 = 2 * v6;
  result = (unsigned __int64)&v5[v6];
  v10 = v8 >> 1;
  if ( (unsigned __int64)v5 > result )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *a2;
      ++v7;
      v12 = *a2++;
      v13 = 8 * (BYTE1(v11) & 0xFC | (32 * (BYTE2(v12) & 0xF8)));
      result = (unsigned __int8)v11 >> 3;
      *v5++ = result | v13;
    }
    while ( v7 != v10 );
  }
  return result;
}
