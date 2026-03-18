/*
 * XREFs of ?GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z @ 0x1C00AD460
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C0133FE8 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0146F48 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall CTouchProcessor::GetInputProcessContext(CTouchProcessor *this, unsigned __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = *(_DWORD *)(PsGetCurrentProcessWin32Process(this) + 56);
  v4 = HMValidateHandleNoSecure(a2, 19);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 480);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 308) & 0x20) != 0 )
      {
        v6 = *(_QWORD *)(v4 + 384);
        if ( v6 )
          return *(unsigned int *)(v6 + 84);
      }
    }
  }
  return v3;
}
