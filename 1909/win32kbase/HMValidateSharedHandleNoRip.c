/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C00A56B8
 * Callers:
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0029D6C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C004C2F0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C004EDF0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0080770 (GuessMonitorOverrideForCoordinateConversions.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0143444 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall HMValidateSharedHandleNoRip(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = (char *)qword_1C0210758 + (unsigned int)(unsigned __int16)a1 * dword_1C0210760;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)&v11,
      a2,
      a3);
    v7 = gpKernelHandleTable;
    v8 = a1 >> 16;
    v9 = 3LL * (unsigned int)((v5 - (char *)qword_1C0210758) >> 5);
    if ( ((_WORD)v8 == *((_WORD *)v5 + 13) || (_WORD)v8 == 0xFFFF || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v6))
      && (v5[25] & 1) == 0
      && v5[24] == 12 )
    {
      return v7[v9];
    }
  }
  return v4;
}
