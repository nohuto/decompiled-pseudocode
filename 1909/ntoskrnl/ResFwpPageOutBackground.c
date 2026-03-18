/*
 * XREFs of ResFwpPageOutBackground @ 0x14098E460
 * Callers:
 *     ResFwBackgroundTransition @ 0x1409903B0 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  PVOID PoolWithTag; // rax
  void *v2; // rdi

  if ( (dword_14042C010 & 0xC00) != 0xC00 )
  {
    v0 = qword_14042C058;
    if ( qword_14042C058 )
    {
      if ( qword_14042C060 )
      {
LABEL_9:
        _InterlockedExchange64((volatile __int64 *)&qword_14042C058, 0LL);
        BgpFwFreeMemory((__int64)v0);
        return;
      }
      BgpFwReleaseLock();
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B494742u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, qword_14042C058, (unsigned int)Size);
      BgpFwAcquireLock();
      if ( v2 )
      {
        if ( qword_14042C060 )
        {
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
          BgpFwAcquireLock();
          return;
        }
        _InterlockedExchange64((volatile __int64 *)&qword_14042C060, (__int64)v2);
        goto LABEL_9;
      }
    }
  }
}
