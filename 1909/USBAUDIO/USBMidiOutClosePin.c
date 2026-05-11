/*
 * XREFs of USBMidiOutClosePin @ 0x1C0030E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBMidiOutClosePin(__int64 a1)
{
  ExDeleteNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL) + 80LL));
  return 0LL;
}
