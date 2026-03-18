/*
 * XREFs of ?pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0139830
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C0094450 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead32AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7)
{
  char *v7; // rdi
  int v8; // esi
  ULONG *v9; // rbx
  unsigned int *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rax
  char *v15; // r9
  unsigned int *v16; // r13
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // r14
  ULONG v20; // eax
  char *v21; // rcx

  v7 = (char *)a2 + 8;
  v8 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  v9 = (ULONG *)&a3[4 * a6];
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v16 = (unsigned int *)((char *)a1 + 32);
      v17 = 0LL;
      v18 = (unsigned int)(a7 - a6);
      do
      {
        v19 = *v16++;
        v20 = XLATEOBJ_iXlate(pxlo, *v9);
        if ( (_DWORD)v19 )
        {
          v8 += v19;
          v21 = &v7[4 * v17 + 8];
          v17 += v19;
          do
          {
            *(_DWORD *)v21 &= v20;
            v21 += 4;
            LODWORD(v19) = v19 - 1;
          }
          while ( (_DWORD)v19 );
        }
        else
        {
          *(_DWORD *)&v7[4 * v17 + 8] &= v20;
        }
        ++v9;
        --v18;
      }
      while ( v18 );
    }
  }
  else if ( a6 != a7 )
  {
    v10 = (unsigned int *)((char *)a1 + 32);
    v11 = (unsigned int)(a7 - a6);
    v12 = 0LL;
    do
    {
      v13 = *v10++;
      if ( (_DWORD)v13 )
      {
        v8 += v13;
        v15 = &v7[4 * v12 + 8];
        v12 += v13;
        do
        {
          *(_DWORD *)v15 &= *v9;
          v15 += 4;
          LODWORD(v13) = v13 - 1;
        }
        while ( (_DWORD)v13 );
      }
      else
      {
        *(_DWORD *)&v7[4 * v12 + 8] &= *v9;
      }
      ++v9;
      --v11;
    }
    while ( v11 );
  }
  return (struct _XRUNLEN *)&v7[4 * v8 + 8];
}
