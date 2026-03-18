/*
 * XREFs of ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01674CC
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00A4D40 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0166FC0 (-FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01673F0 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016F2EC (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01750E8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175440 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016DABC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoNodeInt(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8

  v4 = (unsigned int)a3;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( (unsigned int)v4 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v8 = *((_QWORD *)a2 + 16) + 496 * v4;
  if ( (*(_DWORD *)v8 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  CInputDest::SetEmpty((CInputDest *)(v8 + 360), v5, v7);
  CInputDest::SetEmpty((CInputDest *)(v8 + 24), v9, v10);
  *(_DWORD *)v8 |= 0x2000u;
  *(_QWORD *)(v8 + 16) = 0LL;
  ++*((_DWORD *)a2 + 13);
}
