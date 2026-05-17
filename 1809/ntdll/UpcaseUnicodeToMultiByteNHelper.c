/*
 * XREFs of UpcaseUnicodeToMultiByteNHelper @ 0x1800E6B50
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x18006AC30 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18006AC90 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpcaseUnicodeToMultiByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  _BYTE *v8; // r10
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int16 v14; // dx
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // r8
  __int16 v17; // dx
  unsigned int v18; // eax

  v5 = a5;
  v8 = a1;
  if ( a5 )
  {
    v9 = NlsUnicodeToMbAnsiData;
    v10 = NlsMbAnsiCodePageTables;
    v11 = NlsAnsiToUnicodeData;
    v12 = Nls844UnicodeUpcaseTable;
    do
    {
      if ( !a2 )
        break;
      v13 = *a4++;
      v14 = *(_WORD *)(v9 + 2 * v13);
      v15 = (unsigned __int64)v14 >> 8;
      if ( NlsLeadByteInfoTable[v15] )
        v16 = *(_WORD *)(v10 + 2
                             * ((unsigned __int8)v14 + (unsigned __int64)(unsigned __int16)NlsLeadByteInfoTable[v15]));
      else
        v16 = *(_WORD *)(v11 + 2LL * (unsigned __int8)v14);
      if ( v16 >= 0x61u )
      {
        if ( v16 > 0x7Au )
          v16 += *(_WORD *)(v12
                          + 2LL
                          * ((v16 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v12
                                                               + 2LL
                                                               * (((v16 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v12 + 2 * ((unsigned __int64)v16 >> 8))))));
        else
          v16 -= 32;
      }
      v17 = *(_WORD *)(v9 + 2LL * v16);
      if ( HIBYTE(v17) )
      {
        v18 = a2--;
        if ( v18 < 2 )
          break;
        *v8++ = HIBYTE(v17);
      }
      *v8 = v17;
      --a2;
      ++v8;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 )
    *a3 = (_DWORD)v8 - (_DWORD)a1;
  return a2 < v5 ? 0x80000005 : 0;
}
