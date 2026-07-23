/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x1408E9B0C
 * Callers:
 *     SdbGetPathCustomSdb @ 0x1408E96A0 (SdbGetPathCustomSdb.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslGuidToString @ 0x140724914 (AslGuidToString.c)
 */

__int64 __fastcall SdbpGetCustomSdbFileName(wchar_t *a1, __int64 a2, unsigned int *a3)
{
  int v4; // edi
  __int64 v6; // rcx
  wchar_t *v7; // rax
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  signed __int64 v12; // rdx
  __int16 v13; // r8
  char *v14; // rax

  *a1 = 0;
  v4 = AslGuidToString(a1, 0x2Bu, a3);
  if ( v4 >= 0 )
  {
    v6 = 43LL;
    v7 = a1;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v6;
    }
    while ( v6 );
    v4 = -1073741811;
    if ( v6 )
      v4 = 0;
    v8 = 43 - v6;
    if ( v6 )
    {
      v9 = (char *)&a1[v8];
      v10 = 43 - v8;
      if ( 43 != v8 )
      {
        v11 = 2147483646LL;
        v12 = (char *)L".sdb" - v9;
        do
        {
          if ( !v11 )
            break;
          v13 = *(_WORD *)&v9[v12];
          if ( !v13 )
            break;
          *(_WORD *)v9 = v13;
          --v11;
          v9 += 2;
          --v10;
        }
        while ( v10 );
      }
      v14 = v9 - 2;
      v4 = -2147483643;
      if ( v10 )
      {
        v14 = v9;
        v4 = 0;
      }
      *(_WORD *)v14 = 0;
    }
    if ( v4 >= 0 )
      return 0LL;
  }
  AslLogCallPrintf(1LL);
  return (unsigned int)v4;
}
