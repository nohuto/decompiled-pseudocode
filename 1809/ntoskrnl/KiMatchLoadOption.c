/*
 * XREFs of KiMatchLoadOption @ 0x1405738D8
 * Callers:
 *     KiParseLoadOptions @ 0x14057385C (KiParseLoadOptions.c)
 * Callees:
 *     strstr @ 0x140194EC0 (strstr.c)
 *     _atoi64 @ 0x140194F20 (_atoi64.c)
 */

char __fastcall KiMatchLoadOption(const char *a1, const char *a2, __int64 a3, __int64 *a4)
{
  char *v6; // rax
  char *v8; // rax

  v6 = strstr(a1, a2);
  if ( !v6 )
    return 0;
  v8 = &v6[a3];
  if ( *v8 != 61 )
    return 0;
  *a4 = atoi64(v8 + 1);
  return 1;
}
