/*
 * XREFs of SeTokenIsNoChildProcessRestrictionEnforced @ 0x14031DC80
 * Callers:
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

bool __fastcall SeTokenIsNoChildProcessRestrictionEnforced(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v3 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (v3 & 0x80000) != 0;
}
