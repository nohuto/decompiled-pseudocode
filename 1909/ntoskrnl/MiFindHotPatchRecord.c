/*
 * XREFs of MiFindHotPatchRecord @ 0x140711564
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x1407104F0 (MiApplyRequiredDriverHotPatches.c)
 *     MiFindProcessImageHotPatchRecord @ 0x14088DAA4 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiCompareHotPatchNodes @ 0x1405B0CA4 (MiCompareHotPatchNodes.c)
 *     RtlDuplicateUnicodeString @ 0x1406F4910 (RtlDuplicateUnicodeString.c)
 */

__int64 __fastcall MiFindHotPatchRecord(__int64 *a1, int a2, int a3, int a4, PUNICODE_STRING StringOut, _DWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rbx
  int v12; // eax
  NTSTATUS v13; // ebx
  _DWORD v15[12]; // [rsp+20h] [rbp-48h] BYREF

  memset(v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  v15[7] = a4;
  v15[6] = a3;
  if ( !a2 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  }
  v11 = *a1;
  if ( !*a1 )
  {
LABEL_8:
    v13 = -1073741275;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v12 = MiCompareHotPatchNodes((__int64)v15, v11);
    if ( v12 >= 0 )
      break;
    v11 = *(_QWORD *)v11;
LABEL_6:
    if ( !v11 )
      goto LABEL_7;
  }
  if ( v12 > 0 )
  {
    v11 = *(_QWORD *)(v11 + 8);
    goto LABEL_6;
  }
LABEL_7:
  if ( !v11 )
    goto LABEL_8;
  if ( a6 )
    *a6 = MiHotPatchGeneration;
  if ( !StringOut || (v13 = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(v11 + 32), StringOut), v13 >= 0) )
    v13 = 0;
LABEL_9:
  if ( !a2 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return (unsigned int)v13;
}
