/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x140268C68
 * Callers:
 *     RtlStringCbPrintfExA @ 0x140268AE8 (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
