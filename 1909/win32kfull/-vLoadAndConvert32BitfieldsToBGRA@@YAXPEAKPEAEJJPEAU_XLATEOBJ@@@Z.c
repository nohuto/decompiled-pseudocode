/*
 * XREFs of ?vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02BD880
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C7500 (XLATEOBJ_iXlate.c)
 */

void __fastcall vLoadAndConvert32BitfieldsToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  __int64 v5; // rsi
  unsigned int *v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int8 *v8; // rdi
  unsigned __int8 *v9; // rax
  unsigned __int64 v10; // r14
  signed __int64 v11; // rdi

  v5 = 0LL;
  v6 = a1;
  v7 = 4LL * a4;
  v8 = &a2[4 * a3];
  v9 = &v8[v7];
  v10 = v7 >> 2;
  if ( v8 > v9 )
    v10 = 0LL;
  if ( v10 )
  {
    v11 = v8 - (unsigned __int8 *)a1;
    do
    {
      ++v5;
      *v6 = XLATEOBJ_iXlate(pxlo, *(unsigned int *)((char *)v6 + v11)) | 0xFF000000;
      ++v6;
    }
    while ( v5 != v10 );
  }
}
