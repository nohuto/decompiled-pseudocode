/*
 * XREFs of ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005D76C
 * Callers:
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180059260 (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x1800598A0 (-RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18005D810 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005F3C0 (-RmpGameModeReleaseCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005D6B4 (-RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18005D8C4 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x1800605A4 (-RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerReleaseAllocation(
        struct _RM_CPU_SET_ALLOCATION *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *i; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  v4 = *((_QWORD *)a1 + 6);
  RmpCpuSetManagerReleaseAllProcessorsFromAllocation((struct _RM_CPU_SET_MANAGER *)v4, a1, a3, a4);
  for ( i = (_QWORD *)((char *)a1 + 80);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseProcessRegistrationEx(
          (struct _RM_CPU_SET_MANAGER *)v4,
          (struct _RM_CPU_SET_PROCESS_REGISTRATION *)(*i - 104LL),
          0) )
  {
    ;
  }
  v7 = (_QWORD *)((char *)a1 + 64);
  v8 = *((_QWORD *)a1 + 8);
  if ( *(struct _RM_CPU_SET_ALLOCATION **)(v8 + 8) != (struct _RM_CPU_SET_ALLOCATION *)((char *)a1 + 64)
    || (v9 = (_QWORD *)*((_QWORD *)a1 + 9), (_QWORD *)*v9 != v7) )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  RmpObjectRelease(a1);
  RmpObjectTableRemoveObject((struct _RM_OBJECT_TABLE *)(v4 + 24), a1);
  RmpObjectRelease(a1);
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_CPU_SET_MANAGER *)v4);
}
