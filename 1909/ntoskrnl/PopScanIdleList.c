/*
 * XREFs of PopScanIdleList @ 0x1400D5214
 * Callers:
 *     PopPolicySystemIdle @ 0x140670540 (PopPolicySystemIdle.c)
 *     PopIdleDetection @ 0x1408A4E98 (PopIdleDetection.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PopGetPowerSettingValue @ 0x1400F0C8C (PopGetPowerSettingValue.c)
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     PopRequestPowerIrp @ 0x1401735E0 (PopRequestPowerIrp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCoalescingCheck @ 0x1402F6DA4 (PopCoalescingCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402FCD14 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402FE574 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x14069DE28 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopScanIdleList(int a1, unsigned __int64 a2)
{
  int v2; // ebx
  int v3; // r12d
  unsigned __int64 v4; // r14
  int v5; // esi
  KIRQL v6; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v8; // r13
  unsigned int v9; // r15d
  __int64 *v10; // rbx
  __int32 v11; // r12d
  unsigned __int32 v12; // esi
  unsigned int v13; // r14d
  int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // eax
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v23; // rdx
  char v24; // al
  char v25; // al
  int v26; // ecx
  __int64 v27; // rdx
  struct _KPRCB *v28; // rcx
  int v29; // r8d
  unsigned __int64 v30; // rcx
  int Src; // [rsp+48h] [rbp-C0h] BYREF
  char v33; // [rsp+4Ch] [rbp-BCh] BYREF
  char v34; // [rsp+4Dh] [rbp-BBh] BYREF
  KIRQL v35; // [rsp+4Eh] [rbp-BAh]
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+54h] [rbp-B4h]
  int v38; // [rsp+58h] [rbp-B0h]
  int v39; // [rsp+60h] [rbp-A8h]
  unsigned int v40; // [rsp+64h] [rbp-A4h]
  unsigned int v41; // [rsp+68h] [rbp-A0h]
  unsigned int v42; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int32 v43; // [rsp+70h] [rbp-98h] BYREF
  __int32 v44; // [rsp+78h] [rbp-90h] BYREF
  int v45; // [rsp+80h] [rbp-88h]
  _QWORD *v46; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v47; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  int *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  __int64 v53; // [rsp+C8h] [rbp-40h]
  int v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D4h] [rbp-34h]
  __int64 *v56; // [rsp+D8h] [rbp-30h]
  __int64 v57; // [rsp+E0h] [rbp-28h]
  char *v58; // [rsp+E8h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-18h]
  unsigned __int32 *v60; // [rsp+F8h] [rbp-10h]
  __int64 v61; // [rsp+100h] [rbp-8h]
  __int32 *v62; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+110h] [rbp+8h]
  char *v64; // [rsp+118h] [rbp+10h]
  __int64 v65; // [rsp+120h] [rbp+18h]
  char *v66; // [rsp+128h] [rbp+20h]
  __int64 v67; // [rsp+130h] [rbp+28h]
  char *v68; // [rsp+138h] [rbp+30h]
  __int64 v69; // [rsp+140h] [rbp+38h]

  v39 = dword_140443A48;
  v3 = a1;
  v45 = a1;
  LOBYTE(v2) = 0;
  v4 = a2;
  v5 = 0;
  v42 = dword_140443A44;
  v47 = a2;
  Src = 0;
  v40 = *((_DWORD *)PopPolicy + 53);
  v41 = PopCurrentCoalescingSpindownTimeout;
  v37 = v2;
  v38 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v35 = v6;
  if ( byte_140467B34 )
  {
    KxReleaseSpinLock(&PopDopeGlobalLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v8 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      v9 = 0;
      do
      {
        v10 = v8 - 4;
        v11 = _InterlockedExchange((volatile __int32 *)v8 - 7, 0);
        *((_DWORD *)v8 - 5) += v11;
        if ( v11 || *((_DWORD *)v10 + 2) )
          *(_DWORD *)v10 = 0;
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v10, PopIdleScanInterval);
        if ( !v12 )
          *((_DWORD *)v10 + 14) = 1;
        if ( v39 == 1 )
          v13 = *((_DWORD *)v10 + 4);
        else
          v13 = *((_DWORD *)v10 + 5);
        v14 = *((_DWORD *)v10 + 12);
        v15 = v12;
        if ( v14 == 1 )
        {
          if ( v13 == -1 )
            v13 = v40;
          v16 = PopCoalescingCheck(v41, v13, v12);
          v13 = v16;
          if ( v16 )
            ++v38;
          v9 = v42;
          if ( v42 > v16 )
            v9 = v16;
          v17 = *((_DWORD *)v10 + 23);
          v15 = PopIdleScanInterval + *((_DWORD *)v10 + 22);
          if ( v12 )
          {
            if ( v17 <= PopIdleScanInterval )
              v19 = 0;
            else
              v19 = v17 - PopIdleScanInterval;
          }
          else
          {
            v18 = PopIdleScanInterval + v17;
            v15 = v9;
            v19 = v9;
            if ( v18 <= v9 )
            {
              v15 = PopIdleScanInterval + *((_DWORD *)v10 + 22);
              v19 = v18;
            }
          }
          v14 = *((_DWORD *)v10 + 12);
          *((_DWORD *)v10 + 22) = v15;
          *((_DWORD *)v10 + 23) = v19;
        }
        if ( v13 && v15 >= v13 && *((_DWORD *)v10 + 14) == 1 && (v12 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v10 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v10[3]);
          LOBYTE(v14) = 2;
          if ( (int)PopRequestPowerIrp(
                      v10[3],
                      v14,
                      *((_DWORD *)v10 + 13),
                      (unsigned int)PopDeviceIdleCompletion,
                      0LL,
                      0,
                      0LL) >= 0 )
          {
            v20 = *((_DWORD *)v10 + 13);
            ++dword_140467B30;
            *((_DWORD *)v10 + 14) = v20;
            *((_DWORD *)v10 + 3) = 0;
          }
        }
        else if ( v14 == 1 )
        {
          v21 = (unsigned __int8)v37;
          if ( !v12 )
            v21 = 1;
          v37 = v21;
        }
        v44 = v11;
        v43 = v12;
        v46 = 0LL;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK) )
          {
            DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v10[3], 0x67446F50u);
            v46 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
            {
              v23 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
              if ( v23 )
              {
                LOWORD(v36) = *(_WORD *)(v23 + 40) >> 1;
                v24 = *((_BYTE *)v10 + 52) - 1;
                UserData.Ptr = (ULONGLONG)(v10 + 3);
                v33 = v24;
                v25 = *((_BYTE *)v10 + 56) - 1;
                *(_QWORD *)&UserData.Size = 8LL;
                v34 = v25;
                v49 = &v46;
                v51 = &v36;
                v50 = 8LL;
                v52 = 2LL;
                v26 = *(unsigned __int16 *)(v23 + 40);
                v53 = *(_QWORD *)(v23 + 48);
                v56 = v10 + 2;
                v58 = (char *)v10 + 20;
                v60 = &v43;
                v62 = &v44;
                v64 = (char *)v10 + 12;
                v66 = &v33;
                v68 = &v34;
                v54 = v26;
                v55 = 0;
                v57 = 4LL;
                v59 = 4LL;
                v61 = 4LL;
                v63 = 4LL;
                v65 = 4LL;
                v67 = 1LL;
                v69 = 1LL;
                EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0xBu, &UserData);
                DeviceAttachmentBaseRefWithTag = v46;
              }
              if ( DeviceAttachmentBaseRefWithTag )
                ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x67446F50u);
            }
          }
        }
        if ( *((_DWORD *)v10 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v8 - 4, v13, v9);
        v8 = (__int64 *)*v8;
      }
      while ( v8 != &PopIdleDetectList );
      v6 = v35;
      LOBYTE(v2) = v37;
      v5 = v38;
      v4 = v47;
      v3 = v45;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      v28 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v28);
    }
    __writecr8(v6);
    v29 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v29 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    if ( !v3
      || (v27 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v30 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v4 == v30) )
    {
      PopBackgroundTaskAllowed = 1;
    }
    else if ( v4 < v30 )
    {
      PopBackgroundTaskAllowed = 0;
    }
    if ( !v5 || (_BYTE)v2 )
    {
      if ( !v29 && !dword_140443A2C )
      {
        PopGetPowerSettingValue(&GUID_IDLE_BACKGROUND_TASK, v27, 3LL, &Src);
        ++Src;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK);
        v27 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( !PopBackgroundTaskIgnoreCount && !dword_140443A2C && PopSIdle >= 50 && PopBackgroundTaskAllowed )
      {
        PopGetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, v27, 0LL, &Src);
        ++Src;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, &Src);
        PopBackgroundTaskAllowed = 0;
        PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
