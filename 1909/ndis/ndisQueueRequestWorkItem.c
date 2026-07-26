/*
 * XREFs of ndisQueueRequestWorkItem @ 0x1C001A984
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C0003030 (ndisFOidRequestCompleteInternal.c)
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C001DCEC (ndisMOidRequestCompleteInternal.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisFQueueOidRequest @ 0x1C003E478 (ndisFQueueOidRequest.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisMQueueOidRequest @ 0x1C006B814 (ndisMQueueOidRequest.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(char *a1, __int64 a2, int a3)
{
  __int64 v6; // rbp
  unsigned int v7; // r14d
  char *v8; // r13
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v10; // edx
  int v11; // r8d
  struct _WORK_QUEUE_ITEM *v12; // rsi
  KSPIN_LOCK *v13; // rcx
  KIRQL v14; // al
  struct _NDIS_REFCOUNT_BLOCK *v15; // rcx
  KIRQL v16; // bl
  int v17; // edx
  char v18; // al
  KIRQL v20; // di
  unsigned int v21; // eax
  KIRQL v22; // dl
  KSPIN_LOCK *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned int v26; // eax
  KIRQL v27; // r9
  _LIST_ENTRY *retaddr; // [rsp+68h] [rbp+0h]

  v6 = 0LL;
  v7 = -1073741823;
  v8 = 0LL;
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    if ( a3 == 17 )
    {
      v6 = (__int64)a1;
    }
    else
    {
      if ( a3 != 5 )
        goto LABEL_34;
      v8 = a1;
    }
    v12[1].Parameter = a1;
    if ( v6 )
    {
      if ( a2 )
      {
        v18 = ndisReferenceMiniport(v6);
        goto LABEL_10;
      }
      ndisReferenceMiniportNoCheck(v6);
    }
    else
    {
      if ( !v8 )
        goto LABEL_34;
      v13 = (KSPIN_LOCK *)(v8 + 312);
      if ( a2 )
      {
        v18 = ndisReferenceRefEx(v13);
        goto LABEL_10;
      }
      v14 = KeAcquireSpinLockRaiseToDpc(v13);
      v15 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v8 + 41);
      ++*((_WORD *)v8 + 160);
      v16 = v14;
      NdisReferenceWithTag(v15, 0xCu);
      KeReleaseSpinLock((PKSPIN_LOCK)v8 + 39, v16);
    }
    v18 = 1;
LABEL_10:
    if ( v18 == 1 )
    {
      if ( a2 )
      {
        if ( v6 )
        {
          LOBYTE(v24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
          *(_QWORD *)(v6 + 520) = KeGetCurrentThread();
          v26 = ndisMQueueOidRequest(v6, a2, v25, v24);
          *(_QWORD *)(v6 + 520) = 0LL;
          v23 = (KSPIN_LOCK *)(v6 + 96);
          v7 = v26;
          v22 = v27;
        }
        else
        {
          v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)v8 + 4) + 96LL));
          *(_QWORD *)(*((_QWORD *)v8 + 4) + 520LL) = KeGetCurrentThread();
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v8 + 18);
          *((_QWORD *)v8 + 19) = KeGetCurrentThread();
          v21 = ndisFQueueOidRequest(v8, a2);
          *((_QWORD *)v8 + 19) = 0LL;
          v7 = v21;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v8 + 18);
          v22 = v20;
          *(_QWORD *)(*((_QWORD *)v8 + 4) + 520LL) = 0LL;
          v23 = (KSPIN_LOCK *)(*((_QWORD *)v8 + 4) + 96LL);
        }
        KeReleaseSpinLock(v23, v22);
      }
      else
      {
        v7 = 0;
      }
      if ( !v7 )
      {
        v12[1].List.Blink = 0LL;
        v12[1].List.Flink = retaddr;
        v12->List.Flink = 0LL;
        v12->WorkerRoutine = (void (__fastcall *)(void *))ndisDoOidRequests;
        v12->Parameter = v12;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            11,
            19,
            (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
            a2,
            (char)a1);
        }
        ExQueueWorkItem(v12, (WORK_QUEUE_TYPE)40);
        return 259;
      }
      goto LABEL_31;
    }
    if ( v18 )
    {
LABEL_31:
      if ( v6 )
        ndisDereferenceMiniport(v6, 0x47u);
      else
        ndisDereferenceRef((PKSPIN_LOCK)v8 + 39, 0xCu);
    }
LABEL_34:
    ExFreePoolWithTag(v12, 0);
    return v7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      v11,
      18,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      a3,
      a2);
  }
  return (unsigned int)-1073741670;
}
