/*
 * XREFs of ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180046D88
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@8PEAPEAV12@@Z @ 0x18001C900 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x180046BD0 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18005BF04 (-RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemDuplicateHandle(HANDLE SourceHandle, ACCESS_MASK DesiredAccess, PHANDLE TargetHandle)
{
  ULONG Options; // ebx
  HANDLE CurrentProcess; // rdi
  HANDLE v8; // rax

  Options = DesiredAccess == 0 ? 2 : 0;
  CurrentProcess = GetCurrentProcess();
  v8 = GetCurrentProcess();
  return NtDuplicateObject(v8, SourceHandle, CurrentProcess, TargetHandle, DesiredAccess, 0, Options);
}
