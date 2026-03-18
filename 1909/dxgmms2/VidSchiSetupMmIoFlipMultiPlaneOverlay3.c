/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C00308F0
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C002A6D4 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C000D438 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0013434 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

__int64 __fastcall VidSchiSetupMmIoFlipMultiPlaneOverlay3(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r10
  int v12; // ecx
  unsigned int v13; // r13d
  unsigned int v14; // ebp
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  bool v17; // zf
  int v18; // eax
  char v19; // cl
  unsigned int v20; // r11d
  unsigned int v21; // r12d
  unsigned int v22; // ecx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdi
  char v26; // r8
  __int64 v27; // rsi
  unsigned int *v28; // r9
  __int64 v29; // r12
  int v30; // ecx
  unsigned int v31; // r10d
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rax
  CRefCountedBuffer *v35; // rcx
  int v36; // eax
  _DWORD *v37; // r12
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // r8
  char v43; // cl
  char v44; // cl
  int v45; // eax
  int v46; // edx
  char v47; // cl
  int v48; // eax
  _DWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  CRefCountedBuffer *v52; // rcx
  __int64 result; // rax
  int v54; // edx
  int v55; // edx
  __int128 v56; // xmm1
  unsigned int v57; // [rsp+20h] [rbp-A8h]
  __int64 v58; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+30h] [rbp-98h]
  __int64 v60; // [rsp+48h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v62; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v64; // [rsp+D8h] [rbp+10h]
  unsigned int v65; // [rsp+E0h] [rbp+18h]

  v9 = a1;
  v10 = a4;
  v11 = *(_QWORD *)(a1 + 8LL * a3 + 2576);
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = a3;
  v60 = v11;
  *(_DWORD *)(a4 + 12) ^= (*(_DWORD *)(a2 + 1136) ^ *(_DWORD *)(a4 + 12)) & 1;
  v12 = *(_DWORD *)(a4 + 12) ^ (*(_DWORD *)(a2 + 1136) ^ *(_DWORD *)(a4 + 12)) & 2;
  *(_DWORD *)(a4 + 12) = v12;
  *(_DWORD *)(a4 + 12) = v12 ^ (*(_DWORD *)(a2 + 1136) ^ v12) & 4;
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1140);
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 2120) = -1073741823;
  if ( (*(_DWORD *)(a2 + 1136) & 0x10) != 0 )
  {
    v13 = **(_DWORD **)(a2 + 1184) & 0x3FF;
    v14 = (**(_DWORD **)(a2 + 1184) >> 10) & 0x3FF;
  }
  else
  {
    v13 = 1;
    v14 = ((1 << *(_DWORD *)(v9 + 140)) - 1) & 0xFFFFFFFE;
  }
  *(_DWORD *)(a4 + 20) = 0;
  v15 = 0LL;
  v16 = *(_QWORD *)(a2 + 1176);
  v59 = 0LL;
  if ( v16 )
  {
    v15 = v16 + 16;
    v59 = v16 + 16LL * *(unsigned int *)(v16 + 8);
  }
  v17 = !_BitScanForward((unsigned int *)&v18, v13);
  v65 = 0;
  v19 = -1;
  if ( !v17 )
    v19 = v18;
  v20 = 0;
  v21 = v19;
  LOBYTE(v22) = -1;
  v23 = a6;
  v17 = !_BitScanForward((unsigned int *)&v24, v14);
  v64 = v21;
  if ( !v17 )
    LOBYTE(v22) = v24;
  v22 = (char)v22;
  v57 = (char)v22;
  while ( v13 || v14 )
  {
    v25 = *(_QWORD *)(a2 + 1184);
    v26 = 1;
    v27 = v20 * ((8 * *(_DWORD *)(v25 + 8) + 191) & 0xFFFFFFF8);
    v28 = (unsigned int *)(v27 + v25 + 16);
    if ( v21 >= v22 )
    {
      v46 = 1 << v22;
      if ( (*(unsigned __int16 *)(v11 + 33152) & (1 << v22)) != 0 )
      {
        *v28 = v22;
        *(_QWORD *)(v27 + v25 + 48) = 0LL;
        *(_QWORD *)(v27 + v25 + 40) = 0LL;
        *(_DWORD *)(v27 + v25 + 56) = 0;
        *(_QWORD *)(v27 + v25 + 64) = 0LL;
        *(_DWORD *)(v27 + v25 + 32) = 0;
      }
      else
      {
        v26 = 0;
        *(_QWORD *)(v27 + v25 + 24) = 0LL;
      }
      v47 = -1;
      v14 &= ~v46;
      v17 = !_BitScanForward((unsigned int *)&v48, v14);
      if ( !v17 )
        v47 = v48;
      v57 = v47;
      if ( !v26 )
      {
        v23 = a6;
        goto LABEL_48;
      }
    }
    else
    {
      if ( a5 )
      {
        *(_DWORD *)(v27 + v25 + 32) = *(_DWORD *)(v27 + v25 + 32) & 0xFFFFFFFD | (2 * a5);
      }
      else if ( (*(_DWORD *)(a2 + 1136) & 0x80) != 0 && (*(_DWORD *)(v11 + 70584) & 1) != 0 )
      {
        *(_DWORD *)(v27 + v25 + 32) |= 0x20u;
      }
      else if ( (*(_DWORD *)(a2 + 1136) & 0x80) != 0 && *(_BYTE *)(v9 + 5944) )
      {
        *(_DWORD *)(v27 + v25 + 32) |= 2u;
      }
      v29 = 0LL;
      *(_DWORD *)(v27 + v25 + 32) = *(_DWORD *)(v27 + v25 + 32) & 0xFFFFFFFB | ((*(_DWORD *)(v27 + v25 + 32) & 0x22) == 0
                                                                              ? 4
                                                                              : 0);
      v30 = *(_DWORD *)(a2 + 1096);
      *(_DWORD *)(v27 + v25 + 44) = v30;
      *(_QWORD *)(v27 + v25 + 48) = v27 + v25 + 200;
      if ( v30 )
      {
        do
        {
          VidSchiBindFlipPhysicalAddress(*(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(a2 + 1184), v65, v29);
          *(_QWORD *)(*(_QWORD *)(v27 + v25 + 48) + 8 * v29) = ((unsigned __int64)(v65
                                                                                 + (_DWORD)v29
                                                                                 * *(_DWORD *)(*(_QWORD *)(a2 + 1184)
                                                                                             + 4LL)) << 6)
                                                             + *(_QWORD *)(a2 + 1184)
                                                             + *(_DWORD *)(*(_QWORD *)(a2 + 1184) + 4LL)
                                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                                                             + 16LL;
          v29 = (unsigned int)(v29 + 1);
        }
        while ( (unsigned int)v29 < *(_DWORD *)(v27 + v25 + 44) );
        v10 = a4;
        v20 = v65;
        v28 = (unsigned int *)(v27 + v25 + 16);
      }
      v31 = v64;
      if ( !v64 )
      {
        v32 = *(_QWORD *)(a2 + 1160);
        if ( v32 )
        {
          *(_DWORD *)(v27 + v25 + 56) = *(_DWORD *)v32;
          *(_QWORD *)(v27 + v25 + 64) = *(_QWORD *)(a2 + 1160) + 8LL;
          v32 = *(_QWORD *)(a2 + 1160);
        }
        v33 = *(_QWORD *)(a2 + 1168);
        v58 = v33;
        if ( v33 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v33 + 16), &LockHandle);
          v34 = v58;
          v35 = *(CRefCountedBuffer **)(v58 + 8);
          if ( v35 )
          {
            CRefCountedBuffer::RefCountedBufferRelease(v35);
            v34 = v58;
          }
          *(_QWORD *)(v34 + 8) = v32;
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 4));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v20 = v65;
          v31 = 0;
          v28 = (unsigned int *)(v27 + v25 + 16);
        }
      }
      *(_DWORD *)(v27 + v25 + 32) |= 1u;
      v36 = *(_DWORD *)(v27 + v25 + 32);
      v37 = (_DWORD *)(v27 + v25 + 76);
      *v28 = v31;
      v38 = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)*(_DWORD *)(a2 + 1136)) & 8;
      *(_DWORD *)(v27 + v25 + 32) = v38;
      v39 = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)(*(_DWORD *)(a2 + 1136) >> 1)) & 0x10;
      v40 = *(_DWORD *)(v27 + v25 + 72);
      *(_DWORD *)(v27 + v25 + 32) = v39;
      v41 = *(_QWORD *)(a2 + 1184);
      v42 = v20 * ((8 * *(_DWORD *)(v41 + 8) + 191) & 0xFFFFFFF8);
      *(_DWORD *)(v27 + v25 + 72) ^= (*(_DWORD *)(v42 + v41 + 188) ^ v40) & 1;
      *(_DWORD *)(v27 + v25 + 72) ^= ((unsigned __int8)*(_DWORD *)(v27 + v25 + 72) ^ (unsigned __int8)*(_DWORD *)(v42 + v41 + 188)) & 2;
      *v37 = (unsigned __int16)*(_DWORD *)(v42 + v41 + 160);
      *(_DWORD *)(v27 + v25 + 80) = (unsigned __int16)*(_DWORD *)(v42 + v41 + 164);
      *(_DWORD *)(v27 + v25 + 84) = *(unsigned __int16 *)(v42 + v41 + 162);
      *(_DWORD *)(v27 + v25 + 88) = *(unsigned __int16 *)(v42 + v41 + 166);
      *(_DWORD *)(v27 + v25 + 92) = *(__int16 *)(v42 + v41 + 168);
      *(_DWORD *)(v27 + v25 + 96) = *(__int16 *)(v42 + v41 + 172);
      *(_DWORD *)(v27 + v25 + 100) = *(unsigned __int16 *)(v42 + v41 + 170);
      *(_DWORD *)(v27 + v25 + 104) = *(unsigned __int16 *)(v42 + v41 + 174);
      *(_DWORD *)(v27 + v25 + 108) = (unsigned __int16)*(_DWORD *)(v42 + v41 + 176);
      *(_DWORD *)(v27 + v25 + 112) = (unsigned __int16)*(_DWORD *)(v42 + v41 + 180);
      *(_DWORD *)(v27 + v25 + 116) = *(unsigned __int16 *)(v42 + v41 + 178);
      *(_DWORD *)(v27 + v25 + 120) = *(unsigned __int16 *)(v42 + v41 + 182);
      if ( v15 && *(_DWORD *)v15 == v31 )
      {
        *(_DWORD *)(v27 + v25 + 144) = *(_DWORD *)(v15 + 4);
        v37 = *(_DWORD **)(v15 + 8);
        v15 = (v15 + 16) & -(__int64)(v15 < v59);
      }
      else
      {
        *(_DWORD *)(v27 + v25 + 144) = 1;
      }
      *(_QWORD *)(v27 + v25 + 152) = v37;
      v43 = v31;
      v11 = v60;
      *(_DWORD *)(v27 + v25 + 124) = ((*(_DWORD *)(v42 + v41 + 188) >> 3) & 3) + 1;
      *(_DWORD *)(v27 + v25 + 128) ^= (*(_DWORD *)(v27 + v25 + 128) ^ (*(_DWORD *)(v42 + v41 + 188) >> 2)) & 1;
      *(_DWORD *)(v27 + v25 + 132) = *(_DWORD *)(v42 + v41 + 184);
      *(_DWORD *)(v27 + v25 + 140) = *(_DWORD *)(v42 + v41 + 192);
      v45 = 1 << v43;
      v44 = -1;
      v13 &= ~v45;
      v17 = !_BitScanForward((unsigned int *)&v45, v13);
      if ( !v17 )
        v44 = v45;
      v21 = v44;
      v64 = v44;
    }
    v23 = a6;
    *(_QWORD *)(a6 + 8LL * (unsigned int)(*(_DWORD *)(v10 + 20))++) = v28;
    if ( (*(_DWORD *)(a2 + 1136) & 0x800) == 0 )
      *(_QWORD *)(v27 + v25 + 24) = ++*(_QWORD *)(v11 + 8LL * *v28 + 2352);
LABEL_48:
    v22 = v57;
    ++v20;
    v9 = a1;
    v65 = v20;
  }
  v49 = *(_DWORD **)(a2 + 1160);
  if ( v49 )
  {
    *(_DWORD *)(*(_QWORD *)v23 + 40LL) = *v49;
    *(_QWORD *)(*(_QWORD *)v23 + 48LL) = *(_QWORD *)(a2 + 1160) + 8LL;
  }
  v50 = *(_QWORD *)(a2 + 1168);
  if ( v50 && *(_DWORD *)(a2 + 1052) != 13 )
  {
    v51 = *(_QWORD *)(a2 + 1160);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v50 + 16), &v62);
    v52 = *(CRefCountedBuffer **)(v50 + 8);
    if ( v52 )
      CRefCountedBuffer::RefCountedBufferRelease(v52);
    *(_QWORD *)(v50 + 8) = v51;
    _InterlockedIncrement((volatile signed __int32 *)(v51 + 4));
    KeReleaseInStackQueuedSpinLock(&v62);
    v23 = a6;
  }
  result = *(unsigned int *)(a2 + 1136);
  if ( (result & 0x200) != 0 )
  {
    v54 = *(_DWORD *)(a2 + 1192);
    *(_DWORD *)a7 = v54;
    if ( v54 )
    {
      v55 = v54 - 1;
      if ( v55 )
      {
        if ( v55 == 1 )
        {
          *(_DWORD *)(a7 + 4) = 72;
          goto LABEL_62;
        }
      }
      else
      {
        *(_DWORD *)(a7 + 4) = 28;
LABEL_62:
        *(_QWORD *)(a7 + 8) = a2 + 1196;
      }
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
      *(_QWORD *)(a7 + 8) = 0LL;
    }
    *(_QWORD *)(v10 + 48) = a7;
    result = *(unsigned int *)(a2 + 1136);
  }
  if ( (result & 0x400) != 0 )
  {
    result = a8;
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)(a2 + 1268);
    v56 = *(_OWORD *)(a2 + 1284);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v56;
    *(_QWORD *)(v10 + 32) = a8;
  }
  *(_QWORD *)(v10 + 24) = v23;
  return result;
}
