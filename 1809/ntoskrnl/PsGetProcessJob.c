/*
 * XREFs of PsGetProcessJob @ 0x1401282C0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140614B5C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140636360 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 944);
}
