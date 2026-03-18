/*
 * XREFs of ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAKPEAPEAUVIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C002AED8
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000F1C4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiSelectPresentAtFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct VIDSCH_FLIP_QUEUE_ENTRY **a6)
{
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // r13
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  unsigned int v12; // esi
  struct VIDSCH_FLIP_QUEUE_ENTRY **v13; // r15
  unsigned int *v14; // r12
  unsigned __int64 v15; // rdi
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  __int64 v19; // r11
  char v20; // r13
  __int64 v21; // r10
  unsigned int i; // r8d
  int v23; // r9d
  int v24; // eax
  int v25; // r8d
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned int v28; // r8d
  __int64 v29; // rdi
  int v30; // r11d
  __int64 v31; // r10
  unsigned int j; // edx
  int v33; // eax
  int v34; // edx
  unsigned int v35; // eax
  __int64 v36; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+A8h] [rbp+10h]
  unsigned int v40; // [rsp+B8h] [rbp+20h] BYREF

  v40 = a4;
  v7 = a4;
  v36 = a4;
  v8 = *((_QWORD *)a2 + a3 + 322);
  v9 = *(_QWORD *)(v8 + 8LL * a4 + 24);
  v10 = 10000LL * *(unsigned int *)(v8 + 70564);
  v38 = v9;
  if ( is_mul_ok(v10, *(_QWORD *)(v8 + 33208)) )
    v11 = v10 * *(_QWORD *)(v8 + 33208) / 0x989680;
  else
    v11 = *(_QWORD *)(v8 + 33208) * (v10 / 0x989680) + *(_QWORD *)(v8 + 33208) * (v10 % 0x989680) / 0x989680;
  v12 = *(_DWORD *)(v9 + 40);
  v13 = a6;
  v14 = a5;
  v15 = v11 + *(_QWORD *)(v8 + 33184);
  v16 = ((_BYTE)v12 + 1) & 0x3F;
  v17 = *((_QWORD *)*a6 + 161);
  if ( v16 != v12 )
  {
    v18 = v15 - v17;
    if ( v15 < v17 )
      v18 = v17 - v15;
    while ( 1 )
    {
      v19 = 1296LL * v16 + v9 + 56;
      if ( *(_DWORD *)(v19 + 1052) != 2 )
        break;
      v20 = *((_BYTE *)a2 + 144);
      if ( !v20 )
        goto LABEL_20;
      v21 = *(_QWORD *)(v8 + 8 * v36 + 24);
      for ( i = *(_DWORD *)(v21 + 48); i != (((unsigned __int8)*(_DWORD *)(v21 + 44) - 1) & 0x3F); i = ((_BYTE)i - 1) & 0x3F )
      {
        if ( *(_DWORD *)(1296LL * i + v21 + 1108) == 14 )
          goto LABEL_51;
      }
      v23 = *(_DWORD *)(v19 + 1120);
      if ( (v23 & 0x10) != 0 )
        v24 = ((unsigned __int16)**(_DWORD **)(v19 + 1168) | (unsigned __int16)(**(_DWORD **)(v19 + 1168) >> 10)) & 0x3FF;
      else
        v24 = (1 << *((_DWORD *)a2 + 35)) - 1;
      if ( (v24 & *(_DWORD *)(v8 + 2340)) != 0 )
        break;
      if ( *((_DWORD *)a2 + 37) <= 1u || *(_DWORD *)(v8 + 4) == 3 || (*(_DWORD *)(v19 + 1120) & 0x180) != 0x80 )
      {
LABEL_20:
        v23 = *(_DWORD *)(v19 + 1120);
        if ( (v23 & 0x10) != 0 )
          v25 = ((unsigned __int16)**(_DWORD **)(v19 + 1168) | (unsigned __int16)(**(_DWORD **)(v19 + 1168) >> 10)) & 0x3FF;
        else
          v25 = (1 << *((_DWORD *)a2 + 35)) - 1;
        if ( (v25 & *(_DWORD *)(v8 + 2336)) != 0 )
          break;
      }
      if ( (v23 & 0x1080) == 0 )
        break;
      if ( (v23 & 0x80u) != 0 )
      {
        *v13 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v19;
        v28 = ((_BYTE)v16 + 1) & 0x3F;
        *v14 = v16;
        if ( v28 != v12 )
        {
          while ( 1 )
          {
            v29 = 1296LL * v28 + v38 + 56;
            v30 = *(_DWORD *)(v29 + 1120);
            if ( (v30 & 0x80u) == 0 || *(_DWORD *)(v29 + 1052) != 2 )
              break;
            if ( !v20 )
              goto LABEL_46;
            v31 = *(_QWORD *)(v8 + 8 * v36 + 24);
            for ( j = *(_DWORD *)(v31 + 48);
                  j != (((unsigned __int8)*(_DWORD *)(v31 + 44) - 1) & 0x3F);
                  j = ((_BYTE)j - 1) & 0x3F )
            {
              if ( *(_DWORD *)(1296LL * j + v31 + 1108) == 14 )
                goto LABEL_51;
            }
            if ( (v30 & 0x10) != 0 )
              v33 = ((unsigned __int16)**(_DWORD **)(v29 + 1168) | (unsigned __int16)(**(_DWORD **)(v29 + 1168) >> 10)) & 0x3FF;
            else
              v33 = (1 << *((_DWORD *)a2 + 35)) - 1;
            if ( (v33 & *(_DWORD *)(v8 + 2340)) != 0 )
              goto LABEL_51;
            if ( *((_DWORD *)a2 + 37) <= 1u || *(_DWORD *)(v8 + 4) == 3 || (*(_DWORD *)(v29 + 1120) & 0x180) != 0x80 )
            {
LABEL_46:
              if ( (v30 & 0x10) != 0 )
                v34 = ((unsigned __int16)**(_DWORD **)(v29 + 1168) | (unsigned __int16)(**(_DWORD **)(v29 + 1168) >> 10)) & 0x3FF;
              else
                v34 = (1 << *((_DWORD *)a2 + 35)) - 1;
              if ( (v34 & *(_DWORD *)(v8 + 2336)) != 0 )
                goto LABEL_51;
            }
            *v14 = v28;
            v28 = ((_BYTE)v28 + 1) & 0x3F;
            *v13 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v29;
            if ( v28 == v12 )
              goto LABEL_51;
          }
        }
        break;
      }
      v26 = *(_QWORD *)(v19 + 1288);
      v27 = v15 - v26;
      if ( v15 < v26 )
        v27 = *(_QWORD *)(v19 + 1288) - v15;
      if ( v27 >= v18 )
        break;
      *v14 = v16;
      v18 = v27;
      *v13 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)v19;
      v16 = ((_BYTE)v16 + 1) & 0x3F;
      if ( v16 == v12 )
        break;
      v9 = v38;
    }
LABEL_51:
    v7 = v40;
  }
  v35 = *v14;
  if ( *v14 != v12 )
  {
    LOBYTE(v40) = 0;
    VidSchiCompleteFlipEntry(a1, (__int64)a2, a3, v7, v12, ((_BYTE)v35 - 1) & 0x3F, 6, &v40);
  }
  *((_DWORD *)*v13 + 263) = 4;
}
