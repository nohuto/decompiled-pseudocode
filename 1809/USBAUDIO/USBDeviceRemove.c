/*
 * XREFs of USBDeviceRemove @ 0x1C00289F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBDeviceRemove(__int64 a1)
{
  ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 64LL));
  return 0LL;
}
