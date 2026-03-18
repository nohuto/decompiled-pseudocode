/*
 * XREFs of ApiSetEditionPostEventMessage @ 0x1C006A6E0
 * Callers:
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00382F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0039794 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0135F94 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostEventMessage(_OWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _BYTE v20[16]; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v21[11]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x2Au,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionPostEventMessageSupported() >= 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
    v10 = a1[1];
    v21[0] = *a1;
    v11 = a1[2];
    v21[1] = v10;
    v12 = a1[3];
    v21[2] = v11;
    v13 = a1[4];
    v21[3] = v12;
    v14 = a1[5];
    v21[4] = v13;
    v15 = a1[6];
    v21[5] = v14;
    v16 = a1[8];
    v21[6] = v15;
    v21[7] = a1[7];
    v17 = a1[9];
    v21[8] = v16;
    v18 = a1[10];
    v21[9] = v17;
    v21[10] = v18;
    v6 = EditionPostEventMessage(v21, a2, a3, a4, a5);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x2Bu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v6;
}
