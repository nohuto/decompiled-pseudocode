/*
 * XREFs of SeTokenSetNoChildProcessRestricted @ 0x140139ECC
 * Callers:
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406CE568 (PspSetNoChildProcessRestrictedPolicy.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *__fastcall SeTokenSetNoChildProcessRestricted(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // edx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v13, 0);
  v7 = *(_DWORD *)(a1 + 200);
  if ( a3 )
  {
    if ( (v7 & 0x80000) != 0 )
      goto LABEL_6;
    v11 = v7 | 0x200000;
  }
  else
  {
    v8 = v7 | 0x80000;
    v9 = v7 | 0x180000;
    v10 = v8 & 0xFFEFFFFF;
    if ( !a2 )
      v9 = v10;
    v11 = v9 & 0xFFDFFFFF;
  }
  *(_DWORD *)(a1 + 200) = v11;
LABEL_6:
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v13, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
