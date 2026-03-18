/*
 * XREFs of ZwAlpcConnectPort @ 0x1401C1B30
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
