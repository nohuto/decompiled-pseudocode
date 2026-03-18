/*
 * XREFs of RtlIsValidOemCharacter @ 0x1408D4AC0
 * Callers:
 *     GetNextWchar @ 0x1406C27E8 (GetNextWchar.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x1406672F0 (RtlpIsUtf8Process.c)
 */

BOOLEAN __stdcall RtlIsValidOemCharacter(PWCHAR Char)
{
  char IsUtf8Process; // al
  WCHAR v3; // cx
  WCHAR v4; // r10
  __int64 v5; // r9
  __int16 v6; // ax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int16 v9; // dx
  __int64 v10; // rax
  __int64 v11; // r9

  IsUtf8Process = RtlpIsUtf8Process(1);
  v3 = *Char;
  if ( IsUtf8Process != 1 )
  {
    if ( (_BYTE)NlsMbOemCodePageTag )
    {
      v7 = *(unsigned __int16 *)(NlsUnicodeToMbOemData + 2LL * v3);
      v8 = (unsigned __int8)v7;
      v9 = NlsOemLeadByteInfoTable[v7 >> 8];
      if ( v9 )
      {
        v8 = v9 + (unsigned __int64)(unsigned __int8)v7;
        v10 = NlsMbOemCodePageTables;
      }
      else
      {
        v10 = NlsOemToUnicodeData;
      }
      v4 = NLS_UPCASE(*(_WORD *)(v10 + 2 * v8));
      v6 = *(_WORD *)(v11 + 2LL * v4);
    }
    else
    {
      v4 = NLS_UPCASE(*(_WORD *)(NlsOemToUnicodeData + 2LL * *(unsigned __int8 *)(v3 + NlsUnicodeToOemData)));
      v6 = *(char *)(v4 + v5);
    }
    if ( v6 != OemDefaultChar )
    {
      *Char = v4;
      return 1;
    }
    return 0;
  }
  if ( v3 > 0x7Fu )
    return 0;
  *Char = NLS_UPCASE(v3);
  return 1;
}
