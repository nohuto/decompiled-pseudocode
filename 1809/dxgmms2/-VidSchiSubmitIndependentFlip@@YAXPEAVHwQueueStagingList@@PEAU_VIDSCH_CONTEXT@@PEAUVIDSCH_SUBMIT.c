/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0015F98
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N5@Z @ 0x1C000F820 (-VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0016618 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0018394 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     McTemplateK0pqqpqqqxxqq @ 0x1C002C27C (McTemplateK0pqqpqqqxxqq.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_CONTEXT *a2,
        struct VIDSCH_SUBMIT_DATA2 *a3,
        union _ULARGE_INTEGER a4,
        struct _VIDSCH_DEVICE *a5)
{
  __int64 v5; // rax
  unsigned int *v6; // r13
  __int64 v8; // rdi
  char v9; // dl
  DWORD LowPart; // ebx
  __int64 v12; // r15
  __int64 v13; // r11
  char v14; // cl
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r12
  unsigned int i; // r10d
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  bool j; // zf
  int v27; // eax
  char v28; // cl
  __int64 v29; // rdi
  __int64 v30; // rsi
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  struct _VIDSCH_CONTEXT *v34; // r9
  int v35; // eax
  char v36; // bp
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  __int64 v41; // rax
  CRefCountedBuffer *v42; // rcx
  int v43; // edx
  int v44; // eax
  unsigned int k; // r8d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  int v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // r9
  _QWORD *v54; // rax
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  __int64 v58; // rax
  char v59; // [rsp+70h] [rbp-68h]
  int v60; // [rsp+74h] [rbp-64h]
  __int64 v61; // [rsp+88h] [rbp-50h]
  struct HwQueueStagingList *v62; // [rsp+E0h] [rbp+8h]
  int v64; // [rsp+F0h] [rbp+18h]
  int v65; // [rsp+F8h] [rbp+20h]
  int v66; // [rsp+100h] [rbp+28h]

  v62 = a1;
  v5 = *((unsigned int *)a3 + 31);
  v6 = (unsigned int *)((char *)a3 + 560);
  v8 = (unsigned int)v5;
  v60 = *((_DWORD *)a3 + 31);
  v9 = -1;
  LowPart = a4.LowPart;
  v12 = *((_QWORD *)a5 + 4);
  v13 = *(_QWORD *)(v12 + 8 * v5 + 2576);
  v61 = v13;
  j = !_BitScanForward((unsigned int *)&a1, *((_DWORD *)a3 + 140) & 0x3FF);
  if ( !j )
    v9 = (char)a1;
  v14 = 0;
  if ( v9 != -1 )
    v14 = v9;
  v15 = (unsigned int)v14;
  v59 = v14;
  v16 = *(int *)(216 * v15 + v13 + 164);
  if ( (int)v16 <= -1 )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(v12 + 2704) + 136 * v16;
  for ( i = 0;
        i < *((_DWORD *)a3 + 37);
        *(_WORD *)((char *)&v6[16 * v22 + 8] + v21) = *(_WORD *)(*(_QWORD *)(v20 + 96) + 6LL) )
  {
    v19 = v6[1] * ((8 * v6[2] + 191) & 0xFFFFFFF8) + ((unsigned __int64)(i * v6[1]) << 6);
    v20 = *(_QWORD *)((char *)v6 + v19 + 48);
    *(_QWORD *)((char *)a3 + v19 + 600) = *(_QWORD *)(*(_QWORD *)(v20 + 96) + 32LL);
    LODWORD(v19) = v6[1];
    v21 = (unsigned int)v19 * ((8 * v6[2] + 191) & 0xFFFFFFF8);
    v22 = i * (unsigned int)v19;
    ++i;
  }
  if ( (*(_DWORD *)a3 & 0x2000000) != 0 && (v64 = *((_DWORD *)a3 + 38), v64 == *(_DWORD *)(v17 + 100)) )
  {
    v66 = *((_DWORD *)a3 + 39);
  }
  else
  {
    v64 = 0;
    v66 = *((_DWORD *)a3 + 33);
  }
  _InterlockedAdd((volatile signed __int32 *)a5 + (unsigned int)v5 + 285, 1u);
  v23 = *(unsigned int *)(*((_QWORD *)a5 + 4) + 4LL);
  v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 5) + 24LL) + 8 * v23) + 8LL * (unsigned int)v5 + 88);
  if ( (*(_DWORD *)a3 & 0x80u) == 0 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v12 + 8LL * (unsigned int)v5 + 5792) + 8LL), 1u);
  _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
  if ( *(_DWORD *)(v17 + 112) == 1 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v24, v23);
    v54[3] = *((_QWORD *)a3 + 14);
    v54[4] = *((unsigned int *)a3 + 30);
    v54[5] = v66;
    v54[6] = *(_QWORD *)((char *)v6 + v6[1] * ((8 * v6[2] + 191) & 0xFFFFFFF8) + 40);
    v54[7] = *(unsigned __int16 *)((char *)v6 + v6[1] * ((8 * v6[2] + 191) & 0xFFFFFFF8) + 32);
    WdLogEvent5_WdPresentTokenEvent(v54);
    *(_DWORD *)(v17 + 116) = 0;
    v13 = v61;
    *(_DWORD *)(v17 + 112) = 2;
  }
  ++*(_DWORD *)(v12 + 724);
  ++*((_DWORD *)a5 + 318);
  ++*(_DWORD *)(v17 + 116);
  ++*(_DWORD *)(v13 + 2324);
  if ( (*(_DWORD *)a3 & 0x4000000) != 0 )
    v25 = ((unsigned __int16)*v6 | (unsigned __int16)(*v6 >> 10)) & 0x3FF;
  else
    v25 = (1 << *(_DWORD *)(v12 + 140)) - 1;
  for ( j = !_BitScanForward((unsigned int *)&v27, v25); ; j = !_BitScanForward((unsigned int *)&v27, v25) )
  {
    v28 = -1;
    if ( !j )
      v28 = v27;
    if ( !v25 )
      break;
    ++*(_DWORD *)(216LL * v28 + *(_QWORD *)(v12 + 8 * v8 + 2576) + 172);
    v25 &= ~(1 << v28);
  }
  v29 = *(_QWORD *)(v13 + 8 * v15 + 24);
  v30 = 1296LL * *(unsigned int *)(v29 + 32);
  v65 = *(_DWORD *)(v29 + 32);
  VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v30 + v29 + 56));
  v31 = *(_DWORD *)(v30 + v29 + 1176);
  *(_QWORD *)(v30 + v29 + 1184) = *((_QWORD *)a3 + 13);
  v31 |= 0x20u;
  *(_QWORD *)(v30 + v29 + 1192) = *((_QWORD *)a3 + 14);
  *(_DWORD *)(v30 + v29 + 1176) = v31;
  v32 = ((unsigned __int8)v31 ^ (unsigned __int8)(*(_DWORD *)a3 >> 22)) & 0x10 ^ v31;
  *(_DWORD *)(v30 + v29 + 1176) = v32;
  if ( (*(_DWORD *)a3 & 8) != 0 && *(_DWORD *)(v12 + 1952) == 2 )
    *(_DWORD *)(v30 + v29 + 1176) = v32 | 0x800;
  v33 = *((_DWORD *)a3 + 38);
  if ( v33 != *(_DWORD *)(v17 + 104) )
  {
    *(_DWORD *)(v17 + 104) = v33;
    *(_DWORD *)(v30 + v29 + 1176) |= 0x40u;
  }
  v34 = a2;
  *(_DWORD *)(v30 + v29 + 1108) = 1;
  *(_DWORD *)(v30 + v29 + 1104) = LowPart;
  *(_DWORD *)(v30 + v29 + 1112) = *((_DWORD *)a3 + 30);
  if ( a2 )
  {
    *(_QWORD *)(v30 + v29 + 576) = *((_QWORD *)a2 + 20);
    *(_DWORD *)(v30 + v29 + 1136) = *((_DWORD *)a3 + 37);
    *(_DWORD *)(v30 + v29 + 1132) = *((_DWORD *)a3 + 37);
    v35 = *((_DWORD *)a3 + 37);
  }
  else
  {
    *(_QWORD *)(v30 + v29 + 1132) = 0LL;
    v35 = 1;
  }
  *(_DWORD *)(v30 + v29 + 1140) = v35;
  *(_QWORD *)(v30 + v29 + 1096) = a5;
  *(_BYTE *)(v30 + v29 + 1120) = (*(_DWORD *)a3 & 0x10) != 0;
  if ( *(_DWORD *)(v12 + 1948) == 1 )
  {
    v36 = 0;
LABEL_29:
    if ( !v36 )
      goto LABEL_32;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v12 + 1948) != 2 )
  {
    v36 = (*(_DWORD *)a3 & 0x10000000) != 0;
    goto LABEL_29;
  }
  v36 = 1;
LABEL_30:
  if ( (*(_DWORD *)(v30 + v29 + 1176) & 0x10) != 0 )
    v36 = *(_BYTE *)(v12 + 144) != 0 ? v36 : 0;
LABEL_32:
  v37 = *(_DWORD *)(v30 + v29 + 1176) ^ (*(_DWORD *)(v30 + v29 + 1176) ^ (*(_DWORD *)a3 >> 19)) & 1;
  *(_DWORD *)(v30 + v29 + 1176) = v37;
  v38 = ((unsigned __int8)v37 ^ (unsigned __int8)(*(_DWORD *)a3 >> 19)) & 2 ^ v37;
  *(_DWORD *)(v30 + v29 + 1176) = v38;
  v39 = ((unsigned __int8)v38 ^ (unsigned __int8)(*(_DWORD *)a3 >> 19)) & 4 ^ v38;
  *(_DWORD *)(v30 + v29 + 1176) = v39;
  v40 = ((unsigned __int8)v39 ^ (unsigned __int8)(*(_DWORD *)a3 >> 19)) & 8 ^ v39;
  *(_DWORD *)(v30 + v29 + 1176) = v40;
  *(_QWORD *)(v30 + v29 + 1200) = *((_QWORD *)a3 + 3);
  *(_QWORD *)(v30 + v29 + 1208) = *((_QWORD *)a3 + 4);
  *(_DWORD *)(v30 + v29 + 1176) = v40 ^ ((unsigned __int16)v40 ^ (*(_DWORD *)a3 >> 21)) & 0x200;
  v41 = *((_QWORD *)a3 + 5);
  *(_QWORD *)(v30 + v29 + 1216) = v41;
  if ( v41 )
    _InterlockedAdd((volatile signed __int32 *)(v41 + 4), 1u);
  v42 = (CRefCountedBuffer *)*((_QWORD *)a3 + 5);
  if ( v42 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v42);
    v34 = a2;
    *((_QWORD *)a3 + 5) = 0LL;
  }
  v43 = *(_DWORD *)(v30 + v29 + 1176);
  if ( (v43 & 0x200) != 0 )
  {
    v55 = *((_DWORD *)a3 + 90);
    *(_DWORD *)(v30 + v29 + 1232) = v55;
    v56 = v55 - 1;
    if ( v56 )
    {
      if ( v56 == 1 )
      {
        *(_OWORD *)(v30 + v29 + 1236) = *(_OWORD *)((char *)a3 + 364);
        *(_OWORD *)(v30 + v29 + 1252) = *(_OWORD *)((char *)a3 + 380);
        *(_OWORD *)(v30 + v29 + 1268) = *(_OWORD *)((char *)a3 + 396);
        *(_OWORD *)(v30 + v29 + 1284) = *(_OWORD *)((char *)a3 + 412);
        *(_QWORD *)(v30 + v29 + 1300) = *(_QWORD *)((char *)a3 + 428);
      }
    }
    else
    {
      *(_OWORD *)(v30 + v29 + 1236) = *(_OWORD *)((char *)a3 + 364);
      *(_QWORD *)(v30 + v29 + 1252) = *(_QWORD *)((char *)a3 + 380);
      *(_DWORD *)(v30 + v29 + 1260) = *((_DWORD *)a3 + 97);
    }
  }
  else
  {
    *(_DWORD *)(v30 + v29 + 1232) = 0;
  }
  v44 = v43 ^ (v43 ^ (*(_DWORD *)a3 >> 21)) & 0x400;
  *(_DWORD *)(v30 + v29 + 1176) = v44;
  if ( (v44 & 0x400) != 0 )
  {
    *(_OWORD *)(v30 + v29 + 1308) = *(_OWORD *)((char *)a3 + 436);
    *(_OWORD *)(v30 + v29 + 1324) = *(_OWORD *)((char *)a3 + 452);
  }
  for ( k = 0; k < *(_DWORD *)(v30 + v29 + 1140); ++k )
  {
    if ( v34 )
    {
      v46 = 8LL * k;
      v47 = *(_QWORD *)((char *)a3 + v46 + *((unsigned int *)a3 + 134));
      *(_QWORD *)(v46 + v30 + v29 + 56) = v47;
      ++*(_DWORD *)(v47 + 784);
    }
    v48 = *(_QWORD *)(*(_QWORD *)((char *)&v6[16 * (unsigned __int64)(k * v6[1]) + 12]
                                + v6[1] * ((8 * v6[2] + 191) & 0xFFFFFFF8))
                    + 96LL);
    if ( !*(_QWORD *)(v48 + 24) )
    {
      v49 = *(_QWORD *)(v48 + 16);
      if ( v49 )
        _InterlockedIncrement((volatile signed __int32 *)(v49 + 8));
    }
  }
  *(_DWORD *)(v30 + v29 + 1180) = v64;
  if ( *(_BYTE *)(v30 + v29 + 1120) )
  {
    *(_DWORD *)(v30 + v29 + 1116) = 0;
    if ( v66 )
      goto LABEL_52;
  }
  else
  {
    if ( v66 )
    {
      *(_DWORD *)(v30 + v29 + 1116) = v66 - 1;
      goto LABEL_52;
    }
    *(_DWORD *)(v30 + v29 + 1116) = 0;
  }
  v50 = *(_DWORD *)(v30 + v29 + 1176) | 0x80;
  *(_DWORD *)(v30 + v29 + 1176) = v50;
  if ( v36 )
    *(_DWORD *)(v30 + v29 + 1176) = v50 | 0x100;
LABEL_52:
  memmove(*(void **)(v30 + v29 + 1224), v6, v6[3]);
  *(_DWORD *)(v30 + v29 + 1124) = *((_DWORD *)a3 + 36);
  *(_DWORD *)(v30 + v29 + 1128) = *((_DWORD *)a3 + 36);
  if ( !a2 && (*((_DWORD *)a3 + 1) & 2) != 0 )
  {
    v57 = *(_DWORD *)(v30 + v29 + 1176) | 0x1000;
    *(_DWORD *)(v30 + v29 + 1176) = v57;
    v58 = *((_QWORD *)a3 + 60);
    *(_DWORD *)(v30 + v29 + 1116) = 0;
    *(_QWORD *)(v30 + v29 + 1344) = v58;
    *(_DWORD *)(v30 + v29 + 1176) = v57 & 0xFFFFFF7F;
  }
  if ( (*(_DWORD *)a3 & 0x800) != 0 )
    *(_BYTE *)(v30 + v29 + 1121) = 1;
  *(_DWORD *)(v29 + 32) = ((_BYTE)v65 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 728));
  _InterlockedIncrement((volatile signed __int32 *)(v61 + 2328));
  if ( bTracingEnabled )
  {
    v52 = *((_QWORD *)a3 + 23);
    if ( v52 )
    {
      if ( a2 )
      {
        v53 = *((_QWORD *)a2 + 7);
        if ( !v53 || (*((_DWORD *)a2 + 28) & 0x40) != 0 )
          LODWORD(v53) = (_DWORD)a2;
      }
      else
      {
        LODWORD(v53) = 0;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqqpqqqxxqq(
          v52,
          (_DWORD)a2,
          v51,
          v53,
          LowPart,
          v60,
          v52,
          v66,
          v59,
          *((_DWORD *)a3 + 48),
          *(_QWORD *)v17,
          *(_QWORD *)(v17 + 8),
          *((_DWORD *)a3 + 30),
          BYTE1(*(_DWORD *)(v30 + v29 + 1176)) & 1);
    }
  }
  VidSchUnwaitFlipQueue((__int64)v62, v12);
}
