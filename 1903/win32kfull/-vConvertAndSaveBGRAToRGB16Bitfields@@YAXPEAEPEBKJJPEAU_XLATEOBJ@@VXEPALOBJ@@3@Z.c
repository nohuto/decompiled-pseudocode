/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BD840
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00D5A10 (XLATEOBJ_iXlate.c)
 */

int __fastcall vConvertAndSaveBGRAToRGB16Bitfields(__int64 a1, ULONG *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  __int64 v5; // rbx
  _WORD *v7; // rdi
  unsigned __int64 v8; // r14
  _WORD *v9; // rax
  unsigned __int64 v10; // r14

  v5 = 0LL;
  v7 = (_WORD *)(a1 + 2LL * a4);
  v8 = a3;
  v9 = &v7[v8];
  v10 = (v8 * 2) >> 1;
  if ( v7 > v9 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      LODWORD(v9) = XLATEOBJ_iXlate(pxlo, *a2);
      ++v5;
      *v7 = (_WORD)v9;
      ++a2;
      ++v7;
    }
    while ( v5 != v10 );
  }
  return (int)v9;
}
