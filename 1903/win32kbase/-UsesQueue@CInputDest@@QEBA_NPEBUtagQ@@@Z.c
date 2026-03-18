/*
 * XREFs of ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C015DDB0
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01657DC (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0172D00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00392A4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall CInputDest::UsesQueue(CInputDest *this, const struct tagQ *a2)
{
  __int64 v2; // rdx
  struct tagTHREADINFO *ThreadInfo; // r8
  bool result; // al

  ThreadInfo = CInputDest::GetThreadInfo(this);
  result = 0;
  if ( ThreadInfo )
    return *((_QWORD *)ThreadInfo + 53) == v2;
  return result;
}
