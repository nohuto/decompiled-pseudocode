/*
 * XREFs of NtAssignProcessToJobObject @ 0x140606E30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PsAssignProcessToJobObject @ 0x140606DB0 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x1408B8828 (EtwTraceJobAssignProcess.c)
 */

NTSTATUS __stdcall NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  unsigned __int64 v2; // rbx
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v5; // esi
  PVOID v6; // rdi
  __int64 v7; // r8
  PVOID v8; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v11; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &v11, 0LL);
  if ( v5 >= 0 )
  {
    if ( ProcessHandle == (HANDLE)-7LL )
    {
      Object = 0LL;
      v2 = KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16];
      goto LABEL_4;
    }
    v5 = ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)ProcessHandle,
           257,
           (__int64)PsProcessType,
           PreviousMode,
           0x624A7350u,
           &Object,
           0LL,
           0LL);
    if ( v5 >= 0 )
    {
LABEL_4:
      v6 = Object;
      v7 = v2;
      v8 = v11;
      v5 = PsAssignProcessToJobObject(v11, (__int64)Object, v7);
      goto LABEL_5;
    }
  }
  v6 = Object;
  v8 = v11;
LABEL_5:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v8, v6, (unsigned int)v5);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x624A7350u);
  if ( v8 )
    ObfDereferenceObject(v8);
  return v5;
}
