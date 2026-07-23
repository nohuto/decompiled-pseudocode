/*
 * XREFs of PopSetPowerSettingValue @ 0x14069DE28
 * Callers:
 *     PopScanIdleList @ 0x1400D5214 (PopScanIdleList.c)
 *     PopInitilizeAcDcSettings @ 0x14018C46C (PopInitilizeAcDcSettings.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 *     PopSetNewPolicyValue @ 0x14069DC08 (PopSetNewPolicyValue.c)
 *     PopSetSessionUserStatus @ 0x140725FC0 (PopSetSessionUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x14073CED8 (PopSetSessionDisplayStatus.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1400F05B4 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1400F063C (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetNotificationWork @ 0x1400F0C44 (PopSetNotificationWork.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopArePowerSettingsEqual @ 0x14069E280 (PopArePowerSettingsEqual.c)
 *     PopFindPowerSettingConfiguration @ 0x14069E2BC (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x14069E344 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x14069E3B8 (PopStateIsSessionSpecific.c)
 *     PopValidatePowerSettingData @ 0x14069E3F8 (PopValidatePowerSettingData.c)
 *     PoRegisterPowerSettingCallback @ 0x1406A0AF0 (PoRegisterPowerSettingCallback.c)
 */

__int64 __fastcall PopSetPowerSettingValue(LPCGUID SettingGuid, unsigned int a2, int a3, unsigned int a4, void *Src)
{
  size_t v5; // r13
  LPCGUID v7; // r12
  bool v8; // bp
  _DWORD *v9; // r14
  void *v10; // r15
  char *v11; // rbx
  _DWORD *v12; // rbp
  unsigned int v13; // edi
  char v14; // si
  __int64 v16; // rax
  _QWORD *v17; // rsi
  char v18; // r12
  __int64 i; // r15
  bool v20; // zf
  _DWORD *v21; // rax
  signed __int32 v22; // eax
  _QWORD *j; // rax
  char *v24; // rax
  __int64 ListHead; // rax
  __int64 *v26; // r8
  __int64 v27; // r10
  __int64 *v28; // rcx
  __int64 *v29; // r9
  __int64 v30; // rdx
  __int64 **v31; // rax
  __int64 **v32; // rdx
  __int64 *v33; // rdx
  _QWORD *v34; // rax
  char IsSessionSpecific; // [rsp+40h] [rbp-68h]
  char v36; // [rsp+41h] [rbp-67h]
  char v37; // [rsp+42h] [rbp-66h]
  PVOID PoolWithTag; // [rsp+50h] [rbp-58h]
  __int64 PowerSettingConfiguration; // [rsp+60h] [rbp-48h]

  v5 = a4;
  v36 = 0;
  v7 = SettingGuid;
  v8 = 0;
  v9 = 0LL;
  v37 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4, 0x74655350u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PopIncrementPowerSettingPendingUpdates(0);
  memmove(PoolWithTag, Src, (unsigned int)v5);
  PopValidatePowerSettingData(v7, (unsigned int)v5, PoolWithTag);
  IsSessionSpecific = PopStateIsSessionSpecific(v7);
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, a2);
  v11 = (char *)PowerSettingConfiguration;
  if ( !PowerSettingConfiguration )
  {
    v24 = (char *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x74655350u);
    PowerSettingConfiguration = (__int64)v24;
    v11 = v24;
    if ( !v24 )
    {
      v13 = -1073741670;
      v14 = 0;
      goto LABEL_6;
    }
    memset(v24, 0, 0x58uLL);
    *((GUID *)v11 + 2) = *v7;
    ListHead = PopGetListHead(v7);
    v26 = (__int64 *)(v11 + 16);
    v27 = ListHead;
    *((_QWORD *)v11 + 3) = v11 + 16;
    *((_QWORD *)v11 + 2) = v11 + 16;
    if ( !IsSessionSpecific )
    {
      v28 = (__int64 *)PopRegisteredPowerSettingCallbacks;
      while ( v28 != &PopRegisteredPowerSettingCallbacks )
      {
        v29 = v28;
        v28 = (__int64 *)*v28;
        v30 = *(__int64 *)((char *)v29 + 36) - *(_QWORD *)&v7->Data1;
        if ( !v30 )
          v30 = *(__int64 *)((char *)v29 + 44) - *(_QWORD *)v7->Data4;
        if ( !v30 )
        {
          v31 = (__int64 **)v28[1];
          if ( *v31 != v28 )
            goto LABEL_63;
          v32 = (__int64 **)v31[1];
          if ( *v32 != (__int64 *)v31 )
            goto LABEL_63;
          v28[1] = (__int64)v32;
          *v32 = v28;
          v33 = (__int64 *)*((_QWORD *)v11 + 3);
          if ( (__int64 *)*v33 != v26 )
            goto LABEL_63;
          *v31 = v26;
          v31[1] = v33;
          *v33 = (__int64)v31;
          *((_QWORD *)v11 + 3) = v31;
        }
      }
      a2 = -1;
    }
    *((_DWORD *)v11 + 12) = a2;
    v34 = *(_QWORD **)(v27 + 8);
    if ( *v34 != v27 )
LABEL_63:
      __fastfail(3u);
    *((_QWORD *)v11 + 1) = v34;
    *(_QWORD *)v11 = v27;
    *v34 = v11;
    *(_QWORD *)(v27 + 8) = v11;
    v36 = 1;
    if ( PopPopPowerSettingSetChangeNotification.Data[0] || PopPopPowerSettingSetChangeNotification.Data[1] )
      v37 = 1;
  }
  v12 = *(_DWORD **)&v11[8 * a3 + 64];
  if ( (unsigned __int8)PopArePowerSettingsEqual(v12, PoolWithTag, (unsigned int)v5) )
  {
    v8 = 0;
    v13 = 0;
  }
  else
  {
    v16 = a3;
    v17 = v11 + 64;
    v18 = 0;
    for ( i = 0LL; i < 3; ++i )
    {
      if ( i != v16 )
      {
        if ( !v9 )
        {
          v20 = (unsigned __int8)PopArePowerSettingsEqual(*v17, PoolWithTag, (unsigned int)v5) == 0;
          v16 = a3;
          if ( !v20 )
          {
            v9 = (_DWORD *)*v17;
            ++*(_DWORD *)*v17;
          }
        }
        if ( (_DWORD *)*v17 == v12 )
          v18 = 1;
      }
      ++v17;
    }
    v13 = 0;
    if ( v9 )
    {
      v10 = PoolWithTag;
      v14 = 1;
    }
    else
    {
      v21 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v5 + 12), 0x74655350u);
      v9 = v21;
      if ( !v21 )
      {
        v8 = 0;
        v13 = -1073741670;
        v10 = PoolWithTag;
        v7 = SettingGuid;
        v14 = 0;
        goto LABEL_6;
      }
      memset(v21, 0, (unsigned int)(v5 + 12));
      v14 = 1;
      v9[1] = v5;
      *v9 = 1;
      do
        v22 = _InterlockedIncrement(&PopPowerSettingChangeStamp);
      while ( !v22 );
      v10 = PoolWithTag;
      v9[2] = v22;
      memmove(v9 + 3, PoolWithTag, v5);
    }
    if ( v12 )
    {
      if ( !v18 )
      {
        for ( j = *(_QWORD **)(PowerSettingConfiguration + 16);
              j != (_QWORD *)(PowerSettingConfiguration + 16);
              j = (_QWORD *)*j )
        {
          if ( (_DWORD *)j[9] == v12 )
            j[9] = 0LL;
        }
      }
      v20 = (*v12)-- == 1;
      if ( v20 )
        ExFreePoolWithTag(v12, 0x74655350u);
    }
    v8 = 0;
    *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) = v9;
    if ( dword_140443A2C == a3 )
      v8 = IsSessionSpecific == 0;
    if ( *(_DWORD *)(PowerSettingConfiguration + 56) || *(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      v7 = SettingGuid;
      *(_DWORD *)(PowerSettingConfiguration + 52) |= 1u;
      goto LABEL_6;
    }
    v7 = SettingGuid;
  }
  v14 = 0;
LABEL_6:
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v36 )
    PoRegisterPowerSettingCallback(0LL, v7, PopTracePowerSettingChange, 0LL, 0LL);
  ExFreePoolWithTag(v10, 0x74655350u);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v37 )
      ZwUpdateWnfStateData(&PopPopPowerSettingSetChangeNotification, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( v8 )
    {
      PopIncrementPowerSettingPendingUpdates(1);
      PopSetNotificationWork(0x20u);
    }
    if ( v14 )
      PopSetNotificationWork(0x80u);
  }
  PopDecrementPowerSettingPendingUpdates(0);
  return v13;
}
