/*
 * XREFs of RtlHpHeapManagerStart @ 0x18010C56C
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x180109D7C (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlpHpVaMgrCtxStart @ 0x18010D690 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x18010DFFC (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  qword_180166948 = 0LL;
  result = RtlCSparseBitmapStart(&unk_180166908, 2 * (a4 >> 20), a3, 0LL);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart(&unk_180166950, v6, v7, a4 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
