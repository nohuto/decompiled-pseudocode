/*
 * XREFs of sub_1800A516C @ 0x1800A516C
 * Callers:
 *     sub_1800B0924 @ 0x1800B0924 (sub_1800B0924.c)
 *     sub_1800C32B0 @ 0x1800C32B0 (sub_1800C32B0.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 *     sub_1800CB060 @ 0x1800CB060 (sub_1800CB060.c)
 *     sub_1801011A0 @ 0x1801011A0 (sub_1801011A0.c)
 * Callees:
 *     sub_1800F5FFC @ 0x1800F5FFC (sub_1800F5FFC.c)
 */

__int64 __fastcall sub_1800A516C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3[1];
  v6 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a3[1];
  }
  v4 = *(_QWORD *)(a1 + 18648);
  *(_QWORD *)&v6 = *a3;
  *((_QWORD *)&v6 + 1) = v3;
  return sub_1800F5FFC(v4, a2, &v6);
}
