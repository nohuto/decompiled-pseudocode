/*
 * XREFs of sub_180101388 @ 0x180101388
 * Callers:
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 *     sub_1801041A8 @ 0x1801041A8 (sub_1801041A8.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 */

__int64 sub_180101388()
{
  if ( (int)ZwQueryInformationProcess() < 0 )
    return 0LL;
  else
    return 2147483587LL;
}
