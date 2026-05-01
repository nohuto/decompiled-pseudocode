/*
 * XREFs of ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005BCD0
 * Callers:
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180059260 (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005DCB0 (-RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180045130 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_SCORE@@K@Z @ 0x18005BE14 (-RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATIO.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005BE94 (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@K@Z @ 0x18005C1B0 (-RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005C7E8 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFOR.c)
 *     ?RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005C968 (-RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION.c)
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005D2E4 (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x18005D400 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 */

__int64 __fastcall RmpCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_MANAGER **a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        unsigned int a3,
        struct _RM_CPU_SET_ALLOCATION **a4)
{
  int v4; // eax
  struct _RM_CPU_SET_ALLOCATION *v5; // rdi
  int ObjectsForAllocation; // ebx
  struct _RM_CPU_SET_MANAGER *v10; // rbp
  struct _RM_CPU_SET_ALLOCATION *Heap; // rax
  unsigned int v12; // r8d
  unsigned int v14; // [rsp+28h] [rbp-30h]
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_DWORD *)a2;
  v5 = 0LL;
  P = 0LL;
  if ( (unsigned int)(v4 - 1) > 0x1FF )
  {
    ObjectsForAllocation = -1073741584;
    goto LABEL_11;
  }
  if ( (*((_DWORD *)a2 + 1) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741584;
  v10 = *a1;
  ObjectsForAllocation = RmpCpuSetManagerCheckRequestSatisfiability(*a1, a2, a3);
  if ( ObjectsForAllocation < 0 )
    return (unsigned int)ObjectsForAllocation;
  ObjectsForAllocation = RmpCpuSetManagerRankCpuSets(v10, a2, (struct _RM_CPU_SET_SCORE **)&P, &v15);
  if ( ObjectsForAllocation >= 0 )
  {
    Heap = (struct _RM_CPU_SET_ALLOCATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x110uLL);
    v5 = Heap;
    if ( !Heap )
    {
      ObjectsForAllocation = -1073741801;
      goto LABEL_13;
    }
    RmpCpuSetManagerInitializeAllocation(v10, a2, Heap);
    ObjectsForAllocation = RmpCpuSetManagerAllocateObjectsForAllocation(v5);
    if ( ObjectsForAllocation >= 0 )
    {
      RmpCpuSetManagerAcquireSetsForAllocation(v10, v5, v12, a2, (struct _RM_CPU_SET_SCORE *)P, v14);
      RmpCpuSetManagerInsertAllocation((struct _RM_CPU_SET_CLIENT_CONTEXT *)a1, v5);
      RmpCpuSetManagerApplyAllPolicyChanges(v10);
      RmpCpuSetManagerPublishAllocationState(v5);
      ObjectsForAllocation = 0;
      *a4 = v5;
      goto LABEL_13;
    }
LABEL_11:
    if ( v5 )
      RmpObjectRelease(v5);
  }
LABEL_13:
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)ObjectsForAllocation;
}
