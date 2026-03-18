/*
 * XREFs of KeClearEvent @ 0x1402A98AC
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     sub_1406494FC @ 0x1406494FC (sub_1406494FC.c)
 * Callees:
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 */

void __stdcall KeClearEvent(PRKEVENT Event)
{
  KeResetEvent(Event);
}
