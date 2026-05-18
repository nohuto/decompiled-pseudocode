/*
 * XREFs of sub_180134A06 @ 0x180134A06
 * Callers:
 *     sub_180134A35 @ 0x180134A35 (sub_180134A35.c)
 * Callees:
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __noreturn sub_180134A06()
{
  sub_18011DA98(&qword_18025F1C0, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
  throw;
}
