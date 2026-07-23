/*
 * XREFs of ObpLockDirectoryShared @ 0x140109FD8
 * Callers:
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     ObpLookupDirectoryEntryEx @ 0x140625DE0 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x140625F34 (ObpLookupDirectoryUsingHash.c)
 *     NtQueryDirectoryObject @ 0x14068EE90 (NtQueryDirectoryObject.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 */

signed __int64 __fastcall ObpLockDirectoryShared(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // zf
  signed __int64 result; // rax

  *(_DWORD *)(a1 + 32) = -1145368012;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2 + 296, 0LL);
  v5 = ObpTraceFlags == 0;
  *(_DWORD *)(a1 + 32) = -572714444;
  if ( !v5 )
    ObpPushStackInfo(a2 - 48);
  result = ObpIncrPointerCount((volatile signed __int64 *)(a2 - 48));
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = 1;
  return result;
}
