/*
 * XREFs of PpmPerfResetHistory @ 0x14018A4A8
 * Callers:
 *     PpmPerfRecordUtility @ 0x140102530 (PpmPerfRecordUtility.c)
 *     PpmPerfResetHistoryAll @ 0x140751334 (PpmPerfResetHistoryAll.c)
 *     PpmPerfResizeHistory @ 0x14086C3FC (PpmPerfResizeHistory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfResetHistory(__int64 a1)
{
  unsigned int *v1; // r8
  unsigned __int16 v2; // r9
  unsigned int v3; // edx
  int v4; // eax
  int v5; // r10d
  unsigned int v6; // ecx
  __int64 result; // rax

  v1 = *(unsigned int **)(a1 + 24216);
  if ( v1 )
  {
    v2 = *(_WORD *)(a1 + 24244);
    v3 = *v1;
    v4 = *v1 * v2;
    v1[1] = 0;
    v1[3] = 0;
    v1[2] = v4;
    v5 = *(_DWORD *)(a1 + 24236);
    v6 = 0;
    v1[4] = v3 * v5;
    result = 0LL;
    for ( *(_QWORD *)(v1 + 5) = 0LL; v6 < *v1; *(_WORD *)((char *)&v1[2 * result + 8] + 1) = 0 )
    {
      result = v6++;
      HIWORD(v1[2 * result + 7]) = 0;
      LOWORD(v1[2 * result + 7]) = v2;
      LOBYTE(v1[2 * result + 8]) = v5;
    }
  }
  return result;
}
