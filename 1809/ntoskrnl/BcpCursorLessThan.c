/*
 * XREFs of BcpCursorLessThan @ 0x140327C64
 * Callers:
 *     BcpDisplayProgress @ 0x140328330 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
