/*
 * XREFs of EmpSearchEntryDatabase @ 0x14018A094
 * Callers:
 *     EmpProviderRegister @ 0x140757AB0 (EmpProviderRegister.c)
 *     EmProviderRegisterEntry @ 0x14084CC20 (EmProviderRegisterEntry.c)
 *     EmpParseEntryTypes @ 0x1409F9F14 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409FA08C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409FA908 (EmpParseRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchEntryDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpEntryListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
