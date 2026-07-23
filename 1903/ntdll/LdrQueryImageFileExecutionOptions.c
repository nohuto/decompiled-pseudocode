/*
 * XREFs of LdrQueryImageFileExecutionOptions @ 0x1800799A0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x1800799E0 (LdrQueryImageFileExecutionOptionsEx.c)
 */

NTSTATUS __cdecl LdrQueryImageFileExecutionOptions(
        PUNICODE_STRING SubKey,
        PCWSTR ValueName,
        ULONG ValueSize,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnedLength)
{
  if ( byte_180165430 )
    return -1073741772;
  else
    return LdrQueryImageFileExecutionOptionsEx(SubKey, ValueName, ValueSize, Buffer, BufferSize, ReturnedLength, 0);
}
