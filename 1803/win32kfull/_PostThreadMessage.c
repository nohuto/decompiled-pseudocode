/*
 * XREFs of _PostThreadMessage @ 0x1C001B5D0
 * Callers:
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     NtUserPostThreadMessage @ 0x1C001B330 (NtUserPostThreadMessage.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C010DA6C (-EndShutdown@@YAXJ@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C010F758 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     zzzPostInertiaMessage @ 0x1C01FDEA4 (zzzPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C001B65C (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
