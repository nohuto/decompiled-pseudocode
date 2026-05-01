/*
 * XREFs of ?RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180068F08
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006A51C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18000AC24 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 */

NTSTATUS __fastcall RmpCpuSetManagerAllocateObjectsForProcess(void *a1, void **a2)
{
  NTSTATUS result; // eax
  DWORD ProcessId; // eax

  result = RmpSystemDuplicateHandle(a1, 0, a2 + 2);
  if ( result >= 0 )
  {
    ProcessId = GetProcessId(a2[2]);
    *((_DWORD *)a2 + 14) = ProcessId;
    a2[1] = (void *)(HIBYTE(ProcessId)
                   + 37 * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL))));
    return 0;
  }
  return result;
}
