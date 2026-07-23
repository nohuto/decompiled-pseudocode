/*
 * XREFs of RtlFormatMessage @ 0x1408CEE90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFormatMessageEx @ 0x1408CEEE4 (RtlFormatMessageEx.c)
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
  _PARSE_MESSAGE_CONTEXT *v10; // [rsp+48h] [rbp-10h]

  return RtlFormatMessageEx(
           Message,
           MaxWidth,
           IgnoreInserts,
           ArgumentsAreAnsi,
           ArgumentsAreAnArray,
           Arguments,
           Buffer,
           BufferSize,
           ReturnLength,
           v10);
}
