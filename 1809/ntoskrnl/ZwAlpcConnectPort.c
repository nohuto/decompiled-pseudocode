/*
 * XREFs of ZwAlpcConnectPort @ 0x1401B9050
 * Callers:
 *     DbgkRegisterErrorPort @ 0x1407024C0 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
