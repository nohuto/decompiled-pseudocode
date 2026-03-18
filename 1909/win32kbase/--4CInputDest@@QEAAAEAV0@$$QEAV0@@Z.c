/*
 * XREFs of ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0030C04
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C0017438 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00A3C30 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0162CC4 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01635DC (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01639E8 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C016AA38 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016C9CC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016DD5C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C016F0A0 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C016FE54 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C017386C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0173DD8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall CInputDest::operator=(__int64 a1, _QWORD *a2, __int64 a3)
{
  if ( (_QWORD *)a1 != a2 )
  {
    if ( !*(_BYTE *)(a1 + 120) || a2[10] != *(_QWORD *)(a1 + 80) )
      CInputDest::SetEmpty((CInputDest *)a1, (__int64)a2, a3);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(a1 + 32) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(a1 + 48) = *((_OWORD *)a2 + 3);
    *(_OWORD *)(a1 + 64) = *((_OWORD *)a2 + 4);
    *(_OWORD *)(a1 + 80) = *((_OWORD *)a2 + 5);
    *(_OWORD *)(a1 + 96) = *((_OWORD *)a2 + 6);
    *(_QWORD *)(a1 + 112) = a2[14];
    memset(a2, 0, 0x80uLL);
  }
  return a1;
}
