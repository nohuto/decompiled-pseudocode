/*
 * XREFs of PopScanIdleList @ 0x140010050
 * Callers:
 *     PopPolicySystemIdle @ 0x1405B14E0 (PopPolicySystemIdle.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopGetPowerSettingValue @ 0x140003B10 (PopGetPowerSettingValue.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     PopRequestPowerIrp @ 0x140172660 (PopRequestPowerIrp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCoalescingCheck @ 0x1402DBA1C (PopCoalescingCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402E0378 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402E1B20 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopScanIdleList()
{
  int v0; // ebx
  int v1; // r14d
  int v2; // esi
  KIRQL v3; // r15
  __int64 *v4; // r13
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v11; // r15d
  __int64 *v12; // rbx
  __int32 v13; // r12d
  unsigned __int32 v14; // esi
  unsigned int v15; // r14d
  int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // rdx
  struct _KPRCB *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // eax
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v27; // rdx
  char v28; // al
  char v29; // al
  int v30; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  LPCGUID ActivityId; // [rsp+28h] [rbp-E0h]
  int Src; // [rsp+48h] [rbp-C0h] BYREF
  char v34; // [rsp+4Ch] [rbp-BCh] BYREF
  char v35; // [rsp+4Dh] [rbp-BBh] BYREF
  KIRQL v36; // [rsp+4Eh] [rbp-BAh]
  int v37; // [rsp+50h] [rbp-B8h] BYREF
  int v38; // [rsp+54h] [rbp-B4h]
  int v39; // [rsp+58h] [rbp-B0h]
  unsigned int v40; // [rsp+60h] [rbp-A8h]
  unsigned int v41; // [rsp+64h] [rbp-A4h]
  unsigned int v42; // [rsp+68h] [rbp-A0h]
  unsigned __int32 v43; // [rsp+70h] [rbp-98h] BYREF
  __int32 v44; // [rsp+78h] [rbp-90h] BYREF
  int v45; // [rsp+80h] [rbp-88h]
  unsigned int v46; // [rsp+84h] [rbp-84h] BYREF
  _QWORD *v47; // [rsp+88h] [rbp-80h] BYREF
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

  v1 = dword_1404191A8;
  v42 = dword_1404191A4;
  LOBYTE(v0) = 0;
  v2 = 0;
  Src = 0;
  v38 = v0;
  v39 = 0;
  v40 = *((_DWORD *)PopPolicy + 53);
  v41 = PopCurrentCoalescingSpindownTimeout;
  v45 = dword_1404191A8;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v36 = v3;
  if ( !byte_14043D5E4 )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v4 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      v11 = 0;
      do
      {
        v12 = v4 - 4;
        v13 = _InterlockedExchange((volatile __int32 *)v4 - 7, 0);
        *((_DWORD *)v4 - 5) += v13;
        if ( v13 || *((_DWORD *)v12 + 2) )
          *(_DWORD *)v12 = 0;
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v12, PopIdleScanInterval);
        if ( !v14 )
          *((_DWORD *)v12 + 14) = 1;
        if ( v1 == 1 )
          v15 = *((_DWORD *)v12 + 4);
        else
          v15 = *((_DWORD *)v12 + 5);
        v16 = *((_DWORD *)v12 + 12);
        v17 = v14;
        if ( v16 == 1 )
        {
          if ( v15 == -1 )
            v15 = v40;
          v20 = PopCoalescingCheck(v41, v15, v14);
          v15 = v20;
          if ( v20 )
            ++v39;
          v11 = v42;
          if ( v42 > v20 )
            v11 = v20;
          v21 = *((_DWORD *)v12 + 23);
          v17 = PopIdleScanInterval + *((_DWORD *)v12 + 22);
          if ( v14 )
          {
            if ( v21 <= PopIdleScanInterval )
              v23 = 0;
            else
              v23 = v21 - PopIdleScanInterval;
          }
          else
          {
            v22 = PopIdleScanInterval + v21;
            v17 = v11;
            v23 = v11;
            if ( v22 <= v11 )
            {
              v17 = PopIdleScanInterval + *((_DWORD *)v12 + 22);
              v23 = v22;
            }
          }
          v16 = *((_DWORD *)v12 + 12);
          *((_DWORD *)v12 + 22) = v17;
          *((_DWORD *)v12 + 23) = v23;
        }
        if ( v15 && v17 >= v15 && *((_DWORD *)v12 + 14) == 1 && (v14 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v12 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v12[3]);
          LOBYTE(v16) = 2;
          if ( (int)PopRequestPowerIrp(
                      v12[3],
                      v16,
                      *((_DWORD *)v12 + 13),
                      (unsigned int)PopDeviceIdleCompletion,
                      0LL,
                      0,
                      0LL) >= 0 )
          {
            *((_DWORD *)v12 + 3) = 0;
            v24 = *((_DWORD *)v12 + 13);
            ++dword_14043D5E0;
            *((_DWORD *)v12 + 14) = v24;
          }
        }
        else if ( v16 == 1 )
        {
          v25 = (unsigned __int8)v38;
          if ( !v14 )
            v25 = 1;
          v38 = v25;
        }
        v44 = v13;
        v43 = v14;
        v47 = 0LL;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK) )
          {
            DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v12[3], 0x67446F50u);
            v47 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
            {
              v27 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
              if ( v27 )
              {
                LOWORD(v37) = *(_WORD *)(v27 + 40) >> 1;
                v28 = *((_BYTE *)v12 + 52) - 1;
                UserData.Ptr = (ULONGLONG)(v12 + 3);
                v34 = v28;
                v29 = *((_BYTE *)v12 + 56) - 1;
                *(_QWORD *)&UserData.Size = 8LL;
                v35 = v29;
                v49 = &v47;
                v51 = &v37;
                v50 = 8LL;
                v52 = 2LL;
                v30 = *(unsigned __int16 *)(v27 + 40);
                v53 = *(_QWORD *)(v27 + 48);
                v56 = v12 + 2;
                v58 = (char *)v12 + 20;
                v60 = &v43;
                v62 = &v44;
                v64 = (char *)v12 + 12;
                v66 = &v34;
                v68 = &v35;
                v54 = v30;
                v55 = 0;
                v57 = 4LL;
                v59 = 4LL;
                v61 = 4LL;
                v63 = 4LL;
                v65 = 4LL;
                v67 = 1LL;
                v69 = 1LL;
                EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
                DeviceAttachmentBaseRefWithTag = v47;
              }
              if ( DeviceAttachmentBaseRefWithTag )
                ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x67446F50u);
            }
          }
        }
        if ( *((_DWORD *)v12 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v4 - 4, v15, v11);
        v4 = (__int64 *)*v4;
        v1 = v45;
      }
      while ( v4 != &PopIdleDetectList );
      v3 = v36;
      LOBYTE(v0) = v38;
      v2 = v39;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v5);
    }
    __writecr8(v3);
    v6 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v6 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    v7 = dword_1404186C8 % (unsigned int)PopIdleScanInterval;
    v8 = dword_1404186C8 / (unsigned int)PopIdleScanInterval;
    if ( dword_1404186CC )
    {
      v7 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval;
      v9 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      if ( v8 < v9 )
      {
        PopBackgroundTaskAllowed = 0;
        goto LABEL_11;
      }
      if ( v8 != v9 )
      {
LABEL_11:
        if ( !v2 || (_BYTE)v0 )
        {
          if ( !v6 && !dword_14041918C )
          {
            PopGetPowerSettingValue((__int64)&GUID_IDLE_BACKGROUND_TASK, v7, 3u, &Src, (__int64)ActivityId, &v46);
            ++Src;
            PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK);
            v7 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
            PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
          }
          if ( PopBackgroundTaskAllowed && PopSIdle >= 50 && !PopBackgroundTaskIgnoreCount && !dword_14041918C )
          {
            PopGetPowerSettingValue((__int64)&GUID_BACKGROUND_TASK_NOTIFICATION, v7, 0, &Src, (__int64)ActivityId, &v46);
            ++Src;
            PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, &Src);
            PopBackgroundTaskAllowed = 0;
            PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
          }
        }
        return 0LL;
      }
    }
    PopBackgroundTaskAllowed = 1;
    goto LABEL_11;
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v19, v18);
  }
  __writecr8(v3);
  return 0LL;
}
