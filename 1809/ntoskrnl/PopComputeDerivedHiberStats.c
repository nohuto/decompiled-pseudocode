/*
 * XREFs of PopComputeDerivedHiberStats @ 0x1406DEC7C
 * Callers:
 *     PopDiagTracePerfTrackData @ 0x1406DE790 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x1406DE8B0 (PopDiagTraceHiberStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopComputeDerivedHiberStats(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 result; // rax

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = 0;
  v6 = a1[54] + a1[55];
  v7 = *a1;
  v8 = (1000 * a2 * v6) >> 20;
  if ( v7 )
    v9 = v8 / v7;
  else
    LODWORD(v9) = 0;
  *(_DWORD *)a3 = v9;
  v10 = a1[4];
  if ( v10 )
    v11 = v8 / v10;
  else
    LODWORD(v11) = 0;
  *(_DWORD *)(a3 + 8) = v11;
  v12 = a1[18];
  if ( v12 || a1[38] )
    v13 = v8 / (v12 + a1[38]);
  else
    LODWORD(v13) = 0;
  *(_DWORD *)(a3 + 4) = v13;
  result = a1[19];
  if ( result || a1[37] )
  {
    result = v8 / (result + a1[37]);
    v5 = result;
  }
  *(_DWORD *)(a3 + 12) = v5;
  return result;
}
