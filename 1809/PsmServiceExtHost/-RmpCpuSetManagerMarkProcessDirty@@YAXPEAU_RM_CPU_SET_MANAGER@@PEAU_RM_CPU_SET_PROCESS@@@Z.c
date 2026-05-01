/*
 * XREFs of ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18005CEA4
 * Callers:
 *     ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005CC54 (-RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 *     ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005CDC8 (-RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROC.c)
 *     ?RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005D6B4 (-RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCpuSetManagerMarkProcessDirty(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  char *v2; // rdx
  char *v3; // rax
  char **v4; // rcx

  v2 = (char *)a2 + 40;
  if ( !*(_QWORD *)v2 )
  {
    v3 = (char *)a1 + 728;
    v4 = (char **)*((_QWORD *)a1 + 92);
    if ( *v4 != v3 )
      __fastfail(3u);
    *(_QWORD *)v2 = v3;
    *((_QWORD *)v2 + 1) = v4;
    *v4 = v2;
    *((_QWORD *)v3 + 1) = v2;
  }
}
