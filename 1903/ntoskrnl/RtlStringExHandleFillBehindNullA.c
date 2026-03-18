/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x14027BC28
 * Callers:
 *     RtlStringCbPrintfExA @ 0x14027BAA8 (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
