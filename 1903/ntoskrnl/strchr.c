/*
 * XREFs of strchr @ 0x1401A16C0
 * Callers:
 *     MiSnapThunk @ 0x14070F2B8 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x1408F057C (WmipSMBiosFindStringAndZero.c)
 *     PipSmBiosGetString @ 0x1409F6CC0 (PipSmBiosGetString.c)
 *     EmpParseRuleTerm @ 0x1409FA3B0 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1409FB188 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetToken @ 0x140A0EC54 (CmpGetToken.c)
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
