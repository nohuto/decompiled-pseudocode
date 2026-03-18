/*
 * XREFs of SepAdtLogAuditRecord @ 0x140186DA0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140091E50 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BB82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BB8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14060A2D8 (SepAdtTokenRightAdjusted.c)
 *     SepAuditAssignPrimaryToken @ 0x140748E34 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407490C8 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407495D0 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C614 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089CBC0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14089CD8C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14089CF70 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x14089D4EC (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14089D66C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14089D820 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14089DA54 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089DD84 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089DF9C (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14089E1E0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14089E2D4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14089E4CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089E6FC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14089EFAC (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14089F1F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14089F488 (SepAdtStagingEvent.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsGetThreadServerSilo @ 0x14007E5E0 (PsGetThreadServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     SepQueueWorkItem @ 0x14012A07C (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x14012FD44 (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x140186FFC (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42CC (KeIsExecutingInArbitraryThreadContext.c)
 *     SepAuditFailedRaisedIrql @ 0x140300888 (SepAuditFailedRaisedIrql.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x14089E2D4 (SepAdtLogAuditFailureEvent.c)
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
