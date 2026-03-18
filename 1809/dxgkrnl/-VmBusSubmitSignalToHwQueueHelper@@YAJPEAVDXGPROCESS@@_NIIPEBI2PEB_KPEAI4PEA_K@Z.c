/*
 * XREFs of ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C01F9DD0
 * Callers:
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C01F64A4 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 * Callees:
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0234C88 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall VmBusSubmitSignalToHwQueueHelper(
        struct DXGPROCESS *a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned __int64 *a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  struct DXGPROCESS *v11; // r13
  __int64 i; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 j; // rdi
  __int64 v20; // rdx
  unsigned int v21; // r11d
  unsigned int v22; // esi
  __int64 v23; // r9
  unsigned int v24; // ecx
  DXGSYNCOBJECT *v25; // rcx
  unsigned int HostHandle; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 *v30; // rdx
  unsigned int v33; // [rsp+80h] [rbp+18h]

  v33 = a3;
  v11 = a1;
  if ( a7 && a6 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a4 )
      {
        for ( j = 0LL; (unsigned int)j < v33; j = (unsigned int)(j + 1) )
        {
          v20 = (a6[j] >> 6) & 0xFFFFFF;
          v21 = a6[j] >> 30;
          v22 = *((_DWORD *)v11 + 62);
          if ( (unsigned int)v20 < v22
            && (LOBYTE(a3) = a6[j] >> 6,
                v23 = *((_QWORD *)v11 + 29),
                v24 = *(_DWORD *)(v23 + 16LL * (unsigned int)v20 + 8),
                v21 == ((v24 >> 5) & 3))
            && (v24 & 0x2000) == 0
            && (v24 & 0x1F) != 0
            && (LOBYTE(a3) = 2 * (a6[j] >> 6), (v24 & 0x1F) == 8) )
          {
            v25 = *(DXGSYNCOBJECT **)(v23 + 16LL * (unsigned int)v20);
          }
          else
          {
            v25 = 0LL;
          }
          if ( v25 )
          {
            HostHandle = DXGSYNCOBJECT::GetHostHandle(v25, a6[j], a3);
          }
          else
          {
            if ( (unsigned int)v20 >= v22 )
              goto LABEL_34;
            a3 = *((_QWORD *)v11 + 29);
            v25 = (DXGSYNCOBJECT *)*(unsigned int *)(a3 + 16 * v20 + 8);
            if ( v21 != ((*(_DWORD *)(a3 + 16 * v20 + 8) >> 5) & 3)
              || ((unsigned __int16)v25 & 0x2000) != 0
              || ((unsigned __int8)v25 & 0x1F) == 0 )
            {
              goto LABEL_34;
            }
            v27 = 2 * v20;
            v25 = (DXGSYNCOBJECT *)((unsigned __int8)v25 & 0x1F);
            if ( (_BYTE)v25 != 11 )
            {
              v28 = WdLogNewEntry5_WdError(v25);
              *(_QWORD *)(v28 + 24) = 316LL;
              WdLogEvent5_WdError(v28);
LABEL_34:
              v17 = WdLogNewEntry5_WdError(v25);
              v18 = a6[j];
              goto LABEL_16;
            }
            v29 = *(_QWORD *)(a3 + 8 * v27);
            if ( !v29 )
              goto LABEL_34;
            HostHandle = *(_DWORD *)(v29 + 44);
          }
          a9[j] = HostHandle;
          if ( a2 )
          {
            v30 = (unsigned __int64 *)&a7[j];
            if ( (unsigned __int64)v30 >= MmUserProbeAddress )
              v30 = (unsigned __int64 *)MmUserProbeAddress;
            a10[j] = *v30;
          }
          else
          {
            a10[j] = a7[j];
          }
        }
        return 0LL;
      }
      v13 = (a5[i] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v13 >= *((_DWORD *)v11 + 62) )
        goto LABEL_11;
      LOBYTE(a3) = a5[i] >> 6;
      v14 = *((_QWORD *)v11 + 29);
      a1 = (struct DXGPROCESS *)*(unsigned int *)(v14 + 16 * v13 + 8);
      if ( ((a5[i] >> 25) & 0x60) != (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
        || ((unsigned __int16)a1 & 0x2000) != 0
        || ((unsigned __int8)a1 & 0x1F) == 0 )
      {
        goto LABEL_11;
      }
      LOBYTE(a3) = 2 * (a5[i] >> 6);
      a1 = (struct DXGPROCESS *)((unsigned __int8)a1 & 0x1F);
      if ( (_BYTE)a1 != 15 )
        break;
      v16 = *(_QWORD *)(v14 + 16LL * (unsigned int)v13);
LABEL_12:
      if ( !v16 )
      {
        v17 = WdLogNewEntry5_WdError(a1);
        v18 = a5[i];
LABEL_16:
        *(_QWORD *)(v17 + 24) = v18;
        goto LABEL_45;
      }
      a8[i] = *(_DWORD *)(v16 + 28);
    }
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = 316LL;
    WdLogEvent5_WdError(v15);
LABEL_11:
    v16 = 0LL;
    goto LABEL_12;
  }
  v17 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v17 + 24) = 5757LL;
LABEL_45:
  WdLogEvent5_WdError(v17);
  return 3221225485LL;
}
