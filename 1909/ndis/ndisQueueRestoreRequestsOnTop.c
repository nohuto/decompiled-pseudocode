/*
 * XREFs of ndisQueueRestoreRequestsOnTop @ 0x1C006FC44
 * Callers:
 *     ndisMRestoreFilterSettings @ 0x1C006B874 (ndisMRestoreFilterSettings.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ndisFQueueOidRequest @ 0x1C003E478 (ndisFQueueOidRequest.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisMQueueOidRequest @ 0x1C006B814 (ndisMQueueOidRequest.c)
 */

__int64 __fastcall ndisQueueRestoreRequestsOnTop(__int64 a1, _QWORD **a2, unsigned int a3, char a4)
{
  KSPIN_LOCK *v5; // rbx
  bool v6; // r13
  unsigned int v7; // r15d
  _QWORD **v8; // r14
  __int64 v9; // rbp
  unsigned int v10; // r12d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v12; // edx
  struct _WORK_QUEUE_ITEM *v13; // rsi
  char v14; // al
  __int64 v15; // rdi
  __int64 v16; // rbp
  char v17; // al
  int v18; // ebx
  _LIST_ENTRY *v19; // r10
  void *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  void *v23; // r10
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  void *v26; // r9
  int v28; // [rsp+40h] [rbp-38h] BYREF
  int v29; // [rsp+44h] [rbp-34h] BYREF
  int v30; // [rsp+48h] [rbp-30h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+78h] [rbp+0h]

  v5 = 0LL;
  v6 = 0;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  v10 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      46,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      a3);
  }
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_49;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a4 )
  {
    v14 = *(_BYTE *)v9;
    v15 = v9;
  }
  else
  {
    v15 = *(_QWORD *)(v9 + 2600);
    v14 = *(_BYTE *)v15;
    if ( *(_BYTE *)v15 == 5 )
    {
      while ( 1 )
      {
        v6 = ndisReferenceRefEx((PKSPIN_LOCK)(v15 + 312), 0xFu, &v28);
        if ( v6 )
          break;
        v15 = *(_QWORD *)(v15 + 416);
        v14 = *(_BYTE *)v15;
        if ( *(_BYTE *)v15 != 5 )
          goto LABEL_10;
      }
      v18 = 1;
      if ( v7 > 1 )
      {
        while ( 1 )
        {
          v6 = ndisReferenceRefEx((PKSPIN_LOCK)(v15 + 312), 0xFu, &v29);
          if ( !v6 )
            break;
          if ( ++v18 >= v7 )
            goto LABEL_22;
        }
        for ( ; v18; --v18 )
          ndisDereferenceRef((PKSPIN_LOCK)(v15 + 312), 0xFu);
LABEL_22:
        v9 = a1;
      }
      v14 = *(_BYTE *)v15;
      if ( *(_BYTE *)v15 != 5 )
      {
LABEL_10:
        v5 = 0LL;
        goto LABEL_11;
      }
      v5 = (KSPIN_LOCK *)v15;
    }
  }
LABEL_11:
  if ( v14 != 17 )
    v15 = 0LL;
  if ( v5 )
  {
    if ( !v6 )
      goto LABEL_47;
    v16 = (__int64)(v5 + 39);
    v17 = ndisReferenceRefEx(v5 + 39, 0xCu, &v30);
  }
  else
  {
    v17 = ndisReferenceMiniport(v9);
    v16 = 312LL;
  }
  v19 = 0LL;
  if ( v17 )
  {
    v20 = v5;
    if ( !v5 )
      v20 = (void *)v15;
    v13[1].Parameter = v20;
    if ( v5 )
    {
      KeAcquireSpinLockAtDpcLevel(v5 + 18);
      v5[19] = (KSPIN_LOCK)KeGetCurrentThread();
      while ( 1 )
      {
        v21 = *v8;
        if ( *v8 == v8 )
          break;
        if ( (_QWORD **)v21[1] != v8 )
          goto LABEL_43;
        v22 = (_QWORD *)*v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 )
          goto LABEL_43;
        *v8 = v22;
        v22[1] = v8;
        if ( (unsigned int)ndisFQueueOidRequest((__int64)v5, (__int64)(v21 - 9)) )
          ExFreePoolWithTag(v23, 0);
      }
      v5[19] = 0LL;
      KeReleaseSpinLockFromDpcLevel(v5 + 18);
      v19 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v24 = *v8;
        if ( *v8 == v8 )
          break;
        if ( (_QWORD **)v24[1] != v8 || (v25 = (_QWORD *)*v24, *(_QWORD **)(*v24 + 8LL) != v24) )
LABEL_43:
          __fastfail(3u);
        *v8 = v25;
        v25[1] = v8;
        if ( (unsigned int)ndisMQueueOidRequest(v15, (__int64)(v24 - 9)) )
        {
          ExFreePoolWithTag(v26, 0);
          v19 = 0LL;
        }
      }
    }
    v13[1].List.Flink = retaddr;
    v13[1].List.Blink = v19;
    v13->WorkerRoutine = (void (__fastcall *)(void *))ndisDoOidRequests;
    v13->Parameter = v13;
    v13->List.Flink = v19;
    ExQueueWorkItem(v13, (WORK_QUEUE_TYPE)40);
    v10 = 259;
    goto LABEL_48;
  }
  if ( v6 && v7 )
  {
    do
    {
      ndisDereferenceRef((PKSPIN_LOCK)v16, 0xFu);
      --v7;
    }
    while ( v7 );
  }
LABEL_47:
  ExFreePoolWithTag(v13, 0);
LABEL_48:
  LOBYTE(v9) = a1;
LABEL_49:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      47,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v9,
      (char)v8,
      v10);
  }
  return v10;
}
