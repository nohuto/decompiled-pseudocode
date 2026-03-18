/*
 * XREFs of BcpCursorLessThan @ 0x140348F38
 * Callers:
 *     BcpDisplayProgress @ 0x140349608 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
