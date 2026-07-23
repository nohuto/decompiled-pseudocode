/*
 * XREFs of PsQueryJobMemoryUsageByProcess @ 0x14088A87C
 * Callers:
 *     MiLogCommitRequestFailed @ 0x14085CB98 (MiLogCommitRequestFailed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryJobMemoryUsageByProcess(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // r10
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rdx

  v5 = 0LL;
  if ( *(_QWORD *)(a1 + 944) )
  {
    v9 = *(_QWORD **)(a1 + 944);
    v5 = v9[74];
    *a5 = v9[165];
    result = v9[73];
    v7 = v9[122];
  }
  else
  {
    *a5 = 0LL;
    v7 = 0LL;
    result = 0LL;
  }
  *a4 = v7;
  *a2 = result;
  *a3 = v5;
  return result;
}
