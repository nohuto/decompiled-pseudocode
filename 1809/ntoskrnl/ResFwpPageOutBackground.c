/*
 * XREFs of ResFwpPageOutBackground @ 0x14094E460
 * Callers:
 *     ResFwBackgroundTransition @ 0x140950360 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  PVOID PoolWithTag; // rax
  void *v2; // rdi

  if ( (dword_140405AD0 & 0xC00) != 0xC00 )
  {
    v0 = qword_140405B18;
    if ( qword_140405B18 )
    {
      if ( qword_140405B20 )
      {
LABEL_9:
        _InterlockedExchange64((volatile __int64 *)&qword_140405B18, 0LL);
        BgpFwFreeMemory((__int64)v0);
        return;
      }
      BgpFwReleaseLock();
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B494742u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, qword_140405B18, (unsigned int)Size);
      BgpFwAcquireLock();
      if ( v2 )
      {
        if ( qword_140405B20 )
        {
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
          BgpFwAcquireLock();
          return;
        }
        _InterlockedExchange64((volatile __int64 *)&qword_140405B20, (__int64)v2);
        goto LABEL_9;
      }
    }
  }
}
