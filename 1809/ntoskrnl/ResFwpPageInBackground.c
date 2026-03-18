/*
 * XREFs of ResFwpPageInBackground @ 0x1409503A4
 * Callers:
 *     ResFwBackgroundTransition @ 0x140950360 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14016F4B8 (BgpFwAllocateMemory.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_140405AD0 & 0xC00) != 0xC00 && (dword_140405AD0 & 0x100000) == 0 )
  {
    if ( qword_140405B20 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_140405B20, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140405B18 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140405B18, (__int64)Memory);
      }
    }
  }
}
