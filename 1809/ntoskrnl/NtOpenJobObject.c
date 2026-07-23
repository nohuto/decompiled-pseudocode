/*
 * XREFs of NtOpenJobObject @ 0x14088A790
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 *     EtwTraceJob @ 0x1408B875C (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  void *v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)JobHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)PsJobType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)&v10);
  if ( v8 >= 0 )
    *JobHandle = v10;
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJob(0LL, 0LL, (unsigned int)v8, 1826LL);
  return v8;
}
