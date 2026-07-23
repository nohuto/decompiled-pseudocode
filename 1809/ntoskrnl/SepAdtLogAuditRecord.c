/*
 * XREFs of SepAdtLogAuditRecord @ 0x140186F00
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140091D90 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BC82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BC8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14060B2D8 (SepAdtTokenRightAdjusted.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A004 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x14074A298 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x14074A7A0 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089D854 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089DE00 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14089DFCC (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14089E1B0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x14089E72C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14089E8AC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14089EA60 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14089EC94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089EFC4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089F1DC (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14089F420 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14089F514 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14089F70C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1408A01EC (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408A0430 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408A06C8 (SepAdtStagingEvent.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     SepQueueWorkItem @ 0x14012A16C (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x14012FE34 (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x14018715C (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 *     SepAuditFailedRaisedIrql @ 0x140300B78 (SepAuditFailedRaisedIrql.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x14089F514 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // edi
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rbx
  void *ThreadServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  PVOID v9; // rcx
  unsigned int v10; // ecx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[48]; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = NonPagedPoolNx;
  if ( CurrentIrql != 2 )
    v3 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v3, 0x40uLL, 0x69416553u);
  v5 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( Src[1] != 521 )
      SepAuditFailedRaisedIrql(3221225626LL);
    return;
  }
  PoolWithTag[5] = 0LL;
  *((_DWORD *)PoolWithTag + 12) = 0;
  *((_DWORD *)PoolWithTag + 5) = 1;
  *((_DWORD *)PoolWithTag + 8) = 1;
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = (void *)PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  *(_QWORD *)(v5 + 56) = ThreadServerSilo;
  if ( ThreadServerSilo )
    ObfReferenceObjectWithTag(ThreadServerSilo, 0x69416553u);
  v7 = (PVOID *)(v5 + 24);
  v8 = SepAdtMarshallAuditRecord(Src);
  if ( v8 < 0 )
  {
    v13 = *(void **)(v5 + 56);
    if ( v13 )
      ObfDereferenceObjectWithTag(v13, 0x69416553u);
    ExFreePoolWithTag((PVOID)v5, 0);
    SepAdtLastAuditFailStatus = v8;
    _InterlockedIncrement(&SepAdtAuditFailureCount);
    if ( Src[1] == 521 )
      goto LABEL_33;
    v12 = (unsigned int)v8;
  }
  else
  {
    if ( !SepRmAuditingEnabled )
    {
      v9 = *v7;
      if ( (*((_DWORD *)*v7 + 5) & 2) != 0 )
      {
        if ( *(_QWORD *)(v5 + 56) )
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 56), 0x69416553u);
          v9 = *(PVOID *)(v5 + 24);
        }
        ExFreePoolWithTag(v9, 0);
        ExFreePoolWithTag((PVOID)v5, 0);
        return;
      }
    }
    v10 = *((_DWORD *)*v7 + 3);
    *(_DWORD *)(v5 + 36) = v10;
    if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
    {
      if ( v10 <= 0x1D0 )
      {
        KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)v15);
        SepRmDispatchDataToLsa(v5);
        KiUnstackDetachProcess((__int64)v15, 0LL);
      }
      goto LABEL_33;
    }
    v14[0] = 0;
    if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v14) )
      goto LABEL_33;
    v11 = *(void **)(v5 + 56);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
    if ( v14[0] )
      goto LABEL_33;
    v12 = 3221225473LL;
  }
  SepAuditFailedRaisedIrql(v12);
LABEL_33:
  if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
    SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
}
