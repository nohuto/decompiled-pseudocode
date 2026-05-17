/*
 * XREFs of sub_180073D1C @ 0x180073D1C
 * Callers:
 *     RtlUnlockModuleSection @ 0x180073B70 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180073C20 (RtlLockModuleSection.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall sub_180073D1C(char *a1)
{
  _UNKNOWN **i; // rdx
  char *v2; // r8

  for ( i = (_UNKNOWN **)off_18015F580; i != &off_18015F580; i = (_UNKNOWN **)*i )
  {
    v2 = (char *)i[2];
    if ( a1 >= v2 && a1 < (char *)i[3] + (unsigned __int64)v2 )
      return i;
  }
  return 0LL;
}
