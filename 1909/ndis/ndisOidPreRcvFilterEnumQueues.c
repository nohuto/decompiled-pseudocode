/*
 * XREFs of ndisOidPreRcvFilterEnumQueues @ 0x1C0060240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     ?ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C005EADC (-ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterEnumQueues(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r12d
  _BYTE *v3; // rbp
  char v5; // si
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // r13
  _BYTE *OidSourceHandle; // rax
  unsigned int v10; // r14d
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  struct _NDIS_RECEIVE_QUEUE_INFO *v14; // r15
  _QWORD *v15; // r13
  _QWORD *v16; // rbp
  struct _NDIS_RECEIVE_QUEUE_BLOCK *v17; // rdx
  struct _NDIS_RECEIVE_QUEUE_BLOCK *Flink; // rbp
  __int64 v19; // rax
  KIRQL NewIrql; // [rsp+80h] [rbp+8h]

  v1 = *a1;
  v2 = 0;
  v3 = 0LL;
  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      25,
      28,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)a1);
  v6 = a1[4];
  if ( (*(_DWORD *)(v6 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_32;
  }
  *(_DWORD *)(v6 + 52) = 0;
  if ( !v1 )
  {
    v5 = 0;
    goto LABEL_32;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
  if ( *(_QWORD *)(v1 + 3544) )
  {
    v7 = a1[4];
    if ( *(_DWORD *)(v7 + 4) == 2 )
    {
      v8 = 0;
    }
    else
    {
      OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v7);
      v3 = OidSourceHandle;
      if ( !OidSourceHandle || *OidSourceHandle != 18 )
        goto LABEL_32;
      v8 = 1;
    }
    NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
    *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
    if ( v8 )
    {
      v10 = *((_DWORD *)v3 + 188);
    }
    else
    {
      v10 = *(_DWORD *)(v1 + 3492);
      if ( *(_QWORD *)(v1 + 4368) )
        ++v10;
    }
    v11 = 1096 * v10 + 16;
    *(_DWORD *)(a1[4] + 56) = v11;
    v12 = a1[4];
    if ( v11 <= *(_DWORD *)(v12 + 48) )
    {
      v13 = *(_QWORD *)(v12 + 40);
      *(_DWORD *)v13 = 1048960;
      v14 = (struct _NDIS_RECEIVE_QUEUE_INFO *)(v13 + 16);
      *(_DWORD *)(v13 + 4) = 16;
      *(_DWORD *)(v13 + 8) = v10;
      *(_DWORD *)(v13 + 12) = 1096;
      if ( v8 )
      {
        v15 = v3 + 736;
        v16 = (_QWORD *)*((_QWORD *)v3 + 92);
        while ( v16 != v15 && v2 < v10 )
        {
          ndisCopyReceiveQueueInfo(v14, (struct _NDIS_RECEIVE_QUEUE_BLOCK *)(v16 - 2));
          v16 = (_QWORD *)*v16;
          v14 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v14 + 1096);
          ++v2;
        }
      }
      else
      {
        v17 = *(struct _NDIS_RECEIVE_QUEUE_BLOCK **)(v1 + 4368);
        if ( v17 )
        {
          ndisCopyReceiveQueueInfo((struct _NDIS_RECEIVE_QUEUE_INFO *)(v13 + 16), v17);
          v14 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v14 + 1096);
          v2 = 1;
        }
        Flink = *(struct _NDIS_RECEIVE_QUEUE_BLOCK **)(v1 + 3464);
        while ( Flink != (struct _NDIS_RECEIVE_QUEUE_BLOCK *)(v1 + 3464) && v2 < v10 )
        {
          ndisCopyReceiveQueueInfo(v14, Flink);
          Flink = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)Flink->AdapterLink.Flink;
          v14 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v14 + 1096);
          ++v2;
        }
      }
      *(_QWORD *)(v1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
      v19 = a1[4];
      *((_DWORD *)a1 + 10) = 0;
      *(_DWORD *)(v19 + 52) = 1096 * v10 + 16;
    }
    else
    {
      *(_QWORD *)(v1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
LABEL_32:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      25,
      29,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      v1,
      *((_DWORD *)a1 + 10));
  return v5;
}
