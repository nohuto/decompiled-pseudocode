/*
 * XREFs of ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C017A2DC
 * Callers:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C0179E08 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C017B000 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0166D8C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 */

void __fastcall CPTPProcessor::CleanupGestureState(CPTPProcessor *this, __int64 a2, __int64 a3)
{
  struct CPointerInputFrame *v4; // rdx

  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 424), a2, a3);
  *((_DWORD *)this + 138) = 0;
  *((_DWORD *)this + 139) &= ~1u;
  v4 = (struct CPointerInputFrame *)*((_QWORD *)this + 72);
  if ( v4 )
  {
    CTouchProcessor::FreeFrame((struct _KTHREAD **)this, v4, 1);
    *((_QWORD *)this + 72) = 0LL;
  }
}
