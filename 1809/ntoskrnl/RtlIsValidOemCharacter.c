/*
 * XREFs of RtlIsValidOemCharacter @ 0x140897D00
 * Callers:
 *     GetNextWchar @ 0x14069E6EC (GetNextWchar.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsValidOemCharacter(PWCHAR Char)
{
  WCHAR v2; // r10
  WCHAR v3; // r9
  __int16 v4; // cx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int16 v7; // dx
  __int64 v8; // rax

  v2 = *Char;
  if ( BYTE4(NlsMbCodePageTag) == 1 )
  {
    if ( v2 <= 0x7Fu )
    {
      if ( v2 >= 0x61u )
      {
        if ( v2 > 0x7Au )
          v2 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v2 & 0xF)
                                                                        + 2
                                                                        * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v2 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v2 >> 8)]]];
        else
          v2 -= 32;
      }
      *Char = v2;
      return 1;
    }
    return 0;
  }
  if ( (_BYTE)NlsMbOemCodePageTag )
  {
    v5 = *(unsigned __int16 *)(NlsUnicodeToMbOemData + 2LL * v2);
    v6 = (unsigned __int8)v5;
    v7 = NlsOemLeadByteInfoTable[v5 >> 8];
    if ( v7 )
    {
      v6 = v7 + (unsigned __int64)(unsigned __int8)v5;
      v8 = NlsMbOemCodePageTables;
    }
    else
    {
      v8 = NlsOemToUnicodeData;
    }
    v3 = *(_WORD *)(v8 + 2 * v6);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v3 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v3 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v3 >> 8)]]];
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
        v3 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v3 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v3 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v3 >> 8)]]];
      else
        v3 -= 32;
    }
    v4 = *(char *)(v3 + NlsUnicodeToOemData);
  }
  if ( v4 == OemDefaultChar )
    return 0;
  *Char = v3;
  return 1;
}
