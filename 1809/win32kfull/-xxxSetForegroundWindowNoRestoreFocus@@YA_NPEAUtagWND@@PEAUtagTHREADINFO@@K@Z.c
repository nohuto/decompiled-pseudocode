/*
 * XREFs of ?xxxSetForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C01C31A0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C0226F98 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 */

bool __fastcall xxxSetForegroundWindowNoRestoreFocus(LARGE_INTEGER *a1, struct tagTHREADINFO *a2, int a3)
{
  return (unsigned int)xxxSetForegroundWindow2(a1, a2, a3 | 0x40u) != 0;
}
