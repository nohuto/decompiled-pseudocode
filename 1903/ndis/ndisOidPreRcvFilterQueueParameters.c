/*
 * XREFs of ndisOidPreRcvFilterQueueParameters @ 0x1C0060930
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C005F2E4 (ndisFindReceiveQueueByQueueId.c)
 */

char __fastcall ndisOidPreRcvFilterQueueParameters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v4; // r10
  _BYTE *v5; // r12
  int v6; // eax
  char v7; // bp
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int16 v13; // r8
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // r8
  unsigned int v17; // ebx
  KIRQL v18; // r13
  __int64 *ReceiveQueueByQueueId; // rax
  unsigned int v20; // ecx
  size_t v21; // r8
  void *v22; // rcx
  _BYTE *OidSourceHandle; // rax
  __int64 v24; // r10
  __int64 v26; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)a1;
  v4 = 0LL;
  v26 = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(v1 + 4);
  v7 = 1;
  if ( v6 != 12 )
  {
    if ( v6 != 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
      return v7;
    }
    *(_DWORD *)(a1 + 40) = 0;
    v8 = *(_DWORD *)(v1 + 48);
    if ( v8 < 0x43C )
    {
      *(_DWORD *)(v1 + 56) = 1084;
      *(_DWORD *)(a1 + 40) = -1073676268;
      *(_DWORD *)(v1 + 52) = 0;
      return v7;
    }
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v8 = *(_DWORD *)(v1 + 48);
  if ( v8 >= 0x43C )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x43Cu )
    {
      v9 = -1073676266;
      goto LABEL_6;
    }
LABEL_10:
    if ( !v2 )
      return 0;
    v10 = *(_DWORD *)(v1 + 4);
    if ( v10 == 12 )
    {
      v4 = *(_QWORD *)(v1 + 40);
      v11 = 1096;
      *(_DWORD *)(v1 + 60) = 0;
      v12 = 1096LL;
      v26 = v4;
      v13 = *(_WORD *)(v4 + 2);
      if ( v13 < 0x448u )
        v12 = *(unsigned __int16 *)(v4 + 2);
      if ( v12 >= v8 )
      {
        v11 = v8;
      }
      else if ( v13 < 0x448u )
      {
        v11 = *(unsigned __int16 *)(v4 + 2);
      }
      *(_DWORD *)(v1 + 64) = v11;
    }
    else if ( v10 == 1 )
    {
      v4 = *(_QWORD *)(v1 + 40);
      v14 = 1096;
      v15 = 1096LL;
      v26 = v4;
      v16 = *(_WORD *)(v4 + 2);
      if ( v16 < 0x448u )
        v15 = *(unsigned __int16 *)(v4 + 2);
      if ( v15 >= v8 )
      {
        v14 = v8;
      }
      else if ( v16 < 0x448u )
      {
        v14 = *(unsigned __int16 *)(v4 + 2);
      }
      *(_DWORD *)(v1 + 52) = v14;
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
    v17 = *(_DWORD *)(v4 + 12);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
    *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v2, v17);
    if ( !ReceiveQueueByQueueId )
    {
LABEL_31:
      *(_QWORD *)(v2 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v18);
      *(_DWORD *)(a1 + 40) = -1073741811;
      return v7;
    }
    if ( *(_DWORD *)(v1 + 4) == 12 )
    {
      v20 = *((unsigned __int16 *)ReceiveQueueByQueueId + 65);
      if ( v20 >= *(_DWORD *)(v1 + 48) )
        v20 = *(_DWORD *)(v1 + 48);
      v21 = v20;
      v22 = *(void **)(v1 + 40);
      *(_DWORD *)(v1 + 60) = v21;
      memmove(v22, ReceiveQueueByQueueId + 16, v21);
      *(_WORD *)(v26 + 2) = *(_WORD *)(v1 + 60);
      *(_DWORD *)(a1 + 40) = 0;
    }
    else
    {
      OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v5 = OidSourceHandle;
      if ( *(_BYTE **)(v24 + 72) != v5 )
        goto LABEL_31;
      v7 = 0;
    }
    *(_QWORD *)(v2 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v18);
    return v7;
  }
  v9 = -1073676268;
LABEL_6:
  *(_DWORD *)(v1 + 68) = 1084;
  *(_DWORD *)(a1 + 40) = v9;
  *(_QWORD *)(v1 + 60) = 0LL;
  return v7;
}
