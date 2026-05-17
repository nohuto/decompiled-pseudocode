/*
 * XREFs of ZwQuerySystemTime @ 0x18009D220
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x1800650D0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x180065A00 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065C10 (RtlAddGrowableFunctionTable.c)
 *     RtlRunEncodeUnicodeString @ 0x180088CB0 (RtlRunEncodeUnicodeString.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ZwQuerySystemTime(_QWORD *a1)
{
  return ZwQuerySystemTime_0(a1);
}
