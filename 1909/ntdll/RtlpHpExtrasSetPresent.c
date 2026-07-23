/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x180046E04
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180045D7C (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocMove @ 0x180045F38 (RtlpHpReallocMove.c)
 *     RtlpHpExtrasAppend @ 0x18010A844 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlpHpSegSetExtraPresent @ 0x180046D7C (RtlpHpSegSetExtraPresent.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180051688 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800849D8 (RtlpHpLargeAllocSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // ebx
  __int64 v8; // rax

  v3 = 0;
  if ( !(_WORD)a2 )
  {
    v8 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_180166A68) >> 20));
    if ( !v8 )
      return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
    v3 = v8 - 1;
  }
  if ( v3 != 2 )
    return RtlpHpSegSetExtraPresent(a1 + 192LL * v3 + 256, a2);
  return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
}
