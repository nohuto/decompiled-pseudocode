/*
 * XREFs of PsAssignProcessToJobObject @ 0x1406898F0
 * Callers:
 *     NtAssignProcessToJobObject @ 0x140689970 (NtAssignProcessToJobObject.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     PspSetJobMemoryPartition @ 0x1408C7BB0 (PspSetJobMemoryPartition.c)
 *     PspAssignProcessToJobList @ 0x1408C83C0 (PspAssignProcessToJobList.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x14068917C (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x14068970C (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(PVOID Object, __int64 BugCheckParameter1, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition((__int64)Object, BugCheckParameter1, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(Object, BugCheckParameter1, a3, v8);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
