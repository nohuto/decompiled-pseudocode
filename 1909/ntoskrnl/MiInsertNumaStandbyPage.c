/*
 * XREFs of MiInsertNumaStandbyPage @ 0x1402D9AA0
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x1400C2998 (MiReplaceNumaStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiSetPfnNodeBlinkHigh @ 0x1400C20A4 (MiSetPfnNodeBlinkHigh.c)
 */

unsigned __int64 __fastcall MiInsertNumaStandbyPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int PfnPriority; // eax
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 result; // rax

  v1 = (a1 + 0x58000000000LL) / 48;
  PfnPriority = MiGetPfnPriority(a1);
  v6 = 1984 * (v5 >> 58);
  v7 = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8 * ((v5 >> 40) & 0x3FF)) + 16LL)
     + 24 * (PfnPriority + 8 * ((v5 >> 36) & 3));
  ++*(_QWORD *)(v7 + v6 + 856);
  v8 = *(_QWORD *)(v7 + v6 + 872);
  if ( v8 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v7 + v6 + 864) = v1;
  }
  else
  {
    v9 = v4 + 48 * v8;
    v10 = (*(_QWORD *)v9 ^ (v1 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v9 + 39) = v1;
    *(_QWORD *)v9 = (v1 << 28) ^ v10;
  }
  *(_WORD *)(v3 + 36) = v8;
  *(_QWORD *)v3 |= 0xFFFFFFF000000000uLL;
  *(_BYTE *)(v3 + 39) = -1;
  result = MiSetPfnNodeBlinkHigh(v3, v8 >> 16, 1);
  *(_QWORD *)(v7 + v6 + 872) = v1;
  return result;
}
