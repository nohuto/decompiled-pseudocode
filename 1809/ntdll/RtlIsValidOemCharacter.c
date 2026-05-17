/*
 * XREFs of RtlIsValidOemCharacter @ 0x1800F8D00
 * Callers:
 *     GetNextWchar @ 0x1800F8560 (GetNextWchar.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlIsValidOemCharacter(unsigned __int16 *a1)
{
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // r9
  __int16 v4; // cx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v2 = *a1;
  if ( NlsOemCodePageIsUTF8 == 1 )
  {
    if ( v2 <= 0x7Fu )
    {
      if ( v2 >= 0x61u )
      {
        if ( v2 > 0x7Au )
          v2 += *(_WORD *)(Nls844UnicodeUpcaseTable
                         + 2LL
                         * ((v2 & 0xF)
                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                              + 2LL
                                                              * (((v2 >> 4) & 0xF)
                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v2 >> 8))))));
        else
          v2 -= 32;
      }
      *a1 = v2;
      return 1;
    }
    return 0;
  }
  if ( NlsMbOemCodePageTag )
  {
    v5 = *(unsigned __int8 *)(NlsUnicodeToMbOemData + 2LL * v2);
    v6 = (unsigned __int64)*(unsigned __int16 *)(NlsUnicodeToMbOemData + 2LL * v2) >> 8;
    if ( NlsOemLeadByteInfoTable[v6] )
    {
      v5 += (unsigned __int16)NlsOemLeadByteInfoTable[v6];
      v7 = NlsMbOemCodePageTables;
    }
    else
    {
      v7 = NlsOemToUnicodeData;
    }
    v3 = *(_WORD *)(v7 + 2 * v5);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)(Nls844UnicodeUpcaseTable
                       + 2LL
                       * ((v3 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                            + 2LL
                                                            * (((v3 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v3 >> 8))))));
      else
        v3 -= 32;
    }
    v4 = *(_WORD *)(NlsUnicodeToMbOemData + 2LL * v3);
  }
  else
  {
    v3 = *(_WORD *)(NlsOemToUnicodeData + 2LL * *(unsigned __int8 *)(v2 + NlsUnicodeToOemData));
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)(Nls844UnicodeUpcaseTable
                       + 2LL
                       * ((v3 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                            + 2LL
                                                            * (((v3 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v3 >> 8))))));
      else
        v3 -= 32;
    }
    v4 = *(char *)(v3 + NlsUnicodeToOemData);
  }
  if ( v4 == OemDefaultChar )
    return 0;
  *a1 = v3;
  return 1;
}
