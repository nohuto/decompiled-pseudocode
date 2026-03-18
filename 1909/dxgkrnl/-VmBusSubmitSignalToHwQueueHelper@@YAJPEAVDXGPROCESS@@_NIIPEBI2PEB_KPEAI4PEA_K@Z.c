/*
 * XREFs of ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C022A5A0
 * Callers:
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C0226B44 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 * Callees:
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0269C04 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall VmBusSubmitSignalToHwQueueHelper(
        struct DXGPROCESS *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned __int64 *a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  struct DXGPROCESS *v11; // rsi
  __int64 i; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 j; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // r10d
  unsigned int v25; // r14d
  __int64 v26; // r11
  unsigned int HostHandle; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 *v30; // rdx
  char v32; // [rsp+68h] [rbp+10h]
  unsigned int v33; // [rsp+70h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  v11 = a1;
  if ( a7 && a6 )
  {
    for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
    {
      v13 = (unsigned int)i;
      v14 = a5[i];
      v15 = (a5[i] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v15 >= *((_DWORD *)v11 + 56) )
        goto LABEL_13;
      a3 = (unsigned int)v15;
      v16 = *((_QWORD *)v11 + 26);
      a1 = (struct DXGPROCESS *)*(unsigned int *)(v16 + 16 * v15 + 8);
      v14 = ((unsigned int)v14 >> 25) & 0x60;
      if ( (_BYTE)v14 != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
        || ((unsigned __int16)a1 & 0x2000) != 0
        || ((unsigned __int8)a1 & 0x1F) == 0 )
      {
        goto LABEL_13;
      }
      a3 = 2LL * (unsigned int)v15;
      a1 = (struct DXGPROCESS *)((unsigned __int8)a1 & 0x1F);
      if ( (_BYTE)a1 != 15 )
      {
        v18 = WdLogNewEntry5_WdError(a1, v14, a3);
        *(_QWORD *)(v18 + 24) = 267LL;
        WdLogEvent5_WdError(v18);
LABEL_13:
        v19 = WdLogNewEntry5_WdError(a1, v14, a3);
        v20 = a5[v13];
LABEL_14:
        *(_QWORD *)(v19 + 24) = v20;
        goto LABEL_41;
      }
      v17 = *(_QWORD *)(v16 + 16LL * (unsigned int)v15);
      if ( !v17 )
        goto LABEL_13;
      a8[i] = *(_DWORD *)(v17 + 28);
    }
    for ( j = 0LL; (unsigned int)j < v33; j = (unsigned int)(j + 1) )
    {
      v22 = a6[j];
      v23 = (a6[j] >> 6) & 0xFFFFFF;
      v24 = a6[j] >> 30;
      v25 = *((_DWORD *)v11 + 56);
      if ( (unsigned int)v23 >= v25 )
        goto LABEL_30;
      v26 = *((_QWORD *)v11 + 26);
      a1 = (struct DXGPROCESS *)*(unsigned int *)(v26 + 16LL * (unsigned int)v23 + 8);
      if ( v24 == ((*(_DWORD *)(v26 + 16LL * (unsigned int)v23 + 8) >> 5) & 3)
        && ((unsigned __int16)a1 & 0x2000) == 0
        && ((unsigned __int8)a1 & 0x1F) != 0
        && (a1 = (struct DXGPROCESS *)((unsigned __int8)a1 & 0x1F), (_BYTE)a1 == 8)
        && (a1 = *(struct DXGPROCESS **)(v26 + 16LL * (unsigned int)v23)) != 0LL )
      {
        HostHandle = DXGSYNCOBJECT::GetHostHandle(a1, v22, a6[j] >> 6);
      }
      else
      {
        if ( (unsigned int)v23 >= v25 )
          goto LABEL_30;
        v22 = (unsigned int)v23;
        v23 = *((_QWORD *)v11 + 26);
        a1 = (struct DXGPROCESS *)*(unsigned int *)(v23 + 16LL * (unsigned int)v22 + 8);
        if ( v24 != ((*(_DWORD *)(v23 + 16LL * (unsigned int)v22 + 8) >> 5) & 3)
          || ((unsigned __int16)a1 & 0x2000) != 0
          || ((unsigned __int8)a1 & 0x1F) == 0 )
        {
          goto LABEL_30;
        }
        v22 *= 2LL;
        a1 = (struct DXGPROCESS *)((unsigned __int8)a1 & 0x1F);
        if ( (_BYTE)a1 != 11 )
        {
          v28 = WdLogNewEntry5_WdError(a1, v22, v23);
          *(_QWORD *)(v28 + 24) = 267LL;
          WdLogEvent5_WdError(v28);
LABEL_30:
          v19 = WdLogNewEntry5_WdError(a1, v22, v23);
          v20 = a6[j];
          goto LABEL_14;
        }
        v29 = *(_QWORD *)(v23 + 8 * v22);
        if ( !v29 )
          goto LABEL_30;
        HostHandle = *(_DWORD *)(v29 + 44);
      }
      a9[j] = HostHandle;
      if ( v32 )
      {
        v30 = (unsigned __int64 *)&a7[j];
        a1 = (struct DXGPROCESS *)MmUserProbeAddress;
        if ( (unsigned __int64)v30 >= MmUserProbeAddress )
          v30 = (unsigned __int64 *)MmUserProbeAddress;
        a10[j] = *v30;
      }
      else
      {
        a1 = (struct DXGPROCESS *)a10;
        a10[j] = a7[j];
      }
    }
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v19 + 24) = 5687LL;
LABEL_41:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
}
