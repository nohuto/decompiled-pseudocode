/*
 * XREFs of ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180085AC0
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180087160 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180087360 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180087590 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180088750 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800888D0 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180088A40 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180089110 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 */

__int64 __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rcx
  __int64 result; // rax

  v2 = a1 + 56;
  *(_QWORD *)a1 = &wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  v4 = (_QWORD *)(a1 + 136);
  *(_DWORD *)v2 = 0;
  *(_BYTE *)(v2 + 4) = 0;
  *(_QWORD *)(v2 + 48) = a2;
  *(_BYTE *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 72) = 1LL;
  v4[18] = 0LL;
  v4[19] = 0LL;
  memset_0(v4, 0, 0x90uLL);
  *(_QWORD *)(v2 + 240) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  return result;
}
