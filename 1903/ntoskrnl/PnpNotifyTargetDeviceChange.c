/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x14066C01C
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x140669DDC (PnpProcessCustomDeviceEvent.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x14072E5C0 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408624E8 (PnpCancelRemoveOnHungDevices.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x14087BF24 (PiSendTargetDeviceRemoveCanceledNotification.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14087C2CC (PipSendTargetDeviceQueryRemoveNotification.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireGuardedMutex @ 0x14009C4C0 (KeAcquireGuardedMutex.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopGetSessionIdFromPDO @ 0x140718220 (IopGetSessionIdFromPDO.c)
 *     PnpDereferenceNotify @ 0x140735A08 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140735C38 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, _QWORD *a3, _QWORD *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // r13
  unsigned __int64 CurrentServerSilo; // rax
  int SessionIdFromPDO; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v15; // rdx
  int v16; // ebx
  int v17; // eax
  GUID v18; // xmm0
  void *v19; // r15
  int v20; // ebx
  void *v21; // r12
  unsigned __int64 v22; // rax
  struct _KTHREAD *v23; // rcx
  char v24; // [rsp+20h] [rbp-58h]
  int v25; // [rsp+24h] [rbp-54h] BYREF
  int v26; // [rsp+28h] [rbp-50h]
  PVOID Objecta; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]
  _QWORD *v29; // [rsp+40h] [rbp-38h]
  _QWORD v30[4]; // [rsp+48h] [rbp-30h] BYREF

  Objecta = Object;
  v29 = a4;
  memset(v30, 0, sizeof(v30));
  v26 = -1;
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v18 = *Source1;
    LODWORD(v30[0]) = 2097153;
    *(GUID *)((char *)v30 + 4) = v18;
  }
  KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v9 = *(_QWORD **)(v8 + 480);
    v24 = 1;
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 472);
    v24 = 0;
  }
  v10 = (_QWORD *)(v8 + 472);
  while ( v9 != v10 )
  {
    P = v9;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v9 + 5) == (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
    {
      SessionIdFromPDO = v26;
    }
    else
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO(Objecta);
      v26 = SessionIdFromPDO;
    }
    ++*((_WORD *)v9 + 28);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
    if ( (SessionIdFromPDO == -1 || *((_DWORD *)v9 + 5) == SessionIdFromPDO) && !*((_BYTE *)v9 + 58) )
    {
      if ( a3 )
      {
        a3[3] = v9[10];
        v15 = a3;
      }
      else
      {
        v30[3] = v9[10];
        v15 = v30;
      }
      v16 = PnpNotifyDriverCallback(v9, v15, &v25);
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KeLeaveCriticalRegion();
      v17 = v25;
      if ( v16 < 0 )
        v17 = 0;
      v25 = v17;
      if ( v17 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v29 )
          *v29 = v9[6];
        v19 = v9;
        *(GUID *)((char *)v30 + 4) = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
        do
        {
          v20 = -1;
          v21 = v9;
          v22 = PsGetCurrentServerSilo();
          if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(v22) )
            v20 = IopGetSessionIdFromPDO(Objecta);
          ++*((_WORD *)v9 + 28);
          KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
          v23 = KeGetCurrentThread();
          --v23->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
          if ( (v20 == -1 || *((_DWORD *)v9 + 5) == v20) && !*((_BYTE *)v9 + 58) )
          {
            v30[3] = v9[10];
            PnpNotifyDriverCallback(v9, v30, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v9[9]);
          KeLeaveCriticalRegion();
          KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
          v9 = (_QWORD *)v9[1];
          PnpDereferenceNotify(v21);
          if ( v21 == v19 )
            PnpDereferenceNotify(v19);
        }
        while ( v9 != v10 );
        v7 = v25;
        break;
      }
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KeLeaveCriticalRegion();
    }
    KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
    if ( v24 )
      v9 = (_QWORD *)v9[1];
    else
      v9 = (_QWORD *)*v9;
    PnpDereferenceNotify(P);
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Objecta, 0x4E706E50u);
  return v7;
}
