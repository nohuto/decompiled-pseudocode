/*
 * XREFs of BgGetIsColorOverridden @ 0x140952A4C
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140191B80 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_140406C50 )
    return 0;
  *a1 = HIDWORD(qword_140406C50);
  return 1;
}
