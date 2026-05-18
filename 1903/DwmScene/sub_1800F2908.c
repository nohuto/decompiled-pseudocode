/*
 * XREFs of sub_1800F2908 @ 0x1800F2908
 * Callers:
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1800F2908(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rdx

  v1 = *(unsigned int *)(a1 + 1172);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = (_QWORD *)(a1 + 80);
  v4 = (v2 - *v3) >> 2;
  if ( v1 )
    v4 = ~(v1 - 1) & (v4 + v1 - 1);
  return sub_1800F164C((__int64)v3, v4);
}
