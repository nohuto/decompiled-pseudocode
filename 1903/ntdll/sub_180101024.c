/*
 * XREFs of sub_180101024 @ 0x180101024
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_18003F9C0 @ 0x18003F9C0 (sub_18003F9C0.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_1800445F8 @ 0x1800445F8 (sub_1800445F8.c)
 *     sub_18004622C @ 0x18004622C (sub_18004622C.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_180047ED4 @ 0x180047ED4 (sub_180047ED4.c)
 *     sub_180048A40 @ 0x180048A40 (sub_180048A40.c)
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18006E6A0 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 *     sub_1800EFD8C @ 0x1800EFD8C (sub_1800EFD8C.c)
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 *     sub_1800F3190 @ 0x1800F3190 (sub_1800F3190.c)
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_180104FB8 @ 0x180104FB8 (sub_180104FB8.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_180106954 @ 0x180106954 (sub_180106954.c)
 * Callees:
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

_UNKNOWN **__fastcall sub_180101024(unsigned __int64 a1, unsigned __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  int v6; // esi
  char v7; // al
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int16 v12; // di
  unsigned __int16 v13; // bx
  unsigned __int64 v14; // rax
  int v15; // ecx
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+48h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0LL;
  v5 = 0;
  if ( !byte_180165408 )
  {
    v6 = *(_DWORD *)(a1 + 124);
    if ( (v6 & *(_DWORD *)(a2 + 8)) != 0 )
      goto LABEL_34;
    v5 = 10;
    if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
      && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
    {
      goto LABEL_34;
    }
    v5 = 1;
    if ( *(_BYTE *)(a2 + 14) )
    {
      v4 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - *(unsigned __int8 *)(a2 + 14)) << 16);
      v20 = v4;
    }
    else
    {
      v4 = a1;
      v20 = a1;
    }
    if ( *(_DWORD *)(v4 + 16) != -1114130 )
      goto LABEL_34;
    v7 = *(_BYTE *)(a2 + 15);
    if ( v7 != 4 )
    {
      v5 = 2;
      if ( a2 < *(_QWORD *)(v4 + 48) || a2 >= *(_QWORD *)(v4 + 72) || *(_QWORD *)(v4 + 40) != a1 )
        goto LABEL_34;
    }
    v5 = 3;
    if ( v7 == 3 )
    {
      v8 = a2 + 16;
      v9 = *(_QWORD *)(a2 + 48);
      if ( (v9 & 0xFFF) != 0 )
        goto LABEL_34;
      if ( v9 < *(_QWORD *)(v4 + 48) )
        goto LABEL_34;
      if ( *(_QWORD *)(a2 + 56) + v9 > *(_QWORD *)(v4 + 72) )
        goto LABEL_34;
      v5 = 4;
      v10 = **(_QWORD **)(a2 + 24);
      if ( v10 != *(_QWORD *)(*(_QWORD *)v8 + 8LL) )
        goto LABEL_34;
      if ( v10 != v8 )
        goto LABEL_34;
      v5 = 5;
      v11 = **(_QWORD **)(a2 + 40);
      if ( v11 != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) || v11 != a2 + 32 )
        goto LABEL_34;
      v12 = *(_WORD *)(a1 + 140);
    }
    else
    {
      v5 = 6;
      v12 = *(_WORD *)(a1 + 140);
      if ( (v12 ^ *(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12)) != *(_WORD *)(a2 + 8) )
        goto LABEL_34;
    }
    v5 = 7;
    v13 = *(_WORD *)(a2 + 12);
    if ( v12 == v13 )
      goto LABEL_30;
    v14 = a2 - 16 * (v12 ^ (unsigned __int64)v13);
    if ( v6 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      LOWORD(v21) = v15;
      if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
        v21 = v15 ^ *(_DWORD *)(a1 + 136);
      v16 = v21;
      v12 = *(_WORD *)(a1 + 140);
      v13 = *(_WORD *)(a2 + 12);
      v4 = v20;
      v5 = 7;
    }
    else
    {
      v16 = *(_WORD *)(v14 + 8);
    }
    if ( v16 == (v12 ^ v13) )
    {
LABEL_30:
      v5 = 8;
      if ( (*(_BYTE *)(a2 + 10) & 1) != 0
        || (v17 = **(_QWORD **)(a2 + 24), v17 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v17 == a2 + 16 )
      {
        v5 = 9;
      }
    }
LABEL_34:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
      *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v5 > 5 )
    {
      if ( v5 <= 7 )
        goto LABEL_48;
      if ( v5 == 8 )
      {
        LODWORD(v18) = 8;
        v19 = 13;
        return (_UNKNOWN **)sub_18010A694(v19, a1, a2, v18, 0LL, 0LL);
      }
      if ( v5 == 10 )
        goto LABEL_48;
      v19 = 2;
    }
    else
    {
      if ( v5 < 4 )
      {
        if ( v5 > 1 )
        {
          if ( v5 == 2 )
          {
            v18 = *(_QWORD *)(v4 + 40);
            v19 = 12;
          }
          else
          {
            LODWORD(v18) = 3;
            v19 = 0;
          }
          return (_UNKNOWN **)sub_18010A694(v19, a1, a2, v18, 0LL, 0LL);
        }
LABEL_48:
        v19 = 3;
        goto LABEL_49;
      }
      v19 = 14;
    }
LABEL_49:
    LODWORD(v18) = v5;
    return (_UNKNOWN **)sub_18010A694(v19, a1, a2, v18, 0LL, 0LL);
  }
  return result;
}
