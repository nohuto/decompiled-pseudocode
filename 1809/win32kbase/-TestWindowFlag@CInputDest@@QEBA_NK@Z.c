/*
 * XREFs of ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C006F410
 * Callers:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C006F38C (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01374A8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C013B2F0 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0146F48 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C014BBC4 (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::TestWindowFlag(CInputDest *this, __int16 a2)
{
  char v3; // cl
  bool v4; // zf

  v3 = 0;
  if ( *((_DWORD *)this + 21) == 1 )
  {
    v4 = (*(_BYTE *)(HIBYTE(a2) + *((_QWORD *)this + 9) + 24LL) & (unsigned __int8)a2) == 0;
    return !v4;
  }
  if ( *((_DWORD *)this + 21) == 2 )
  {
    v4 = ((unsigned __int8)a2 & *(_BYTE *)(HIBYTE(a2) + *(_QWORD *)(*((_QWORD *)this + 9) + 40LL) + 16LL)) == 0;
    return !v4;
  }
  return v3;
}
