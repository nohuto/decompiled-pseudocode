/*
 * XREFs of ApiSetEditionPostEventMessage @ 0x1C0083FA0
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0042AF4 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0043400 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0083CC4 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0172D00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002EACC (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall ApiSetEditionPostEventMessage(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  unsigned int v8; // r14d
  int v10; // edx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  _BYTE v18[16]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v19[7]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-28h]

  v6 = 0;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      156,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsEditionPostEventMessageSupported() >= 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
    v11 = *(_OWORD *)(a1 + 16);
    v19[0] = *(_OWORD *)a1;
    v12 = *(_OWORD *)(a1 + 32);
    v19[1] = v11;
    v13 = *(_OWORD *)(a1 + 48);
    v19[2] = v12;
    v14 = *(_OWORD *)(a1 + 64);
    v19[3] = v13;
    v15 = *(_OWORD *)(a1 + 80);
    v19[4] = v14;
    v16 = *(_OWORD *)(a1 + 96);
    v19[5] = v15;
    *(_QWORD *)&v15 = *(_QWORD *)(a1 + 112);
    v19[6] = v16;
    v20 = v15;
    v6 = EditionPostEventMessage(v19, v8, a3, a4, a5);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      10,
      157,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v6;
}
