/*
 * XREFs of ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C003254C
 * Callers:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0032588 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C00705AC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 * Callees:
 *     ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C003219C (-Now@EventTime@CMouseProcessor@@SA-AU12@XZ.c)
 */

void __fastcall CMouseProcessor::MouseMoveTimes::EnsureMoveTime(CMouseProcessor::MouseMoveTimes *this)
{
  LARGE_INTEGER v1[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 1) )
  {
    *(_QWORD *)this = 0LL;
LABEL_3:
    *(_OWORD *)this = *(_OWORD *)&CMouseProcessor::EventTime::Now(v1)->LowPart;
    return;
  }
  if ( !*(_QWORD *)this )
    goto LABEL_3;
}
