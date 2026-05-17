/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x1800E61D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180058120 (RtlMultiByteToUnicodeN.c)
 */

__int64 __fastcall RtlConsoleMultiByteToUnicodeN(
        _WORD *a1,
        unsigned int a2,
        char *a3,
        unsigned __int8 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v6; // r10d
  bool v7; // zf
  _WORD *v8; // r11
  unsigned __int8 *i; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  __int64 v16; // r14
  __int64 v17; // r15
  unsigned int v18; // ebx
  __int64 v19; // rax
  unsigned __int16 v20; // bp

  v6 = 0;
  v7 = NlsActiveCodePageIsUTF8 == 0;
  v8 = a1;
  *a6 = 0;
  if ( v7 )
  {
    v11 = a2 >> 1;
    if ( NlsMbCodePageTag )
    {
      v16 = NlsMbAnsiCodePageTables;
      if ( v11 )
      {
        v17 = NlsAnsiToUnicodeData;
        v18 = a5;
        while ( v18 )
        {
          v19 = *a4;
          --v11;
          --v18;
          v20 = NlsLeadByteInfoTable[v19];
          if ( v20 )
          {
            if ( !v18 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++a4;
            --v18;
            *v8 = *(_WORD *)(v16 + 2 * (v20 + (unsigned __int64)*a4));
          }
          else
          {
            if ( (unsigned __int8)v19 < 0x20u )
            {
              *a6 = 1;
              LOBYTE(v19) = *a4;
            }
            *v8 = *(_WORD *)(v17 + 2LL * (unsigned __int8)v19);
          }
          ++v8;
          ++a4;
          if ( !v11 )
            break;
        }
      }
      if ( a3 )
        *(_DWORD *)a3 = (_DWORD)v8 - (_DWORD)a1;
    }
    else
    {
      v12 = a5;
      if ( v11 < a5 )
        v12 = v11;
      if ( a3 )
        *(_DWORD *)a3 = 2 * v12;
      v13 = NlsAnsiToUnicodeData;
      if ( v12 )
      {
        v14 = v12;
        do
        {
          v15 = *a4;
          if ( *a4 < 0x20u )
          {
            *a6 = 1;
            v15 = *a4;
          }
          ++a4;
          *v8++ = *(_WORD *)(v13 + 2LL * v15);
          --v14;
        }
        while ( v14 );
      }
    }
    return 0LL;
  }
  else
  {
    if ( a5 )
    {
      for ( i = a4; *i >= 0x20u; ++i )
      {
        if ( ++v6 >= a5 )
          return RtlMultiByteToUnicodeN(a1, a2, a3, a4, a5);
      }
      *a6 = 1;
    }
    return RtlMultiByteToUnicodeN(a1, a2, a3, a4, a5);
  }
}
