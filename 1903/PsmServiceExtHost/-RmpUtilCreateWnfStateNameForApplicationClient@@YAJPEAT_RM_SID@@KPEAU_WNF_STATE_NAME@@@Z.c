/*
 * XREFs of ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180009ED0
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x180009E40 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 * Callees:
 *     ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180009F68 (-RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z.c)
 */

__int64 __fastcall RmpUtilCreateWnfStateNameForApplicationClient(union _RM_SID *a1, int a2, struct _WNF_STATE_NAME *a3)
{
  int v5; // eax
  PVOID v6; // rdi
  int WnfStateName; // ebx
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  v5 = RmpUtilCreateSecurityDescriptorForApplicationWnf(a1, &P);
  v6 = P;
  WnfStateName = v5;
  if ( v5 >= 0 )
  {
    WnfStateName = NtCreateWnfStateName(a3, 3LL, 0LL, 0LL, 0LL, a2, P);
    if ( WnfStateName >= 0 )
      WnfStateName = 0;
  }
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)WnfStateName;
}
