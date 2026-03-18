/*
 * XREFs of ?vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C0293260
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00B2A20 (XLATEOBJ_iXlate.c)
 */

void __fastcall vLoadAndConvert16BitfieldsToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  __int64 v5; // rbx
  unsigned __int8 *v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int8 *v9; // rax
  unsigned __int64 v10; // r14
  ULONG v11; // eax

  v5 = 0LL;
  v7 = &a2[2 * a3];
  v8 = 2LL * a4;
  v9 = &v7[v8];
  v10 = v8 >> 1;
  if ( v7 > v9 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v7);
      v7 += 2;
      ++v5;
      *a1++ = v11 | 0xFF000000;
    }
    while ( v5 != v10 );
  }
}
