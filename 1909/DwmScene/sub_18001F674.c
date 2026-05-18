/*
 * XREFs of sub_18001F674 @ 0x18001F674
 * Callers:
 *     sub_180020C34 @ 0x180020C34 (sub_180020C34.c)
 *     sub_180020CE8 @ 0x180020CE8 (sub_180020CE8.c)
 *     sub_180020D9C @ 0x180020D9C (sub_180020D9C.c)
 *     sub_180020E50 @ 0x180020E50 (sub_180020E50.c)
 *     sub_180020F04 @ 0x180020F04 (sub_180020F04.c)
 *     sub_180020FB8 @ 0x180020FB8 (sub_180020FB8.c)
 *     sub_18002106C @ 0x18002106C (sub_18002106C.c)
 *     sub_180021120 @ 0x180021120 (sub_180021120.c)
 *     sub_1800211D4 @ 0x1800211D4 (sub_1800211D4.c)
 *     sub_180021288 @ 0x180021288 (sub_180021288.c)
 *     sub_18002133C @ 0x18002133C (sub_18002133C.c)
 *     sub_1800213F0 @ 0x1800213F0 (sub_1800213F0.c)
 *     sub_1800214A4 @ 0x1800214A4 (sub_1800214A4.c)
 *     sub_180021558 @ 0x180021558 (sub_180021558.c)
 *     sub_18002160C @ 0x18002160C (sub_18002160C.c)
 *     sub_1800216C0 @ 0x1800216C0 (sub_1800216C0.c)
 *     sub_180021774 @ 0x180021774 (sub_180021774.c)
 *     sub_1800B5F58 @ 0x1800B5F58 (sub_1800B5F58.c)
 *     sub_1800B600C @ 0x1800B600C (sub_1800B600C.c)
 *     sub_1800B60C0 @ 0x1800B60C0 (sub_1800B60C0.c)
 *     sub_1800B6174 @ 0x1800B6174 (sub_1800B6174.c)
 *     sub_1800B6228 @ 0x1800B6228 (sub_1800B6228.c)
 *     sub_1800B62DC @ 0x1800B62DC (sub_1800B62DC.c)
 *     sub_1800B6390 @ 0x1800B6390 (sub_1800B6390.c)
 *     sub_1800B6444 @ 0x1800B6444 (sub_1800B6444.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001F674(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v2 )
  {
    v3 = a2[1];
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v3 = a2[1];
    }
    *a1 = v2;
    a1[1] = v3;
  }
  return a1;
}
