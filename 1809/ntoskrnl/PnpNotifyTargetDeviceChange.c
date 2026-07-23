/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x14059046C
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x14058F8E0 (PnpProcessCustomDeviceEvent.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x1406F1534 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408291EC (PnpCancelRemoveOnHungDevices.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x140841744 (PiSendTargetDeviceRemoveCanceledNotification.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140841B28 (PipSendTargetDeviceQueryRemoveNotification.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400067D0 (PsGetServerSiloServiceSessionId.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     IopGetSessionIdFromPDO @ 0x1406ECED4 (IopGetSessionIdFromPDO.c)
 *     PnpDereferenceNotify @ 0x140700378 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x1407049F4 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int *v14; // rdx
  int v15; // ebx
  int v16; // ecx
  GUID v17; // xmm0
  void *v18; // r15
  int v19; // ebx
  void *v20; // r12
  __int64 v21; // rax
  struct _KTHREAD *v22; // rcx
  char v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+24h] [rbp-54h] BYREF
  int SessionIdFromPDO; // [rsp+28h] [rbp-50h]
  _QWORD *v26; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]
  _QWORD *v28; // [rsp+40h] [rbp-38h]
  int v29; // [rsp+48h] [rbp-30h] BYREF
  GUID v30; // [rsp+4Ch] [rbp-2Ch]
  __int64 v31; // [rsp+60h] [rbp-18h]

  v28 = a4;
  SessionIdFromPDO = -1;
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v17 = *Source1;
    v29 = 2097153;
    v30 = v17;
  }
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v9 = *(_QWORD **)(v8 + 480);
    v23 = 1;
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 472);
    v23 = 0;
  }
  v10 = (_QWORD *)(v8 + 472);
  v26 = v10;
  while ( v9 != v10 )
  {
    P = v9;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromPDO = IopGetSessionIdFromPDO(Object);
    ++*((_WORD *)v9 + 28);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
    if ( (SessionIdFromPDO == -1 || *((_DWORD *)v9 + 5) == SessionIdFromPDO) && !*((_BYTE *)v9 + 58) )
    {
      if ( a3 )
      {
        *(_QWORD *)(a3 + 24) = v9[10];
        v14 = (int *)a3;
      }
      else
      {
        v31 = v9[10];
        v14 = &v29;
      }
      v15 = PnpNotifyDriverCallback(v9, v14, &v24);
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v16 = v24;
      if ( v15 < 0 )
        v16 = 0;
      v24 = v16;
      if ( v16 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v28 )
          *v28 = v9[6];
        v18 = v9;
        v30 = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
        do
        {
          v19 = -1;
          v20 = v9;
          v21 = PsGetCurrentServerSilo();
          if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(v21) )
            v19 = IopGetSessionIdFromPDO(Object);
          ++*((_WORD *)v9 + 28);
          KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
          if ( (v19 == -1 || *((_DWORD *)v9 + 5) == v19) && !*((_BYTE *)v9 + 58) )
          {
            v31 = v9[10];
            PnpNotifyDriverCallback(v9, &v29, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v9[9]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
          v9 = (_QWORD *)v9[1];
          PnpDereferenceNotify(v20);
          if ( v20 == v18 )
            PnpDereferenceNotify(v18);
        }
        while ( v9 != v26 );
        v7 = v24;
        break;
      }
      v10 = v26;
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    if ( v23 )
      v9 = (_QWORD *)v9[1];
    else
      v9 = (_QWORD *)*v9;
    PnpDereferenceNotify(P);
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Object, 0x4E706E50u);
  return v7;
}
