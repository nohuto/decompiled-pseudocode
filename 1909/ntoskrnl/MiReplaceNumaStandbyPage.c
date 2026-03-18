/*
 * XREFs of MiReplaceNumaStandbyPage @ 0x1400C2998
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiSetPfnNodeBlinkHigh @ 0x1400C20A4 (MiSetPfnNodeBlinkHigh.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401614D4 (MiUnlinkNumaStandbyPage.c)
 *     MiInsertNumaStandbyPage @ 0x1402D9AA0 (MiInsertNumaStandbyPage.c)
 */

__int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned int PfnPriority; // eax
  unsigned __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v4 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
  if ( *(_QWORD *)(a1 + 40) >> 58 == v3 >> 58 && (v3 = (v3 >> 36) & 3, (_DWORD)v4 == (_DWORD)v3) )
  {
    v6 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
    PfnPriority = MiGetPfnPriority(a1);
    v12 = 1984 * v11
        + *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8 * ((v9 >> 40) & 0x3FF)) + 16LL)
        + 24 * (PfnPriority + 8 * v10);
    v13 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
    *(_BYTE *)(a2 + 39) = *(_BYTE *)(a1 + 39);
    *(_QWORD *)a2 = (v13 << 28) ^ (*(_QWORD *)a2 ^ (v13 << 28)) & 0xFFFFFFFFFLL;
    if ( v13 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v12 + 872) = v7;
    }
    else
    {
      v14 = 48 * v13 - 0x58000000000LL;
      *(_WORD *)(v14 + 36) = v7;
      MiSetPfnNodeBlinkHigh(v14, v7 >> 16, 0);
    }
    v15 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 36);
    result = (*(_QWORD *)(a2 + 24) ^ (v15 << 20)) & 0xFFFFF000000000LL;
    *(_QWORD *)(a2 + 24) ^= result;
    if ( v15 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v12 + 864) = v7;
    }
    else
    {
      v17 = 48 * v15 - 0x58000000000LL;
      v18 = *(_QWORD *)v17 ^ (v7 << 28);
      *(_BYTE *)(v17 + 39) = v7;
      result = (v7 << 28) ^ v18 & 0xFFFFFFFFFLL;
      *(_QWORD *)v17 = result;
    }
  }
  else
  {
    MiUnlinkNumaStandbyPage(a1, a2, v3, v4);
    return MiInsertNumaStandbyPage(a2);
  }
  return result;
}
