/*
 * XREFs of _errno @ 0x180084320
 * Callers:
 *     sub_18008E4D4 @ 0x18008E4D4 (sub_18008E4D4.c)
 *     mbstowcs @ 0x180090450 (mbstowcs.c)
 *     sub_180091A10 @ 0x180091A10 (sub_180091A10.c)
 *     sub_18009261C @ 0x18009261C (sub_18009261C.c)
 *     wcstombs @ 0x1800928E0 (wcstombs.c)
 *     sub_180092AC0 @ 0x180092AC0 (sub_180092AC0.c)
 *     sub_180093630 @ 0x180093630 (sub_180093630.c)
 *     sub_180094088 @ 0x180094088 (sub_180094088.c)
 *     sub_180095108 @ 0x180095108 (sub_180095108.c)
 *     sub_180095420 @ 0x180095420 (sub_180095420.c)
 *     sub_18009658C @ 0x18009658C (sub_18009658C.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
