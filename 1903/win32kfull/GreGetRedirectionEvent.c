/*
 * XREFs of GreGetRedirectionEvent @ 0x1C0140888
 * Callers:
 *     NtUserSignalRedirectionStartComplete @ 0x1C0140810 (NtUserSignalRedirectionStartComplete.c)
 *     NtUserWaitForRedirectionStartComplete @ 0x1C02373C0 (NtUserWaitForRedirectionStartComplete.c)
 * Callees:
 *     <none>
 */

struct DwmState *GreGetRedirectionEvent()
{
  struct DwmState *result; // rax

  result = g_pDwmState;
  if ( g_pDwmState )
    return (struct DwmState *)*((_QWORD *)g_pDwmState + 42);
  return result;
}
