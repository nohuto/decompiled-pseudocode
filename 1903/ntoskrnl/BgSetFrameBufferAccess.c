/*
 * XREFs of BgSetFrameBufferAccess @ 0x14098E008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x14019BC70 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_14042C190 = a1;
  *(_QWORD *)&xmmword_14042C1A0 = a2;
  *((_QWORD *)&xmmword_14042C1A0 + 1) = a3;
}
