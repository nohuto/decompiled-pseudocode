/*
 * XREFs of VerifierMmAllocatePagesForMdlEx @ 0x140945420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140935E3C (ViTargetAddToCounter.c)
 *     VfAllocPoolNotification @ 0x140938DDC (VfAllocPoolNotification.c)
 *     VfFaultsInjectResourceFailure @ 0x140939308 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x140946348 (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x1409464E0 (ViMmValidateIrql.c)
 */

struct _MDL *__fastcall VerifierMmAllocatePagesForMdlEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        int a6)
{
  __int64 v9; // rcx
  struct _MDL *v12; // rax
  struct _MDL *v13; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v9 = (unsigned int)MmVerifierData >> 17;
  LOBYTE(v9) = (MmVerifierData & 0x20000) != 0;
  ViMmValidateIrql(v9);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( (MmVerifierData & 0x4000000) != 0 && a2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a2, a4, 0LL);
  v12 = (struct _MDL *)((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64, ULONG_PTR, int, int))pXdvMmAllocatePagesForMdlEx)(
                         a1,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6);
  v13 = v12;
  if ( v12 )
  {
    VfFillAllocatePagesForMdl(v12);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 216LL, 0xE0u, v13->ByteCount);
  }
  VfAllocPoolNotification();
  return v13;
}
