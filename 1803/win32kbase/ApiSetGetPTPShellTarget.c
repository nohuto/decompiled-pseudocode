/*
 * XREFs of ApiSetGetPTPShellTarget @ 0x1C01408AC
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01184C4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01261EC (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C01267B0 (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

_OWORD *__fastcall ApiSetGetPTPShellTarget(_OWORD *a1)
{
  _OWORD *PTPShellTarget; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _BYTE v13[176]; // [rsp+30h] [rbp-B8h] BYREF

  memset(a1, 0, 0xB0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xCAu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)GetPTPShellTarget(v13);
    v3 = PTPShellTarget[1];
    *a1 = *PTPShellTarget;
    v4 = PTPShellTarget[2];
    a1[1] = v3;
    v5 = PTPShellTarget[3];
    a1[2] = v4;
    v6 = PTPShellTarget[4];
    a1[3] = v5;
    v7 = PTPShellTarget[5];
    a1[4] = v6;
    v8 = PTPShellTarget[6];
    a1[5] = v7;
    v9 = PTPShellTarget[8];
    a1[6] = v8;
    a1[7] = PTPShellTarget[7];
    v10 = PTPShellTarget[9];
    a1[8] = v9;
    v11 = PTPShellTarget[10];
    a1[9] = v10;
    a1[10] = v11;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xCBu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return a1;
}
