/*
 * XREFs of ApiSetGetPTPShellTarget @ 0x1C019F2D4
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016EBBC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C017BC7C (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C017C1F8 (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

_OWORD *__fastcall ApiSetGetPTPShellTarget(_OWORD *a1)
{
  int v2; // edx
  int v3; // edx
  __int64 PTPShellTarget; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _BYTE v12[128]; // [rsp+30h] [rbp-88h] BYREF

  memset(a1, 0, 0x78uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      10,
      358,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = GetPTPShellTarget(v12);
    v5 = *(_OWORD *)(PTPShellTarget + 16);
    *a1 = *(_OWORD *)PTPShellTarget;
    v6 = *(_OWORD *)(PTPShellTarget + 32);
    a1[1] = v5;
    v7 = *(_OWORD *)(PTPShellTarget + 48);
    a1[2] = v6;
    v8 = *(_OWORD *)(PTPShellTarget + 64);
    a1[3] = v7;
    v9 = *(_OWORD *)(PTPShellTarget + 80);
    a1[4] = v8;
    v10 = *(_OWORD *)(PTPShellTarget + 96);
    a1[5] = v9;
    *(_QWORD *)&v9 = *(_QWORD *)(PTPShellTarget + 112);
    a1[6] = v10;
    *((_QWORD *)a1 + 14) = v9;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v3) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      10,
      359,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return a1;
}
