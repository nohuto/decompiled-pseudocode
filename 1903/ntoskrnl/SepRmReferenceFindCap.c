/*
 * XREFs of SepRmReferenceFindCap @ 0x14031EDD4
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeComputeCreatorDeniedRights @ 0x14003AC70 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140155C04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SeRmReferenceFindCapName @ 0x14031EC54 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlLookupEntryHashTable @ 0x140087BF0 (RtlLookupEntryHashTable.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     RtlGetNextEntryHashTable @ 0x140115EA0 (RtlGetNextEntryHashTable.c)
 *     SepRmDereferenceCapTable @ 0x14031CF78 (SepRmDereferenceCapTable.c)
 *     SepComputeSidSignature @ 0x14061E3DC (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  _RTL_DYNAMIC_HASH_TABLE *v6; // rdi
  ULONG_PTR v7; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY NextEntryHashTable; // rbx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  *a2 = 0LL;
  memset(&Context, 0, sizeof(Context));
  v4 = -1073741275;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
  v6 = SepRmCapTable;
  if ( SepRmCapTable && _InterlockedIncrement64((volatile signed __int64 *)&SepRmCapTable[1]) <= 1 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock);
  KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    if ( !SepRmEnforceCap )
      goto LABEL_13;
    v7 = SepComputeSidSignature(Sid1);
    NextEntryHashTable = RtlLookupEntryHashTable(v6, v7, &Context);
    if ( !NextEntryHashTable )
      goto LABEL_13;
    do
    {
      if ( RtlEqualSid(Sid1, NextEntryHashTable[1].Linkage.Flink) == 1 )
        break;
      NextEntryHashTable = RtlGetNextEntryHashTable(v6, &Context);
    }
    while ( NextEntryHashTable );
    if ( NextEntryHashTable )
    {
      *a2 = NextEntryHashTable;
      return 0;
    }
    else
    {
LABEL_13:
      SepRmDereferenceCapTable((volatile signed __int64 *)v6);
    }
  }
  return v4;
}
