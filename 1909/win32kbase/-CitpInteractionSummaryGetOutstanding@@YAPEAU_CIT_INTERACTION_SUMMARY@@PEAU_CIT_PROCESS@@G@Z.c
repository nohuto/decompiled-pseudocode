/*
 * XREFs of ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x1C01C7330
 * Callers:
 *     CitProcessCallout @ 0x1C003625C (CitProcessCallout.c)
 * Callees:
 *     <none>
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryGetOutstanding(struct _CIT_PROCESS *a1)
{
  __int16 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY *result; // rax

  if ( (qword_1C02157F4 & 1) == 0 )
    return 0LL;
  if ( (qword_1C02157F4 & 2) != 0 )
  {
    v2 = *((_WORD *)a1 + 13);
    if ( !v2 )
      return 0LL;
    v3 = *((unsigned __int16 *)a1 + 12);
    if ( (unsigned int)v3 >= *((_DWORD *)qword_1C0215810 + 14) )
      return 0LL;
    v4 = *(_QWORD *)qword_1C0215810 + 96 * v3;
    if ( *(_WORD *)(v4 + 32) != v2 || *(_QWORD *)(v4 + 56) != *((_QWORD *)a1 + 6) )
      return 0LL;
    result = *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 88);
  }
  else
  {
    result = (struct _CIT_INTERACTION_SUMMARY *)*((_QWORD *)a1 + 2);
  }
  if ( result && *(struct _CIT_INTERACTION_SUMMARY **)result != result )
  {
    *((_WORD *)result + 51) |= 0x10u;
    return result;
  }
  return 0LL;
}
