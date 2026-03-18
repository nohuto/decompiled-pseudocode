/*
 * XREFs of BgGetIsColorOverridden @ 0x140991AC8
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14019BC70 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_14042C1B0 )
    return 0;
  *a1 = HIDWORD(qword_14042C1B0);
  return 1;
}
