/*
 * XREFs of ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0171290
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00A4D40 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0162064 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0031954 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0168E08 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C016EAAC (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessRoutedAwayList(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // ebp
  unsigned __int16 v8; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ebx
  __int64 **v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18[16]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v19[128]; // [rsp+C0h] [rbp-88h] BYREF

  v7 = a3;
  v8 = a2;
  if ( (_DWORD)a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v18, v8);
  while ( LODWORD(v18[0]) )
  {
    if ( v7 )
    {
      if ( a4 )
      {
        v12 = *(_DWORD *)(*((_QWORD *)a4 + 18) + 312LL);
        v13 = (__int64 **)CInputDest::CInputDest((CInputDest *)v19, v18);
        CTouchProcessor::GenerateRoutedReleasedMessage(
          (PDEVICE_OBJECT)this,
          (__int64)a4,
          a5,
          a6,
          -__CFSHR__(v12, 4),
          -__CFSHR__(v12, 5),
          v13);
      }
    }
    v14 = (_QWORD *)CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v19, v8);
    CInputDest::operator=((__int64)v18, v14, v15);
    CInputDest::SetEmpty((CInputDest *)v19, v16, v17);
  }
  CInputDest::SetEmpty((CInputDest *)v18, v10, v11);
}
