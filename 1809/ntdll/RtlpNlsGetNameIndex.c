/*
 * XREFs of RtlpNlsGetNameIndex @ 0x1800413C0
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003AB74 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlGetParentLocaleName @ 0x18003B4B0 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180041310 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800F8FC0 (RtlIsValidLocaleName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsGetNameIndex(unsigned __int16 *a1)
{
  int v2; // ebp
  int v3; // r14d
  __int64 v4; // r15
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int16 *v10; // r11
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r10
  int v18; // r9d
  int v19; // eax

  v2 = 0;
  v3 = *(unsigned __int16 *)(pTblPtrs + 10) - 1;
  if ( v3 < 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v4 = (v3 + v2) / 2;
    v5 = *(_QWORD *)(pTblPtrs + 40) + 2LL + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8 * v4);
    LOWORD(v6) = 0;
    if ( a1 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a1[v7] );
      v6 = 2 * v7;
      if ( v6 >= 0xFFFE )
        LOWORD(v6) = -4;
    }
    LOWORD(v8) = 0;
    if ( v5 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v5 + 2 * v9) );
      v8 = 2 * v9;
      if ( v8 >= 0xFFFE )
        LOWORD(v8) = -4;
    }
    v10 = a1;
    v11 = (unsigned __int64)(unsigned __int16)v8 >> 1;
    v12 = (unsigned __int64)(unsigned __int16)v6 >> 1;
    v13 = v12;
    if ( v12 > v11 )
      v13 = v11;
    v14 = (unsigned __int64)&a1[v13];
    if ( (unsigned __int64)a1 >= v14 )
    {
LABEL_18:
      v18 = v12 - v11;
    }
    else
    {
      v15 = v5 - (_QWORD)a1;
      while ( 1 )
      {
        v16 = *v10;
        v17 = *(unsigned __int16 *)((char *)v10 + v15);
        if ( (_DWORD)v16 != (_DWORD)v17 )
        {
          if ( (unsigned int)v16 >= 0x61 )
          {
            if ( (unsigned int)v16 > 0x7A )
              LODWORD(v16) = (unsigned __int16)(v16
                                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * (*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                + 2LL
                                                                                * (*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v16 >> 8))
                                                                                 + (unsigned int)((unsigned __int8)v16 >> 4)))
                                                          + (unsigned int)(v16 & 0xF))));
            else
              LODWORD(v16) = v16 - 32;
          }
          if ( (unsigned int)v17 >= 0x61 )
          {
            if ( (unsigned int)v17 > 0x7A )
              LODWORD(v17) = (unsigned __int16)(v17
                                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * (*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                + 2LL
                                                                                * (*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v17 >> 8))
                                                                                 + (unsigned int)((unsigned __int8)v17 >> 4)))
                                                          + (unsigned int)(v17 & 0xF))));
            else
              LODWORD(v17) = v17 - 32;
          }
          if ( (_DWORD)v16 != (_DWORD)v17 )
            break;
        }
        if ( (unsigned __int64)++v10 >= v14 )
          goto LABEL_18;
      }
      v18 = v16 - v17;
    }
    if ( !v18 )
      return (unsigned int)v4;
    v19 = v4 - 1;
    if ( v18 >= 0 )
      v19 = v3;
    v3 = v19;
    if ( v18 >= 0 )
      v2 = v4 + 1;
    if ( v2 > v19 )
      return 0xFFFFFFFFLL;
  }
}
