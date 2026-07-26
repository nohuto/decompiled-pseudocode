/*
 * XREFs of ndisQueueRequestWorkItem @ 0x1C0020FA4
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C000AE50 (ndisFOidRequestCompleteInternal.c)
 *     ndisQueueOidRequest @ 0x1C000C300 (ndisQueueOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 *     ndisFQueueOidRequest @ 0x1C00211E8 (ndisFQueueOidRequest.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qLq @ 0x1C0043DA4 (WPP_SF_qLq.c)
 *     ndisMQueueOidRequest @ 0x1C004616C (ndisMQueueOidRequest.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  char *v5; // r15
  unsigned int v8; // ebp
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v10; // rsi
  KSPIN_LOCK *v11; // rcx
  KIRQL v12; // al
  struct _NDIS_REFCOUNT_BLOCK *v13; // rcx
  KIRQL v14; // bl
  char v15; // al
  KIRQL v17; // di
  unsigned int v18; // eax
  KIRQL v19; // dl
  KSPIN_LOCK *v20; // rcx
  KIRQL v21; // bl
  unsigned int v22; // eax
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]
  int v24; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0LL;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qLq(18LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a3, a2);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_34;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a3 == 17 )
  {
    v3 = (__int64)a1;
  }
  else
  {
    if ( a3 != 5 )
      goto LABEL_33;
    v5 = a1;
  }
  v10[1].Parameter = a1;
  if ( v3 )
  {
    if ( !a2 )
    {
      ndisReferenceMiniportNoCheck(v3, 0x47u);
      goto LABEL_11;
    }
    v15 = ndisReferenceMiniport(v3);
  }
  else
  {
    if ( !v5 )
      goto LABEL_33;
    v11 = (KSPIN_LOCK *)(v5 + 320);
    if ( !a2 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(v11);
      v13 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v5 + 42);
      ++*((_WORD *)v5 + 164);
      v14 = v12;
      NdisReferenceWithTag(v13, 0xCu);
      KeReleaseSpinLock((PKSPIN_LOCK)v5 + 40, v14);
LABEL_11:
      v15 = 1;
      goto LABEL_12;
    }
    v15 = ndisReferenceRefEx(v11, 0xCu, &v24);
  }
LABEL_12:
  if ( v15 != 1 )
  {
    if ( v15 )
    {
LABEL_30:
      if ( v3 )
        ndisDereferenceMiniport(v3, 0x47u);
      else
        ndisDereferenceRef((PKSPIN_LOCK)v5 + 40, 0xCu);
    }
LABEL_33:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_34;
  }
  if ( a2 )
  {
    if ( v3 )
    {
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1864) = 2295355;
      v22 = ndisMQueueOidRequest(v3, a2);
      *(_QWORD *)(v3 + 520) = 0LL;
      v20 = (KSPIN_LOCK *)(v3 + 96);
      *(_DWORD *)(v3 + 1864) = 0;
      v8 = v22;
      v19 = v21;
    }
    else
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)v5 + 4) + 96LL));
      *(_QWORD *)(*((_QWORD *)v5 + 4) + 520LL) = KeGetCurrentThread();
      *(_DWORD *)(*((_QWORD *)v5 + 4) + 1864LL) = 2295363;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 18);
      *((_QWORD *)v5 + 19) = KeGetCurrentThread();
      *((_DWORD *)v5 + 40) = 2295364;
      v18 = ndisFQueueOidRequest(v5, a2);
      *((_QWORD *)v5 + 19) = 0LL;
      *((_DWORD *)v5 + 40) = 0;
      v8 = v18;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 18);
      v19 = v17;
      *(_QWORD *)(*((_QWORD *)v5 + 4) + 520LL) = 0LL;
      *(_DWORD *)(*((_QWORD *)v5 + 4) + 1864LL) = 0;
      v20 = (KSPIN_LOCK *)(*((_QWORD *)v5 + 4) + 96LL);
    }
    KeReleaseSpinLock(v20, v19);
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
    goto LABEL_30;
  v10[1].List.Blink = 0LL;
  v10[1].List.Flink = retaddr;
  v10->List.Flink = 0LL;
  v10->WorkerRoutine = (void (__fastcall *)(void *))ndisDoOidRequests;
  v10->Parameter = v10;
  ExQueueWorkItem(v10, (WORK_QUEUE_TYPE)40);
  v8 = 259;
  if ( (unsigned __int8)byte_1C00A025A < 4u )
    return v8;
  WPP_SF_qD(19LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v10, 259LL);
LABEL_34:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(20LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, v8);
  return v8;
}
