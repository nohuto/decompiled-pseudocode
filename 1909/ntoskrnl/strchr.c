/*
 * XREFs of strchr @ 0x1401A1DE0
 * Callers:
 *     MiSnapThunk @ 0x140711098 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x1408EFE8C (WmipSMBiosFindStringAndZero.c)
 *     PipSmBiosGetString @ 0x1409F6BD0 (PipSmBiosGetString.c)
 *     EmpParseRuleTerm @ 0x1409FA2C0 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1409FB098 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetToken @ 0x140A0F3EC (CmpGetToken.c)
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
