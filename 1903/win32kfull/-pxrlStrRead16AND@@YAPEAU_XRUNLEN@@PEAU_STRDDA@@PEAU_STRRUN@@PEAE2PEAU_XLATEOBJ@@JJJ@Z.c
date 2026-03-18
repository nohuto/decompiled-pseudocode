/*
 * XREFs of ?pxrlStrRead16AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BB830
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00D5A10 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead16AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7)
{
  int v7; // r14d
  unsigned __int8 *v9; // rdi
  __int64 v10; // rdx
  unsigned int *v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  _DWORD *v14; // r8
  __int64 v15; // rbp
  unsigned int *v16; // r12
  __int64 v17; // r15
  __int64 v18; // rsi
  ULONG v19; // eax
  _DWORD *v20; // rcx

  v7 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  v9 = &a3[2 * a6];
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  if ( a6 != a7 )
  {
    if ( pxlo )
    {
      v15 = 0LL;
      v16 = (unsigned int *)((char *)a1 + 32);
      v17 = (unsigned int)(a7 - a6);
      do
      {
        v18 = *v16++;
        v19 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v9);
        if ( (_DWORD)v18 )
        {
          v7 += v18;
          v20 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
          v15 += v18;
          do
          {
            *v20++ &= v19;
            LODWORD(v18) = v18 - 1;
          }
          while ( (_DWORD)v18 );
        }
        else
        {
          *((_DWORD *)a2 + v15 + 4) &= v19;
        }
        v9 += 2;
        --v17;
      }
      while ( v17 );
    }
    else
    {
      v10 = 0LL;
      v11 = (unsigned int *)((char *)a1 + 32);
      v12 = (unsigned int)(a7 - a6);
      do
      {
        v13 = *v11++;
        if ( (_DWORD)v13 )
        {
          v7 += v13;
          v14 = (_DWORD *)((char *)a2 + 4 * v10 + 16);
          v10 += v13;
          do
          {
            *v14++ &= *(unsigned __int16 *)v9;
            LODWORD(v13) = v13 - 1;
          }
          while ( (_DWORD)v13 );
        }
        else
        {
          *((_DWORD *)a2 + v10 + 4) &= *(unsigned __int16 *)v9;
        }
        v9 += 2;
        --v12;
      }
      while ( v12 );
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v7 + 16);
}
