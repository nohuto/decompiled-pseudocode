/*
 * XREFs of RtlpHpSegLfhVsFree @ 0x140132FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegFree @ 0x14001D8B4 (RtlpHpSegFree.c)
 */

__int64 __fastcall RtlpHpSegLfhVsFree(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  return RtlpHpSegFree(a1, a2, a4 & 1);
}
