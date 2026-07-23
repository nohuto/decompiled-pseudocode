/*
 * XREFs of RtlStateDurationUpdate @ 0x14008FCBC
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x140604FCC (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x14060564C (PopEtEnergyContextSetState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStateDurationUpdate(signed __int64 *a1, unsigned __int8 a2, unsigned int a3)
{
  signed __int64 v3; // rax
  unsigned int v4; // r10d
  unsigned __int64 v5; // r9
  int v8; // ecx

  v3 = *a1;
  v4 = 0;
  v5 = HIDWORD(*a1);
  if ( (unsigned int)HIDWORD(*a1) >> 31 != a2 )
  {
    if ( v3 < 0 )
    {
      v4 = a3 - v3;
      if ( a3 - (_DWORD)v3 == -1 || ~v4 < (v5 & 0x7FFFFFFF) )
        v8 = -1;
      else
        v8 = v4 + (HIDWORD(v3) & 0x7FFFFFFF);
      LODWORD(v5) = v8;
    }
    v3 = __PAIR64__(v5 & 0x7FFFFFFF | (a2 << 31), a3);
  }
  *a1 = v3;
  return v4;
}
