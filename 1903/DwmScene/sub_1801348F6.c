/*
 * XREFs of sub_1801348F6 @ 0x1801348F6
 * Callers:
 *     sub_180134925 @ 0x180134925 (sub_180134925.c)
 * Callees:
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __noreturn sub_1801348F6()
{
  sub_18011D988(&qword_18025E1C0, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
  throw;
}
