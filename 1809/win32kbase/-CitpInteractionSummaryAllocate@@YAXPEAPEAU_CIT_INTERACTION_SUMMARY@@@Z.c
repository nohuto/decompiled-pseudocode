/*
 * XREFs of ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00877DC
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003382C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C008785C (-CitAllocZero@@YAPEAX_K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01847F4 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpInteractionSummaryAllocate(struct _CIT_INTERACTION_SUMMARY **a1)
{
  __int16 v1; // bx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int16 v5; // bx

  v1 = dword_1C01D0CEC;
  v3 = (unsigned __int16)dword_1C01D0CEC;
  v4 = CitAllocZero((unsigned __int16)dword_1C01D0CEC);
  if ( v4 )
  {
    v4[1] = v4;
    *v4 = v4;
    v5 = (*((_WORD *)v4 + 42) ^ (4 * v1)) & 0x7FFC;
    *a1 = (struct _CIT_INTERACTION_SUMMARY *)v4;
    *((_WORD *)v4 + 42) ^= v5;
    v4[18] = v4 + 20;
    v4[19] = v3 - 160;
  }
  else
  {
    CitpLogFailureWorker(-1073741670, 0LL, 0xCEEu);
  }
}
