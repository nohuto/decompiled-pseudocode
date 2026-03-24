/*
 * XREFs of strchr @ 0x140196EC0
 * Callers:
 *     MiSnapThunk @ 0x140679434 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x1408B30A0 (WmipSMBiosFindStringAndZero.c)
 *     EmpParseRuleTerm @ 0x1409BE478 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1409BF22C (EmpParseTargetRuleStringIndexList.c)
 *     PipSmBiosGetString @ 0x1409C9DA0 (PipSmBiosGetString.c)
 *     CmpGetToken @ 0x1409CEE3C (CmpGetToken.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  char v2; // al
  char *v3; // r8
  char v4; // r9

  v2 = *Str;
  v3 = 0LL;
  if ( *Str )
  {
    v4 = *Str;
    do
    {
      v2 = v4;
      if ( v4 == (_BYTE)Val )
        break;
      v2 = *++Str;
      v4 = *Str;
    }
    while ( *Str );
  }
  if ( v2 == (_BYTE)Val )
    return (char *)Str;
  return v3;
}
