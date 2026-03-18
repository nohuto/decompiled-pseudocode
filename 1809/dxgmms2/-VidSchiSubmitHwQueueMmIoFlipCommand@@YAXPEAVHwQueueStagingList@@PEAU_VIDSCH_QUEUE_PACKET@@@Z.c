/*
 * XREFs of ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035780
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00351A0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035430 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0002948 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C000EE78 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0016618 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002FB4C (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033964 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0039AB4 (VidSchiCompletePendingFlipOnPlane.c)
 */

void __fastcall VidSchiSubmitHwQueueMmIoFlipCommand(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r10
  struct _VIDSCH_QUEUE_PACKET *v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  bool v12; // zf
  char v13; // r12
  unsigned int v14; // r11d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rsi
  char v21; // bl
  int v22; // eax
  char v23; // r8
  unsigned int v24; // r10d
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r9d
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rbx
  _DWORD *v31; // rsi
  __int64 v32; // r15
  _QWORD *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int16 v37; // dx
  _DWORD *v38; // r9
  __int64 v39; // rax
  unsigned int v40; // r8d
  int v41; // eax
  char v42; // cl
  int v43; // eax
  __int64 v44; // rax
  int v45; // ecx
  int v46; // ecx
  int v47; // edx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  unsigned int v57; // edx
  unsigned int v58; // edx
  int v59; // eax
  char v60; // cl
  int v61; // eax
  unsigned int v62; // r10d
  unsigned int v63; // eax
  int v64; // eax
  int v65; // ebx
  int v66; // r10d
  unsigned int v67; // ecx
  unsigned int v68; // r11d
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rbx
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // r9
  unsigned int v77; // edx
  int v78; // edx
  int v79; // edx
  __int64 v80; // rcx
  _QWORD *v81; // rax
  __int64 v82; // r9
  unsigned int v83; // edx
  int v84; // edx
  int v85; // edx
  int v86; // eax
  _QWORD *v87; // rax
  unsigned int v88; // [rsp+30h] [rbp-69h]
  int v89; // [rsp+34h] [rbp-65h]
  unsigned int v90; // [rsp+38h] [rbp-61h]
  int v91; // [rsp+3Ch] [rbp-5Dh]
  int v92; // [rsp+40h] [rbp-59h]
  __int64 v93; // [rsp+48h] [rbp-51h]
  __int64 v94; // [rsp+50h] [rbp-49h]
  __int64 v95; // [rsp+58h] [rbp-41h]
  _DWORD *v96; // [rsp+60h] [rbp-39h]
  __int64 v97; // [rsp+68h] [rbp-31h]
  __int64 v98; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v99; // [rsp+78h] [rbp-21h]
  unsigned int v100; // [rsp+80h] [rbp-19h]
  unsigned int v101; // [rsp+84h] [rbp-15h]
  int v102; // [rsp+88h] [rbp-11h]
  unsigned int v103; // [rsp+8Ch] [rbp-Dh]
  unsigned int v104; // [rsp+90h] [rbp-9h]
  int v105; // [rsp+98h] [rbp-1h]
  int v106; // [rsp+9Ch] [rbp+3h]
  int v107; // [rsp+A0h] [rbp+7h]
  int v108; // [rsp+A4h] [rbp+Bh]
  int v109; // [rsp+A8h] [rbp+Fh]
  int v110; // [rsp+ACh] [rbp+13h]
  char v113; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v114; // [rsp+118h] [rbp+7Fh]

  v2 = *((_QWORD *)a2 + 12);
  v3 = 1LL;
  v4 = a2;
  v95 = *(_QWORD *)(v2 + 40);
  v5 = *(_QWORD *)(v95 + 8);
  v6 = *((unsigned int *)a2 + 40);
  v94 = v5;
  v7 = (unsigned int)v6;
  v88 = *((_DWORD *)a2 + 40);
  v8 = *(_QWORD *)(v5 + 32);
  v93 = v6;
  v9 = *(_QWORD *)(v8 + 8 * v6 + 2576);
  if ( (*(_BYTE *)(v8 + 2428) & 1) != 0
    || *(_DWORD *)(v8 + 2404)
    || *(_BYTE *)(v5 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0)
    || (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    goto LABEL_106;
  }
  v10 = *((_QWORD *)a2 + 51) - *(_QWORD *)(v5 + 8LL * (unsigned int)v6 + 376);
  if ( v10 > (unsigned int)(64 - *(_DWORD *)(v9 + 2324)) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, a2);
    v11[3] = 281LL;
    v11[4] = 2048LL;
    v11[5] = v2;
    v11[6] = v4;
    v11[7] = *((int *)v4 + 12);
    WdLogEvent5_WdCriticalError(v11);
    __debugbreak();
  }
  v12 = *(_DWORD *)(v9 + 4) == 3;
  v113 = 0;
  if ( v12 || !*((_DWORD *)a2 + 101) && (*((_DWORD *)a2 + 68) & 0x10000000) != 0 )
  {
    v89 = v3;
    v97 = v3;
  }
  else
  {
    v89 = 0;
    v97 = 0LL;
  }
  v13 = -1;
  v14 = -1;
  if ( ((unsigned __int8)(*((_DWORD *)a2 + 18) >> 23) & (unsigned __int8)v3) != 0 )
  {
    v15 = ((unsigned __int16)*((_DWORD *)a2 + 208) | (unsigned __int16)(*((_DWORD *)a2 + 208) >> 10)) & 0x3FF;
  }
  else
  {
    v10 = *(unsigned int *)(v8 + 140);
    v15 = (unsigned int)(((_DWORD)v3 << v10) - v3);
  }
  if ( (_DWORD)v15 )
    goto LABEL_27;
  v16 = *(_DWORD *)(v8 + 140);
  v14 = 0;
  v114 = 0;
  if ( !v16 )
    goto LABEL_26;
  v17 = *(_QWORD *)(v8 + 8LL * *((unsigned int *)v4 + 40) + 2576);
  while ( 1 )
  {
    v10 = 216LL * v14;
    v18 = *(int *)(v10 + v17 + 164);
    if ( (int)v18 <= -1 )
    {
      v15 = 0LL;
    }
    else
    {
      v10 = 136 * v18;
      v15 = *(unsigned int *)(136 * v18 + *(_QWORD *)(v8 + 2704) + 112);
    }
    if ( (_DWORD)v15 != 2 )
      break;
    v14 += v3;
    v114 = v14;
    if ( v14 >= v16 )
      goto LABEL_26;
  }
  if ( v14 == -1 )
  {
LABEL_26:
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v15);
    v19[3] = 281LL;
    v19[4] = 0x100000LL;
    v19[5] = 0LL;
    v19[6] = *((unsigned int *)v4 + 99);
    v19[7] = v8;
    WdLogEvent5_WdCriticalError(v19);
    __debugbreak();
LABEL_27:
    v20 = *(_QWORD *)(v8 + 8 * v7 + 2576);
    v21 = -1;
    v12 = !_BitScanForward((unsigned int *)&v22, v15);
    v105 = v22;
    if ( !v12 )
      v21 = v22;
    do
    {
      v23 = v21;
      v24 = v14;
      v14 = v21;
      v25 = 216LL * (unsigned int)v21;
      v26 = *(int *)(v25 + v20 + 164);
      if ( (int)v26 <= -1 )
      {
        v27 = 0;
      }
      else
      {
        v25 = 136 * v26;
        v27 = *(_DWORD *)(136 * v26 + *(_QWORD *)(v8 + 2704) + 112);
      }
      if ( v27 == 2 )
      {
        v87 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v15);
        v87[5] = v21;
        v87[3] = 281LL;
        v87[4] = 0x100000LL;
        v87[6] = *((unsigned int *)v4 + 99);
        v87[7] = v8;
        WdLogEvent5_WdCriticalError(v87);
        __debugbreak();
        JUMPOUT(0x1C0036457LL);
      }
      v21 = -1;
      if ( v24 != -1 )
        v14 = v24;
      v114 = v14;
      v15 = ~(1 << v23) & (unsigned int)v15;
      v12 = !_BitScanForward((unsigned int *)&v28, v15);
      v106 = v28;
      if ( !v12 )
        v21 = v28;
    }
    while ( (_DWORD)v15 );
  }
  v96 = *(_DWORD **)(v9 + 8LL * v14 + 24);
  v29 = (unsigned int)(*((_DWORD *)v4 + 102) - *(_DWORD *)(v5 + 8 * v93 + 376));
  v91 = *((_DWORD *)v4 + 102) - *(_DWORD *)(v5 + 8 * v93 + 376);
  v30 = (*((_BYTE *)v4 + 408) - *(_BYTE *)(v5 + 8 * v93 + 376) + (unsigned __int8)v96[8]) & 0x3F;
  v92 = (*((_BYTE *)v4 + 408) - *(_BYTE *)(v5 + 8 * v93 + 376) + (unsigned __int8)v96[8]) & 0x3F;
  v31 = &v96[324 * v30];
  v32 = (__int64)(v31 + 14);
  v33 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v96, v29);
  v33[4] = v96;
  v33[3] = v4;
  v33[5] = v30;
  v33[6] = (int)v31[277];
  WdLogEvent5_WdPresentTokenEvent(v33);
  v34 = v95;
  v35 = *(_QWORD *)(v8 + 616);
  v36 = *(unsigned __int16 *)(*(_QWORD *)(v95 + 16) + 4LL);
  if ( (unsigned int)v36 < *(_DWORD *)(v8 + 688) )
    v35 += 8 * v36;
  v37 = *(_WORD *)(*(_QWORD *)v35 + 6LL);
  v90 = v37;
  if ( v31[277] == 8 )
  {
    v38 = v31 + 284;
    *(_QWORD *)&v31[2 * v31[284] + 14] = *((_QWORD *)v4 + 99);
    *(_QWORD *)&v31[2 * v31[284] + 142] = *((_QWORD *)v4 + 100);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 99) + 32LL));
    v39 = *(_QWORD *)(v95 + 8);
    ++v31[284];
    *((_QWORD *)v31 + 137) = v39;
    v31[282] |= 1 << v37;
  }
  else
  {
    ++*(_DWORD *)(v8 + 724);
    ++*(_DWORD *)(v94 + 1272);
    ++*(_DWORD *)(v9 + 2324);
    if ( (*((_DWORD *)v4 + 68) & 0x800000) != 0 )
      v40 = ((unsigned __int16)*((_DWORD *)v4 + 208) | (unsigned __int16)(*((_DWORD *)v4 + 208) >> 10)) & 0x3FF;
    else
      v40 = (1 << *(_DWORD *)(v8 + 140)) - 1;
    v12 = !_BitScanForward((unsigned int *)&v41, v40);
    v42 = -1;
    v107 = v41;
    if ( !v12 )
      v42 = v41;
    if ( v40 )
    {
      do
      {
        ++*(_DWORD *)(216LL * v42 + *(_QWORD *)(v8 + 8 * v93 + 2576) + 172);
        v43 = 1 << v42;
        v42 = -1;
        v40 &= ~v43;
        v12 = !_BitScanForward((unsigned int *)&v43, v40);
        v108 = v43;
        if ( !v12 )
          v42 = v43;
      }
      while ( v40 );
      v34 = v95;
    }
    VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v31 + 14));
    v44 = *(_QWORD *)(v34 + 8);
    v31[294] |= 0x2000u;
    *((_QWORD *)v31 + 137) = v44;
    *(_QWORD *)v32 = *((_QWORD *)v4 + 99);
    *((_QWORD *)v31 + 71) = *((_QWORD *)v4 + 100);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 99) + 32LL));
    v31[276] = *((_DWORD *)v4 + 200);
    v31[278] = *((_DWORD *)v4 + 98);
    *((_BYTE *)v31 + 1120) = (*((_DWORD *)v4 + 68) & 0x10) != 0;
    v45 = v31[294] ^ (v31[294] ^ (*((_DWORD *)v4 + 18) >> 19)) & 0x10;
    v31[294] = v45;
    v46 = (v45 ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x200 ^ v45;
    v31[294] = v46;
    v47 = v46 ^ (v46 ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x400;
    v31[294] = v47;
    if ( (v47 & 0x200) != 0 )
    {
      v48 = *((_DWORD *)v4 + 158);
      v31[308] = v48;
      v49 = v48 - 1;
      if ( v49 )
      {
        if ( v49 == 1 )
        {
          *(_OWORD *)(v31 + 309) = *(_OWORD *)((char *)v4 + 636);
          *(_OWORD *)(v31 + 313) = *(_OWORD *)((char *)v4 + 652);
          *(_OWORD *)(v31 + 317) = *(_OWORD *)((char *)v4 + 668);
          *(_OWORD *)(v31 + 321) = *(_OWORD *)((char *)v4 + 684);
          *(_QWORD *)(v31 + 325) = *(_QWORD *)((char *)v4 + 700);
        }
      }
      else
      {
        *(_OWORD *)(v31 + 309) = *(_OWORD *)((char *)v4 + 636);
        *(_QWORD *)(v31 + 313) = *(_QWORD *)((char *)v4 + 652);
        v31[315] = *((_DWORD *)v4 + 165);
      }
    }
    else
    {
      v31[308] = 0;
    }
    if ( (v47 & 0x400) != 0 )
    {
      *(_OWORD *)(v31 + 327) = *(_OWORD *)((char *)v4 + 708);
      *(_OWORD *)(v31 + 331) = *(_OWORD *)((char *)v4 + 724);
    }
    memmove(*((void **)v31 + 153), (char *)v4 + 832, *((unsigned int *)v4 + 211));
    v31[281] = *((_DWORD *)v4 + 104);
    v31[282] = 1 << v90;
    v50 = v31[294] ^ (v31[294] ^ (*((_DWORD *)v4 + 68) >> 19)) & 1;
    v31[294] = v50;
    v51 = ((unsigned __int8)v50 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 2 ^ v50;
    v31[294] = v51;
    v52 = ((unsigned __int8)v51 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 4 ^ v51;
    v31[294] = v52;
    v31[294] = v52 ^ ((unsigned __int8)v52 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 8;
    v31[295] = *((_DWORD *)v4 + 106);
    *((_QWORD *)v31 + 150) = *((_QWORD *)v4 + 37);
    *((_QWORD *)v31 + 151) = *((_QWORD *)v4 + 38);
    *((_QWORD *)v4 + 37) = 0LL;
    v53 = *((_QWORD *)v4 + 39);
    *((_QWORD *)v31 + 152) = v53;
    if ( v53 )
      _InterlockedIncrement((volatile signed __int32 *)(v53 + 4));
    v54 = *((_DWORD *)v4 + 68);
    v38 = v31 + 284;
    v31[284] = 1;
    if ( (v54 & 0x400) != 0 )
    {
      v31[283] = *((_DWORD *)v4 + 105);
      v55 = *((_DWORD *)v4 + 105);
    }
    else
    {
      v31[283] = 1;
      v55 = 1;
    }
    v31[285] = v55;
    if ( *((_BYTE *)v31 + 1120) || v89 )
    {
      v31[279] = 0;
      v56 = v31[294] ^ (v31[294] ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x80;
      v31[294] = v56;
      v31[294] = v56 ^ ((unsigned __int16)v56 ^ (*((_DWORD *)v4 + 68) >> 20)) & 0x100;
      goto LABEL_76;
    }
    switch ( *((_DWORD *)v4 + 101) )
    {
      case 1:
        goto LABEL_74;
      case 2:
        v31[279] = 1;
        goto LABEL_76;
      case 3:
        v31[279] = 2;
        goto LABEL_76;
    }
    if ( *((_DWORD *)v4 + 101) != 4 )
    {
LABEL_74:
      v31[279] = 0;
      goto LABEL_76;
    }
    v31[279] = 3;
  }
LABEL_76:
  if ( (*((_DWORD *)v4 + 68) & 0x800) != 0 )
    *((_BYTE *)v31 + 1121) = 1;
  v99 = (unsigned int *)*((_QWORD *)v31 + 153);
  v98 = v8;
  v57 = *v99;
  v7 = *v99 & 0x3FF;
  v100 = *v99 & 0x3FF;
  if ( *(_BYTE *)(v8 + 144) )
    v58 = (v57 >> 10) & 0x3FF;
  else
    v58 = 0;
  v12 = !_BitScanForward((unsigned int *)&v59, v7);
  v60 = -1;
  v101 = v58;
  v109 = v59;
  if ( !v12 )
    v60 = v59;
  v102 = 0;
  v12 = !_BitScanForward((unsigned int *)&v61, v58);
  v62 = v60;
  v110 = v61;
  if ( !v12 )
    v13 = v61;
  v103 = v60;
  v63 = v13;
  v104 = v13;
  while ( (_DWORD)v7 || v58 )
  {
    if ( v62 >= v63 )
      goto LABEL_98;
    v64 = v31[281];
    v65 = 0;
    v66 = 1;
    v67 = v90;
    v68 = 0;
    while ( (v64 & v66) == 0 )
    {
LABEL_93:
      ++v68;
      v66 *= 2;
      if ( v68 > v67 )
        goto LABEL_98;
    }
    v69 = *(_QWORD *)(((unsigned __int64)(unsigned int)(v102 + v65 * *(_DWORD *)(*((_QWORD *)v31 + 153) + 4LL)) << 6)
                    + *((_QWORD *)v31 + 153)
                    + *(_DWORD *)(*((_QWORD *)v31 + 153) + 4LL)
                    * ((8 * *(_DWORD *)(*((_QWORD *)v31 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                    + 48);
    v67 = v90;
    if ( ((*(_DWORD *)(v69 + 32) >> 2) & 0x3F) != v90 )
    {
      v64 = v31[281];
      ++v65;
      goto LABEL_93;
    }
    v70 = *(_QWORD *)(v69 + 96);
    if ( !*(_QWORD *)(v70 + 24) )
    {
      v71 = *(_QWORD *)(v70 + 16);
      if ( v71 )
        _InterlockedIncrement((volatile signed __int32 *)(v71 + 8));
    }
LABEL_98:
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v98);
    v63 = v104;
    v58 = v101;
    v7 = v100;
    v62 = v103;
  }
  v4 = a2;
  if ( v31[283] <= *v38 )
  {
    if ( v91 )
    {
      v31[277] = 7;
      goto LABEL_103;
    }
    v72 = v114;
    LODWORD(v73) = v92;
    while ( 1 )
    {
      v96[8] = ((_BYTE)v73 + 1) & 0x3F;
      ++*(_QWORD *)(v94 + 8 * v93 + 376);
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 2328));
      if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v32) )
      {
        if ( *(_BYTE *)(v9 + 66420) )
          break;
      }
      *(_DWORD *)(v32 + 1052) = 16;
LABEL_157:
      v73 = (unsigned int)v96[8];
      v32 = (__int64)&v96[324 * v73 + 14];
      if ( *(_DWORD *)(v32 + 1052) != 7 )
        goto LABEL_104;
    }
    *(_DWORD *)(v32 + 1052) = 2;
    v75 = v96[10];
    if ( v97 )
    {
      if ( (_DWORD)v73 != v75 )
        goto LABEL_154;
      if ( *(_BYTE *)(v8 + 144) )
      {
        v76 = *(_QWORD *)(v9 + 8 * v72 + 24);
        v77 = *(_DWORD *)(v76 + 48);
        v7 = ((unsigned __int8)*(_DWORD *)(v76 + 44) - 1) & 0x3F;
        while ( v77 != (_DWORD)v7 )
        {
          if ( *(_DWORD *)(1296LL * v77 + v76 + 1108) == 14 )
            goto LABEL_128;
          v77 = ((_BYTE)v77 - 1) & 0x3F;
        }
        v7 = *(unsigned int *)(v32 + 1120);
        if ( (*(_DWORD *)(v32 + 1120) & 0x10) != 0 )
          v78 = ((unsigned __int16)**(_DWORD **)(v32 + 1168) | (unsigned __int16)(**(_DWORD **)(v32 + 1168) >> 10)) & 0x3FF;
        else
          v78 = (1 << *(_DWORD *)(v8 + 140)) - 1;
        if ( (v78 & *(_DWORD *)(v9 + 2340)) != 0
          || (*(_DWORD *)(v8 + 148) <= 1u || *(_DWORD *)(v9 + 4) == 3 || (v7 &= 0x180u, (_DWORD)v7 != 128))
          && ((*(_DWORD *)(v32 + 1120) & 0x10) == 0
            ? (v79 = (1 << *(_DWORD *)(v8 + 140)) - 1)
            : (v79 = ((unsigned __int16)**(_DWORD **)(v32 + 1168) | (unsigned __int16)(**(_DWORD **)(v32 + 1168) >> 10)) & 0x3FF),
              (v79 & *(_DWORD *)(v9 + 2336)) != 0) )
        {
LABEL_128:
          *(_QWORD *)(v32 + 1088) = MEMORY[0xFFFFF78000000320];
          goto LABEL_154;
        }
      }
      goto LABEL_152;
    }
    if ( (_DWORD)v73 != v75 && !*(_BYTE *)(v32 + 1064) )
    {
      v73 = ((_BYTE)v73 - 1) & 0x3F;
      v80 = (unsigned int)v96[324 * v73 + 294];
      if ( (v80 & 0x20) == 0 )
        goto LABEL_154;
      v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v74);
      v81[3] = 281LL;
      v81[4] = 0x100000LL;
      v81[5] = v73;
      v81[6] = v96;
      v81[7] = v8;
      WdLogEvent5_WdCriticalError(v81);
      __debugbreak();
    }
    *(_QWORD *)(v32 + 1088) = MEMORY[0xFFFFF78000000320];
    if ( *(_BYTE *)(v8 + 144) )
    {
      v82 = *(_QWORD *)(v9 + 8 * v72 + 24);
      v83 = *(_DWORD *)(v82 + 48);
      v7 = ((unsigned __int8)*(_DWORD *)(v82 + 44) - 1) & 0x3F;
      while ( v83 != (_DWORD)v7 )
      {
        if ( *(_DWORD *)(1296LL * v83 + v82 + 1108) == 14 )
          goto LABEL_154;
        v83 = ((_BYTE)v83 - 1) & 0x3F;
      }
      v7 = *(unsigned int *)(v32 + 1120);
      if ( (v7 & 0x10) != 0 )
        v84 = ((unsigned __int16)**(_DWORD **)(v32 + 1168) | (unsigned __int16)(**(_DWORD **)(v32 + 1168) >> 10)) & 0x3FF;
      else
        v84 = (1 << *(_DWORD *)(v8 + 140)) - 1;
      if ( (v84 & *(_DWORD *)(v9 + 2340)) != 0 )
        goto LABEL_154;
      if ( *(_DWORD *)(v8 + 148) > 1u && *(_DWORD *)(v9 + 4) != 3 )
      {
        v7 &= 0x180u;
        if ( (_DWORD)v7 == 128 )
          goto LABEL_163;
      }
    }
    v85 = (*(_DWORD *)(v32 + 1120) & 0x10) != 0
        ? ((unsigned __int16)**(_DWORD **)(v32 + 1168) | (unsigned __int16)(**(_DWORD **)(v32 + 1168) >> 10)) & 0x3FF
        : (1 << *(_DWORD *)(v8 + 140)) - 1;
    if ( (v85 & *(_DWORD *)(v9 + 2336)) == 0 )
    {
LABEL_163:
      if ( *(_BYTE *)(v32 + 1064) )
        VidSchiRestartQueuedFlip(a1, v94, v88, v72, v73);
      v86 = *(_DWORD *)(v32 + 1060);
      if ( !v86 )
      {
LABEL_152:
        *(_DWORD *)(v32 + 1052) = 4;
        VidSchiExecuteMmIoFlip(a1, v8, v88, v72, v73, &v113);
        goto LABEL_154;
      }
      *(_DWORD *)(v32 + 1052) = 3;
      *(_DWORD *)(v32 + 1060) = v86 - 1;
    }
LABEL_154:
    if ( v96[324 * v96[9] + 277] != 16 )
      v96[9] = v96[8];
    goto LABEL_157;
  }
  v31[277] = 8;
LABEL_103:
  LODWORD(v72) = v114;
LABEL_104:
  *((_DWORD *)a2 + 16) |= 2u;
  if ( v113 )
    VidSchiCompletePendingFlipOnPlane((_DWORD)a1, v8, v88, 9, v72);
LABEL_106:
  VidSchiCompleteHwQueuePacket((struct HwQueueStagingList ***)a1, v4, (const GUID *)v7);
}
