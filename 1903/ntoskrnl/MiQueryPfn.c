/*
 * XREFs of MiQueryPfn @ 0x1401025E0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 */

char __fastcall MiQueryPfn(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int PfnPriority; // eax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char result; // al

  v2 = 48 * a1 - 0x58000000000LL;
  if ( (*(_BYTE *)(v2 + 35) & 0x40) != 0 )
    *(_QWORD *)(a2 + 8) |= 0x80000000uLL;
  PfnPriority = MiGetPfnPriority(v2);
  v6 = v5 ^ ((unsigned int)v5 ^ (PfnPriority << 24)) & 0x7000000;
  *(_QWORD *)(v4 + 8) = v6;
  LOBYTE(PfnPriority) = *(_BYTE *)(v7 + 34);
  v8 = 0LL;
  result = PfnPriority & 7;
  if ( result == 3 )
    v8 = 0x8000000LL;
  *(_QWORD *)(v4 + 8) = v6 & 0xFFFFFFFFF77FFFFFuLL | v8 & 0xFFFFFFFFFF7FFFFFuLL | 0x400000;
  return result;
}
