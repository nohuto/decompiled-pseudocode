/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C001528C
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N6@Z @ 0x1C00130D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C000A240 (VidSchUnwaitFlipQueue.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0013434 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0015958 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     McTemplateK0pqqpqqqxxqq @ 0x1C002CB0C (McTemplateK0pqqpqqqxxqq.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_CONTEXT *a2,
        struct VIDSCH_HW_QUEUE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_DEVICE *a6)
{
  __int64 v6; // rax
  unsigned int *v7; // r13
  __int64 v9; // rbx
  char v11; // dl
  __int64 v12; // rbp
  __int64 v13; // r11
  char v14; // cl
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r12
  unsigned int i; // r10d
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // esi
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r8d
  bool j; // zf
  int v29; // eax
  char v30; // cl
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  __int64 v36; // r9
  int v37; // eax
  char v38; // r15
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  CRefCountedBuffer *v44; // rcx
  int v45; // edx
  int v46; // eax
  unsigned int k; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  int v53; // r8d
  __int64 v54; // rcx
  __int64 v55; // r9
  _QWORD *v56; // rax
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  __int64 v60; // rax
  int v61; // [rsp+70h] [rbp-78h]
  int v62; // [rsp+74h] [rbp-74h]
  char v63; // [rsp+78h] [rbp-70h]
  int v64; // [rsp+7Ch] [rbp-6Ch]
  __int64 v65; // [rsp+90h] [rbp-58h]
  struct HwQueueStagingList *v66; // [rsp+F0h] [rbp+8h]
  __int128 v67; // [rsp+F8h] [rbp+10h]
  int v68; // [rsp+108h] [rbp+20h]
  char v69; // [rsp+118h] [rbp+30h]

  *((_QWORD *)&v67 + 1) = a3;
  *(_QWORD *)&v67 = a2;
  v66 = a1;
  v6 = *((unsigned int *)a4 + 31);
  v7 = (unsigned int *)((char *)a4 + 552);
  v9 = (unsigned int)v6;
  v64 = *((_DWORD *)a4 + 31);
  v11 = -1;
  v12 = *((_QWORD *)a6 + 4);
  v13 = *(_QWORD *)(v12 + 8 * v6 + 2576);
  v65 = v13;
  j = !_BitScanForward((unsigned int *)&a1, *((_DWORD *)a4 + 138) & 0x3FF);
  if ( !j )
    v11 = (char)a1;
  v14 = 0;
  if ( v11 != -1 )
    v14 = v11;
  v15 = (unsigned int)v14;
  v63 = v14;
  v16 = *(int *)(216 * v15 + v13 + 172);
  if ( (int)v16 <= -1 )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(v12 + 2704) + 136 * v16;
  for ( i = 0;
        i < *((_DWORD *)a4 + 37);
        *(_WORD *)((char *)&v7[16 * v22 + 8] + v21) = *(_WORD *)(*(_QWORD *)(v20 + 96) + 6LL) )
  {
    v19 = *((_DWORD *)a4 + 139) * ((8 * *((_DWORD *)a4 + 140) + 191) & 0xFFFFFFF8)
        + ((unsigned __int64)(i * *((_DWORD *)a4 + 139)) << 6);
    v20 = *(_QWORD *)((char *)v7 + v19 + 48);
    *(_QWORD *)((char *)a4 + v19 + 592) = *(_QWORD *)(*(_QWORD *)(v20 + 96) + 32LL);
    LODWORD(v19) = *((_DWORD *)a4 + 139);
    v21 = (unsigned int)v19 * ((8 * *((_DWORD *)a4 + 140) + 191) & 0xFFFFFFF8);
    v22 = i * (unsigned int)v19;
    ++i;
  }
  if ( (*(_DWORD *)a4 & 0x2000000) != 0 && (v61 = *((_DWORD *)a4 + 38), v61 == *(_DWORD *)(v17 + 100)) )
  {
    v23 = *((_DWORD *)a4 + 39);
    v68 = v23;
  }
  else
  {
    v23 = *((_DWORD *)a4 + 33);
    v24 = 0;
    v61 = 0;
    v68 = v23;
    if ( !v23 )
    {
      if ( (*(_BYTE *)(v13 + 70584) & 1) != 0 )
        v24 = -1;
      v61 = v24;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)a6 + (unsigned int)v6 + 286);
  v25 = *(unsigned int *)(*((_QWORD *)a6 + 4) + 4LL);
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 5) + 24LL) + 8 * v25) + 8LL * (unsigned int)v6 + 88);
  if ( (*(_DWORD *)a4 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 8LL * (unsigned int)v6 + 5792) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
  if ( *(_DWORD *)(v17 + 112) == 1 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v26, v25);
    v56[3] = *((_QWORD *)a4 + 14);
    v56[4] = *((unsigned int *)a4 + 30);
    v56[5] = v23;
    v56[6] = *(_QWORD *)((char *)v7 + v7[1] * ((8 * v7[2] + 191) & 0xFFFFFFF8) + 40);
    v56[7] = *(unsigned __int16 *)((char *)v7 + v7[1] * ((8 * v7[2] + 191) & 0xFFFFFFF8) + 32);
    WdLogEvent5_WdPresentTokenEvent(v56);
    *(_DWORD *)(v17 + 116) = 0;
    v13 = v65;
    *(_DWORD *)(v17 + 112) = 2;
  }
  ++*(_DWORD *)(v12 + 724);
  ++*((_DWORD *)a6 + 319);
  ++*(_DWORD *)(v17 + 116);
  ++*(_DWORD *)(v13 + 2332);
  if ( (*(_DWORD *)a4 & 0x4000000) != 0 )
    v27 = ((unsigned __int16)*v7 | (unsigned __int16)(*v7 >> 10)) & 0x3FF;
  else
    v27 = (1 << *(_DWORD *)(v12 + 140)) - 1;
  for ( j = !_BitScanForward((unsigned int *)&v29, v27); ; j = !_BitScanForward((unsigned int *)&v29, v27) )
  {
    v30 = -1;
    if ( !j )
      v30 = v29;
    if ( !v27 )
      break;
    ++*(_DWORD *)(216LL * v30 + *(_QWORD *)(v12 + 8 * v9 + 2576) + 180);
    v27 &= ~(1 << v30);
  }
  v31 = *(_QWORD *)(v13 + 8 * v15 + 32);
  v32 = 1312LL * *(unsigned int *)(v31 + 32);
  v62 = *(_DWORD *)(v31 + 32);
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v32 + v31 + 80));
  v33 = *(_DWORD *)(v32 + v31 + 1216);
  *(_QWORD *)(v32 + v31 + 1224) = *((_QWORD *)a4 + 13);
  v33 |= 0x20u;
  *(_QWORD *)(v32 + v31 + 1232) = *((_QWORD *)a4 + 14);
  *(_DWORD *)(v32 + v31 + 1216) = v33;
  v34 = ((unsigned __int8)v33 ^ (unsigned __int8)(*(_DWORD *)a4 >> 22)) & 0x10 ^ v33;
  *(_DWORD *)(v32 + v31 + 1216) = v34;
  if ( (*(_DWORD *)a4 & 8) != 0 && *(_DWORD *)(v12 + 1952) == 2 )
    *(_DWORD *)(v32 + v31 + 1216) = v34 | 0x800;
  v35 = *((_DWORD *)a4 + 38);
  if ( v35 != *(_DWORD *)(v17 + 104) )
  {
    *(_DWORD *)(v17 + 104) = v35;
    *(_DWORD *)(v32 + v31 + 1216) |= 0x40u;
  }
  v36 = v67;
  *(_DWORD *)(v32 + v31 + 1128) = a5.LowPart;
  *(_DWORD *)(v32 + v31 + 1132) = 1;
  *(_DWORD *)(v32 + v31 + 1136) = *((_DWORD *)a4 + 30);
  *(_QWORD *)(v32 + v31 + 1144) = ++*(_QWORD *)(v31 + 64);
  if ( v67 == 0 )
  {
    v69 = 1;
    v37 = 1;
    *(_QWORD *)(v32 + v31 + 1168) = 0LL;
  }
  else
  {
    v69 = 0;
    if ( (_QWORD)v67 )
      *(_QWORD *)(v32 + v31 + 600) = *(_QWORD *)(v67 + 160);
    *(_DWORD *)(v32 + v31 + 1172) = *((_DWORD *)a4 + 37);
    *(_DWORD *)(v32 + v31 + 1168) = *((_DWORD *)a4 + 37);
    v37 = *((_DWORD *)a4 + 37);
  }
  *(_DWORD *)(v32 + v31 + 1176) = v37;
  *(_QWORD *)(v32 + v31 + 1120) = a6;
  *(_BYTE *)(v32 + v31 + 1156) = (*(_DWORD *)a4 & 0x10) != 0;
  if ( *(_DWORD *)(v12 + 1948) == 1 )
  {
    v38 = 0;
LABEL_34:
    if ( !v38 )
      goto LABEL_37;
    goto LABEL_35;
  }
  if ( *(_DWORD *)(v12 + 1948) != 2 )
  {
    v38 = (*(_DWORD *)a4 & 0x10000000) != 0;
    goto LABEL_34;
  }
  v38 = 1;
LABEL_35:
  if ( (*(_DWORD *)(v32 + v31 + 1216) & 0x10) != 0 )
    v38 = *(_BYTE *)(v12 + 144) != 0 ? v38 : 0;
LABEL_37:
  v39 = *(_DWORD *)(v32 + v31 + 1216) ^ (*(_DWORD *)(v32 + v31 + 1216) ^ (*(_DWORD *)a4 >> 19)) & 1;
  *(_DWORD *)(v32 + v31 + 1216) = v39;
  v40 = ((unsigned __int8)v39 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 2 ^ v39;
  *(_DWORD *)(v32 + v31 + 1216) = v40;
  v41 = ((unsigned __int8)v40 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 4 ^ v40;
  *(_DWORD *)(v32 + v31 + 1216) = v41;
  v42 = ((unsigned __int8)v41 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 8 ^ v41;
  *(_DWORD *)(v32 + v31 + 1216) = v42;
  *(_QWORD *)(v32 + v31 + 1240) = *((_QWORD *)a4 + 3);
  *(_QWORD *)(v32 + v31 + 1248) = *((_QWORD *)a4 + 4);
  *(_DWORD *)(v32 + v31 + 1216) = v42 ^ ((unsigned __int16)v42 ^ (*(_DWORD *)a4 >> 21)) & 0x200;
  v43 = *((_QWORD *)a4 + 5);
  *(_QWORD *)(v32 + v31 + 1256) = v43;
  if ( v43 )
    _InterlockedAdd((volatile signed __int32 *)(v43 + 4), 1u);
  v44 = (CRefCountedBuffer *)*((_QWORD *)a4 + 5);
  if ( v44 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v44);
    v36 = v67;
    *((_QWORD *)a4 + 5) = 0LL;
  }
  v45 = *(_DWORD *)(v32 + v31 + 1216);
  if ( (v45 & 0x200) != 0 )
  {
    v57 = *((_DWORD *)a4 + 90);
    *(_DWORD *)(v32 + v31 + 1272) = v57;
    v58 = v57 - 1;
    if ( v58 )
    {
      if ( v58 == 1 )
      {
        *(_OWORD *)(v32 + v31 + 1276) = *(_OWORD *)((char *)a4 + 364);
        *(_OWORD *)(v32 + v31 + 1292) = *(_OWORD *)((char *)a4 + 380);
        *(_OWORD *)(v32 + v31 + 1308) = *(_OWORD *)((char *)a4 + 396);
        *(_OWORD *)(v32 + v31 + 1324) = *(_OWORD *)((char *)a4 + 412);
        *(_QWORD *)(v32 + v31 + 1340) = *(_QWORD *)((char *)a4 + 428);
      }
    }
    else
    {
      *(_OWORD *)(v32 + v31 + 1276) = *(_OWORD *)((char *)a4 + 364);
      *(_QWORD *)(v32 + v31 + 1292) = *(_QWORD *)((char *)a4 + 380);
      *(_DWORD *)(v32 + v31 + 1300) = *((_DWORD *)a4 + 97);
    }
  }
  else
  {
    *(_DWORD *)(v32 + v31 + 1272) = 0;
  }
  v46 = v45 ^ (v45 ^ (*(_DWORD *)a4 >> 21)) & 0x400;
  *(_DWORD *)(v32 + v31 + 1216) = v46;
  if ( (v46 & 0x400) != 0 )
  {
    *(_OWORD *)(v32 + v31 + 1348) = *(_OWORD *)((char *)a4 + 436);
    *(_OWORD *)(v32 + v31 + 1364) = *(_OWORD *)((char *)a4 + 452);
  }
  for ( k = 0; k < *(_DWORD *)(v32 + v31 + 1176); ++k )
  {
    if ( v36 )
    {
      v48 = 8LL * k;
      v49 = *(_QWORD *)((char *)a4 + v48 + *((unsigned int *)a4 + 134));
      *(_QWORD *)(v48 + v32 + v31 + 80) = v49;
      ++*(_DWORD *)(v49 + 784);
    }
    v50 = *(_QWORD *)(*(_QWORD *)((char *)&v7[16 * (unsigned __int64)(k * v7[1]) + 12]
                                + v7[1] * ((8 * v7[2] + 191) & 0xFFFFFFF8))
                    + 96LL);
    if ( !*(_QWORD *)(v50 + 24) )
    {
      v51 = *(_QWORD *)(v50 + 16);
      if ( v51 )
        _InterlockedIncrement((volatile signed __int32 *)(v51 + 8));
    }
  }
  *(_DWORD *)(v32 + v31 + 1220) = v61;
  if ( *(_BYTE *)(v32 + v31 + 1156) )
  {
    *(_DWORD *)(v32 + v31 + 1152) = 0;
    if ( v68 )
      goto LABEL_57;
  }
  else
  {
    if ( v68 )
    {
      *(_DWORD *)(v32 + v31 + 1152) = v68 - 1;
      goto LABEL_57;
    }
    *(_DWORD *)(v32 + v31 + 1152) = 0;
  }
  v52 = *(_DWORD *)(v32 + v31 + 1216) | 0x80;
  *(_DWORD *)(v32 + v31 + 1216) = v52;
  if ( v38 )
    *(_DWORD *)(v32 + v31 + 1216) = v52 | 0x100;
LABEL_57:
  memmove(*(void **)(v32 + v31 + 1264), v7, v7[3]);
  *(_DWORD *)(v32 + v31 + 1160) = *((_DWORD *)a4 + 36);
  *(_DWORD *)(v32 + v31 + 1164) = *((_DWORD *)a4 + 36);
  if ( v69 && (*((_DWORD *)a4 + 1) & 2) != 0 )
  {
    v59 = *(_DWORD *)(v32 + v31 + 1216) | 0x1000;
    *(_DWORD *)(v32 + v31 + 1216) = v59;
    *(_QWORD *)(v32 + v31 + 1384) = *((_QWORD *)a4 + 60);
    *(_DWORD *)(v32 + v31 + 1216) = v59 & 0xFFFFFF7F;
    *(_DWORD *)(v32 + v31 + 1152) = 0;
  }
  if ( (*(_DWORD *)a4 & 0x800) != 0 )
    *(_BYTE *)(v32 + v31 + 1157) = 1;
  *(_DWORD *)(v31 + 32) = ((_BYTE)v62 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 728));
  _InterlockedIncrement((volatile signed __int32 *)(v65 + 2336));
  if ( bTracingEnabled )
  {
    v54 = *((_QWORD *)a4 + 23);
    if ( v54 )
    {
      if ( (_QWORD)v67 )
      {
        v55 = *(_QWORD *)(v67 + 56);
        if ( !v55 || (*(_DWORD *)(v67 + 112) & 0x40) != 0 )
          LODWORD(v55) = v67;
      }
      else
      {
        LODWORD(v55) = 0;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqqpqqqxxqq(
          v54,
          v67,
          v53,
          v55,
          a5.LowPart,
          v64,
          v54,
          v68,
          v63,
          *((_DWORD *)a4 + 48),
          *(_QWORD *)v17,
          *(_QWORD *)(v17 + 8),
          *((_DWORD *)a4 + 30),
          BYTE1(*(_DWORD *)(v32 + v31 + 1216)) & 1);
    }
  }
  VidSchUnwaitFlipQueue((__int64)v66, v12);
  if ( *((_QWORD *)&v67 + 1) )
  {
    v60 = *(_QWORD *)(*((_QWORD *)&v67 + 1) + 40LL);
    if ( !*(_BYTE *)(v60 + 88) && (*(_DWORD *)(v60 + 76) & 1) != 0 )
      ((void (__fastcall *)(_QWORD))DxgCoreInterface[22])(*(_QWORD *)(v12 + 8));
  }
}
