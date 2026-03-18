/*
 * XREFs of ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00ABC4C
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00A552C (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoundToNearestScaleFactor(__int64 a1, const struct _DPI_SCALE_FACTOR_COLLECTION *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r10

  v3 = 0;
  v5 = a1;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)a2 + 2);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL);
    WdLogEvent5_WdAssertion(v8);
    v7 = *((_QWORD *)a2 + 2);
    if ( !v7 )
      return 0LL;
  }
  if ( *((_DWORD *)a2 + 2) != 1 )
  {
    do
    {
      v9 = v3 + 1;
      if ( v5 <= (unsigned int)(*(_DWORD *)(v7 + 4LL * v3) + *(_DWORD *)(v7 + 4 * v9)) >> 1 )
        break;
      ++v3;
    }
    while ( (unsigned int)v9 < *((_DWORD *)a2 + 2) - 1 );
  }
  return *(unsigned int *)(v7 + 4LL * v3);
}
