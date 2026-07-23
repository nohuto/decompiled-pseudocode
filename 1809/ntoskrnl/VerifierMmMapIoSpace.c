/*
 * XREFs of VerifierMmMapIoSpace @ 0x1409458C0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MmCheckMapIoSpace @ 0x140925E88 (MmCheckMapIoSpace.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140935E3C (ViTargetAddToCounter.c)
 *     VfAllocPoolNotification @ 0x140938DDC (VfAllocPoolNotification.c)
 *     VfFaultsInjectResourceFailure @ 0x140939308 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmMapIoSpace(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // cl
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x73uLL, CurrentIrql, (unsigned int)BugCheckParameter3, a2);
  if ( (MmVerifierData & 1) != 0 )
    MmCheckMapIoSpace(BugCheckParameter3, a2);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    return 0LL;
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v8 = 4;
    if ( a3 != 1 )
    {
      v8 = 516;
      if ( a3 == 2 )
        v8 = 1028;
    }
    v9 = MmMapIoSpaceEx(BugCheckParameter3, a2, v8);
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, _QWORD))pXdvMmMapIoSpace)(BugCheckParameter3, a2, a3);
  }
  v10 = v9;
  VfAllocPoolNotification();
  if ( v10 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 200LL, 0xD0u, a2);
  }
  return v10;
}
