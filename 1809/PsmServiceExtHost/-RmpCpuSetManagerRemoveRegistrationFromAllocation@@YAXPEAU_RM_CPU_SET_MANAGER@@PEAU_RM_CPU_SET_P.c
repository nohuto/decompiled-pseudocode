/*
 * XREFs of ?RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005D950
 * Callers:
 *     ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005CDC8 (-RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROC.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerRemoveRegistrationFromAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2)
{
  struct _RM_OBJECT_HEADER *v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx

  v2 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)a2 + 8);
  v3 = (_QWORD *)((char *)a2 + 104);
  v4 = *((_QWORD *)a2 + 13);
  if ( *(struct _RM_CPU_SET_PROCESS_REGISTRATION **)(v4 + 8) != (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a2 + 104)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 14), (_QWORD *)*v6 != v3) )
  {
    __fastfail(3u);
  }
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *v3 = 0LL;
  v3[1] = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  RmpObjectRelease(v2);
  RmpObjectRelease(a2);
}
