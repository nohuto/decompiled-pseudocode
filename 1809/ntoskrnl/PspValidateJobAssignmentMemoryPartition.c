/*
 * XREFs of PspValidateJobAssignmentMemoryPartition @ 0x1406065DC
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1406057A0 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspValidateJobAssignmentMemoryPartition(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx

  if ( a4 == 4 )
  {
    if ( *(_QWORD *)(a1 + 1056) == a1 + 1056
      && !*(_QWORD *)(a1 + 1544)
      && *(_QWORD *)(a3 + 944)
      && *(_QWORD *)(*(_QWORD *)(a3 + 944) + 1544LL)
      && *(_QWORD *)(*(_QWORD *)(a3 + 944) + 1544LL) != -1LL
      && *(_QWORD *)(*(_QWORD *)(a3 + 944) + 1544LL) != *(_QWORD *)(a3 + 2088) )
    {
      return 0;
    }
LABEL_3:
    v5 = *(_QWORD *)(a1 + 1544);
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
      && *(_QWORD *)(a3 + 2088) != v5
      && a3 != *(_QWORD *)(v5 + 104) )
    {
      return 0;
    }
    return ((a4 - 4) & 0xFFFFFFFC) != 0 || a4 == 6 || !*(_QWORD *)(a1 + 1544) || !*(_QWORD *)(a2 + 1544);
  }
  if ( (unsigned int)(a4 - 6) > 1 )
    goto LABEL_3;
  return ((a4 - 4) & 0xFFFFFFFC) != 0 || a4 == 6 || !*(_QWORD *)(a1 + 1544) || !*(_QWORD *)(a2 + 1544);
}
