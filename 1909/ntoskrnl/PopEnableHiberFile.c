/*
 * XREFs of PopEnableHiberFile @ 0x140759E1C
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x14074DFC0 (PopNotifyPolicyDevice.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x140005F68 (MmGetHighestPhysicalPage.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140182C04 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x140595780 (EmClientQueryRuleState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14066F078 (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x14072B9F0 (MmReleaseDumpHibernateResources.c)
 *     PopLogSleepDisabled @ 0x140738860 (PopLogSleepDisabled.c)
 *     PopCalculateHiberFileSize @ 0x1407485F4 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x1407496F4 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x140749CD8 (MmAllocateDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x14075A1B8 (PopCheckDisabledReason.c)
 *     PopPreallocateHibernateMemory @ 0x14075A1F0 (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x14075A430 (PopCreateHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14075B17C (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x140887514 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x14088A9A0 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1408A1F24 (PopSaveHibernateEnabled.c)
 *     PopDeleteHiberFile @ 0x1408A7724 (PopDeleteHiberFile.c)
 *     PopZeroHiberFile @ 0x1408A7F2C (PopZeroHiberFile.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  char v4; // r14
  char v5; // al
  char v6; // r11
  char v7; // di
  HANDLE v8; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  void *v13; // rbx
  int v14; // ebx
  PVOID v16; // rdi
  PVOID v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-11h] BYREF
  UNICODE_STRING v25; // [rsp+70h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+Fh] BYREF
  int v27; // [rsp+90h] [rbp+1Fh]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v25.Length = 0LL;
  v25.Buffer = 0LL;
  KeyValueInformation = 0uLL;
  v4 = 0;
  v27 = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  if ( (unsigned __int64)MmGetHighestPhysicalPage(0) >= 0x100000000LL )
    PopLogSleepDisabled(8, 8, 0LL, 0LL);
  if ( !(unsigned __int8)PopCheckDisabledReason(2LL) && !(unsigned __int8)PopCheckDisabledReason(1LL) )
    PopCheckDisabledReason(15LL);
  if ( (unsigned __int8)PopCheckDisabledReason(16LL) )
    return (unsigned int)-1073741637;
  v5 = PopCheckDisabledReason(13LL);
  v7 = v6;
  if ( v5 )
    v7 = 1;
  if ( a1 )
  {
    if ( !FileObject )
    {
      dword_1404433C4 = 1;
      dword_1404433A4 = 1601;
      byte_1404433C1 = 0;
      dword_140443448 = 0;
      if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
        v8 = KeyHandle;
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          dword_1404433C4 = HIDWORD(KeyValueInformation);
          if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
            dword_1404433C4 = 1;
        }
        RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
        KeyValueInformation = 0uLL;
        v27 = 0;
        if ( ZwQueryValueKey(v8, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          dword_1404433A4 = HIDWORD(KeyValueInformation);
        }
        RtlInitUnicodeString(&v25, L"MultiPhaseResumeDisabled");
        KeyValueInformation = 0uLL;
        v27 = 0;
        if ( ZwQueryValueKey(v8, &v25, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          byte_1404433C1 = HIDWORD(KeyValueInformation) == 1;
          dword_140443448 |= 0x20u;
        }
        ZwClose(v8);
      }
      if ( !PopHiberEnabled )
      {
        PopHiberEnabled = 1;
        v4 = 1;
      }
      if ( v7 )
      {
        v14 = -1073741637;
        goto LABEL_35;
      }
      DumpHibernateResources = MmAllocateDumpHibernateResources(0x13000uLL);
      v10 = DumpHibernateResources;
      if ( DumpHibernateResources )
      {
        v11 = DumpHibernateResources + 0x200000;
        if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
          v11 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
        if ( v11 - DumpHibernateResources >= 0xA000 )
          v11 = DumpHibernateResources;
        PopCalculateHiberFileSize(&KeyHandle, (unsigned __int8 *)v20);
        LODWORD(KeyHandle) = PopCreateHiberFile(KeyHandle);
        if ( (int)KeyHandle < 0 )
        {
          PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
          v14 = (int)KeyHandle;
LABEL_34:
          if ( !v10 )
            goto LABEL_35;
          MmReleaseDumpHibernateResources(v10);
          v17 = 0LL;
          v16 = 0LL;
          goto LABEL_60;
        }
        qword_1404433A8 = v10;
        qword_1404433B0 = v11;
        v10 = 0LL;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C8uLL, 0x70616D48u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1C8uLL);
          MemoryMap = v13;
          v14 = PopPreallocateHibernateMemory();
          if ( v14 < 0 )
            goto LABEL_35;
          LODWORD(KeyHandle) = 1;
          EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
          if ( (_DWORD)KeyHandle == 2 )
          {
            dword_140443448 |= 0x10u;
            byte_1404433C1 = 1;
          }
          byte_140443B96 = v20[0];
          BYTE8(PopCapabilities) = 1;
          if ( !InitSafeBootMode )
            byte_140443B92 = 1;
          if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) == 0 )
            PopClearHiberFileSignature();
          v14 = 0;
          goto LABEL_34;
        }
      }
      v14 = -1073741670;
      goto LABEL_35;
    }
    return 0;
  }
  if ( !PopHiberEnabled )
  {
    PopDeleteHiberFile(0LL);
    return 0;
  }
  v4 = 1;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(*(HANDLE *)&PopHiberInfo);
    ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
    ZwClose(*(HANDLE *)&PopHiberInfo);
    ExFreePoolWithTag(qword_140443398, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v16 = qword_1404433D0;
    v17 = MemoryMap;
    BYTE8(PopCapabilities) = 0;
    byte_140443B96 = 0;
    byte_140443B92 = 0;
    v14 = PopResetCurrentPolicies(v19, v18);
LABEL_60:
    if ( v16 )
    {
      MmReturnChargesToLockPagedPool(v16, Length);
      ExFreePoolWithTag(v16, 0);
      memset(&qword_1404433D0, 0, 0x78uLL);
    }
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x70616D48u);
      MemoryMap = 0LL;
    }
LABEL_35:
    if ( !v4 )
      return (unsigned int)v14;
    goto LABEL_36;
  }
  v14 = 0;
LABEL_36:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v14;
}
