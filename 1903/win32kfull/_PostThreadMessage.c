/*
 * XREFs of _PostThreadMessage @ 0x1C000F6C8
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C000EB88 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C000F5C0 (NtUserPostThreadMessage.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C000FE40 (-EndShutdown@@YAXJ@Z.c)
 *     zzzCancelJournalling @ 0x1C0081580 (zzzCancelJournalling.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     EditionPostInertiaMessage @ 0x1C0207190 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C000F734 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
