/*
 * XREFs of sub_1800F57F4 @ 0x1800F57F4
 * Callers:
 *     sub_1800904E4 @ 0x1800904E4 (sub_1800904E4.c)
 *     sub_1800905EC @ 0x1800905EC (sub_1800905EC.c)
 *     sub_180090E54 @ 0x180090E54 (sub_180090E54.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 *     sub_1800F530C @ 0x1800F530C (sub_1800F530C.c)
 *     sub_1800F55A8 @ 0x1800F55A8 (sub_1800F55A8.c)
 *     sub_180113920 @ 0x180113920 (sub_180113920.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800F57F4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 24);
  }
  *a2 = *(_QWORD *)(a1 + 16);
  result = a2;
  a2[1] = v2;
  return result;
}
