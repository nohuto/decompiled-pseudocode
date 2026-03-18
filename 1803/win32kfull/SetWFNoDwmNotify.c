/*
 * XREFs of SetWFNoDwmNotify @ 0x1C01A4F68
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C005F53C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

char __fastcall SetWFNoDwmNotify(__int64 a1, __int16 a2)
{
  return SetOrClrWF(1, a1, a2, 0);
}
