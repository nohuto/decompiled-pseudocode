/*
 * XREFs of ndisQueueRestoreRequestsOnTop @ 0x1C00487B0
 * Callers:
 *     ndisMRestoreFilterSettings @ 0x1C004623C (ndisMRestoreFilterSettings.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 *     ndisFQueueOidRequest @ 0x1C00211E8 (ndisFQueueOidRequest.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisMQueueOidRequest @ 0x1C004616C (ndisMQueueOidRequest.c)
 */

__int64 __fastcall ndisQueueRestoreRequestsOnTop(__int64 a1, _QWORD **a2, int a3, char a4)
{
  __int64 v5; // rbx
  bool v6; // r13
  unsigned int v7; // ebp
  __int64 v9; // r12
  unsigned int v10; // r15d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v12; // rsi
  char v13; // al
  __int64 v14; // rdi
  __int64 v15; // r12
  char v16; // al
  int v17; // ebx
  void *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  void *v21; // r10
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rbx
  int v26; // [rsp+30h] [rbp-38h] BYREF
  int v27; // [rsp+34h] [rbp-34h] BYREF
  int v28; // [rsp+38h] [rbp-30h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0LL;
  v6 = 0;
  v7 = a3;
  v9 = a1;
  v10 = -1073741823;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x41u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a3);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_49;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a4 )
  {
    v13 = *(_BYTE *)v9;
    v14 = v9;
  }
  else
  {
    v14 = *(_QWORD *)(v9 + 2616);
    v13 = *(_BYTE *)v14;
    if ( *(_BYTE *)v14 == 5 )
    {
      while ( 1 )
      {
        v6 = ndisReferenceRefEx((PKSPIN_LOCK)(v14 + 320), 0xFu, &v26);
        if ( v6 )
          break;
        v14 = *(_QWORD *)(v14 + 424);
        v13 = *(_BYTE *)v14;
        if ( *(_BYTE *)v14 != 5 )
          goto LABEL_10;
      }
      v17 = 1;
      if ( v7 > 1 )
      {
        while ( 1 )
        {
          v6 = ndisReferenceRefEx((PKSPIN_LOCK)(v14 + 320), 0xFu, &v27);
          if ( !v6 )
            break;
          if ( ++v17 >= v7 )
            goto LABEL_22;
        }
        for ( ; v17; --v17 )
          ndisDereferenceRef((PKSPIN_LOCK)(v14 + 320), 0xFu);
LABEL_22:
        v9 = a1;
      }
      v13 = *(_BYTE *)v14;
      if ( *(_BYTE *)v14 != 5 )
      {
LABEL_10:
        v5 = 0LL;
        goto LABEL_11;
      }
      v5 = v14;
    }
  }
LABEL_11:
  if ( v13 != 17 )
    v14 = 0LL;
  if ( v5 )
  {
    if ( !v6 )
      goto LABEL_47;
    v15 = v5 + 320;
    v16 = ndisReferenceRefEx((PKSPIN_LOCK)(v5 + 320), 0xCu, &v28);
  }
  else
  {
    v16 = ndisReferenceMiniport(v9);
    v15 = 320LL;
  }
  if ( v16 )
  {
    v18 = (void *)v5;
    if ( !v5 )
      v18 = (void *)v14;
    v12[1].Parameter = v18;
    if ( v5 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 144));
      *(_QWORD *)(v5 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 160) = 2298604;
      while ( 1 )
      {
        v19 = *a2;
        if ( *a2 == a2 )
          break;
        if ( (_QWORD **)v19[1] != a2 )
          goto LABEL_43;
        v20 = (_QWORD *)*v19;
        if ( *(_QWORD **)(*v19 + 8LL) != v19 )
          goto LABEL_43;
        *a2 = v20;
        v20[1] = a2;
        if ( (unsigned int)ndisFQueueOidRequest(v5, (__int64)(v19 - 9)) )
          ExFreePoolWithTag(v21, 0);
      }
      *(_QWORD *)(v5 + 152) = 0LL;
      *(_DWORD *)(v5 + 160) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 144));
    }
    else
    {
      while ( 1 )
      {
        v22 = *a2;
        if ( *a2 == a2 )
          break;
        if ( (_QWORD **)v22[1] != a2 || (v23 = (_QWORD *)*v22, *(_QWORD **)(*v22 + 8LL) != v22) )
LABEL_43:
          __fastfail(3u);
        *a2 = v23;
        v24 = v22 - 9;
        v23[1] = a2;
        if ( (unsigned int)ndisMQueueOidRequest(v14, (__int64)(v22 - 9)) )
          ExFreePoolWithTag(v24, 0);
      }
    }
    v12[1].List.Flink = retaddr;
    v12[1].List.Blink = 0LL;
    v12->WorkerRoutine = (void (__fastcall *)(void *))ndisDoOidRequests;
    v12->Parameter = v12;
    v12->List.Flink = 0LL;
    ExQueueWorkItem(v12, (WORK_QUEUE_TYPE)40);
    v10 = 259;
    goto LABEL_48;
  }
  if ( v6 && v7 )
  {
    do
    {
      ndisDereferenceRef((PKSPIN_LOCK)v15, 0xFu);
      --v7;
    }
    while ( v7 );
  }
LABEL_47:
  ExFreePoolWithTag(v12, 0);
LABEL_48:
  v9 = a1;
LABEL_49:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(0x42u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v9, a2, v10);
  return v10;
}
