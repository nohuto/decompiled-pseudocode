/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01508C8
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01507E8 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01F96A0 (_RegisterErrorReportingDialog.c)
 * Callees:
 *     DwmAsyncSignalGhost @ 0x1C0150900 (DwmAsyncSignalGhost.c)
 */

_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1, __int64 a2, __int64 a3)
{
  void *v3; // rax

  v3 = (void *)ReferenceDwmApiPort(a1, a2, a3);
  return (int)DwmAsyncSignalGhost(v3) >= 0;
}
