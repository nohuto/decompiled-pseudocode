/*
 * XREFs of EtwpCheckDebugInfoEqual @ 0x140334B90
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1409020A4 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpCheckDebugInfoEqual(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v5; // rcx

  v2 = 0;
  if ( !a1 )
    return a2 == 0;
  if ( a2 && *(_DWORD *)(a1 + 20) == *(_DWORD *)(a2 + 20) )
  {
    v5 = *(_QWORD *)(a1 + 4) - *(_QWORD *)(a2 + 4);
    if ( !v5 )
      v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)(a2 + 12);
    return v5 == 0;
  }
  return v2;
}
