/*
 * XREFs of NdisFIndicateStatus @ 0x1C001B7A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     NdisIsStatusIndicationCloneable @ 0x1C008DDB0 (NdisIsStatusIndicationCloneable.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00903E8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ndisReferenceRefNoCheck @ 0x1C00C7C2C (ndisReferenceRefNoCheck.c)
 */

void __stdcall NdisFIndicateStatus(NDIS_HANDLE NdisFilterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  char v4; // al
  KIRQL v5; // al
  char *v6; // rsi
  KIRQL v7; // bp
  int v8; // edx
  _OWORD *PoolWithTag; // rax
  int v10; // edx
  __int64 v11; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  _QWORD Parameter[7]; // [rsp+58h] [rbp-40h] BYREF

  memset(Parameter, 0, sizeof(Parameter));
  v4 = *((_BYTE *)NdisFilterHandle + 288);
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = StatusIndication;
  if ( v4
    || KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFIndicateStatusWrapper, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    v6 = (char *)NdisFilterHandle + 248;
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v7 = v5;
    while ( *(_QWORD *)v6 )
      v6 = (char *)(*(_QWORD *)v6 + 80LL);
    if ( v5 < 2u )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *(_QWORD *)v6 = StatusIndication;
      StatusIndication->NdisReserved[0] = 0LL;
      StatusIndication->NdisReserved[1] = &Event;
      goto LABEL_12;
    }
    if ( (unsigned __int8)NdisIsStatusIndicationCloneable((unsigned int)StatusIndication->StatusCode) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, StatusIndication->StatusBufferSize + 112LL, 0x2020444Eu);
      *(_QWORD *)v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = *(_OWORD *)&StatusIndication->Header.Type;
        PoolWithTag[1] = *(_OWORD *)&StatusIndication->PortNumber;
        PoolWithTag[2] = *(_OWORD *)&StatusIndication->DestinationHandle;
        PoolWithTag[3] = *(_OWORD *)&StatusIndication->StatusBuffer;
        PoolWithTag[4] = *(_OWORD *)&StatusIndication->Guid.Data2;
        PoolWithTag[5] = *(_OWORD *)StatusIndication->NdisReserved;
        PoolWithTag[6] = *(_OWORD *)&StatusIndication->NdisReserved[2];
        *(_QWORD *)(*(_QWORD *)v6 + 48LL) = *(_QWORD *)v6 + 112LL;
        memmove(*(void **)(*(_QWORD *)v6 + 48LL), StatusIndication->StatusBuffer, StatusIndication->StatusBufferSize);
        v11 = *(_QWORD *)v6;
        *(_QWORD *)(v11 + 80) = 0LL;
        *(_QWORD *)(v11 + 88) = 0LL;
        ndisReferenceRefNoCheck((PKSPIN_LOCK)NdisFilterHandle + 39);
LABEL_12:
        *((_BYTE *)NdisFilterHandle + 288) = 1;
        ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
        *((_QWORD *)NdisFilterHandle + 19) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
        if ( v7 < 2u )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          24,
          43,
          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      }
      ++*((_DWORD *)NdisFilterHandle + 75);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          24,
          44,
          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      }
      ++*((_DWORD *)NdisFilterHandle + 76);
    }
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  }
}
