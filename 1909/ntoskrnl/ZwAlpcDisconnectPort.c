/*
 * XREFs of ZwAlpcDisconnectPort @ 0x1401C1C90
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDisconnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
