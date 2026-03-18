/*
 * XREFs of BcpCursorLessThan @ 0x1403494D8
 * Callers:
 *     BcpDisplayProgress @ 0x140349BA8 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
