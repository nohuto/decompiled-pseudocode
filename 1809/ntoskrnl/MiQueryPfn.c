/*
 * XREFs of MiQueryPfn @ 0x140097330
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiQueryPfn(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  unsigned __int64 result; // rax

  v3 = 48 * a1 - 0x58000000000LL;
  v4 = *(_QWORD *)(a2 + 8);
  LOBYTE(v5) = *(_BYTE *)(v3 + 35);
  if ( (v5 & 0x40) != 0 )
  {
    v4 |= 0x80000000uLL;
    *(_QWORD *)(a2 + 8) = v4;
    LOBYTE(v5) = *(_BYTE *)(v3 + 35);
  }
  if ( (v5 & 8) != 0 )
    v5 = 5;
  else
    v5 = (unsigned __int8)v5;
  v6 = v4 ^ ((unsigned int)v4 ^ (v5 << 24)) & 0x7000000;
  *(_QWORD *)(a2 + 8) = v6;
  v7 = *(_BYTE *)(v3 + 34);
  v8 = 0LL;
  if ( (v7 & 7) == 3 )
    v8 = 0x8000000LL;
  result = v6 & 0xFFFFFFFFF77FFFFFuLL;
  *(_QWORD *)(a2 + 8) = result | v8 & 0xFFFFFFFFFF7FFFFFuLL | 0x400000;
  return result;
}
