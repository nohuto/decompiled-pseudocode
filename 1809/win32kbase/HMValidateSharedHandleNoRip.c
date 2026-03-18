/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C006A084
 * Callers:
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0025C6C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0038C50 (TransformRectBetweenCoordinateSpaces.c)
 *     ValidateHmonitorNoRip @ 0x1C006A070 (ValidateHmonitorNoRip.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C007003C (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0071AD0 (GuessMonitorOverrideForCoordinateConversions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateSharedHandleNoRip(int a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r14
  char *v3; // rdi
  __int64 v4; // rsi

  v1 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v2 = gpKernelHandleTable;
    v3 = (char *)qword_1C01CBA58 + (unsigned int)(unsigned __int16)a1 * dword_1C01CBA60;
    v4 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C01CBA60) >> 5);
    if ( (HIWORD(a1) == *((_WORD *)v3 + 13)
       || HIWORD(a1) == 0xFFFF
       || !HIWORD(a1) && PsGetCurrentProcessWow64Process((unsigned __int16)a1))
      && (v3[25] & 1) == 0
      && v3[24] == 12 )
    {
      return v2[v4];
    }
  }
  return v1;
}
