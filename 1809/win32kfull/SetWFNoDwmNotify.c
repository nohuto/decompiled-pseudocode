/*
 * XREFs of SetWFNoDwmNotify @ 0x1C01C70F8
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00CECE8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 */

char __fastcall SetWFNoDwmNotify(__int64 a1, unsigned __int16 a2)
{
  return SetOrClrWF(1, a1, a2, 0);
}
