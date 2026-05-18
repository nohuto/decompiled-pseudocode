/*
 * XREFs of sub_1800A9414 @ 0x1800A9414
 * Callers:
 *     sub_180090B14 @ 0x180090B14 (sub_180090B14.c)
 *     sub_180090C88 @ 0x180090C88 (sub_180090C88.c)
 *     sub_1800A89C0 @ 0x1800A89C0 (sub_1800A89C0.c)
 *     sub_1800A8F24 @ 0x1800A8F24 (sub_1800A8F24.c)
 *     sub_1800F75B8 @ 0x1800F75B8 (sub_1800F75B8.c)
 *     sub_1800F8490 @ 0x1800F8490 (sub_1800F8490.c)
 *     sub_1800F8CD4 @ 0x1800F8CD4 (sub_1800F8CD4.c)
 *     sub_180112790 @ 0x180112790 (sub_180112790.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A9414(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 448);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 448);
  }
  *a2 = *(_QWORD *)(a1 + 440);
  result = a2;
  a2[1] = v2;
  return result;
}
