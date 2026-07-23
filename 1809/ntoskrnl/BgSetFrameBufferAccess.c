/*
 * XREFs of BgSetFrameBufferAccess @ 0x14094F008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EBE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x140191B80 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140406C30 = a1;
  *(_QWORD *)&xmmword_140406C40 = a2;
  *((_QWORD *)&xmmword_140406C40 + 1) = a3;
}
