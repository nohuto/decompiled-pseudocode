/*
 * XREFs of ResFwpPageInBackground @ 0x1409513A4
 * Callers:
 *     ResFwBackgroundTransition @ 0x140951360 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_140406AD0 & 0xC00) != 0xC00 && (dword_140406AD0 & 0x100000) == 0 )
  {
    if ( qword_140406B20 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_140406B20, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140406B18 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140406B18, (__int64)Memory);
      }
    }
  }
}
