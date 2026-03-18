/*
 * XREFs of PsGetProcessJob @ 0x140122CD0
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1405E20D0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x140645950 (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 952);
}
