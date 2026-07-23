/*
 * XREFs of strchr @ 0x140197000
 * Callers:
 *     MiSnapThunk @ 0x14067A5F4 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x1408B4300 (WmipSMBiosFindStringAndZero.c)
 *     EmpParseRuleTerm @ 0x1409BF478 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1409C022C (EmpParseTargetRuleStringIndexList.c)
 *     PipSmBiosGetString @ 0x1409CADA0 (PipSmBiosGetString.c)
 *     CmpGetToken @ 0x1409CFE3C (CmpGetToken.c)
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
