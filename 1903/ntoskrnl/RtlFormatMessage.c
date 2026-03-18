/*
 * XREFs of RtlFormatMessage @ 0x1408CF590
 * Callers:
 *     <none>
 * Callees:
 *     RtlFormatMessageEx @ 0x1408CF5E4 (RtlFormatMessageEx.c)
 */

NTSTATUS __stdcall RtlFormatMessage(
        PWSTR Message,
        ULONG MaxWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  return RtlFormatMessageEx(
           (int)Message,
           MaxWidth,
           IgnoreInserts,
           ArgumentsAreAnsi,
           ArgumentsAreAnArray,
           (__int64)Arguments,
           Buffer,
           BufferSize,
           (__int64)ReturnLength);
}
