/*
 * XREFs of sub_18010A580 @ 0x18010A580
 * Callers:
 *     sub_18003A9E0 @ 0x18003A9E0 (sub_18003A9E0.c)
 *     sub_1800407A0 @ 0x1800407A0 (sub_1800407A0.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_180045138 @ 0x180045138 (sub_180045138.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 *     sub_18006E5C8 @ 0x18006E5C8 (sub_18006E5C8.c)
 *     RtlValidateHeap @ 0x180070350 (RtlValidateHeap.c)
 *     RtlCompactHeap @ 0x180089480 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_1801016A0 @ 0x1801016A0 (sub_1801016A0.c)
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_18010496C @ 0x18010496C (sub_18010496C.c)
 *     sub_180104DB4 @ 0x180104DB4 (sub_180104DB4.c)
 *     sub_180104FB8 @ 0x180104FB8 (sub_180104FB8.c)
 *     sub_1801052B0 @ 0x1801052B0 (sub_1801052B0.c)
 *     sub_180105454 @ 0x180105454 (sub_180105454.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_180105AFC @ 0x180105AFC (sub_180105AFC.c)
 *     sub_180105CC8 @ 0x180105CC8 (sub_180105CC8.c)
 *     sub_180105E5C @ 0x180105E5C (sub_180105E5C.c)
 *     sub_180105FE0 @ 0x180105FE0 (sub_180105FE0.c)
 *     sub_18010606C @ 0x18010606C (sub_18010606C.c)
 *     sub_180107B44 @ 0x180107B44 (sub_180107B44.c)
 *     sub_18010B150 @ 0x18010B150 (sub_18010B150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010A580(int a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0LL;
  v2 = *(_OWORD **)a2;
  unk_180162950 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_180162950 + 1) = v2[1];
  *((_OWORD *)&unk_180162950 + 2) = v2[2];
  *((_OWORD *)&unk_180162950 + 3) = v2[3];
  *((_OWORD *)&unk_180162950 + 4) = v2[4];
  *((_OWORD *)&unk_180162950 + 5) = v2[5];
  *((_OWORD *)&unk_180162950 + 6) = v2[6];
  *((_OWORD *)&unk_180162950 + 7) = v2[7];
  *((_OWORD *)&unk_180162950 + 8) = v2[8];
  *((_QWORD *)&unk_180162950 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801629F0;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = 9LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  v3[3] = v4[3];
  v7 = v4[4];
  result = 1LL;
  v3[4] = v7;
  return result;
}
