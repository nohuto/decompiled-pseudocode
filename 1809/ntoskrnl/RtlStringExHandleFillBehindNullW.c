/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x140193980
 * Callers:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x140128CB8 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
