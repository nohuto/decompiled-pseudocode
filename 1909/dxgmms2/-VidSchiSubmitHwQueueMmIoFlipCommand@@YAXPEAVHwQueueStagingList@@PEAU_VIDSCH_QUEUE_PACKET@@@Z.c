/*
 * XREFs of ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036220
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035BB0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035E44 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CD30 (VidSchiExecuteMmIoFlip.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0015958 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00174BC (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C002E9D4 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0030520 (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034380 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003A4F4 (VidSchiCompletePendingFlipOnPlane.c)
 */

void __fastcall VidSchiSubmitHwQueueMmIoFlipCommand(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  const GUID *v2; // rax
  __int64 v3; // r10
  __int64 v4; // rbx
  struct _VIDSCH_QUEUE_PACKET *v5; // rsi
  unsigned __int64 v6; // r8
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  bool v14; // zf
  __int64 v15; // r15
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int16 v18; // bx
  __int64 v19; // r10
  char v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // r8d
  int v33; // eax
  char v34; // cl
  int v35; // eax
  __int64 v36; // rax
  int v37; // ecx
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  __int64 v45; // rax
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // eax
  unsigned int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  char v57; // r10
  unsigned int v58; // edx
  unsigned int v59; // edx
  char v60; // cl
  int v61; // eax
  int v62; // ebx
  int v63; // eax
  unsigned int v64; // r9d
  unsigned int v65; // eax
  int v66; // r11d
  int v67; // r9d
  unsigned int v68; // r10d
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // rbx
  __int64 v74; // rdx
  int v75; // eax
  unsigned int v76; // edx
  int v77; // edx
  int v78; // edx
  __int64 v79; // rcx
  _QWORD *v80; // rax
  unsigned int v81; // edx
  int v82; // edx
  int v83; // edx
  int v84; // eax
  unsigned int v85; // r8d
  int v86; // [rsp+30h] [rbp-59h]
  int v87; // [rsp+34h] [rbp-55h]
  unsigned __int64 v88; // [rsp+38h] [rbp-51h]
  unsigned int v89; // [rsp+40h] [rbp-49h]
  int v90; // [rsp+44h] [rbp-45h]
  __int64 v91; // [rsp+48h] [rbp-41h]
  __int64 v92; // [rsp+50h] [rbp-39h]
  __int64 v93; // [rsp+58h] [rbp-31h] BYREF
  unsigned int *v94; // [rsp+60h] [rbp-29h]
  unsigned int v95; // [rsp+68h] [rbp-21h]
  unsigned int v96; // [rsp+6Ch] [rbp-1Dh]
  int v97; // [rsp+70h] [rbp-19h]
  unsigned int v98; // [rsp+74h] [rbp-15h]
  unsigned int v99; // [rsp+78h] [rbp-11h]
  int v100; // [rsp+80h] [rbp-9h]
  int v101; // [rsp+84h] [rbp-5h]
  int v102; // [rsp+88h] [rbp-1h]
  int v103; // [rsp+8Ch] [rbp+3h]
  int v104; // [rsp+90h] [rbp+7h]
  int v105; // [rsp+94h] [rbp+Bh]
  __int64 v106; // [rsp+98h] [rbp+Fh]
  char v109; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v110; // [rsp+108h] [rbp+7Fh]

  v2 = (const GUID *)*((unsigned int *)a2 + 40);
  v3 = 1LL;
  v4 = *((_QWORD *)a2 + 12);
  v5 = a2;
  v110 = (unsigned int)v2;
  v6 = (unsigned int)v2;
  v88 = (unsigned __int64)v2;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(_QWORD *)(v7 + 8);
  v91 = v8;
  v9 = *(_QWORD *)(v8 + 32);
  v10 = *(_QWORD *)(v9 + 8LL * (_QWORD)v2 + 2576);
  v106 = v10;
  if ( (*(_BYTE *)(v9 + 2428) & 1) != 0 )
    goto LABEL_104;
  v11 = 0LL;
  if ( *(_DWORD *)(v9 + 2404)
    || *(_BYTE *)(v8 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 200), 0, 0)
    || (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    goto LABEL_104;
  }
  v12 = *((_QWORD *)a2 + 51) - *(_QWORD *)(v8 + 8LL * (unsigned int)v2 + 376);
  if ( v12 > (unsigned int)(64 - *(_DWORD *)(v10 + 2332)) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, a2);
    v13[3] = 281LL;
    v13[4] = 2048LL;
    v13[5] = v4;
    v13[6] = v5;
    v13[7] = *((int *)v5 + 12);
    WdLogEvent5_WdCriticalError(v13);
    __debugbreak();
  }
  v14 = *(_DWORD *)(v10 + 4) == 3;
  v109 = v11;
  if ( v14 || *((_DWORD *)a2 + 101) == (_DWORD)v11 && (*((_DWORD *)a2 + 68) & 0x10000000) != 0 )
  {
    v86 = v3;
    v92 = v3;
  }
  else
  {
    v86 = v11;
    v92 = v11;
  }
  v15 = *(_QWORD *)(v10 + 24);
  if ( ((unsigned __int8)(*((_DWORD *)a2 + 18) >> 23) & (unsigned __int8)v3) != 0 )
    v16 = ((unsigned __int16)*((_DWORD *)a2 + 206) | (unsigned __int16)(*((_DWORD *)a2 + 206) >> 10)) & 0x3FF;
  else
    v16 = (unsigned int)(((_DWORD)v3 << *(_DWORD *)(v9 + 140)) - v3);
  v14 = !_BitScanForward((unsigned int *)&v17, v16);
  v100 = v17;
  LOBYTE(v18) = -1;
  if ( !v14 )
    LOBYTE(v18) = v17;
  if ( (_DWORD)v16 )
  {
    v19 = *(_QWORD *)(v9 + 8 * v6 + 2576);
    while ( 1 )
    {
      v20 = v18;
      v21 = 216LL * (unsigned int)(char)v18;
      v22 = *(int *)(v21 + v19 + 172);
      if ( (int)v22 <= -1 )
      {
        v23 = 0;
      }
      else
      {
        v21 = 136 * v22;
        v23 = *(_DWORD *)(136 * v22 + *(_QWORD *)(v9 + 2704) + 112);
      }
      if ( v23 == 2 )
        break;
      LOBYTE(v18) = -1;
      v16 = ~(1 << v20) & (unsigned int)v16;
      v14 = !_BitScanForward((unsigned int *)&v24, v16);
      v101 = v24;
      if ( !v14 )
        LOBYTE(v18) = v24;
      if ( !(_DWORD)v16 )
      {
        v6 = v88;
        goto LABEL_28;
      }
    }
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v16);
    v31[5] = (char)v18;
    v31[3] = 281LL;
    v31[4] = 0x100000LL;
    v31[6] = v88;
    v31[7] = v9;
    WdLogEvent5_WdCriticalError(v31);
    __debugbreak();
  }
  else
  {
LABEL_28:
    v25 = (unsigned int)(*((_DWORD *)v5 + 102) - *(_DWORD *)(v8 + 8 * v6 + 376));
    v87 = *((_DWORD *)v5 + 102) - *(_DWORD *)(v8 + 8 * v6 + 376);
    v26 = (*((_BYTE *)v5 + 408) - *(_BYTE *)(v8 + 8 * v6 + 376) + (unsigned __int8)*(_DWORD *)(v15 + 32)) & 0x3F;
    v90 = (*((_BYTE *)v5 + 408) - *(_BYTE *)(v8 + 8 * v6 + 376) + (unsigned __int8)*(_DWORD *)(v15 + 32)) & 0x3F;
    v8 = v15 + 1312 * v26 + 80;
    v27 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v25, v16);
    v27[3] = v5;
    v27[4] = v15;
    v27[5] = v26;
    v27[6] = *(int *)(v8 + 1052);
    WdLogEvent5_WdPresentTokenEvent(v27);
    v28 = *(_QWORD *)(v9 + 616);
    v29 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 16) + 4LL);
    if ( (unsigned int)v29 < *(_DWORD *)(v9 + 688) )
      v28 += 8 * v29;
    v18 = *(_WORD *)(*(_QWORD *)v28 + 6LL);
    v89 = v18;
    if ( *(_DWORD *)(v8 + 1052) == 8 )
    {
      *(_QWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 1092)) = *((_QWORD *)v5 + 99);
      *(_QWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 1092) + 512) = *((_QWORD *)v5 + 100);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 99) + 32LL));
      v30 = *(_QWORD *)(v7 + 8);
      ++*(_DWORD *)(v8 + 1092);
      *(_QWORD *)(v8 + 1040) = v30;
      *(_DWORD *)(v8 + 1084) |= 1 << v18;
      goto LABEL_71;
    }
  }
  ++*(_DWORD *)(v9 + 724);
  ++*(_DWORD *)(v91 + 1276);
  ++*(_DWORD *)(v10 + 2332);
  if ( (*((_DWORD *)v5 + 68) & 0x800000) != 0 )
    v32 = ((unsigned __int16)*((_DWORD *)v5 + 206) | (unsigned __int16)(*((_DWORD *)v5 + 206) >> 10)) & 0x3FF;
  else
    v32 = (1 << *(_DWORD *)(v9 + 140)) - 1;
  v14 = !_BitScanForward((unsigned int *)&v33, v32);
  v102 = v33;
  v34 = -1;
  if ( !v14 )
    v34 = v33;
  while ( v32 )
  {
    ++*(_DWORD *)(216LL * v34 + *(_QWORD *)(v9 + 8 * v88 + 2576) + 180);
    v35 = 1 << v34;
    v34 = -1;
    v32 &= ~v35;
    v14 = !_BitScanForward((unsigned int *)&v35, v32);
    v103 = v35;
    if ( !v14 )
      v34 = v35;
  }
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)v8);
  v36 = *(_QWORD *)(v7 + 8);
  *(_DWORD *)(v8 + 1136) |= 0x2000u;
  *(_QWORD *)(v8 + 1040) = v36;
  *(_QWORD *)v8 = *((_QWORD *)v5 + 99);
  *(_QWORD *)(v8 + 512) = *((_QWORD *)v5 + 100);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 99) + 32LL));
  *(_DWORD *)(v8 + 1048) = *((_DWORD *)v5 + 200);
  *(_DWORD *)(v8 + 1056) = *((_DWORD *)v5 + 98);
  *(_BYTE *)(v8 + 1076) = (*((_DWORD *)v5 + 68) & 0x10) != 0;
  v37 = *(_DWORD *)(v8 + 1136) ^ (*(_DWORD *)(v8 + 1136) ^ (*((_DWORD *)v5 + 18) >> 19)) & 0x10;
  *(_DWORD *)(v8 + 1136) = v37;
  v38 = (v37 ^ (*((_DWORD *)v5 + 68) >> 21)) & 0x200 ^ v37;
  *(_DWORD *)(v8 + 1136) = v38;
  v39 = v38 ^ (v38 ^ (*((_DWORD *)v5 + 68) >> 21)) & 0x400;
  *(_DWORD *)(v8 + 1136) = v39;
  if ( !v87 )
  {
    ++*(_QWORD *)(v15 + 64);
    v39 = *(_DWORD *)(v8 + 1136);
    *(_QWORD *)(v8 + 1064) = *(_QWORD *)(v15 + 64);
  }
  if ( (v39 & 0x200) != 0 )
  {
    v40 = *((_DWORD *)v5 + 158);
    *(_DWORD *)(v8 + 1192) = v40;
    v41 = v40 - 1;
    if ( v41 )
    {
      if ( v41 == 1 )
      {
        *(_OWORD *)(v8 + 1196) = *(_OWORD *)((char *)v5 + 636);
        *(_OWORD *)(v8 + 1212) = *(_OWORD *)((char *)v5 + 652);
        *(_OWORD *)(v8 + 1228) = *(_OWORD *)((char *)v5 + 668);
        *(_OWORD *)(v8 + 1244) = *(_OWORD *)((char *)v5 + 684);
        *(_QWORD *)(v8 + 1260) = *(_QWORD *)((char *)v5 + 700);
      }
    }
    else
    {
      *(_OWORD *)(v8 + 1196) = *(_OWORD *)((char *)v5 + 636);
      *(_QWORD *)(v8 + 1212) = *(_QWORD *)((char *)v5 + 652);
      *(_DWORD *)(v8 + 1220) = *((_DWORD *)v5 + 165);
    }
  }
  else
  {
    *(_DWORD *)(v8 + 1192) = 0;
  }
  if ( (v39 & 0x400) != 0 )
  {
    *(_OWORD *)(v8 + 1268) = *(_OWORD *)((char *)v5 + 708);
    *(_OWORD *)(v8 + 1284) = *(_OWORD *)((char *)v5 + 724);
  }
  memmove(*(void **)(v8 + 1184), (char *)v5 + 824, *((unsigned int *)v5 + 209));
  *(_DWORD *)(v8 + 1080) = *((_DWORD *)v5 + 104);
  *(_DWORD *)(v8 + 1084) = 1 << v18;
  v42 = *(_DWORD *)(v8 + 1136) ^ (*(_DWORD *)(v8 + 1136) ^ (*((_DWORD *)v5 + 68) >> 19)) & 1;
  *(_DWORD *)(v8 + 1136) = v42;
  v43 = ((unsigned __int8)v42 ^ (unsigned __int8)(*((_DWORD *)v5 + 68) >> 19)) & 2 ^ v42;
  *(_DWORD *)(v8 + 1136) = v43;
  v44 = ((unsigned __int8)v43 ^ (unsigned __int8)(*((_DWORD *)v5 + 68) >> 19)) & 4 ^ v43;
  *(_DWORD *)(v8 + 1136) = v44;
  *(_DWORD *)(v8 + 1136) = v44 ^ ((unsigned __int8)v44 ^ (unsigned __int8)(*((_DWORD *)v5 + 68) >> 19)) & 8;
  *(_QWORD *)(v8 + 1160) = *((_QWORD *)v5 + 37);
  *(_QWORD *)(v8 + 1168) = *((_QWORD *)v5 + 38);
  v45 = *((_QWORD *)v5 + 39);
  *((_QWORD *)v5 + 37) = 0LL;
  *(_QWORD *)(v8 + 1176) = v45;
  if ( v45 )
    _InterlockedIncrement((volatile signed __int32 *)(v45 + 4));
  v46 = *((_DWORD *)v5 + 68);
  *(_DWORD *)(v8 + 1092) = 1;
  if ( (v46 & 0x400) != 0 )
  {
    *(_DWORD *)(v8 + 1088) = *((_DWORD *)v5 + 105);
    v47 = *((_DWORD *)v5 + 105);
  }
  else
  {
    *(_DWORD *)(v8 + 1088) = 1;
    v47 = 1;
  }
  *(_DWORD *)(v8 + 1096) = v47;
  if ( *(_BYTE *)(v8 + 1076) || v86 )
  {
    *(_DWORD *)(v8 + 1072) = 0;
    v54 = *(_DWORD *)(v8 + 1136) ^ (*(_DWORD *)(v8 + 1136) ^ (*((_DWORD *)v5 + 68) >> 21)) & 0x80;
    *(_DWORD *)(v8 + 1136) = v54;
    v53 = v54 ^ ((unsigned __int16)v54 ^ (*((_DWORD *)v5 + 68) >> 20)) & 0x100;
    goto LABEL_70;
  }
  v48 = *((_DWORD *)v5 + 101);
  if ( !v48 )
  {
    v52 = *(_DWORD *)(v8 + 1136) | 0x80;
    *(_DWORD *)(v8 + 1072) = 0;
    v53 = v52 & 0xFFFFFEFF;
LABEL_70:
    *(_DWORD *)(v8 + 1136) = v53;
    goto LABEL_71;
  }
  v49 = v48 - 1;
  if ( v49 )
  {
    v50 = v49 - 1;
    if ( !v50 )
    {
      *(_DWORD *)(v8 + 1072) = 1;
      goto LABEL_71;
    }
    v51 = v50 - 1;
    if ( !v51 )
    {
      *(_DWORD *)(v8 + 1072) = 2;
      goto LABEL_71;
    }
    if ( v51 == 1 )
    {
      *(_DWORD *)(v8 + 1072) = 3;
      goto LABEL_71;
    }
  }
  *(_DWORD *)(v8 + 1072) = 0;
LABEL_71:
  v55 = *(_DWORD *)(v8 + 1136);
  v56 = *((_DWORD *)v5 + 106);
  *(_DWORD *)(v8 + 1140) = v56;
  if ( (v55 & 0x80u) != 0 && (*(_DWORD *)(v10 + 70584) & 1) != 0 )
  {
    v57 = -1;
    if ( !v56 )
      v56 = -1;
    *(_DWORD *)(v8 + 1140) = v56;
  }
  else
  {
    v57 = -1;
  }
  if ( (*((_DWORD *)v5 + 68) & 0x800) != 0 )
    *(_BYTE *)(v8 + 1077) = 1;
  v94 = *(unsigned int **)(v8 + 1184);
  v93 = v9;
  v58 = *v94;
  v6 = *v94 & 0x3FF;
  v95 = *v94 & 0x3FF;
  if ( *(_BYTE *)(v9 + 144) )
    v59 = (v58 >> 10) & 0x3FF;
  else
    v59 = 0;
  v60 = -1;
  v14 = !_BitScanForward((unsigned int *)&v61, v6);
  v62 = 0;
  v96 = v59;
  v104 = v61;
  if ( !v14 )
    v60 = v61;
  v97 = 0;
  v14 = !_BitScanForward((unsigned int *)&v63, v59);
  v64 = v60;
  v105 = v63;
  if ( !v14 )
    v57 = v63;
  v98 = v60;
  v65 = v57;
  v99 = v57;
  while ( (_DWORD)v6 || v59 )
  {
    if ( v64 >= v65 )
      goto LABEL_99;
    v66 = 0;
    v67 = 1;
    v68 = 0;
    while ( (*(_DWORD *)(v8 + 1080) & v67) == 0 )
    {
LABEL_94:
      ++v68;
      v67 *= 2;
      if ( v68 > v89 )
        goto LABEL_99;
    }
    v69 = *(_QWORD *)(((unsigned __int64)(unsigned int)(v62 + v66 * *(_DWORD *)(*(_QWORD *)(v8 + 1184) + 4LL)) << 6)
                    + *(_QWORD *)(v8 + 1184)
                    + *(_DWORD *)(*(_QWORD *)(v8 + 1184) + 4LL)
                    * ((8 * *(_DWORD *)(*(_QWORD *)(v8 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                    + 48);
    if ( ((*(_DWORD *)(v69 + 32) >> 2) & 0x3F) != v89 )
    {
      ++v66;
      goto LABEL_94;
    }
    v70 = *(_QWORD *)(v69 + 96);
    if ( !*(_QWORD *)(v70 + 24) )
    {
      v71 = *(_QWORD *)(v70 + 16);
      if ( v71 )
        _InterlockedIncrement((volatile signed __int32 *)(v71 + 8));
    }
LABEL_99:
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v93);
    v65 = v99;
    v59 = v96;
    v6 = v95;
    v64 = v98;
    v62 = v97;
  }
  v5 = a2;
  if ( *(_DWORD *)(v8 + 1088) <= *(_DWORD *)(v8 + 1092) )
  {
    if ( v87 )
    {
      *(_DWORD *)(v8 + 1052) = 7;
      goto LABEL_102;
    }
    v72 = v106;
    LODWORD(v73) = v90;
    while ( 1 )
    {
      *(_DWORD *)(v15 + 32) = ((_BYTE)v73 + 1) & 0x3F;
      ++*(_QWORD *)(v91 + 8 * v88 + 376);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 728));
      _InterlockedIncrement((volatile signed __int32 *)(v72 + 2336));
      if ( *(_DWORD *)(v8 + 1052) == 7 )
        *(_QWORD *)(v8 + 1064) = ++*(_QWORD *)(v15 + 64);
      if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v8) && *(_BYTE *)(v72 + 66436) )
        break;
      *(_DWORD *)(v8 + 1052) = 16;
LABEL_159:
      v73 = *(unsigned int *)(v15 + 32);
      v8 = 1312 * v73 + v15 + 80;
      if ( *(_DWORD *)(v8 + 1052) != 7 )
        goto LABEL_102;
    }
    *(_DWORD *)(v8 + 1052) = 2;
    v75 = *(_DWORD *)(v15 + 40);
    if ( v92 )
    {
      if ( (_DWORD)v73 != v75 )
        goto LABEL_156;
      if ( *(_BYTE *)(v9 + 144) )
      {
        v76 = *(_DWORD *)(v15 + 48);
        v6 = ((unsigned __int8)*(_DWORD *)(v15 + 44) - 1) & 0x3F;
        while ( v76 != (_DWORD)v6 )
        {
          if ( *(_DWORD *)(1312LL * v76 + v15 + 1132) == 14 )
            goto LABEL_130;
          v76 = ((_BYTE)v76 - 1) & 0x3F;
        }
        v6 = *(unsigned int *)(v8 + 1136);
        if ( (*(_DWORD *)(v8 + 1136) & 0x10) != 0 )
          v77 = ((unsigned __int16)**(_DWORD **)(v8 + 1184) | (unsigned __int16)(**(_DWORD **)(v8 + 1184) >> 10)) & 0x3FF;
        else
          v77 = (1 << *(_DWORD *)(v9 + 140)) - 1;
        if ( (v77 & *(_DWORD *)(v72 + 2348)) != 0
          || (*(_DWORD *)(v9 + 148) <= 1u || *(_DWORD *)(v72 + 4) == 3 || (v6 &= 0x180u, (_DWORD)v6 != 128))
          && ((*(_DWORD *)(v8 + 1136) & 0x10) == 0
            ? (v78 = (1 << *(_DWORD *)(v9 + 140)) - 1)
            : (v78 = ((unsigned __int16)**(_DWORD **)(v8 + 1184) | (unsigned __int16)(**(_DWORD **)(v8 + 1184) >> 10)) & 0x3FF),
              (v78 & *(_DWORD *)(v72 + 2344)) != 0) )
        {
LABEL_130:
          *(_QWORD *)(v8 + 1104) = MEMORY[0xFFFFF78000000320];
          goto LABEL_156;
        }
      }
      goto LABEL_154;
    }
    if ( (_DWORD)v73 != v75 && !*(_BYTE *)(v8 + 1076) )
    {
      v73 = ((_BYTE)v73 - 1) & 0x3F;
      v79 = *(unsigned int *)(1312 * v73 + v15 + 1216);
      if ( (v79 & 0x20) == 0 )
        goto LABEL_156;
      v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v79, v74);
      v80[3] = 281LL;
      v80[4] = 0x100000LL;
      v80[5] = v73;
      v80[6] = v15;
      v80[7] = v9;
      WdLogEvent5_WdCriticalError(v80);
      __debugbreak();
    }
    *(_QWORD *)(v8 + 1104) = MEMORY[0xFFFFF78000000320];
    if ( *(_BYTE *)(v9 + 144) )
    {
      v81 = *(_DWORD *)(v15 + 48);
      v6 = ((unsigned __int8)*(_DWORD *)(v15 + 44) - 1) & 0x3F;
      while ( v81 != (_DWORD)v6 )
      {
        if ( *(_DWORD *)(1312LL * v81 + v15 + 1132) == 14 )
          goto LABEL_156;
        v81 = ((_BYTE)v81 - 1) & 0x3F;
      }
      v6 = *(unsigned int *)(v8 + 1136);
      if ( (v6 & 0x10) != 0 )
        v82 = ((unsigned __int16)**(_DWORD **)(v8 + 1184) | (unsigned __int16)(**(_DWORD **)(v8 + 1184) >> 10)) & 0x3FF;
      else
        v82 = (1 << *(_DWORD *)(v9 + 140)) - 1;
      if ( (v82 & *(_DWORD *)(v72 + 2348)) != 0 )
        goto LABEL_156;
      if ( *(_DWORD *)(v9 + 148) > 1u && *(_DWORD *)(v72 + 4) != 3 )
      {
        v6 &= 0x180u;
        if ( (_DWORD)v6 == 128 )
          goto LABEL_163;
      }
    }
    v83 = (*(_DWORD *)(v8 + 1136) & 0x10) != 0
        ? ((unsigned __int16)**(_DWORD **)(v8 + 1184) | (unsigned __int16)(**(_DWORD **)(v8 + 1184) >> 10)) & 0x3FF
        : (1 << *(_DWORD *)(v9 + 140)) - 1;
    if ( (v83 & *(_DWORD *)(v72 + 2344)) == 0 )
    {
LABEL_163:
      if ( *(_BYTE *)(v8 + 1076) )
        VidSchiRestartQueuedFlip(a1, v91, v110, v15, v73);
      v84 = *(_DWORD *)(v8 + 1072);
      if ( !v84 )
      {
LABEL_154:
        v85 = v110;
        *(_DWORD *)(v8 + 1052) = 4;
        VidSchiExecuteMmIoFlip(
          (__int64)a1,
          v9,
          v85,
          (struct VIDSCH_FLIP_QUEUE *)v15,
          v73,
          (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)&v109);
        goto LABEL_156;
      }
      *(_DWORD *)(v8 + 1052) = 3;
      *(_DWORD *)(v8 + 1072) = v84 - 1;
    }
LABEL_156:
    if ( *(_DWORD *)(1312LL * *(unsigned int *)(v15 + 36) + v15 + 1132) != 16 )
      *(_DWORD *)(v15 + 36) = *(_DWORD *)(v15 + 32);
    goto LABEL_159;
  }
  *(_DWORD *)(v8 + 1052) = 8;
LABEL_102:
  *((_DWORD *)a2 + 16) |= 2u;
  if ( v109 )
    VidSchiCompletePendingFlipOnPlane((_DWORD)a1, v9, v110, v15, 9);
LABEL_104:
  VidSchiCompleteHwQueuePacket((struct HwQueueStagingList ***)a1, v5, (const GUID *)v6);
}
