/*
 * XREFs of HUBPDO_NoPingResponse @ 0x1C0018250
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 */

void __fastcall HUBPDO_NoPingResponse(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 504, 4059);
}
