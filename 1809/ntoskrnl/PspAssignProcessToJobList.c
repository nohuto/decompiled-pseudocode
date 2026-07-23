/*
 * XREFs of PspAssignProcessToJobList @ 0x14088BCFC
 * Callers:
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 * Callees:
 *     PsAssignProcessToJobObject @ 0x140606DB0 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x1408B8828 (EtwTraceJobAssignProcess.c)
 */

__int64 __fastcall PspAssignProcessToJobList(__int64 BugCheckParameter1, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // rbx
  void *v8; // r14
  unsigned int v9; // eax
  int v10; // edi

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !a3 )
    return 0LL;
  while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
  {
    v8 = *(void **)(a2 + 8 * v4);
    v9 = PsAssignProcessToJobObject(v8, BugCheckParameter1, 0LL);
    v10 = v9;
    if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
      EtwTraceJobAssignProcess(v8, BugCheckParameter1, v9);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( ++v4 >= a3 )
      return 0LL;
  }
  return 3221225547LL;
}
