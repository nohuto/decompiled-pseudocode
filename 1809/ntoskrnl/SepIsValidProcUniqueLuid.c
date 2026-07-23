/*
 * XREFs of SepIsValidProcUniqueLuid @ 0x1408A4A9C
 * Callers:
 *     SepRmValidateProcUniqueLuidWrkr @ 0x1408A3EF0 (SepRmValidateProcUniqueLuidWrkr.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     SepFindMatchingLuidEntry @ 0x1408A4A10 (SepFindMatchingLuidEntry.c)
 */

__int64 __fastcall SepIsValidProcUniqueLuid(struct _LIST_ENTRY **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  signed __int64 *v4; // rbx
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v3 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(SeLuidToIndexMapping, 0LL);
  SepFindMatchingLuidEntry(*(PRTL_DYNAMIC_HASH_TABLE *)(SeLuidToIndexMapping + 8), a1, &v6);
  if ( v6 )
    v3 = *(_BYTE *)(v6 + 48) != 0 ? 0xC0000225 : 0;
  v4 = (signed __int64 *)SeLuidToIndexMapping;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)SeLuidToIndexMapping, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
