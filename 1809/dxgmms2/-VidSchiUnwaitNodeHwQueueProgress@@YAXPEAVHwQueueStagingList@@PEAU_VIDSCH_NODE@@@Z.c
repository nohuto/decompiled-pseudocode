/*
 * XREFs of ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C00365B0
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0038778 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C0036460 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 */

void __fastcall VidSchiUnwaitNodeHwQueueProgress(struct HwQueueStagingList ***a1, struct _VIDSCH_NODE *a2)
{
  char *v2; // r14
  char *v4; // rdi
  __int64 *v5; // rsi
  char v6; // al
  __int64 *v7; // rbp
  GUID *v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned int *v12; // r9
  _QWORD *v13; // r15
  _QWORD *v14; // rbx
  struct _VIDSCH_QUEUE_PACKET *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rdx
  GUID *v19; // rcx
  __int64 v20; // r8
  signed __int64 v21; // rbx
  __int64 v22; // rax
  GUID v23[4]; // [rsp+30h] [rbp-48h] BYREF
  bool v25; // [rsp+88h] [rbp+10h] BYREF

  v2 = (char *)a2 + 1688;
  v4 = (char *)*((_QWORD *)a2 + 211);
  if ( v4 != (char *)a2 + 1688 )
  {
    do
    {
      v5 = (__int64 *)*((_QWORD *)v4 + 2);
      if ( v5 != (__int64 *)(v4 + 16) )
      {
        do
        {
          v6 = 0;
          v7 = v5 - 1;
          *(_QWORD *)&v23[0].Data1 = 0LL;
          v8 = v23;
          *(_QWORD *)v23[0].Data4 = 0LL;
          v9 = v5 + 6;
          v10 = 2LL;
          do
          {
            v11 = *v9;
            if ( *v9 )
            {
              v12 = *(unsigned int **)(v11 + 64);
              if ( *(_BYTE *)(v11 + 29) )
                v11 = *(_QWORD *)v12;
              else
                v11 = *v12;
              if ( v11 != v9[1] )
                v6 = 1;
              *(_QWORD *)&v8->Data1 = v11;
            }
            v9 += 3;
            v8 = (GUID *)((char *)v8 + 8);
            --v10;
          }
          while ( v10 );
          if ( v6 )
          {
            v13 = v7 + 17;
            do
            {
              v14 = (_QWORD *)*v13;
              if ( (_QWORD *)*v13 == v13 )
                break;
              if ( v14 == (_QWORD *)v7[23] )
                break;
              v15 = (struct _VIDSCH_QUEUE_PACKET *)(v14 - 4);
              v25 = 0;
              v16 = WdLogNewEntry5_WdEvent(v9, v11);
              *(_QWORD *)(v16 + 24) = v15;
              WdLogEvent5_WdEvent(v16);
              VidSchiTryCompleteHwQueuePacket(a1, (struct VIDSCH_HW_QUEUE *)(v5 - 1), v23, v15, &v25);
            }
            while ( v25 );
            v17 = (_QWORD *)(*((_QWORD *)a2 + 23) + 112LL * *((unsigned int *)a2 + 49));
            memset(v17, 0, 0x70uLL);
            v18 = v7 + 8;
            *((_DWORD *)a2 + 49) = (*((_DWORD *)a2 + 49) + 1) & (*((_DWORD *)a2 + 48) - 1);
            v19 = v23;
            *(_DWORD *)v17 = 9;
            v20 = 2LL;
            v17[2] = v7;
            v21 = (char *)v17 - (char *)v23;
            do
            {
              v22 = *(_QWORD *)&v19->Data1;
              *(_QWORD *)&v19[1].Data4[v21] = *(_QWORD *)&v19->Data1;
              v19 = (GUID *)((char *)v19 + 8);
              *v18 = v22;
              v18 += 3;
              --v20;
            }
            while ( v20 );
            VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v7[5] + 8));
          }
          v5 = (__int64 *)*v5;
        }
        while ( v5 != (__int64 *)(v4 + 16) );
        v2 = (char *)a2 + 1688;
      }
      v4 = *(char **)v4;
    }
    while ( v4 != v2 );
  }
}
