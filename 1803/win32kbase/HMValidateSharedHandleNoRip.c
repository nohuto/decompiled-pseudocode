/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C005C4B4
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00383C8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00570B0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C005C320 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ValidateHmonitorNoRip @ 0x1C005C4A0 (ValidateHmonitorNoRip.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C00628D0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     GetBoundMonitorForType @ 0x1C012E2C0 (GetBoundMonitorForType.c)
 *     UserProcessInputIsolationPolicy @ 0x1C0132670 (UserProcessInputIsolationPolicy.c)
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
    v3 = (char *)qword_1C01A0E28 + (unsigned int)(unsigned __int16)a1 * dword_1C01A0E30;
    v4 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C01A0E30) >> 5);
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
