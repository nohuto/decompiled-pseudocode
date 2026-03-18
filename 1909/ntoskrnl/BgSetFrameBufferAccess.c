/*
 * XREFs of BgSetFrameBufferAccess @ 0x14098E008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x14019C3F0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_14042C170 = a1;
  *(_QWORD *)&xmmword_14042C180 = a2;
  *((_QWORD *)&xmmword_14042C180 + 1) = a3;
}
