/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140050530
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140164BD4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // rdx
  __int16 v3; // ax
  unsigned __int8 CurrentIrql; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOWORD(CurrentThread) = Resource->Flag;
  v2 = (unsigned __int8)CurrentThread;
  if ( ((unsigned __int8)CurrentThread & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v3 = Resource->Flag & 1;
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v2 = (unsigned __int64)KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (*(_BYTE *)(v2 + 192) & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (*(_DWORD *)(v2 + 116) & 0x400) == 0 && !*(_DWORD *)(v2 + 484) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  LOBYTE(v2) = 1;
  if ( v3 )
    ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
  else
    ExpAcquireResourceExclusiveLite(Resource, v2);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
