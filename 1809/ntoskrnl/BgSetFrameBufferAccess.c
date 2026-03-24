/*
 * XREFs of BgSetFrameBufferAccess @ 0x14094E008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x140191A40 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140405C30 = a1;
  *(_QWORD *)&xmmword_140405C40 = a2;
  *((_QWORD *)&xmmword_140405C40 + 1) = a3;
}
