/*
 * XREFs of PspValidateJobChainLimits @ 0x1406064CC
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1406057A0 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 * Callees:
 *     PspValidateJobAssignmentProcessLimits @ 0x140606534 (PspValidateJobAssignmentProcessLimits.c)
 */

__int64 __fastcall PspValidateJobChainLimits(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v6; // rbx
  BOOL v7; // edi
  __int64 result; // rax

  v6 = a1;
  v7 = (a4 & 0x8000) == 0;
  if ( a1 == a2 )
    return 0LL;
  while ( 1 )
  {
    result = PspValidateJobAssignmentProcessLimits(v6, a3, v7);
    if ( (int)result < 0 )
      break;
    v6 = *(_QWORD *)(v6 + 1072);
    if ( v6 == a2 )
      return 0LL;
  }
  return result;
}
