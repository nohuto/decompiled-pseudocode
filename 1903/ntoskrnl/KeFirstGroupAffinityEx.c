/*
 * XREFs of KeFirstGroupAffinityEx @ 0x14012F080
 * Callers:
 *     KeStartThread @ 0x14001BC90 (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x140774718 (PpmIdleInitializeConcurrency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(_QWORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // ax

  v2 = 0;
  if ( !*a2 )
    return 3221226021LL;
  while ( !*(_QWORD *)&a2[4 * v2 + 4] )
  {
    if ( ++v2 >= *a2 )
      return 3221226021LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_WORD *)a1 + 4) = v2;
  *a1 = *(_QWORD *)&a2[4 * v2 + 4];
  return 0LL;
}
