/*
 * XREFs of ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C0201C5C
 * Callers:
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C02015E0 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C0201B60 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 */

__int64 __fastcall TranslateUmdFileNameToVmMultiString(unsigned __int16 *a1, int a2, unsigned int *a3)
{
  __int64 v3; // r15
  _QWORD *v6; // rdi
  _QWORD *v7; // r13
  int v8; // ebp
  unsigned int v9; // esi
  char *v10; // rax
  char *v11; // rbx
  unsigned int v12; // edx
  unsigned __int16 *v13; // r8
  unsigned __int16 v14; // r9
  unsigned int v15; // edx
  _QWORD *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  void *v21; // rcx
  __int64 v22; // rax

  v3 = (unsigned int)(a2 - 1);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  a1[v3] = 0;
  if ( a2 != 1 )
  {
    do
    {
      if ( a1[v9] )
      {
        v10 = (char *)operator new[](0x210uLL, 0x4B677844u, PagedPool);
        v11 = v10;
        if ( v10 )
        {
          *(_QWORD *)v10 = 0LL;
          *((_WORD *)v10 + 263) = 0;
        }
        else
        {
          v11 = 0LL;
        }
        if ( !v11 )
        {
          v8 = -1073741801;
          goto LABEL_25;
        }
        if ( v6 )
          *v7 = v11;
        else
          v6 = v11;
        v12 = 0;
        v13 = (unsigned __int16 *)(v11 + 8);
        do
        {
          v14 = a1[v9];
          if ( !v14 )
            break;
          if ( v9 >= (unsigned int)v3 )
            break;
          *v13 = v14;
          ++v12;
          ++v13;
          ++v9;
        }
        while ( v12 < 0x103 );
        *(_WORD *)&v11[2 * v12 + 8] = 0;
        v8 = TranslateUmdFileNameToVm((unsigned __int16 *)v11 + 4, 0x104u, 0LL);
        v7 = v11;
        if ( v8 < 0 )
          goto LABEL_25;
      }
      else
      {
        ++v9;
      }
    }
    while ( v9 < (unsigned int)v3 );
  }
  v15 = 0;
  v16 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      LODWORD(v17) = 0;
      if ( *((_WORD *)v16 + 4) )
        break;
LABEL_21:
      v20 = v15++;
      a1[v20] = 0;
      v16 = (_QWORD *)*v16;
      if ( !v16 )
        goto LABEL_25;
    }
    while ( v15 < (unsigned int)v3 )
    {
      v18 = (unsigned int)v17;
      v17 = (unsigned int)(v17 + 1);
      v19 = v15++;
      a1[v19] = *((_WORD *)v16 + v18 + 4);
      if ( !*((_WORD *)v16 + v17 + 4) )
        goto LABEL_21;
    }
    v8 = -2147483643;
  }
LABEL_25:
  *a3 = 0;
  while ( v6 )
  {
    v21 = v6;
    if ( v8 == -2147483643LL )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *((_WORD *)v6 + v22 + 4) );
      *a3 += v22 + 1;
    }
    v6 = (_QWORD *)*v6;
    operator delete(v21);
  }
  *a3 *= 2;
  return (unsigned int)v8;
}
