/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C000A240
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00067D0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0009DC0 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C001528C (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002A1F0 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C003133C (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0034A9C (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037DA0 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000AD10 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CD30 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000D280 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@KK@Z @ 0x1C0013DAC (-UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_V.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0030520 (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003A4F4 (VidSchiCompletePendingFlipOnPlane.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r9d
  int v5; // r11d
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rbp
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // r13
  int v15; // ecx
  __int64 v16; // r10
  unsigned int v17; // r8d
  __int64 v18; // r11
  __int64 v19; // rax
  unsigned int v20; // r11d
  bool v21; // zf
  int v22; // eax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  LARGE_INTEGER *v27; // rdi
  DWORD v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  int v31; // r13d
  void *v32; // rdi
  __int64 v33; // r8
  int v34; // r11d
  int v35; // eax
  unsigned int v36; // r8d
  int v37; // r9d
  int v38; // r9d
  int v39; // r8d
  int v40; // r8d
  unsigned int v41; // ecx
  __int64 v42; // r8
  unsigned __int64 v43; // r9
  unsigned __int64 *v44; // rax
  unsigned int v45; // edx
  int v46; // r8d
  int v47; // edx
  int v48; // edx
  unsigned int v49; // edx
  int v50; // r8d
  int v51; // edx
  __int64 v52; // [rsp+28h] [rbp-70h]
  __int64 v53; // [rsp+30h] [rbp-68h]
  __int64 v54; // [rsp+38h] [rbp-60h]
  _DWORD *v55; // [rsp+38h] [rbp-60h]
  int v56; // [rsp+40h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v59; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v60; // [rsp+B0h] [rbp+18h]
  unsigned int v61; // [rsp+B8h] [rbp+20h]

  result = (__int64)&retaddr;
  v3 = 0;
  v5 = a1;
  v6 = 0;
  if ( *(_DWORD *)(a2 + 40) )
  {
    while ( 1 )
    {
      result = v6;
      v7 = a2 + 8LL * v6;
      v8 = *(_QWORD *)(v7 + 2576);
      v53 = v8;
      if ( *(_BYTE *)(v8 + 66436) )
        break;
LABEL_10:
      if ( ++v6 >= *(_DWORD *)(a2 + 40) )
        return result;
    }
    v9 = -1;
    while ( 2 )
    {
      if ( v9 == *(_DWORD *)(a2 + 140) )
        goto LABEL_10;
      v10 = *(_QWORD *)(v7 + 2576);
      if ( v9 == -1 )
      {
        v11 = *(_QWORD *)(v10 + 24);
      }
      else
      {
        result = v9;
        v11 = *(_QWORD *)(v10 + 8LL * v9 + 32);
      }
      if ( !v11 )
        goto LABEL_8;
      v12 = *(_DWORD *)(v11 + 36);
      v13 = 1LL;
      LODWORD(v60) = 1;
      v59 = 0;
      while ( 1 )
      {
        v14 = v11 + 1312LL * v12;
        v15 = *(_DWORD *)(v14 + 1132);
        if ( v15 == 1 || v15 == 16 )
          break;
        result = (unsigned int)(v15 - 2);
        if ( (result & 0xFFFFFFFD) == 0 )
        {
          v34 = *(_DWORD *)(v8 + 4);
          if ( v34 != 3 )
          {
            if ( v34 != 5 )
              goto LABEL_50;
            if ( (*(_DWORD *)(v14 + 1216) & 0x100) == 0 )
              goto LABEL_50;
            v35 = *(_DWORD *)(1312LL * *(unsigned int *)(v11 + 44) + v11 + 1132);
            if ( v35 == 5 || v35 == 15 )
              goto LABEL_50;
          }
          if ( v12 != *(_DWORD *)(v11 + 40) )
            goto LABEL_50;
          if ( *(_BYTE *)(a2 + 144) )
          {
            v36 = *(_DWORD *)(v11 + 48);
            v37 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
            if ( v36 != v37 )
            {
              while ( *(_DWORD *)(1312LL * v36 + v11 + 1132) != 14 )
              {
                v36 = ((_BYTE)v36 - 1) & 0x3F;
                if ( v36 == v37 )
                  goto LABEL_66;
              }
LABEL_49:
              v3 = 0;
LABEL_50:
              v5 = a1;
              goto LABEL_51;
            }
LABEL_66:
            v38 = *(_DWORD *)(v14 + 1216);
            if ( (v38 & 0x10) != 0 )
              v39 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
            else
              v39 = (1 << *(_DWORD *)(a2 + 140)) - 1;
            if ( (v39 & *(_DWORD *)(v8 + 2348)) != 0 )
              goto LABEL_49;
            if ( *(_DWORD *)(a2 + 148) <= 1u || v34 == 3 || (v38 & 0x180) != 0x80 )
            {
              v40 = (*(_DWORD *)(v14 + 1216) & 0x10) != 0
                  ? ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF
                  : (1 << *(_DWORD *)(a2 + 140)) - 1;
              if ( (v40 & *(_DWORD *)(v8 + 2344)) != 0 )
                goto LABEL_49;
            }
          }
          *(_DWORD *)(v14 + 1132) = 4;
          VidSchiExecuteMmIoFlip(a1, a2, v6, v11, v12, &v59);
LABEL_48:
          v13 = (unsigned int)v60;
          goto LABEL_49;
        }
        if ( v15 != 3 )
          goto LABEL_17;
LABEL_51:
        v12 = ((_BYTE)v12 + 1) & 0x3F;
        *(_DWORD *)(v11 + 36) = v12;
      }
      v16 = *(_QWORD *)(v14 + 1120);
      v56 = v16;
      if ( !*(_BYTE *)(v16 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v16 + 200), 0, 0) )
      {
        v17 = *(_DWORD *)(v14 + 1172);
        if ( (*(_DWORD *)(v14 + 1216) & 0x2000) != 0 )
        {
          v41 = 0;
          if ( v17 )
          {
            do
            {
              v42 = *(_QWORD *)(v14 + 8LL * v41 + 80);
              v43 = *(_QWORD *)(v14 + 8LL * v41 + 592);
              if ( !*(_BYTE *)(v42 + 28) )
              {
                v44 = *(unsigned __int64 **)(v42 + 64);
                if ( *(_BYTE *)(v42 + 29) )
                {
                  if ( *v44 < v43 )
                    goto LABEL_52;
                }
                else if ( *(_DWORD *)v44 - (int)v43 < 0 )
                {
                  goto LABEL_52;
                }
              }
              ++v41;
            }
            while ( v41 < *(_DWORD *)(v14 + 1172) );
          }
        }
        else
        {
          if ( v17 )
            v18 = *(_QWORD *)(v14 + 8LL * (v17 - 1) + 80);
          else
            v18 = 0LL;
          v54 = v18;
          if ( v17 )
          {
            while ( 1 )
            {
              v19 = *(_QWORD *)(v14 + 8LL * v3 + 80);
              if ( v19 )
              {
                v20 = *(_DWORD *)(v14 + 8LL * v3 + 604);
                v21 = v20 == *(_DWORD *)(v19 + 164);
                v61 = *(_DWORD *)(v19 + 164);
                v8 = v53;
                if ( v21 && *(_DWORD *)(v14 + 8LL * v3 + 600) > *(_DWORD *)(v19 + 160) )
                  break;
                if ( v20 > v61 )
                  break;
              }
              if ( ++v3 >= v17 )
              {
                v18 = v54;
                goto LABEL_31;
              }
            }
LABEL_52:
            v29 = *(_QWORD *)(v7 + 2576);
            v30 = *(_DWORD *)(v14 + 1216);
            v60 = v29;
            if ( (v30 & 0x10) != 0 )
              v31 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
            else
              v31 = (1 << *(_DWORD *)(a2 + 140)) - 1;
            v32 = (void *)(*(_QWORD *)(v29 + 120) + 72LL * *(unsigned int *)(v29 + 128));
            memset(v32, 0, 0x48uLL);
            v33 = v60;
            LODWORD(v52) = v12;
            *(_DWORD *)(v60 + 128) = (*(_DWORD *)(v60 + 128) + 1) & (*(_DWORD *)(v60 + 112) - 1);
            result = _VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(v32, 0LL, v33, v11, v31, v52);
            v5 = a1;
            v3 = 0;
            v8 = v53;
LABEL_17:
            if ( v59 )
            {
              result = VidSchiCompletePendingFlipOnPlane(v5, a2, v6, v11, 9);
              v5 = a1;
              v3 = 0;
            }
LABEL_8:
            ++v9;
            continue;
          }
LABEL_31:
          if ( v18 )
          {
            LOBYTE(v13) = 1;
            VidSchiUpdateLastCompletedPresentTimestamp(v18, v13, 0LL);
            LODWORD(v13) = v60;
            LODWORD(v16) = v56;
          }
          v5 = a1;
        }
      }
      break;
    }
    v22 = *(_DWORD *)(v8 + 4);
    if ( v22 != 3 )
    {
      if ( v22 != 5 )
        goto LABEL_55;
      *(_DWORD *)(v14 + 1132) = 2;
      if ( !(_DWORD)v13 )
        goto LABEL_55;
      LODWORD(v60) = 0;
      if ( v12 != *(_DWORD *)(v11 + 40) && !*(_BYTE *)(v14 + 1156) )
        goto LABEL_55;
      *(_QWORD *)(v14 + 1184) = MEMORY[0xFFFFF78000000320];
      if ( *(_BYTE *)(a2 + 144) )
      {
        v49 = *(_DWORD *)(v11 + 48);
        v50 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
        if ( v49 != v50 )
        {
          while ( *(_DWORD *)(1312LL * v49 + v11 + 1132) != 14 )
          {
            v49 = ((_BYTE)v49 - 1) & 0x3F;
            if ( v49 == v50 )
              goto LABEL_107;
          }
          goto LABEL_55;
        }
LABEL_107:
        if ( (*(_DWORD *)(v14 + 1216) & 0x10) != 0 )
          v51 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
        else
          v51 = (1 << *(_DWORD *)(a2 + 140)) - 1;
        if ( (v51 & *(_DWORD *)(v8 + 2348)) != 0 )
        {
LABEL_55:
          VidSchiUpdateFlipQueueHistory(0LL, a2, v6, v11, v12);
          goto LABEL_48;
        }
        if ( *(_DWORD *)(a2 + 148) > 1u && *(_DWORD *)(v8 + 4) != 3 && (*(_DWORD *)(v14 + 1216) & 0x180) == 0x80 )
        {
LABEL_42:
          if ( *(_BYTE *)(v14 + 1156) )
            VidSchiRestartQueuedFlip(v5, v16, v6, v11, v12);
          v24 = *(_DWORD *)(v14 + 1152);
          if ( !v24 )
          {
            *(_DWORD *)(v14 + 1132) = 4;
            v25 = *(_QWORD *)(v7 + 2576);
            v55 = (_DWORD *)v25;
            if ( (*(_DWORD *)(v14 + 1216) & 0x10) != 0 )
              v26 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
            else
              v26 = (1 << *(_DWORD *)(a2 + 140)) - 1;
            v61 = v26;
            v27 = (LARGE_INTEGER *)(*(_QWORD *)(v25 + 120) + 72LL * *(unsigned int *)(v25 + 128));
            memset(v27, 0, 0x48uLL);
            v28 = v61;
            v55[32] = (v55[32] + 1) & (v55[28] - 1);
            v27->LowPart = 0;
            v27[2].LowPart = v28;
            BYTE4(v27[2].QuadPart) = *(_BYTE *)(v11 + 56);
            v27[3].LowPart = v12;
            v27[1] = KeQueryPerformanceCounter(0LL);
            LOBYTE(v27[4].LowPart) = (*(_DWORD *)(v14 + 1216) & 0x20) != 0;
            v27[4].HighPart = *(_DWORD *)(v14 + 1132);
            v27[3].HighPart = *(_DWORD *)(v14 + 1136);
            v27[5].HighPart = v55[587];
            v27[5].LowPart = v55[586];
            v27[6].LowPart = *(_DWORD *)(v11 + 32);
            v27[6].HighPart = *(_DWORD *)(v11 + 36);
            v27[7].LowPart = *(_DWORD *)(v11 + 40);
            v27[7].HighPart = *(_DWORD *)(v11 + 44);
            v27[8].LowPart = *(_DWORD *)(v11 + 48);
            v27[8].HighPart = *(_DWORD *)(v11 + 52);
            VidSchiExecuteMmIoFlip(a1, a2, v6, v11, v12, &v59);
            v8 = v53;
            goto LABEL_48;
          }
          *(_DWORD *)(v14 + 1132) = 3;
          *(_DWORD *)(v14 + 1152) = v24 - 1;
          goto LABEL_55;
        }
      }
      if ( (*(_DWORD *)(v14 + 1216) & 0x10) != 0 )
        v23 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
      else
        v23 = (1 << *(_DWORD *)(a2 + 140)) - 1;
      if ( (v23 & *(_DWORD *)(v8 + 2344)) == 0 )
        goto LABEL_42;
      goto LABEL_55;
    }
    if ( v12 == *(_DWORD *)(v11 + 40) )
    {
      if ( !*(_BYTE *)(a2 + 144) )
        goto LABEL_100;
      v45 = *(_DWORD *)(v11 + 48);
      v46 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
      if ( v45 != v46 )
      {
        while ( *(_DWORD *)(1312LL * v45 + v11 + 1132) != 14 )
        {
          v45 = ((_BYTE)v45 - 1) & 0x3F;
          if ( v45 == v46 )
            goto LABEL_92;
        }
        goto LABEL_101;
      }
LABEL_92:
      v47 = (*(_DWORD *)(v14 + 1216) & 0x10) != 0
          ? ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF
          : (1 << *(_DWORD *)(a2 + 140)) - 1;
      if ( (v47 & *(_DWORD *)(v8 + 2348)) == 0 )
      {
        v48 = (*(_DWORD *)(v14 + 1216) & 0x10) != 0
            ? ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF
            : (1 << *(_DWORD *)(a2 + 140)) - 1;
        if ( (v48 & *(_DWORD *)(v8 + 2344)) == 0 )
        {
LABEL_100:
          *(_DWORD *)(v14 + 1132) = 4;
          VidSchiUpdateFlipQueueHistory(0LL, a2, v6, v11, v12);
          VidSchiExecuteMmIoFlip(a1, a2, v6, v11, v12, &v59);
          goto LABEL_48;
        }
      }
    }
LABEL_101:
    *(_DWORD *)(v14 + 1132) = 2;
    *(_QWORD *)(v14 + 1184) = MEMORY[0xFFFFF78000000320];
    goto LABEL_55;
  }
  return result;
}
