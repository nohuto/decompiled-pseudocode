/*
 * XREFs of PopScanIdleList @ 0x1400EDD84
 * Callers:
 *     PopPolicySystemIdle @ 0x1406A1D00 (PopPolicySystemIdle.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400EBF7C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopGetPowerSettingValue @ 0x1400ED34C (PopGetPowerSettingValue.c)
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 *     PopRequestPowerIrp @ 0x140172EB0 (PopRequestPowerIrp.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCoalescingCheck @ 0x1402F72F4 (PopCoalescingCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402FD264 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402FEAC4 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x1406A12E8 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopScanIdleList()
{
  int v0; // ebx
  int v1; // r14d
  int v2; // esi
  KIRQL v3; // r15
  __int64 *v4; // r13
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // eax
  unsigned int v10; // r15d
  __int64 *v11; // rbx
  __int32 v12; // r12d
  unsigned __int32 v13; // esi
  unsigned int v14; // r14d
  int v15; // edx
  unsigned int v16; // r8d
  struct _KPRCB *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // eax
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v25; // rdx
  char v26; // al
  char v27; // al
  int v28; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  LPCGUID ActivityId; // [rsp+28h] [rbp-E0h]
  int Src; // [rsp+48h] [rbp-C0h] BYREF
  char v32; // [rsp+4Ch] [rbp-BCh] BYREF
  char v33; // [rsp+4Dh] [rbp-BBh] BYREF
  KIRQL v34; // [rsp+4Eh] [rbp-BAh]
  int v35; // [rsp+50h] [rbp-B8h] BYREF
  int v36; // [rsp+54h] [rbp-B4h]
  int v37; // [rsp+58h] [rbp-B0h]
  unsigned int v38; // [rsp+60h] [rbp-A8h]
  unsigned int v39; // [rsp+64h] [rbp-A4h]
  unsigned int v40; // [rsp+68h] [rbp-A0h]
  unsigned __int32 v41; // [rsp+70h] [rbp-98h] BYREF
  __int32 v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-88h]
  unsigned int v44; // [rsp+84h] [rbp-84h] BYREF
  _QWORD *v45; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  int *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  __int64 v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  __int64 *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  char *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  unsigned __int32 *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  __int32 *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  char *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  char *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  char *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]

  v1 = dword_140443AE8;
  v40 = dword_140443AE4;
  LOBYTE(v0) = 0;
  v2 = 0;
  Src = 0;
  v36 = v0;
  v37 = 0;
  v38 = *((_DWORD *)PopPolicy + 53);
  v39 = PopCurrentCoalescingSpindownTimeout;
  v43 = dword_140443AE8;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v34 = v3;
  if ( !byte_14046804C )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v4 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      v10 = 0;
      do
      {
        v11 = v4 - 4;
        v12 = _InterlockedExchange((volatile __int32 *)v4 - 7, 0);
        *((_DWORD *)v4 - 5) += v12;
        if ( v12 || *((_DWORD *)v11 + 2) )
          *(_DWORD *)v11 = 0;
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v11, PopIdleScanInterval);
        if ( !v13 )
          *((_DWORD *)v11 + 14) = 1;
        if ( v1 == 1 )
          v14 = *((_DWORD *)v11 + 4);
        else
          v14 = *((_DWORD *)v11 + 5);
        v15 = *((_DWORD *)v11 + 12);
        v16 = v13;
        if ( v15 == 1 )
        {
          if ( v14 == -1 )
            v14 = v38;
          v18 = PopCoalescingCheck(v39, v14, v13);
          v14 = v18;
          if ( v18 )
            ++v37;
          v10 = v40;
          if ( v40 > v18 )
            v10 = v18;
          v19 = *((_DWORD *)v11 + 23);
          v16 = PopIdleScanInterval + *((_DWORD *)v11 + 22);
          if ( v13 )
          {
            if ( v19 <= PopIdleScanInterval )
              v21 = 0;
            else
              v21 = v19 - PopIdleScanInterval;
          }
          else
          {
            v20 = PopIdleScanInterval + v19;
            v16 = v10;
            v21 = v10;
            if ( v20 <= v10 )
            {
              v16 = PopIdleScanInterval + *((_DWORD *)v11 + 22);
              v21 = v20;
            }
          }
          v15 = *((_DWORD *)v11 + 12);
          *((_DWORD *)v11 + 22) = v16;
          *((_DWORD *)v11 + 23) = v21;
        }
        if ( v14 && v16 >= v14 && *((_DWORD *)v11 + 14) == 1 && (v13 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v11 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v11[3]);
          LOBYTE(v15) = 2;
          if ( (int)PopRequestPowerIrp(
                      v11[3],
                      v15,
                      *((_DWORD *)v11 + 13),
                      (unsigned int)PopDeviceIdleCompletion,
                      0LL,
                      0,
                      0LL) >= 0 )
          {
            *((_DWORD *)v11 + 3) = 0;
            v22 = *((_DWORD *)v11 + 13);
            ++dword_140468048;
            *((_DWORD *)v11 + 14) = v22;
          }
        }
        else if ( v15 == 1 )
        {
          v23 = (unsigned __int8)v36;
          if ( !v13 )
            v23 = 1;
          v36 = v23;
        }
        v42 = v12;
        v41 = v13;
        v45 = 0LL;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK) )
          {
            DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v11[3], 0x67446F50u);
            v45 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
            {
              v25 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
              if ( v25 )
              {
                LOWORD(v35) = *(_WORD *)(v25 + 40) >> 1;
                v26 = *((_BYTE *)v11 + 52) - 1;
                UserData.Ptr = (ULONGLONG)(v11 + 3);
                v32 = v26;
                v27 = *((_BYTE *)v11 + 56) - 1;
                *(_QWORD *)&UserData.Size = 8LL;
                v33 = v27;
                v47 = &v45;
                v49 = &v35;
                v48 = 8LL;
                v50 = 2LL;
                v28 = *(unsigned __int16 *)(v25 + 40);
                v51 = *(_QWORD *)(v25 + 48);
                v54 = v11 + 2;
                v56 = (char *)v11 + 20;
                v58 = &v41;
                v60 = &v42;
                v62 = (char *)v11 + 12;
                v64 = &v32;
                v66 = &v33;
                v52 = v28;
                v53 = 0;
                v55 = 4LL;
                v57 = 4LL;
                v59 = 4LL;
                v61 = 4LL;
                v63 = 4LL;
                v65 = 1LL;
                v67 = 1LL;
                EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
                DeviceAttachmentBaseRefWithTag = v45;
              }
              if ( DeviceAttachmentBaseRefWithTag )
                ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x67446F50u);
            }
          }
        }
        if ( *((_DWORD *)v11 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v4 - 4, v14, v10);
        v4 = (__int64 *)*v4;
        v1 = v43;
      }
      while ( v4 != &PopIdleDetectList );
      v3 = v34;
      LOBYTE(v0) = v36;
      v2 = v37;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
    v5 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v5 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    v6 = dword_140442F68 % (unsigned int)PopIdleScanInterval;
    v7 = dword_140442F68 / (unsigned int)PopIdleScanInterval;
    if ( dword_140442F6C )
    {
      v6 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval;
      v8 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      if ( v7 < v8 )
      {
        PopBackgroundTaskAllowed = 0;
        goto LABEL_11;
      }
      if ( v7 != v8 )
      {
LABEL_11:
        if ( !v2 || (_BYTE)v0 )
        {
          if ( !v5 && !dword_140443ACC )
          {
            PopGetPowerSettingValue((__int64)&GUID_IDLE_BACKGROUND_TASK, v6, 3, &Src, (__int64)ActivityId, &v44);
            ++Src;
            PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK);
            v6 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
            PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
          }
          if ( PopBackgroundTaskAllowed && PopSIdle >= 50 && !PopBackgroundTaskIgnoreCount && !dword_140443ACC )
          {
            PopGetPowerSettingValue((__int64)&GUID_BACKGROUND_TASK_NOTIFICATION, v6, 0, &Src, (__int64)ActivityId, &v44);
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
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(v3);
  return 0LL;
}
