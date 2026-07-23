/*
 * XREFs of RtlEnumProcessHeaps @ 0x1800EED70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlEnumProcessHeaps(PRTL_ENUM_HEAPS_ROUTINE EnumRoutine, PVOID Parameter)
{
  return sub_18006790C((__int64)EnumRoutine, (__int64)Parameter, 0);
}
