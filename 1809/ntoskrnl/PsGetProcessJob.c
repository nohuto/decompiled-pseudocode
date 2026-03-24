/*
 * XREFs of PsGetProcessJob @ 0x1401281F0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140613B5C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140635340 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 944);
}
