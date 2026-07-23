/*
 * XREFs of LdrpResCompareResourceNames @ 0x14068B1E0
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x14068A66C (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     wcsncmp @ 0x140197940 (wcsncmp.c)
 */

__int64 __fastcall LdrpResCompareResourceNames(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int16 a7,
        int *a8)
{
  unsigned int v8; // ebx
  __int64 v11; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int16 *v15; // rbp
  int v16; // ecx

  v8 = 0;
  if ( a5 && a6 )
  {
    v11 = *a6;
    if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v13 = -1LL;
      if ( (int)v11 >= 0 )
      {
        *a8 = -1;
        return v8;
      }
      LODWORD(v11) = v11 & 0x7FFFFFFF;
      v14 = v11 + a5;
      if ( (a7 & 0x1000) != 0 )
      {
        if ( v14 < a5 )
          return (unsigned int)-1073741701;
        v15 = (unsigned __int16 *)(v11 + a5);
        if ( v14 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
          return (unsigned int)-1073741701;
      }
      else
      {
        v15 = (unsigned __int16 *)(v11 + a5);
      }
      if ( ((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFF0000uLL) == 0 )
        return (unsigned int)-1073741701;
      v16 = wcsncmp(a4, v15 + 1, *v15);
      if ( v16 )
        goto LABEL_17;
      do
        ++v13;
      while ( a4[v13] );
      if ( v13 == *v15 )
      {
LABEL_17:
        *a8 = v16;
        return v8;
      }
    }
    else
    {
      if ( (int)v11 >= 0 )
      {
        if ( (a7 & 0x1000) == 0 || (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          *a8 = (_DWORD)a4 - v11;
          return v8;
        }
        return (unsigned int)-1073741701;
      }
      if ( (a7 & 0x1000) != 0 && (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        return (unsigned int)-1073741701;
    }
    *a8 = 1;
    return v8;
  }
  return 3221225485LL;
}
