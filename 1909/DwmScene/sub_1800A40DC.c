/*
 * XREFs of sub_1800A40DC @ 0x1800A40DC
 * Callers:
 *     sub_180090B14 @ 0x180090B14 (sub_180090B14.c)
 *     sub_1800A35BC @ 0x1800A35BC (sub_1800A35BC.c)
 *     sub_1800A4298 @ 0x1800A4298 (sub_1800A4298.c)
 *     sub_1800A8F24 @ 0x1800A8F24 (sub_1800A8F24.c)
 *     sub_180112790 @ 0x180112790 (sub_180112790.c)
 * Callees:
 *     sub_1800A629C @ 0x1800A629C (sub_1800A629C.c)
 */

__int64 __fastcall sub_1800A40DC(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  sub_1800A629C(a1 + 16, &v4, a2);
  if ( v4 == *v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v4 + 64);
}
