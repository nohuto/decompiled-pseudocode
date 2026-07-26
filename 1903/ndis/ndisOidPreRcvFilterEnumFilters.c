/*
 * XREFs of ndisOidPreRcvFilterEnumFilters @ 0x1C005FD00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C005F2E4 (ndisFindReceiveQueueByQueueId.c)
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C00B1A48 (ndisIovFindVPortByVPortIdInternal.c)
 */

char __fastcall ndisOidPreRcvFilterEnumFilters(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  __int64 *ReceiveQueueByQueueId; // r15
  __int64 v3; // rbp
  char v5; // r13
  _DWORD *v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rdi
  KSPIN_LOCK *v12; // r12
  KIRQL v13; // r10
  __int64 VPortByVPortIdInternal; // rax
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // r14d
  __int64 *v18; // rcx
  unsigned int v19; // r11d
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax

  v1 = *(KSPIN_LOCK **)a1;
  ReceiveQueueByQueueId = 0LL;
  v3 = 0LL;
  v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      25,
      30,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      a1);
  v6 = *(_DWORD **)(a1 + 32);
  v7 = 20;
  if ( v6[1] == 12 )
  {
    v8 = -1073676268;
    *(_DWORD *)(a1 + 40) = 0;
    if ( v6[12] >= 0x14u )
    {
      v9 = 0;
      if ( v6[13] < 0x14u )
      {
        v6[17] = 20;
        v9 = -1073676266;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      v6[17] = 20;
      v9 = -1073676268;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    v10 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      *(_DWORD *)(v10 + 60) = 0;
LABEL_10:
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = 0;
      goto LABEL_44;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v10 + 40) + 1LL) == 2 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      v7 = 28;
      if ( *(_DWORD *)(v10 + 48) < 0x1Cu )
      {
LABEL_15:
        *(_DWORD *)(v10 + 68) = 28;
        *(_DWORD *)(a1 + 40) = v8;
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
        goto LABEL_10;
      }
      if ( *(_DWORD *)(v10 + 52) < 0x1Cu )
      {
        v8 = -1073676266;
        goto LABEL_15;
      }
    }
    if ( !v1 )
    {
      v5 = 0;
      goto LABEL_44;
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
    if ( v1[443] )
    {
      v11 = *(_QWORD *)(v10 + 40);
      v12 = v1 + 12;
      *(_DWORD *)(v10 + 60) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v7;
      v13 = KeAcquireSpinLockRaiseToDpc(v1 + 12);
      v1[65] = (KSPIN_LOCK)KeGetCurrentThread();
      if ( *(_BYTE *)(v11 + 1) >= 2u && (*(_DWORD *)(v11 + 20) & 1) != 0 )
      {
        VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v1, *(unsigned int *)(v11 + 24));
        v3 = VPortByVPortIdInternal;
        if ( !VPortByVPortIdInternal )
        {
LABEL_22:
          v1[65] = 0LL;
          KeReleaseSpinLock(v1 + 12, v13);
          *(_DWORD *)(a1 + 40) = -1073741811;
          goto LABEL_44;
        }
        v15 = *(_DWORD *)(VPortByVPortIdInternal + 864);
      }
      else
      {
        v16 = *(_DWORD *)(v11 + 4);
        if ( v16 )
          ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId((__int64)v1, v16);
        else
          ReceiveQueueByQueueId = (__int64 *)v1[546];
        if ( !ReceiveQueueByQueueId )
          goto LABEL_22;
        v15 = *((_DWORD *)ReceiveQueueByQueueId + 21);
      }
      v17 = 16 * v15 + 28;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) = v17;
      if ( v17 <= *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) )
      {
        *(_DWORD *)v11 = 1835392;
        if ( v3 )
        {
          v18 = *(__int64 **)(v3 + 872);
          *(_DWORD *)(v11 + 24) = *(_DWORD *)(v3 + 124);
        }
        else
        {
          v18 = (__int64 *)ReceiveQueueByQueueId[4];
          *(_DWORD *)(v11 + 4) = *((_DWORD *)ReceiveQueueByQueueId + 12);
        }
        *(_DWORD *)(v11 + 8) = 28;
        v19 = 0;
        *(_DWORD *)(v11 + 12) = v15;
        *(_DWORD *)(v11 + 16) = 16;
        v20 = v11 + 28;
        if ( v15 )
        {
          do
          {
            if ( v3 )
            {
              if ( v18 == (__int64 *)(v3 + 872) )
                break;
              v21 = 13LL;
              v22 = 2LL;
              v23 = 108LL;
            }
            else
            {
              if ( v18 == ReceiveQueueByQueueId + 4 )
                break;
              v21 = 15LL;
              v22 = 4LL;
              v23 = 124LL;
            }
            ++v19;
            *(_QWORD *)v20 = 0LL;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_DWORD *)v20 = 1048960;
            *(_DWORD *)(v20 + 4) = v18[v21];
            *(_DWORD *)(v20 + 8) = *(_DWORD *)((char *)v18 + v23);
            *(_DWORD *)(v20 + 12) = v18[v22];
            v20 += 16LL;
            v18 = (__int64 *)*v18;
          }
          while ( v19 < v15 );
          v12 = v1 + 12;
        }
        v1[65] = 0LL;
        KeReleaseSpinLock(v12, v13);
        v24 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(v24 + 60) = v17;
      }
      else
      {
        v1[65] = 0LL;
        KeReleaseSpinLock(v1 + 12, v13);
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_44:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      25,
      31,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)v1,
      *(_DWORD *)(a1 + 40));
  }
  return v5;
}
