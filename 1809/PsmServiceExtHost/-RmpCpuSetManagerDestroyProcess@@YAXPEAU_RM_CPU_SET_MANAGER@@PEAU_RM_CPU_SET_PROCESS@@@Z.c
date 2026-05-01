/*
 * XREFs of ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18005C438
 * Callers:
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18005BF78 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005D574 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCpuSetManagerDestroyProcess(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  unsigned __int64 v3; // r9
  struct _RM_CPU_SET_PROCESS *i; // rdx

  if ( *((_QWORD *)a2 + 2) )
  {
    v3 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 19) & 0x1F));
    for ( i = (struct _RM_CPU_SET_PROCESS *)(*((_QWORD *)a1 + 10)
                                           + 8
                                           * ((HIBYTE(v3)
                                             + 37
                                             * (BYTE6(v3)
                                              + 37
                                              * (BYTE5(v3)
                                               + 37
                                               * (BYTE4(v3)
                                                + 37
                                                * (BYTE3(v3)
                                                 + 37
                                                 * (BYTE2(v3) + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883)))))))) & (unsigned int)((*((_DWORD *)a1 + 19) >> 5) - 1)));
          (*(_QWORD *)i & 1) == 0;
          i = *(struct _RM_CPU_SET_PROCESS **)i )
    {
      if ( *(struct _RM_CPU_SET_PROCESS **)i == a2 )
      {
        *(_QWORD *)i = *(_QWORD *)a2;
        --*((_DWORD *)a1 + 18);
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    NtClose(*((HANDLE *)a2 + 2));
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
}
