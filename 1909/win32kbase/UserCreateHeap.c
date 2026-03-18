/*
 * XREFs of UserCreateHeap @ 0x1C005D6E0
 * Callers:
 *     InitCreateSharedSection @ 0x1C026356C (InitCreateSharedSection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

PVOID __fastcall UserCreateHeap(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        NTSTATUS (__stdcall *a5)(PVOID Base, PVOID *CommitAddress, PSIZE_T CommitSize))
{
  unsigned int v6; // ebx
  SIZE_T v7; // r15
  __int64 CurrentProcess; // rsi
  __int64 v11; // [rsp+50h] [rbp-71h] BYREF
  __int64 v12; // [rsp+58h] [rbp-69h] BYREF
  __int64 v13; // [rsp+60h] [rbp-61h] BYREF
  struct _RTL_HEAP_PARAMETERS Parameters; // [rsp+70h] [rbp-51h] BYREF

  v6 = a2;
  v7 = a4;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  memset(&Parameters, 0, sizeof(Parameters));
  v13 = 0LL;
  v12 = 0LL;
  v11 = v6;
  if ( (int)MmMapViewOfSection(a1, CurrentProcess, &v12, 0LL, 0x4000LL, &v11, &v13, 2, 0x400000, 2) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess, v12);
  memset(&Parameters, 0, sizeof(Parameters));
  Parameters.Length = 96;
  Parameters.InitialCommit = 0x4000LL;
  Parameters.InitialReserve = v7;
  Parameters.CommitRoutine = a5;
  return RtlCreateHeap(0x309u, a3, (unsigned int)v7, 0x4000uLL, 0LL, &Parameters);
}
