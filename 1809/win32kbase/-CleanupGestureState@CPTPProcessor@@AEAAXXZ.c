/*
 * XREFs of ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C014A6F8
 * Callers:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C014A3FC (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0138A2C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 */

void __fastcall CPTPProcessor::CleanupGestureState(CPTPProcessor *this)
{
  struct CPointerInputFrame *v2; // rdx

  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 344));
  *((_DWORD *)this + 132) = 0;
  *((_DWORD *)this + 133) &= ~1u;
  v2 = (struct CPointerInputFrame *)*((_QWORD *)this + 69);
  if ( v2 )
  {
    CTouchProcessor::FreeFrame((struct _KTHREAD **)this, v2, 1);
    *((_QWORD *)this + 69) = 0LL;
  }
}
