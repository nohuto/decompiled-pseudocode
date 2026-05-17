/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x18005B340
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlpHpExtrasAppend @ 0x18010C704 (RtlpHpExtrasAppend.c)
 *     RtlpHpReallocMove @ 0x18010CA98 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpSegSetExtraPresent @ 0x18005B3D8 (RtlpHpSegSetExtraPresent.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800669A4 (RtlpHpLargeAllocSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  __int64 v8; // rax

  v3 = 0;
  if ( !(_WORD)a2 )
  {
    v8 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((unsigned __int64)(a2 - qword_180166948) >> 20));
    if ( !v8 )
      return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
    v3 = v8 - 1;
  }
  if ( v3 != 2 )
    return RtlpHpSegSetExtraPresent(a1 + 192LL * v3 + 256, a2);
  return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
}
