/*
 * XREFs of ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0041A48
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C00419B4 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01657DC (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C01699BC (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0175FC8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C017BC7C (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C017E46C (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::TestWindowFlag(CInputDest *this, __int16 a2)
{
  char v3; // cl
  bool v4; // zf

  v3 = 0;
  if ( *((_DWORD *)this + 23) == 1 )
  {
    v4 = (*(_BYTE *)(HIBYTE(a2) + *((_QWORD *)this + 10) + 24LL) & (unsigned __int8)a2) == 0;
    return !v4;
  }
  if ( *((_DWORD *)this + 23) == 2 )
  {
    v4 = ((unsigned __int8)a2 & *(_BYTE *)(HIBYTE(a2) + *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) + 16LL)) == 0;
    return !v4;
  }
  return v3;
}
