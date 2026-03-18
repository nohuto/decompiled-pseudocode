/*
 * XREFs of _PostThreadMessage @ 0x1C000E5C8
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C000BA40 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C000E4C0 (NtUserPostThreadMessage.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C000ED40 (-EndShutdown@@YAXJ@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00451E0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 *     EditionPostInertiaMessage @ 0x1C0206EE0 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C000E634 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
