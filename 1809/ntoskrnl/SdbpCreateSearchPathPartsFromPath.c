/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x140723904
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140723818 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     wcschr @ 0x140197810 (wcschr.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rbx
  unsigned int v4; // r15d
  const wchar_t *v5; // rbp
  int i; // edi
  wchar_t *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // r8
  __int64 v10; // rax
  const wchar_t *j; // rdx
  wchar_t v12; // cx
  const wchar_t *v14; // rax
  __int64 v15; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( a1 )
  {
    for ( i = *a1 != 0; ; ++i )
    {
      v7 = wcschr(a1, 0x3Bu);
      if ( !v7 )
        break;
      a1 = v7 + 1;
    }
    v8 = AslAlloc((unsigned int)(i - 1), 48LL * (unsigned int)(i - 1) + 56);
    v9 = v8;
    if ( v8 )
    {
      *v8 = i;
      v10 = -1LL;
      do
        ++v10;
      while ( v3[v10] );
      for ( j = &v3[v10]; ; --j )
      {
        if ( j < v3 )
        {
          *a2 = v9;
          return 1LL;
        }
        v12 = *j;
        if ( *j == 92 )
        {
          if ( v5 )
          {
LABEL_13:
            if ( v3 != j )
              continue;
            goto LABEL_8;
          }
          v5 = j;
        }
        if ( v12 != 59 )
          goto LABEL_13;
LABEL_8:
        if ( v5 )
        {
          v14 = j + 1;
          if ( v12 != 59 )
            v14 = j;
          j = v14;
          v15 = 12LL * v4++;
          v9[v15 + 4] = v5 - v14 + 1;
          v5 = 0LL;
          *(_QWORD *)&v9[v15 + 2] = v14;
        }
      }
    }
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
