/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x1800E3540
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x18005D8B0 (RtlMultiByteToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x180062264 (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlConsoleMultiByteToUnicodeN(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // edx
  char *v7; // r8
  unsigned __int8 *v8; // r9
  int v9; // r10d
  _WORD *v10; // r11
  unsigned __int8 *i; // rax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  __int64 v18; // r14
  int v19; // esi
  __int64 v20; // r15
  unsigned int v21; // ebx
  __int64 v22; // rax
  unsigned __int16 v23; // bp

  *a6 = 0;
  if ( RtlpIsUtf8Process(0) )
  {
    if ( a5 )
    {
      for ( i = v8; *i >= 0x20u; ++i )
      {
        if ( ++v9 >= a5 )
          return RtlMultiByteToUnicodeN(v10, v6, v7, v8, a5);
      }
      *a6 = 1;
    }
    return RtlMultiByteToUnicodeN(v10, v6, v7, v8, a5);
  }
  else
  {
    v13 = v6 >> 1;
    if ( NlsMbCodePageTag == (_BYTE)v9 )
    {
      v14 = a5;
      if ( v13 < a5 )
        v14 = v13;
      if ( v7 )
        *(_DWORD *)v7 = 2 * v14;
      v15 = NlsAnsiToUnicodeData;
      if ( v14 )
      {
        v16 = v14;
        do
        {
          v17 = *v8;
          if ( *v8 < 0x20u )
          {
            *a6 = 1;
            v17 = *v8;
          }
          ++v8;
          *v10++ = *(_WORD *)(v15 + 2LL * v17);
          --v16;
        }
        while ( v16 );
      }
    }
    else
    {
      v18 = NlsMbAnsiCodePageTables;
      v19 = (int)v10;
      if ( v13 )
      {
        v20 = NlsAnsiToUnicodeData;
        v21 = a5;
        while ( v21 )
        {
          v22 = *v8;
          --v13;
          --v21;
          v23 = NlsLeadByteInfoTable[v22];
          if ( v23 )
          {
            if ( !v21 )
            {
              *v10 = v9;
              LODWORD(v10) = (_DWORD)v10 + 2;
              break;
            }
            ++v8;
            --v21;
            *v10 = *(_WORD *)(v18 + 2 * (v23 + (unsigned __int64)*v8));
          }
          else
          {
            if ( (unsigned __int8)v22 < 0x20u )
            {
              *a6 = 1;
              LOBYTE(v22) = *v8;
            }
            *v10 = *(_WORD *)(v20 + 2LL * (unsigned __int8)v22);
          }
          ++v10;
          ++v8;
          if ( !v13 )
            break;
        }
      }
      if ( v7 )
        *(_DWORD *)v7 = (_DWORD)v10 - v19;
    }
    return 0LL;
  }
}
