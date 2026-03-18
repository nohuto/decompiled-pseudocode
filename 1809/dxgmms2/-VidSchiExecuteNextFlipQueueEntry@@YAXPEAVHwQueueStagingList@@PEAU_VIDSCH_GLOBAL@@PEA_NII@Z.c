/*
 * XREFs of ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000F1C4
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002DFD0 (VidSchiExecutePostPresentAtPassiveLevel.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAKPEAPEAUVIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C002AED8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAKPEAPEAUVIDSCH_.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002FB4C (VidSchiRestartQueuedFlip.c)
 */

void __fastcall VidSchiExecuteNextFlipQueueEntry(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        bool *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r13d
  struct HwQueueStagingList *v6; // r14
  __int64 v7; // rcx
  _DWORD *v9; // r15
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // r12
  unsigned int v13; // ebx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v14; // rdi
  bool v15; // zf
  unsigned int v16; // r8d
  __int64 v17; // r13
  __int64 v18; // r14
  _DWORD *v19; // r10
  char v20; // r12
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  struct HwQueueStagingList *v24; // r14
  __int64 v25; // r11
  unsigned int i; // edx
  int v27; // edx
  int v28; // edx
  __int64 v29; // r9
  unsigned int j; // edx
  int v31; // edx
  unsigned int v32; // r10d
  char k; // r8
  unsigned int v34; // r8d
  __int64 v35; // r14
  __int64 v36; // r11
  unsigned int m; // edx
  int v38; // r9d
  int v39; // edx
  int v40; // edx
  struct VIDSCH_FLIP_QUEUE_ENTRY *v41; // [rsp+40h] [rbp-28h] BYREF
  __int64 v42; // [rsp+48h] [rbp-20h]
  __int64 v43; // [rsp+50h] [rbp-18h]
  unsigned int v45; // [rsp+B8h] [rbp+50h] BYREF
  _BYTE *v46; // [rsp+C0h] [rbp+58h]
  unsigned int v47; // [rsp+C8h] [rbp+60h] BYREF

  v47 = a4;
  v46 = a3;
  v5 = a4;
  v6 = a1;
  v7 = a5;
  v9 = (_DWORD *)*((_QWORD *)a2 + a4 + 322);
  v10 = *(_QWORD *)&v9[2 * a5 + 6];
  v42 = v10;
  v11 = *(unsigned int *)(v10 + 40);
  v12 = 1296 * v11;
  v13 = *(_DWORD *)(v10 + 40);
  v14 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(1296 * v11 + v10 + 56);
  v45 = v13;
  v15 = v9[581] == 0;
  v43 = 1296 * v11;
  v41 = v14;
  if ( !v15 )
  {
    v16 = ((_BYTE)v11 + 1) & 0x3F;
    if ( v16 != (_DWORD)v11 )
    {
      v17 = v10;
      do
      {
        v18 = 1296LL * v16 + v17 + 56;
        if ( (unsigned int)(*(_DWORD *)(v18 + 1052) - 2) > 1 )
          break;
        if ( !*((_BYTE *)a2 + 144) )
          goto LABEL_34;
        v25 = *(_QWORD *)&v9[2 * a5 + 6];
        for ( i = *(_DWORD *)(v25 + 48);
              i != (((unsigned __int8)*(_DWORD *)(v25 + 44) - 1) & 0x3F);
              i = ((_BYTE)i - 1) & 0x3F )
        {
          if ( *(_DWORD *)(1296LL * i + v25 + 1108) == 14 )
            goto LABEL_5;
        }
        if ( (*(_DWORD *)(v18 + 1120) & 0x10) != 0 )
          v27 = ((unsigned __int16)**(_DWORD **)(v18 + 1168) | (unsigned __int16)(**(_DWORD **)(v18 + 1168) >> 10)) & 0x3FF;
        else
          v27 = (1 << *((_DWORD *)a2 + 35)) - 1;
        if ( (v27 & v9[585]) != 0 )
          break;
        if ( *((_DWORD *)a2 + 37) <= 1u || v9[1] == 3 || (*(_DWORD *)(v18 + 1120) & 0x180) != 0x80 )
        {
LABEL_34:
          if ( (*(_DWORD *)(v18 + 1120) & 0x10) != 0 )
            v28 = ((unsigned __int16)**(_DWORD **)(v18 + 1168) | (unsigned __int16)(**(_DWORD **)(v18 + 1168) >> 10)) & 0x3FF;
          else
            v28 = (1 << *((_DWORD *)a2 + 35)) - 1;
          if ( (v28 & v9[584]) != 0 )
            break;
        }
        if ( *(_BYTE *)(v18 + 1064) )
        {
          v13 = v16;
          v41 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(1296LL * v16 + v17 + 56);
          v45 = v16;
          v14 = v41;
        }
        v16 = ((_BYTE)v16 + 1) & 0x3F;
      }
      while ( v16 != (_DWORD)v11 );
LABEL_5:
      v12 = v43;
      v5 = v47;
      v10 = v42;
      v6 = a1;
      v7 = a5;
    }
    if ( v13 != (_DWORD)v11 )
    {
      VidSchiRestartQueuedFlip((_DWORD)v6, *(_QWORD *)(v12 + v10 + 1096), v5, a5, v13);
      *((_DWORD *)v14 + 263) = 4;
      goto LABEL_20;
    }
    v19 = (_DWORD *)((char *)v14 + 1052);
    if ( (unsigned int)(*((_DWORD *)v14 + 263) - 2) > 1 )
    {
LABEL_20:
      v24 = a1;
LABEL_17:
      if ( *((_DWORD *)v14 + 263) == 4 )
        VidSchiExecuteMmIoFlip(v24, (__int64)a2, v5, a5, v13, v46);
      return;
    }
    v14 = v41;
    *((_QWORD *)v41 + 136) = MEMORY[0xFFFFF78000000320];
    v20 = *((_BYTE *)a2 + 144);
    if ( v20 )
    {
      v29 = *(_QWORD *)&v9[2 * v7 + 6];
      for ( j = *(_DWORD *)(v29 + 48); j != (((unsigned __int8)*(_DWORD *)(v29 + 44) - 1) & 0x3F); j = ((_BYTE)j - 1) & 0x3F )
      {
        if ( *(_DWORD *)(1296LL * j + v29 + 1108) == 14 )
          goto LABEL_21;
      }
      v21 = *((_DWORD *)v14 + 280);
      if ( (v21 & 0x10) != 0 )
        v31 = ((unsigned __int16)**((_DWORD **)v14 + 146) | (unsigned __int16)(**((_DWORD **)v14 + 146) >> 10)) & 0x3FF;
      else
        v31 = (1 << *((_DWORD *)a2 + 35)) - 1;
      if ( (v31 & v9[585]) != 0 )
        goto LABEL_21;
      if ( *((_DWORD *)a2 + 37) > 1u && v9[1] != 3 && (v21 & 0x100) == 0 && (v21 & 0x80u) != 0 )
        goto LABEL_12;
    }
    v21 = *((_DWORD *)v14 + 280);
    v22 = (v21 & 0x10) != 0
        ? ((unsigned __int16)**((_DWORD **)v14 + 146) | (unsigned __int16)(**((_DWORD **)v14 + 146) >> 10)) & 0x3FF
        : (1 << *((_DWORD *)a2 + 35)) - 1;
    if ( (v22 & v9[584]) == 0 )
    {
LABEL_12:
      if ( (v21 & 0x1000) == 0 )
      {
        v23 = *((_DWORD *)v14 + 265);
        v13 = v45;
        if ( !v23 )
        {
          if ( (v21 & 0x80u) != 0 )
          {
            v32 = *(_DWORD *)(v10 + 40);
            for ( k = v32 + 1; ; k = v34 + 1 )
            {
              v34 = k & 0x3F;
              if ( v34 == v32 )
                break;
              v35 = v10 + 1296LL * v34;
              if ( *(_DWORD *)(v35 + 1108) != 2 )
                break;
              if ( !v20 )
                goto LABEL_73;
              v36 = *(_QWORD *)&v9[2 * a5 + 6];
              for ( m = *(_DWORD *)(v36 + 48);
                    m != (((unsigned __int8)*(_DWORD *)(v36 + 44) - 1) & 0x3F);
                    m = ((_BYTE)m - 1) & 0x3F )
              {
                if ( *(_DWORD *)(1296LL * m + v36 + 1108) == 14 )
                  goto LABEL_79;
              }
              v38 = *(_DWORD *)(v35 + 1176);
              if ( (v38 & 0x10) != 0 )
                v39 = ((unsigned __int16)**(_DWORD **)(v35 + 1224) | (unsigned __int16)(**(_DWORD **)(v35 + 1224) >> 10)) & 0x3FF;
              else
                v39 = (1 << *((_DWORD *)a2 + 35)) - 1;
              if ( (v39 & v9[585]) != 0 )
                break;
              if ( *((_DWORD *)a2 + 37) <= 1u || v9[1] == 3 || (*(_DWORD *)(v35 + 1176) & 0x180) != 0x80 )
              {
LABEL_73:
                v38 = *(_DWORD *)(v35 + 1176);
                if ( (v38 & 0x10) != 0 )
                  v40 = ((unsigned __int16)**(_DWORD **)(v35 + 1224) | (unsigned __int16)(**(_DWORD **)(v35 + 1224) >> 10)) & 0x3FF;
                else
                  v40 = (1 << *((_DWORD *)a2 + 35)) - 1;
                if ( (v40 & v9[584]) != 0 )
                  break;
              }
              v14 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(v35 + 56);
              v13 = v34;
              if ( (v38 & 0x80u) == 0 )
                break;
              v10 = v42;
            }
LABEL_79:
            v24 = a1;
            if ( v13 != v32 )
            {
              LOBYTE(v47) = 0;
              VidSchiCompleteFlipEntry(a1, (__int64)a2, v5, a5, v32, ((_BYTE)v13 - 1) & 0x3F, 6, &v47);
            }
          }
          else
          {
            v24 = a1;
          }
          *((_DWORD *)v14 + 263) = 4;
          goto LABEL_17;
        }
        *((_DWORD *)v14 + 265) = v23 - 1;
        *v19 = 3;
        goto LABEL_20;
      }
      VidSchiSelectPresentAtFlip(v6, a2, v5, a5, &v45, &v41);
      v14 = v41;
    }
LABEL_21:
    v13 = v45;
    goto LABEL_20;
  }
}
