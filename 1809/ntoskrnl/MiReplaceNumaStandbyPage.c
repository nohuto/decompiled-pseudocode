/*
 * XREFs of MiReplaceNumaStandbyPage @ 0x140118A5C
 * Callers:
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiSetPfnNodeBlinkHigh @ 0x140118C2C (MiSetPfnNodeBlinkHigh.c)
 *     MiUnlinkNumaStandbyPage @ 0x140152380 (MiUnlinkNumaStandbyPage.c)
 *     MiInsertNumaStandbyPage @ 0x1402C05E4 (MiInsertNumaStandbyPage.c)
 */

__int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned int PfnPriority; // eax
  unsigned __int64 v7; // r11
  __int64 v8; // r9
  unsigned int v9; // r10d
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax

  if ( *(_QWORD *)(a1 + 40) >> 58 == *(_QWORD *)(a2 + 40) >> 58
    && ((*(_QWORD *)(a1 + 40) >> 36) & 3) == ((*(_QWORD *)(a2 + 40) >> 36) & 3) )
  {
    v4 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 3);
    PfnPriority = MiGetPfnPriority(a1);
    v10 = 1984LL * v9
        + *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8 * ((v7 >> 40) & 0x3FF)) + 16LL)
        + 24 * (PfnPriority + 8 * v8);
    v11 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
    *(_BYTE *)(a2 + 39) = *(_BYTE *)(a1 + 39);
    *(_QWORD *)a2 = (v11 << 28) ^ (*(_QWORD *)a2 ^ (v11 << 28)) & 0xFFFFFFFFFLL;
    if ( v11 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v10 + 872) = v5;
    }
    else
    {
      v12 = 48 * v11 - 0x58000000000LL;
      *(_WORD *)(v12 + 36) = v5;
      MiSetPfnNodeBlinkHigh(v12, v5 >> 16, 0LL);
    }
    v13 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 36);
    result = (*(_QWORD *)(a2 + 24) ^ (v13 << 20)) & 0xFFFFF000000000LL;
    *(_QWORD *)(a2 + 24) ^= result;
    if ( v13 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v10 + 864) = v5;
    }
    else
    {
      v15 = 48 * v13 - 0x58000000000LL;
      v16 = *(_QWORD *)v15 ^ (v5 << 28);
      *(_BYTE *)(v15 + 39) = v5;
      result = (v5 << 28) ^ v16 & 0xFFFFFFFFFLL;
      *(_QWORD *)v15 = result;
    }
  }
  else
  {
    MiUnlinkNumaStandbyPage(a1);
    return MiInsertNumaStandbyPage(a2);
  }
  return result;
}
