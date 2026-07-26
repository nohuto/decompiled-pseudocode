/*
 * XREFs of NetPacketExtensionPrivateGetData @ 0x1C01081DC
 * Callers:
 *     NetPacketReuseMany @ 0x1C00822A0 (NetPacketReuseMany.c)
 *     NetPacketReuseOne @ 0x1C0082360 (NetPacketReuseOne.c)
 *     NetPacketShallowCopyOne @ 0x1C0082470 (NetPacketShallowCopyOne.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NetPacketExtensionPrivateGetData(__int64 a1, __int64 a2)
{
  return a2 + *(_QWORD *)(a1 + 24);
}
