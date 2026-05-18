/*
 * XREFs of sub_180077ACC @ 0x180077ACC
 * Callers:
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_1800794F0 @ 0x1800794F0 (sub_1800794F0.c)
 *     sub_1800797D4 @ 0x1800797D4 (sub_1800797D4.c)
 *     sub_18007A28C @ 0x18007A28C (sub_18007A28C.c)
 *     sub_18007A5B0 @ 0x18007A5B0 (sub_18007A5B0.c)
 *     sub_18007B00C @ 0x18007B00C (sub_18007B00C.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_18007CB28 @ 0x18007CB28 (sub_18007CB28.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 *     sub_1800B4494 @ 0x1800B4494 (sub_1800B4494.c)
 *     sub_1800C2770 @ 0x1800C2770 (sub_1800C2770.c)
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180077ACC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 976);
  }
  *a2 = *(_QWORD *)(a1 + 968);
  result = a2;
  a2[1] = v2;
  return result;
}
