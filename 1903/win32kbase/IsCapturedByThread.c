/*
 * XREFs of IsCapturedByThread @ 0x1C0184460
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030F88 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00392A4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall IsCapturedByThread(struct tagTHREADINFO **a1)
{
  __int64 MouseProcessor; // rax
  char v3; // dl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  v3 = 0;
  if ( MouseProcessor )
    return CInputDest::GetThreadInfo((CInputDest *)(MouseProcessor + 3312)) == *a1;
  return v3;
}
