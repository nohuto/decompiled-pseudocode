/*
 * XREFs of PnpDeviceActionWorker @ 0x14015D540
 * Callers:
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140008290 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14009AE00 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PnpLogActionQueueEvent @ 0x14015D9C4 (PnpLogActionQueueEvent.c)
 *     PnpDeleteDeviceActionRequest @ 0x14015DA84 (PnpDeleteDeviceActionRequest.c)
 *     PnpCompleteSystemStartProcess @ 0x1401947F4 (PnpCompleteSystemStartProcess.c)
 *     PpProcessClearProblem @ 0x14019B3E4 (PpProcessClearProblem.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PnpProcessRebalance @ 0x1402A1898 (PnpProcessRebalance.c)
 *     PoNotifyPnpActionQueueEvent @ 0x1402FB4A0 (PoNotifyPnpActionQueueEvent.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x140720024 (PiProcessReenumeration.c)
 *     PiQueryPowerRelations @ 0x140736FCC (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x1407371C0 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiProcessRequeryDeviceState @ 0x140745BF8 (PiProcessRequeryDeviceState.c)
 *     PiProcessStartSystemDevices @ 0x140789BA8 (PiProcessStartSystemDevices.c)
 *     PiConfigureDevice @ 0x140874DE4 (PiConfigureDevice.c)
 *     PiProcessClearDeviceProblem @ 0x140874EA0 (PiProcessClearDeviceProblem.c)
 *     PiProcessHaltDevice @ 0x140874FB4 (PiProcessHaltDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x140875040 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140875198 (PiProcessSetDeviceProblem.c)
 *     PiRestartDevice @ 0x1408752E8 (PiRestartDevice.c)
 */

__int64 PnpDeviceActionWorker()
{
  char v0; // r12
  char v1; // r13
  char v2; // r15
  int v3; // r14d
  KIRQL v4; // al
  __int64 v5; // rsi
  KIRQL v6; // bl
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // ecx
  int started; // eax
  int v16; // r15d
  __int64 *v17; // rbx
  __int64 v18; // rax
  int *v19; // rax
  struct _KEVENT *v20; // rcx
  int PowerRelations; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  char v32; // [rsp+48h] [rbp-19h]
  char v33; // [rsp+49h] [rbp-18h]
  char v34; // [rsp+4Ah] [rbp-17h]
  __int64 v35; // [rsp+50h] [rbp-11h] BYREF
  _QWORD NotificationStructure[5]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v37; // [rsp+80h] [rbp+1Fh] BYREF

  v37 = 0uLL;
  v35 = 0LL;
  memset(NotificationStructure, 0, sizeof(NotificationStructure));
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v32 = 0;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v34 = 0;
    v3 = 0;
    v33 = 1;
    v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v5 = PnpEnumerationRequestList;
    v6 = v4;
    if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
    {
      if ( *(__int64 **)(PnpEnumerationRequestList + 8) != &PnpEnumerationRequestList
        || (v7 = *(_QWORD *)PnpEnumerationRequestList,
            *(_QWORD *)(*(_QWORD *)PnpEnumerationRequestList + 8LL) != PnpEnumerationRequestList) )
      {
LABEL_98:
        __fastfail(3u);
      }
      PnpEnumerationRequestList = *(_QWORD *)PnpEnumerationRequestList;
      *(_QWORD *)(v7 + 8) = &PnpEnumerationRequestList;
      *(_BYTE *)(v5 + 76) = 1;
      goto LABEL_6;
    }
    if ( !v0 && !v1 && !v2 )
      break;
    v5 = 0LL;
LABEL_6:
    KeReleaseSpinLock(&PnpSpinLock, v6);
    if ( v5 )
    {
      v8 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(v5 + 56);
      if ( *(_QWORD *)&NullGuid.Data1 == *(_QWORD *)(v5 + 56) )
        v8 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(v5 + 64);
      if ( v8 )
      {
        v34 = 1;
        v37 = *(_OWORD *)(v5 + 56);
        KeGetCurrentThread()[1].WaitBlock[0].SparePtr = &v37;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v5 + 80, 0LL);
      v10 = *(_BYTE *)(v5 + 88);
      ExReleasePushLockEx(v5 + 80, 0LL);
      KeLeaveCriticalRegion();
      PoNotifyPnpActionQueueEvent(2LL, *(unsigned int *)(v5 + 24));
      *(_QWORD *)(v5 + 8) = v5;
      *(_QWORD *)v5 = v5;
      if ( PnpShutdownEvent.Header.SignalState )
      {
        v3 = -1073741431;
      }
      else if ( v10 )
      {
        v3 = -1073741536;
      }
      else
      {
        v11 = *(_QWORD **)(v5 + 16);
        if ( v11 )
          v12 = *(_QWORD *)(v11[39] + 40LL);
        else
          v12 = 0LL;
        if ( *(_DWORD *)(v12 + 300) != 788 )
        {
          if ( v11 )
            v13 = *(_QWORD *)(v11[39] + 40LL);
          else
            v13 = 0LL;
          if ( v13 )
          {
            ObfReferenceObjectWithTag(v11, 0x65706E50u);
            PnpLogActionQueueEvent(v13, *(unsigned int *)(v5 + 24), 1LL, 0LL);
          }
          v14 = *(_DWORD *)(v5 + 24);
          if ( v14 <= 12 )
          {
            if ( v14 != 12 )
            {
              if ( v14 > 5 )
              {
                if ( v14 == 6 )
                {
                  PowerRelations = PnpProcessRebalance(v5);
                  goto LABEL_52;
                }
                if ( v14 == 7 )
                {
                  v1 = 1;
                }
                else
                {
                  if ( v14 <= 10 )
                    goto LABEL_26;
                  PowerRelations = PiProcessRequeryDeviceState(v5);
LABEL_52:
                  v3 = PowerRelations;
                }
LABEL_28:
                if ( v13 )
                {
                  PnpLogActionQueueEvent(v13, *(unsigned int *)(v5 + 24), 2LL, (unsigned int)v3);
                  ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 16), 0x65706E50u);
                }
                goto LABEL_30;
              }
              if ( v14 == 5 )
              {
                v23 = *(_QWORD *)(v5 + 16);
                if ( v23 )
                  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
                else
                  v24 = 0LL;
                PowerRelations = PiQueryPowerRelations(v24, 0LL);
                goto LABEL_52;
              }
              if ( !v14 )
              {
                v0 = 1;
                goto LABEL_28;
              }
              v25 = v14 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( !v26 )
                {
                  PowerRelations = PpProcessClearProblem(v5);
                  goto LABEL_52;
                }
                v31 = v26 - 1;
                if ( v31 )
                {
                  if ( v31 == 1 )
                  {
                    PowerRelations = PiProcessHaltDevice(v5);
                    goto LABEL_52;
                  }
                  goto LABEL_94;
                }
              }
LABEL_92:
              PowerRelations = PiProcessClearDeviceProblem(v5);
              goto LABEL_52;
            }
LABEL_84:
            PowerRelations = PiRestartDevice(v5);
            goto LABEL_52;
          }
          if ( v14 == 18 )
          {
            v32 = 1;
            goto LABEL_28;
          }
          if ( v14 > 18 )
          {
            if ( v14 == 19 )
            {
              HIDWORD(NotificationStructure[2]) = 0;
              *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
              LODWORD(NotificationStructure[0]) = 2359297;
              NotificationStructure[3] = 0LL;
              NotificationStructure[4] = 0xFFFFFFFFLL;
              IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v5 + 16), NotificationStructure, 0LL, 0LL);
            }
            else if ( v14 != 20 )
            {
              if ( v14 <= 24 )
              {
                PowerRelations = PiConfigureDevice(v5);
                goto LABEL_52;
              }
              if ( v14 != 25 )
                goto LABEL_94;
              goto LABEL_92;
            }
            PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(v5 + 16));
            goto LABEL_28;
          }
          v27 = v14 - 13;
          if ( !v27 )
          {
            v3 = PiProcessResourceRequirementsChanged(v5);
            if ( v3 < 0 )
            {
              v0 = 1;
              v3 = 0;
            }
            goto LABEL_28;
          }
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( !v29 )
            {
              PowerRelations = PiProcessSetDeviceProblem(v5);
              goto LABEL_52;
            }
            v30 = v29 - 1;
            if ( !v30 )
              goto LABEL_84;
            if ( v30 != 1 )
            {
LABEL_94:
              v3 = -1073741823;
              goto LABEL_28;
            }
            started = PiProcessStartSystemDevices(v5);
          }
          else
          {
LABEL_26:
            started = PiProcessReenumeration(v5);
          }
          v3 = started;
          v33 = 0;
          goto LABEL_28;
        }
        v3 = -1073741823;
      }
LABEL_30:
      PoNotifyPnpActionQueueEvent(3LL, *(unsigned int *)(v5 + 24));
      v16 = 1;
      do
      {
        v17 = *(__int64 **)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
          goto LABEL_98;
        v18 = *v17;
        if ( *(__int64 **)(*v17 + 8) != v17 )
          goto LABEL_98;
        *(_QWORD *)v5 = v18;
        *(_QWORD *)(v18 + 8) = v5;
        PoNotifyPnpActionQueueEvent(1LL, *((unsigned int *)v17 + 6));
        v19 = (int *)v17[6];
        if ( v19 )
          *v19 = v3;
        v20 = (struct _KEVENT *)v17[5];
        if ( v20 )
          KeSetEvent(v20, 0, 0);
        if ( v17 == (__int64 *)v5 )
        {
          v16 = 0;
          if ( v33 )
            ObfDereferenceObject((PVOID)v17[2]);
        }
        PnpDeleteDeviceActionRequest(v17);
      }
      while ( v16 );
      v2 = v32;
      if ( v34 )
      {
        v2 = v32;
        KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
      }
    }
    else if ( v0 || v1 )
    {
      LODWORD(v35) = 3;
      BYTE4(v35) = PnPBootDriversInitialized;
      ObfReferenceObject(*((PVOID *)IopRootDeviceNode + 4));
      PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, 0, (unsigned int)&v35, v1 == 0 ? 3 : 0, v0, 0, 0);
      v0 = 0;
      v1 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess();
      v2 = 0;
      v32 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KeReleaseSpinLock(&PnpSpinLock, v6);
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
