/*
 * XREFs of ZwQuerySystemTime @ 0x1800A0E20
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x18006F2B0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F5E0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F8F0 (RtlAddGrowableFunctionTable.c)
 *     RtlRunEncodeUnicodeString @ 0x1800885C0 (RtlRunEncodeUnicodeString.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ZwQuerySystemTime(_QWORD *a1)
{
  return RtlQuerySystemTime(a1);
}
