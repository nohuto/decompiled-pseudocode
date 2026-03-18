/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x14019E740
 * Callers:
 *     RtlStringCchPrintfExW @ 0x140002CB4 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x140084A34 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
