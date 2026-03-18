/*
 * XREFs of SepAdtLogAuditRecord @ 0x14012CBAC
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1400ADD60 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1405B4998 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140621840 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406218EC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x140672FB0 (SepAdtTokenRightAdjusted.c)
 *     SeAuditProcessCreation @ 0x1407481D0 (SeAuditProcessCreation.c)
 *     SeAuditBootConfiguration @ 0x140779D14 (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x140780614 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DAFF0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408DB5C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1408DB788 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1408DB980 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x1408DBF04 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1408DC084 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1408DC250 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1408DC494 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC7D0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408DC9E8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x1408DCC30 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x1408DCD24 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1408DCF1C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DD148 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1408DD9E4 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DDC28 (SepAdtStagingEvent.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     SepQueueWorkItem @ 0x14012CD34 (SepQueueWorkItem.c)
 *     SepAdtMarshallAuditRecord @ 0x14012CEB4 (SepAdtMarshallAuditRecord.c)
 *     SepRmDispatchDataToLsa @ 0x14013286C (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SepAuditFailedRaisedIrql @ 0x14031EBFC (SepAuditFailedRaisedIrql.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepAdtLogAuditFailureEvent @ 0x1408DCD24 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // esi
  char *PoolWithTag; // rax
  char *v5; // rbx
  void *ThreadServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  PVOID v9; // rcx
  unsigned int v10; // ecx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  char v14[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[48]; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = NonPagedPoolNx;
  if ( CurrentIrql != 2 )
    v3 = PagedPool;
  PoolWithTag = (char *)ExAllocatePoolWithTag(v3, 0x40uLL, 0x69416553u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *((_DWORD *)PoolWithTag + 8) = 1;
    ThreadServerSilo = (void *)PsGetThreadServerSilo((__int64)KeGetCurrentThread());
    *((_QWORD *)v5 + 7) = ThreadServerSilo;
    if ( ThreadServerSilo )
      ObfReferenceObjectWithTag(ThreadServerSilo, 0x69416553u);
    v7 = (PVOID *)(v5 + 24);
    v8 = SepAdtMarshallAuditRecord(Src);
    if ( v8 < 0 )
    {
      v13 = (void *)*((_QWORD *)v5 + 7);
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x69416553u);
      ExFreePoolWithTag(v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_13;
      v12 = (unsigned int)v8;
      goto LABEL_31;
    }
    if ( SepRmAuditingEnabled || (v9 = *v7, (*((_DWORD *)*v7 + 5) & 2) == 0) )
    {
      v10 = *((_DWORD *)*v7 + 3);
      *((_DWORD *)v5 + 9) = v10;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v10 <= 0x1D0 )
        {
          memset(v15, 0, sizeof(v15));
          KiStackAttachProcess(SepRmLsaCallProcess, 0, (__int64)v15);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
        }
        goto LABEL_13;
      }
      v14[0] = 0;
      if ( (unsigned __int8)SepQueueWorkItem(&SepLsaAuditQueueInfo, v5, v14) )
        goto LABEL_13;
      v11 = (void *)*((_QWORD *)v5 + 7);
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x69416553u);
      ExFreePoolWithTag(*v7, 0);
      ExFreePoolWithTag(v5, 0);
      if ( v14[0] )
        goto LABEL_13;
      v12 = 3221225473LL;
LABEL_31:
      SepAuditFailedRaisedIrql(v12);
LABEL_13:
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    if ( *((_QWORD *)v5 + 7) )
    {
      ObfDereferenceObjectWithTag(*((PVOID *)v5 + 7), 0x69416553u);
      v9 = (PVOID)*((_QWORD *)v5 + 3);
    }
    ExFreePoolWithTag(v9, 0);
    ExFreePoolWithTag(v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
