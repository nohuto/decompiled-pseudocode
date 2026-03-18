/*
 * XREFs of KeClearEvent @ 0x1402A9B4C
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     sub_140683598 @ 0x140683598 (sub_140683598.c)
 * Callees:
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 */

void __stdcall KeClearEvent(PRKEVENT Event)
{
  KeResetEvent(Event);
}
