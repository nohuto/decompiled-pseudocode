/*
 * XREFs of ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180069D60
 * Callers:
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180069D0C (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006A870 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C754 (CempListEntryIsNull.c)
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180069E44 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006A8FC (-RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_P.c)
 */

void __fastcall RmpCpuSetManagerInvalidateProcessRegistration(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  __int64 v4; // r9
  struct _RM_CPU_SET_MANAGER *v5; // r10
  __int64 v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rax
  struct _RM_CPU_SET_MANAGER *v9; // rcx
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v10; // r9

  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a2 + 11) )
  {
    v6 = *v3;
    v7 = *(_QWORD *)(v2 + 56);
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v8 = (_QWORD *)v3[1], (_QWORD *)*v8 != v3) )
      __fastfail(3u);
    *v8 = v6;
    *(_QWORD *)(v6 + 8) = v8;
    *v3 = 0LL;
    v3[1] = 0LL;
    --*(_DWORD *)(v7 + 60);
    RmpCpuSetManagerMarkProcessDirty(v5, (struct _RM_CPU_SET_PROCESS *)v7);
  }
  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)(v4 + 104)) )
    RmpCpuSetManagerRemoveRegistrationFromAllocation(v9, v10);
}
