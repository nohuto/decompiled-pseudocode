/*
 * XREFs of ResFwpPageInBackground @ 0x1409903F4
 * Callers:
 *     ResFwBackgroundTransition @ 0x1409903B0 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_14042C030 & 0xC00) != 0xC00 && (dword_14042C030 & 0x100000) == 0 )
  {
    if ( qword_14042C080 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_14042C080, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_14042C078 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_14042C078, (__int64)Memory);
      }
    }
  }
}
