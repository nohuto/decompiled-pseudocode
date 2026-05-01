/*
 * XREFs of ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005CDC8
 * Callers:
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005CD74 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18005D8C4 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 * Callees:
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18005CEA4 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005D950 (-RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_P.c)
 */

void __fastcall RmpCpuSetManagerInvalidateProcessRegistration(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2)
{
  _QWORD *v2; // rax
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v3; // r8
  __int64 v4; // r9
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  v2 = (_QWORD *)((char *)a2 + 88);
  v3 = a2;
  v4 = *((_QWORD *)a2 + 11);
  if ( v4 )
  {
    v6 = *((_QWORD *)a2 + 7);
    if ( *(_QWORD **)(v4 + 8) != v2 || (v7 = (_QWORD *)v2[1], (_QWORD *)*v7 != v2) )
      __fastfail(3u);
    *v7 = v4;
    *(_QWORD *)(v4 + 8) = v7;
    *v2 = 0LL;
    v2[1] = 0LL;
    --*(_DWORD *)(v6 + 60);
    RmpCpuSetManagerMarkProcessDirty(a1, (struct _RM_CPU_SET_PROCESS *)v6);
  }
  if ( *((_QWORD *)v3 + 13) )
    RmpCpuSetManagerRemoveRegistrationFromAllocation(a1, v3);
}
