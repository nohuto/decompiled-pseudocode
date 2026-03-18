/*
 * XREFs of PspIoMiniPacketCallbackRoutine @ 0x1406CAF90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspIoMiniPacketCallbackRoutine(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  return ObfDereferenceObject(a2);
}
