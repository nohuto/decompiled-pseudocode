/*
 * XREFs of SmStoreCompressionStart @ 0x1406F57A8
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406F54B4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x14008AF3C (SmpKeyedStoreEntryGet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14008B62C (MmQueryProcessWorkingSetSwapPages.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401430D8 (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x1406A4EB0 (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  __int64 v1; // rax
  __int64 v2; // rbx
  _KPROCESS *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14058C188, (__int64 *)&v4, 0, 0);
  v2 = v1;
  if ( v1 || dword_14058C1B0 != -1 )
  {
    LODWORD(v1) = MmStoreFlushOutstandingEvictions();
    if ( v2 )
    {
      LODWORD(v1) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v5);
      if ( (int)v1 >= 0 )
        LODWORD(v1) = SmSwapStore(0);
    }
  }
  return v1;
}
