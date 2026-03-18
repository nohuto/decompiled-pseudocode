/*
 * XREFs of ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C0167480
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C015F0E8 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0173DD8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 */

struct tagPROCESSINFO *__fastcall CTouchProcessor::GetInputProcessContext(CTouchProcessor *this, unsigned __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v4 = HMValidateHandleNoSecure(a2, 19);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 480);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 312) & 8) != 0 )
      {
        v6 = *(_QWORD *)(v4 + 384);
        if ( v6 )
          return *(struct tagPROCESSINFO **)(v6 + 88);
      }
    }
  }
  return (struct tagPROCESSINFO *)CurrentProcessWin32Process;
}
