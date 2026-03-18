/*
 * XREFs of PsGetProcessJob @ 0x140123DE0
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1405E28A0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14065978C (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 952);
}
