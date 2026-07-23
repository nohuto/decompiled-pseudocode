/*
 * XREFs of PoDisableSleepStates @ 0x140869C20
 * Callers:
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoDisableSleepStates(int a1, int a2, _QWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *PoolWithTag; // rbx
  _QWORD *v8; // rax

  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x64536F50u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_DWORD *)PoolWithTag + 4) = a1;
    *((_DWORD *)PoolWithTag + 5) = a2;
    ExAcquireFastMutex(&PopDisableSleepMutex);
    v8 = (_QWORD *)qword_14041A168;
    if ( *(__int64 **)qword_14041A168 != &PopDisableSleepList )
      __fastfail(3u);
    *PoolWithTag = &PopDisableSleepList;
    PoolWithTag[1] = v8;
    *v8 = PoolWithTag;
    qword_14041A168 = (__int64)PoolWithTag;
    KeReleaseGuardedMutex(&PopDisableSleepMutex);
    *a3 = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
