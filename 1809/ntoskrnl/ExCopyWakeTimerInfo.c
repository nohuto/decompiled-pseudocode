/*
 * XREFs of ExCopyWakeTimerInfo @ 0x14031C730
 * Callers:
 *     PopHandleWakeSources @ 0x140567540 (PopHandleWakeSources.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExCopyWakeTimerInfo(SIZE_T *Src, _QWORD *a2)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rdi
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *Src, 0x53577254u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, *Src);
  result = 0LL;
  *a2 = v5;
  return result;
}
