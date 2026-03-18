/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x14019E020
 * Callers:
 *     RtlStringCchPrintfExW @ 0x140002CB4 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x140084634 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
