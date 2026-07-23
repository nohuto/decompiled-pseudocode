/*
 * XREFs of BcpCursorLessThan @ 0x140327E54
 * Callers:
 *     BcpDisplayProgress @ 0x140328520 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
