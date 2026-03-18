/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C0009980
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0015F98 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002964C (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0030B0C (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0034084 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037360 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0009DE0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@@KK@Z @ 0x1C000F06C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002FB4C (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0039AB4 (VidSchiCompletePendingFlipOnPlane.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r9d
  unsigned int i; // r14d
  __int64 v6; // r15
  DWORD v7; // ebx
  _DWORD *v8; // r13
  unsigned int v9; // esi
  __int64 v10; // rdx
  _DWORD *v11; // rdi
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r10d
  unsigned int v18; // r11d
  bool v19; // cc
  int v20; // eax
  int v21; // edx
  int v22; // eax
  LARGE_INTEGER *v23; // rsi
  LONG v24; // eax
  _DWORD *v25; // rdi
  LARGE_INTEGER *v26; // rsi
  LONG v27; // eax
  _DWORD *v28; // rdi
  int v29; // r11d
  int v30; // eax
  __int64 v31; // r10
  unsigned int v32; // r8d
  int v33; // r9d
  int v34; // r9d
  int v35; // r8d
  int v36; // r8d
  unsigned int v37; // ecx
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  unsigned __int64 *v40; // rax
  __int64 v41; // r9
  unsigned int v42; // edx
  int v43; // r8d
  int v44; // ecx
  int v45; // edx
  int v46; // edx
  __int64 v47; // r9
  unsigned int v48; // edx
  int v49; // r8d
  int v50; // edx
  __int64 v51; // [rsp+30h] [rbp-68h]
  __int64 v52; // [rsp+38h] [rbp-60h]
  int v53; // [rsp+40h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v56; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v57; // [rsp+B0h] [rbp+18h]
  unsigned int v58; // [rsp+B8h] [rbp+20h]

  result = (__int64)&retaddr;
  v3 = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 40); ++i )
  {
    result = i;
    v6 = *(_QWORD *)(a2 + 8LL * i + 2576);
    if ( !*(_BYTE *)(v6 + 66420) )
      continue;
    v7 = 0;
    if ( !*(_DWORD *)(a2 + 140) )
      continue;
    do
    {
      v8 = *(_DWORD **)(v6 + 8LL * v7 + 24);
      if ( !v8 )
        goto LABEL_12;
      v9 = v8[9];
      v10 = 1LL;
      v57 = 1;
      v56 = 0;
      while ( 1 )
      {
        v58 = v9;
        v52 = 324LL * v9;
        v11 = &v8[v52];
        v12 = v8[v52 + 277];
        if ( v12 == 1 || v12 == 16 )
          break;
        result = (unsigned int)(v12 - 2);
        if ( (result & 0xFFFFFFFD) != 0 )
        {
          if ( v12 != 3 )
            goto LABEL_10;
        }
        else
        {
          v29 = *(_DWORD *)(v6 + 4);
          if ( v29 == 3 || v29 == 5 && (v11[294] & 0x100) != 0 && (v30 = v8[324 * v8[11] + 277], v30 != 5) && v30 != 15 )
          {
            if ( v9 == v8[10] )
            {
              if ( !*(_BYTE *)(a2 + 144) )
                goto LABEL_68;
              v31 = *(_QWORD *)(v6 + 8LL * v7 + 24);
              v32 = *(_DWORD *)(v31 + 48);
              v33 = ((unsigned __int8)*(_DWORD *)(v31 + 44) - 1) & 0x3F;
              if ( v32 != v33 )
              {
                while ( *(_DWORD *)(1296LL * v32 + v31 + 1108) != 14 )
                {
                  v32 = ((_BYTE)v32 - 1) & 0x3F;
                  if ( v32 == v33 )
                    goto LABEL_57;
                }
                goto LABEL_43;
              }
LABEL_57:
              v34 = v11[294];
              v35 = (v34 & 0x10) != 0
                  ? ((unsigned __int16)**((_DWORD **)v11 + 153) | (unsigned __int16)(**((_DWORD **)v11 + 153) >> 10)) & 0x3FF
                  : (1 << *(_DWORD *)(a2 + 140)) - 1;
              if ( (v35 & *(_DWORD *)(v6 + 2340)) == 0 )
              {
                if ( *(_DWORD *)(a2 + 148) > 1u && v29 != 3 && (v34 & 0x180) == 0x80
                  || ((v11[294] & 0x10) == 0
                    ? (v36 = (1 << *(_DWORD *)(a2 + 140)) - 1)
                    : (v36 = ((unsigned __int16)**((_DWORD **)v11 + 153) | (unsigned __int16)(**((_DWORD **)v11 + 153) >> 10)) & 0x3FF),
                      (v36 & *(_DWORD *)(v6 + 2336)) == 0) )
                {
LABEL_68:
                  v11[277] = 4;
                  goto LABEL_41;
                }
              }
LABEL_43:
              v3 = 0;
            }
          }
        }
        v9 = ((_BYTE)v9 + 1) & 0x3F;
        v8[9] = v9;
      }
      v13 = *((_QWORD *)v11 + 137);
      v53 = v13;
      if ( *(_BYTE *)(v13 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 200), 0, 0) )
        goto LABEL_29;
      v14 = v11[284];
      if ( (v11[294] & 0x2000) != 0 )
      {
        v37 = 0;
        if ( v14 )
        {
          do
          {
            v38 = *(_QWORD *)&v11[2 * v37 + 14];
            v39 = *(_QWORD *)&v11[2 * v37 + 142];
            if ( !*(_BYTE *)(v38 + 28) )
            {
              v40 = *(unsigned __int64 **)(v38 + 64);
              if ( *(_BYTE *)(v38 + 29) )
              {
                if ( *v40 < v39 )
                  goto LABEL_45;
              }
              else if ( *(_DWORD *)v40 - (int)v39 < 0 )
              {
                goto LABEL_45;
              }
            }
            ++v37;
          }
          while ( v37 < v11[284] );
        }
LABEL_29:
        v20 = *(_DWORD *)(v6 + 4);
        if ( v20 != 3 )
        {
          if ( v20 == 5 )
          {
            v11[277] = 2;
            if ( (_DWORD)v10 )
            {
              v57 = 0;
              if ( v9 == v8[10] || *((_BYTE *)v11 + 1120) )
              {
                *((_QWORD *)v11 + 143) = MEMORY[0xFFFFF78000000320];
                if ( *(_BYTE *)(a2 + 144) )
                {
                  v47 = *(_QWORD *)(v6 + 8LL * v7 + 24);
                  v48 = *(_DWORD *)(v47 + 48);
                  v49 = ((unsigned __int8)*(_DWORD *)(v47 + 44) - 1) & 0x3F;
                  if ( v48 == v49 )
                  {
LABEL_98:
                    if ( (v11[294] & 0x10) != 0 )
                      v50 = ((unsigned __int16)**((_DWORD **)v11 + 153) | (unsigned __int16)(**((_DWORD **)v11 + 153) >> 10)) & 0x3FF;
                    else
                      v50 = (1 << *(_DWORD *)(a2 + 140)) - 1;
                    if ( (v50 & *(_DWORD *)(v6 + 2340)) == 0 )
                    {
                      if ( *(_DWORD *)(a2 + 148) <= 1u || *(_DWORD *)(v6 + 4) == 3 || (v11[294] & 0x180) != 0x80 )
                        goto LABEL_34;
LABEL_37:
                      if ( *((_BYTE *)v11 + 1120) )
                        VidSchiRestartQueuedFlip(a1, v53, i, v7, v9);
                      v22 = v11[279];
                      if ( !v22 )
                      {
                        v11[277] = 4;
                        v23 = (LARGE_INTEGER *)(*(_QWORD *)(v6 + 112) + 72LL * *(unsigned int *)(v6 + 120));
                        memset(v23, 0, 0x48uLL);
                        v24 = v58;
                        *(_DWORD *)(v6 + 120) = (*(_DWORD *)(v6 + 120) + 1) & (*(_DWORD *)(v6 + 104) - 1);
                        v25 = *(_DWORD **)(v6 + 8LL * v7 + 24);
                        v23->LowPart = 0;
                        v23[2].LowPart = v7;
                        v23[2].HighPart = v24;
                        v23[1] = KeQueryPerformanceCounter(0LL);
                        BYTE4(v23[3].QuadPart) = (v25[v52 + 294] & 0x20) != 0;
                        v23[4].LowPart = v25[v52 + 277];
                        v23[3].LowPart = v25[v52 + 278];
                        v23[5].LowPart = *(_DWORD *)(v6 + 2340);
                        v23[4].HighPart = *(_DWORD *)(v6 + 2336);
                        v23[5].HighPart = v25[8];
                        v23[6].LowPart = v25[9];
                        v23[6].HighPart = v25[10];
                        v23[7].LowPart = v25[11];
                        v23[7].HighPart = v25[12];
                        v23[8].LowPart = v25[13];
                        v9 = v58;
                        goto LABEL_41;
                      }
                      v11[277] = 3;
                      v11[279] = v22 - 1;
                    }
                  }
                  else
                  {
                    while ( *(_DWORD *)(1296LL * v48 + v47 + 1108) != 14 )
                    {
                      v48 = ((_BYTE)v48 - 1) & 0x3F;
                      if ( v48 == v49 )
                        goto LABEL_98;
                    }
                  }
                }
                else
                {
LABEL_34:
                  if ( (v11[294] & 0x10) != 0 )
                    v21 = ((unsigned __int16)**((_DWORD **)v11 + 153) | (unsigned __int16)(**((_DWORD **)v11 + 153) >> 10)) & 0x3FF;
                  else
                    v21 = (1 << *(_DWORD *)(a2 + 140)) - 1;
                  if ( (v21 & *(_DWORD *)(v6 + 2336)) == 0 )
                    goto LABEL_37;
                }
              }
            }
          }
LABEL_46:
          VidSchiUpdateFlipQueueHistory(0LL, v6, v7, v9);
LABEL_42:
          v10 = v57;
          goto LABEL_43;
        }
        if ( v9 == v8[10] )
        {
          if ( !*(_BYTE *)(a2 + 144) )
            goto LABEL_91;
          v41 = *(_QWORD *)(v6 + 8LL * v7 + 24);
          v42 = *(_DWORD *)(v41 + 48);
          v43 = ((unsigned __int8)*(_DWORD *)(v41 + 44) - 1) & 0x3F;
          if ( v42 != v43 )
          {
            while ( *(_DWORD *)(1296LL * v42 + v41 + 1108) != 14 )
            {
              v42 = ((_BYTE)v42 - 1) & 0x3F;
              if ( v42 == v43 )
                goto LABEL_83;
            }
            goto LABEL_92;
          }
LABEL_83:
          v44 = *(_DWORD *)(a2 + 140);
          v45 = (v11[294] & 0x10) != 0
              ? ((unsigned __int16)**((_DWORD **)v11 + 153) | (unsigned __int16)(**((_DWORD **)v11 + 153) >> 10)) & 0x3FF
              : (1 << v44) - 1;
          if ( (v45 & *(_DWORD *)(v6 + 2340)) == 0 )
          {
            v46 = (v11[294] & 0x10) != 0
                ? ((unsigned __int16)**((_DWORD **)v11 + 153) | (unsigned __int16)(**((_DWORD **)v11 + 153) >> 10)) & 0x3FF
                : (1 << v44) - 1;
            if ( (v46 & *(_DWORD *)(v6 + 2336)) == 0 )
            {
LABEL_91:
              v11[277] = 4;
              VidSchiUpdateFlipQueueHistory(0LL, v6, v7, v9);
LABEL_41:
              VidSchiExecuteMmIoFlip(a1, a2, i, v7, v9, &v56);
              goto LABEL_42;
            }
          }
        }
LABEL_92:
        v11[277] = 2;
        *((_QWORD *)v11 + 143) = MEMORY[0xFFFFF78000000320];
        goto LABEL_46;
      }
      if ( v14 )
        v15 = *(_QWORD *)&v11[2 * v14 + 12];
      else
        v15 = 0LL;
      v51 = v15;
      if ( !v14 )
      {
LABEL_27:
        if ( v15 )
        {
          LOBYTE(v10) = 1;
          VidSchiUpdateLastCompletedPresentTimestamp(v15, v10, 0LL);
          LODWORD(v10) = v57;
        }
        goto LABEL_29;
      }
      while ( 1 )
      {
        v16 = *(_QWORD *)&v11[2 * v3 + 14];
        v17 = v11[2 * v3 + 145];
        v18 = *(_DWORD *)(v16 + 164);
        v19 = v17 <= v18;
        if ( v17 == v18 )
        {
          if ( v11[2 * v3 + 144] > *(_DWORD *)(v16 + 160) )
            break;
          v19 = v17 <= v18;
        }
        if ( !v19 )
          break;
        if ( ++v3 >= v14 )
        {
          v15 = v51;
          goto LABEL_27;
        }
      }
LABEL_45:
      v26 = (LARGE_INTEGER *)(*(_QWORD *)(v6 + 112) + 72LL * *(unsigned int *)(v6 + 120));
      memset(v26, 0, 0x48uLL);
      v27 = v58;
      *(_DWORD *)(v6 + 120) = (*(_DWORD *)(v6 + 120) + 1) & (*(_DWORD *)(v6 + 104) - 1);
      v28 = *(_DWORD **)(v6 + 8LL * v7 + 24);
      v26->LowPart = 0;
      v26[2].LowPart = v7;
      v26[2].HighPart = v27;
      v26[1] = KeQueryPerformanceCounter(0LL);
      BYTE4(v26[3].QuadPart) = (v28[v52 + 294] & 0x20) != 0;
      v3 = 0;
      v26[4].LowPart = v28[v52 + 277];
      v26[3].LowPart = v28[v52 + 278];
      v26[5].LowPart = *(_DWORD *)(v6 + 2340);
      v26[4].HighPart = *(_DWORD *)(v6 + 2336);
      v26[5].HighPart = v28[8];
      v26[6].LowPart = v28[9];
      v26[6].HighPart = v28[10];
      v26[7].LowPart = v28[11];
      v26[7].HighPart = v28[12];
      result = (unsigned int)v28[13];
      v26[8].LowPart = result;
LABEL_10:
      if ( v56 )
      {
        result = VidSchiCompletePendingFlipOnPlane(a1, a2, i, 9, v7);
        v3 = 0;
      }
LABEL_12:
      ++v7;
    }
    while ( v7 < *(_DWORD *)(a2 + 140) );
  }
  return result;
}
