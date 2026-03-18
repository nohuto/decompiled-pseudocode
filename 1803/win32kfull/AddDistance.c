/*
 * XREFs of AddDistance @ 0x1C02C4AFC
 * Callers:
 *     itrp_ALIGNRP @ 0x1C02C5CD0 (itrp_ALIGNRP.c)
 *     itrp_MDRP @ 0x1C02CB250 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C02CBB50 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02CC450 (itrp_MSIRP.c)
 *     itrp_SHP_Common @ 0x1C02CF354 (itrp_SHP_Common.c)
 * Callees:
 *     IndirectlyDependsOn @ 0x1C02C50C0 (IndirectlyDependsOn.c)
 */

void __fastcall AddDistance(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // r11
  int i; // edx
  __int64 v11; // rdx
  __int64 v12; // rax

  if ( a3 >= 0 )
  {
    v6 = a4;
    v7 = *(__int16 *)(*(_QWORD *)(a2 + 64) + 2LL * (*(__int16 *)(a2 + 80) - 1)) + 5;
    if ( a3 < v7 && a4 >= 0 && a4 < v7 && a3 != a4 )
    {
      if ( (unsigned int)IndirectlyDependsOn(a2, (unsigned int)a3, (unsigned int)a4, 100LL) )
      {
        *(_WORD *)(v9 + 12 * v6 + 6) |= 1u;
      }
      else if ( *(_WORD *)(v9 + 12 * v6) == 0xFFFF )
      {
        for ( i = *(__int16 *)(v9 + 12 * v8); i != -1; i = *(__int16 *)(v9 + 12LL * i) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * (int)v8) != *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * i) )
            break;
          LODWORD(v8) = i;
        }
        *(_WORD *)(v9 + 12 * v6) = v8;
        *(_WORD *)(*(_QWORD *)(a2 + 104) + 12 * v6 + 2) = -1;
      }
      if ( a5 == 1 )
      {
        v11 = *(_QWORD *)(a2 + 104);
        if ( *(_WORD *)(v11 + 12LL * (int)v8 + 4) == 0xFFFF && *(__int16 *)(v11 + 12 * v6 + 4) != (_DWORD)v8 )
        {
          v12 = *(__int16 *)(v11 + 12LL * (int)v8);
          if ( (_DWORD)v12 == -1 || *(__int16 *)(v11 + 12 * v12 + 4) != (_DWORD)v8 )
            *(_WORD *)(v11 + 12LL * (int)v8 + 4) = v6;
          else
            *(_WORD *)(v11 + 12 * v6 + 6) |= 1u;
        }
      }
    }
  }
}
