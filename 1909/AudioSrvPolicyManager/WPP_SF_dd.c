/*
 * XREFs of WPP_SF_dd @ 0x1800089B8
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180009480 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x1800107CC (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x1800108CC (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x1800109CC (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002326C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002465C (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dd(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, va, 4LL, 0LL);
}
