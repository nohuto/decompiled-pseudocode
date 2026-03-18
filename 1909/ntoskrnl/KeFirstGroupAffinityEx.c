/*
 * XREFs of KeFirstGroupAffinityEx @ 0x14012FA70
 * Callers:
 *     KeStartThread @ 0x14001C080 (KeStartThread.c)
 *     KeSetAffinityProcess @ 0x14019AD38 (KeSetAffinityProcess.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PpmIdleInitializeConcurrency @ 0x140777CF8 (PpmIdleInitializeConcurrency.c)
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
