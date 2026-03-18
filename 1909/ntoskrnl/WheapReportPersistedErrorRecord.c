/*
 * XREFs of WheapReportPersistedErrorRecord @ 0x14033F5B8
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14019E06C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WheapWorkQueueAddItem @ 0x140342140 (WheapWorkQueueAddItem.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

char __fastcall WheapReportPersistedErrorRecord(_DWORD *Src)
{
  unsigned int v2; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi

  v2 = Src[5] + 40;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x61656857u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    v4[4] = v2;
    v4[6] = 2;
    memmove(v4 + 10, Src, (unsigned int)Src[5]);
    WheapWorkQueueAddItem(*((_QWORD *)KeGetPcr()->Prcb.WheaInfo + 2), v4);
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
