/*
 * XREFs of MiUnlinkNumaStandbyPage @ 0x1401614D4
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x1400C2998 (MiReplaceNumaStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiSetPfnNodeBlinkHigh @ 0x1400C20A4 (MiSetPfnNodeBlinkHigh.c)
 */

unsigned __int64 __fastcall MiUnlinkNumaStandbyPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned int PfnPriority; // eax
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax

  v1 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
  v2 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
  PfnPriority = MiGetPfnPriority(a1);
  v5 = 3 * (PfnPriority + 8 * ((v4 >> 36) & 3));
  v6 = 1984 * (v4 >> 58);
  result = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8 * ((v4 >> 40) & 0x3FF)) + 16LL);
  v8 = result + 8 * v5;
  if ( v1 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v8 + v6 + 872) = v2;
  }
  else
  {
    v9 = 48 * v1 - 0x58000000000LL;
    *(_WORD *)(v9 + 36) = v2;
    result = MiSetPfnNodeBlinkHigh(v9, v2 >> 16, 0);
  }
  if ( v2 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v8 + v6 + 864) = v1;
  }
  else
  {
    v10 = 48 * v2 - 0x58000000000LL;
    v11 = *(_QWORD *)v10 ^ (v1 << 28);
    *(_BYTE *)(v10 + 39) = v1;
    result = (v1 << 28) ^ v11 & 0xFFFFFFFFFLL;
    *(_QWORD *)v10 = result;
  }
  --*(_QWORD *)(v8 + v6 + 856);
  return result;
}
