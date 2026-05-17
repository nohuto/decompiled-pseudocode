/*
 * XREFs of sub_18004F690 @ 0x18004F690
 * Callers:
 *     sub_18004EB80 @ 0x18004EB80 (sub_18004EB80.c)
 *     sub_18004EC58 @ 0x18004EC58 (sub_18004EC58.c)
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 *     sub_180050744 @ 0x180050744 (sub_180050744.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 *     sub_180101750 @ 0x180101750 (sub_180101750.c)
 *     sub_180101A30 @ 0x180101A30 (sub_180101A30.c)
 *     sub_180101B5C @ 0x180101B5C (sub_180101B5C.c)
 *     sub_180101C80 @ 0x180101C80 (sub_180101C80.c)
 *     sub_180102028 @ 0x180102028 (sub_180102028.c)
 *     sub_180102300 @ 0x180102300 (sub_180102300.c)
 *     sub_18010ABC4 @ 0x18010ABC4 (sub_18010ABC4.c)
 * Callees:
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_18004CC7C @ 0x18004CC7C (sub_18004CC7C.c)
 */

__int64 __fastcall sub_18004F690(__int64 a1, __int128 *a2)
{
  char *v2; // rax
  unsigned __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = sub_18004CC7C(&v5);
  return sub_180040830(*(_DWORD **)v2, v3, 0x1000000, 0LL, 0LL);
}
