/*
 * XREFs of ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01645CC
 * Callers:
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C015E5C4 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C01625DC (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0162728 (-CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C0162ED0 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 *     ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C0167600 (-GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01678F0 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01697A8 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C0169A48 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 *     ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C016A7B0 (-GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C016C8BC (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C016F8B0 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C016FE54 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x1C0170850 (-SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C01721B8 (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0172258 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C01722B0 (-SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z.c)
 *     ?ThreadHasPrimaryCapture@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z @ 0x1C0172DB0 (-ThreadHasPrimaryCapture@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C017386C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C015F3C4 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::FindNodeById(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD **v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  bool v14; // zf
  bool v15; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = (_QWORD **)((char *)this + (a3 != 0 ? 136LL : 120LL));
  v12 = *v11;
  if ( *v11 == v11 )
    return 0LL;
  do
  {
    v13 = v12 - 2;
    if ( !a3 )
      v13 = v12;
    if ( a4 )
      v14 = *((_WORD *)v13 + 17) == a2;
    else
      v14 = *((_WORD *)v13 + 16) == a2;
    if ( v14 )
      break;
    v12 = (_QWORD *)*v12;
  }
  while ( v12 != v11 );
  if ( v12 == v11 )
    return 0LL;
  if ( a4 )
    v15 = *((_WORD *)v13 + 17) == a2;
  else
    v15 = *((_WORD *)v13 + 16) == a2;
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v10);
  return (struct CInputPointerNode *)v13;
}
