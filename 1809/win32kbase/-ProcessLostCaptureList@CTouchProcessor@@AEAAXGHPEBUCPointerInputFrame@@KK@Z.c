/*
 * XREFs of ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0141EC8
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0134BD0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0134CE0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01393E0 (-GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0140034 (-PopLostCaptureTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessLostCaptureList(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // ebp
  unsigned __int16 v8; // r14
  int v10; // ebx
  CInputDest *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // [rsp+20h] [rbp-1A8h]
  __int64 v14; // [rsp+28h] [rbp-1A0h]
  _OWORD v15[12]; // [rsp+40h] [rbp-188h] BYREF
  _OWORD v16[12]; // [rsp+100h] [rbp-C8h] BYREF

  v7 = a3;
  v8 = a2;
  if ( (_DWORD)a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CTouchProcessor::PopLostCaptureTarget(this, v15, v8);
  while ( LODWORD(v15[0]) )
  {
    if ( v7 )
    {
      if ( a4 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)a4 + 15) + 308LL);
        v11 = CInputDest::CInputDest((CInputDest *)v16, (const struct CInputDest *)v15);
        LODWORD(v14) = -__CFSHR__(v10, 7);
        LODWORD(v13) = -__CFSHR__(v10, 6);
        CTouchProcessor::GenerateCaptureEndMessage((__int64)this, (__int64)a4, a5, a6, v13, v14, v11);
      }
    }
    v12 = CTouchProcessor::PopLostCaptureTarget(this, v16, v8);
    CInputDest::operator=((__int64)v15, v12);
    CInputDest::SetEmpty((CInputDest *)v16);
  }
  CInputDest::SetEmpty((CInputDest *)v15);
}
