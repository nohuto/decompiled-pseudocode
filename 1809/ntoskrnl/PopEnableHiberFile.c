/*
 * XREFs of PopEnableHiberFile @ 0x14074716C
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x140742000 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MmGetHighestPhysicalPage @ 0x1400A8858 (MmGetHighestPhysicalPage.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140178C30 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x1405663B0 (EmClientQueryRuleState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1405B1AE4 (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x1406E141C (MmReleaseDumpHibernateResources.c)
 *     PopLogSleepDisabled @ 0x14070BCD4 (PopLogSleepDisabled.c)
 *     PopCalculateHiberFileSize @ 0x14071F244 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x14071FED4 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x140720238 (MmAllocateDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x140747684 (PopCheckDisabledReason.c)
 *     PopPreallocateHibernateMemory @ 0x1407476BC (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1407487DC (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x14084D9E4 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x140850450 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x140867454 (PopSaveHibernateEnabled.c)
 *     PopZeroHiberFile @ 0x14086D030 (PopZeroHiberFile.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  char v4; // r14
  int v5; // ebx
  char v6; // al
  char v7; // r11
  char v8; // bl
  PVOID v9; // rdi
  PVOID v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  HANDLE v13; // rdi
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  PVOID PoolWithTag; // rax
  void *v18; // rbx
  char v20[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-11h] BYREF
  UNICODE_STRING v25; // [rsp+70h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+Fh] BYREF
  int v27; // [rsp+90h] [rbp+1Fh]

  v4 = 0;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  if ( (unsigned __int64)MmGetHighestPhysicalPage(0) >= 0x100000000LL )
    PopLogSleepDisabled(8, 8, 0LL, 0LL);
  if ( !(unsigned __int8)PopCheckDisabledReason(2LL) && !(unsigned __int8)PopCheckDisabledReason(1LL) )
    PopCheckDisabledReason(15LL);
  if ( (unsigned __int8)PopCheckDisabledReason(16LL) )
    return (unsigned int)-1073741637;
  v6 = PopCheckDisabledReason(13LL);
  v8 = v7;
  if ( v6 )
    v8 = 1;
  if ( a1 )
  {
    if ( FileObject )
      return 0;
    dword_140418904 = 1;
    dword_1404188E4 = 1601;
    byte_140418901 = 0;
    dword_140418988 = 0;
    if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
      v13 = KeyHandle;
      KeyValueInformation = 0uLL;
      v27 = 0;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140418904 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_140418904 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      KeyValueInformation = 0uLL;
      v27 = 0;
      if ( ZwQueryValueKey(v13, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_1404188E4 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v25, L"MultiPhaseResumeDisabled");
      KeyValueInformation = 0uLL;
      v27 = 0;
      if ( ZwQueryValueKey(v13, &v25, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_140418901 = HIDWORD(KeyValueInformation) == 1;
        dword_140418988 |= 0x20u;
      }
      ZwClose(v13);
    }
    if ( !PopHiberEnabled )
    {
      PopHiberEnabled = 1;
      v4 = 1;
    }
    if ( v8 )
    {
      v5 = -1073741637;
      goto LABEL_55;
    }
    DumpHibernateResources = MmAllocateDumpHibernateResources(0xD000uLL);
    v15 = DumpHibernateResources;
    if ( !DumpHibernateResources )
      goto LABEL_35;
    v16 = DumpHibernateResources + 0x200000;
    if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
      v16 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    if ( v16 - DumpHibernateResources >= 0x7000 )
      v16 = DumpHibernateResources;
    PopCalculateHiberFileSize(&KeyHandle, (unsigned __int8 *)v20);
    LODWORD(KeyHandle) = PopCreateHiberFile(KeyHandle);
    if ( (int)KeyHandle >= 0 )
    {
      *(_QWORD *)&xmmword_1404188E8 = v15;
      *((_QWORD *)&xmmword_1404188E8 + 1) = v16;
      v15 = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C8uLL, 0x70616D48u);
      v18 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_35:
        v5 = -1073741670;
        goto LABEL_55;
      }
      memset(PoolWithTag, 0, 0x1C8uLL);
      MemoryMap = v18;
      v5 = PopPreallocateHibernateMemory();
      if ( v5 < 0 )
        goto LABEL_55;
      LODWORD(KeyHandle) = 1;
      EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
      if ( (_DWORD)KeyHandle == 2 )
      {
        dword_140418988 |= 0x10u;
        byte_140418901 = 1;
      }
      byte_1404192F6 = v20[0];
      BYTE8(PopCapabilities) = 1;
      if ( !InitSafeBootMode )
        byte_1404192F2 = 1;
      PopClearHiberFileSignature();
      v5 = 0;
    }
    else
    {
      PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
      v5 = (int)KeyHandle;
    }
    if ( !v15 )
      goto LABEL_55;
    MmReleaseDumpHibernateResources(v15);
    v10 = 0LL;
    v9 = 0LL;
LABEL_51:
    if ( v9 )
    {
      MmReturnChargesToLockPagedPool(v9, Length);
      ExFreePoolWithTag(v9, 0);
      memset(&qword_140418910, 0, 0x78uLL);
    }
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x70616D48u);
      MemoryMap = 0LL;
    }
LABEL_55:
    if ( !v4 )
      return (unsigned int)v5;
    goto LABEL_56;
  }
  v4 = 1;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo);
    ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
    ZwClose(PopHiberInfo);
    ExFreePoolWithTag(qword_1404188D8, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v9 = qword_140418910;
    v10 = MemoryMap;
    xmmword_1404188E8 = 0LL;
    BYTE8(PopCapabilities) = 0;
    byte_1404192F6 = 0;
    byte_1404192F2 = 0;
    qword_1404188F8 = 0LL;
    v5 = PopResetCurrentPolicies(v12, v11);
    goto LABEL_51;
  }
  v5 = 0;
LABEL_56:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v5;
}
