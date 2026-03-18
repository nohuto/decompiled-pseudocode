/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0030110
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0029C98 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0018394 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00299D8 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
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
  __int64 v10; // r14
  __int64 v11; // r12
  int v12; // ecx
  unsigned int v13; // r13d
  unsigned int v14; // ebp
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  bool v17; // zf
  int v18; // eax
  char v19; // cl
  unsigned int v20; // r8d
  unsigned int v21; // r10d
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rdi
  char v25; // r11
  __int64 v26; // rsi
  unsigned int *v27; // r9
  __int64 v28; // r12
  int v29; // ecx
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  CRefCountedBuffer *v33; // rcx
  _DWORD *v34; // r11
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // r8
  char v40; // cl
  int v41; // eax
  int v42; // edx
  int v43; // eax
  _DWORD *v44; // rax
  __int64 v45; // r9
  __int64 v46; // rdi
  __int64 v47; // rsi
  CRefCountedBuffer *v48; // rcx
  __int64 result; // rax
  int v50; // edx
  int v51; // edx
  __int128 v52; // xmm1
  __int64 v53; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v54; // [rsp+28h] [rbp-A0h]
  __int64 v55; // [rsp+40h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v57; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v58; // [rsp+D0h] [rbp+8h]
  unsigned int v59; // [rsp+D8h] [rbp+10h]
  unsigned int v60; // [rsp+E0h] [rbp+18h]

  v10 = a4;
  v11 = *(_QWORD *)(a1 + 8LL * a3 + 2576);
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = a3;
  v55 = v11;
  *(_DWORD *)(a4 + 12) ^= (*(_DWORD *)(a2 + 1120) ^ *(_DWORD *)(a4 + 12)) & 1;
  v12 = *(_DWORD *)(a4 + 12) ^ (*(_DWORD *)(a2 + 1120) ^ *(_DWORD *)(a4 + 12)) & 2;
  *(_DWORD *)(a4 + 12) = v12;
  *(_DWORD *)(a4 + 12) = v12 ^ (*(_DWORD *)(a2 + 1120) ^ v12) & 4;
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1124);
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 2120) = -1073741823;
  if ( (*(_DWORD *)(a2 + 1120) & 0x10) != 0 )
  {
    v13 = **(_DWORD **)(a2 + 1168) & 0x3FF;
    v14 = (**(_DWORD **)(a2 + 1168) >> 10) & 0x3FF;
  }
  else
  {
    v13 = 1;
    v14 = ((1 << *(_DWORD *)(a1 + 140)) - 1) & 0xFFFFFFFE;
  }
  *(_DWORD *)(a4 + 20) = 0;
  v15 = 0LL;
  v16 = *(_QWORD *)(a2 + 1160);
  v54 = 0LL;
  if ( v16 )
  {
    v15 = v16 + 16;
    v54 = v16 + 16LL * *(unsigned int *)(v16 + 8);
  }
  v17 = !_BitScanForward((unsigned int *)&v18, v13);
  v60 = 0;
  v19 = -1;
  if ( !v17 )
    v19 = v18;
  v20 = 0;
  v21 = v19;
  LOBYTE(v22) = -1;
  v17 = !_BitScanForward((unsigned int *)&v23, v14);
  v58 = v21;
  if ( !v17 )
    LOBYTE(v22) = v23;
  v22 = (char)v22;
  v59 = (char)v22;
  while ( v13 || v14 )
  {
    v24 = *(_QWORD *)(a2 + 1168);
    v25 = 1;
    v26 = v20 * ((8 * *(_DWORD *)(v24 + 8) + 191) & 0xFFFFFFF8);
    v27 = (unsigned int *)(v26 + v24 + 16);
    if ( v21 < v22 )
    {
      v28 = 0LL;
      *(_DWORD *)(v26 + v24 + 32) = (2 * a5) | *(_DWORD *)(v20 * ((8 * *(_DWORD *)(v24 + 8) + 191) & 0xFFFFFFF8)
                                                         + v24
                                                         + 32) & 0xFFFFFFF9 | (4 * (a5 ^ 1));
      v29 = *(_DWORD *)(a2 + 1084);
      *(_DWORD *)(v26 + v24 + 44) = v29;
      *(_QWORD *)(v26 + v24 + 48) = v26 + v24 + 200;
      if ( v29 )
      {
        do
        {
          VidSchiBindFlipPhysicalAddress(*(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(a2 + 1168), v60, v28);
          *(_QWORD *)(*(_QWORD *)(v26 + v24 + 48) + 8 * v28) = ((unsigned __int64)(v60
                                                                                 + (_DWORD)v28
                                                                                 * *(_DWORD *)(*(_QWORD *)(a2 + 1168)
                                                                                             + 4LL)) << 6)
                                                             + *(_QWORD *)(a2 + 1168)
                                                             + *(_DWORD *)(*(_QWORD *)(a2 + 1168) + 4LL)
                                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1168) + 8LL) + 191) & 0xFFFFFFF8)
                                                             + 16LL;
          v28 = (unsigned int)(v28 + 1);
        }
        while ( (unsigned int)v28 < *(_DWORD *)(v26 + v24 + 44) );
        v10 = a4;
        v21 = v58;
        v27 = (unsigned int *)(v26 + v24 + 16);
      }
      if ( !v21 )
      {
        v30 = *(_QWORD *)(a2 + 1144);
        if ( v30 )
        {
          *(_DWORD *)(v26 + v24 + 56) = *(_DWORD *)v30;
          *(_QWORD *)(v26 + v24 + 64) = *(_QWORD *)(a2 + 1144) + 8LL;
          v30 = *(_QWORD *)(a2 + 1144);
        }
        v31 = *(_QWORD *)(a2 + 1152);
        v53 = v31;
        if ( v31 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v31 + 16), &LockHandle);
          if ( v30 )
            _InterlockedIncrement((volatile signed __int32 *)(v30 + 4));
          v32 = v53;
          v33 = *(CRefCountedBuffer **)(v53 + 8);
          if ( v33 )
          {
            CRefCountedBuffer::RefCountedBufferRelease(v33);
            v32 = v53;
          }
          *(_QWORD *)(v32 + 8) = v30;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v21 = v58;
          v27 = (unsigned int *)(v26 + v24 + 16);
        }
      }
      *v27 = v21;
      v34 = (_DWORD *)(v26 + v24 + 76);
      *(_DWORD *)(v26 + v24 + 32) |= 1u;
      v35 = *(_DWORD *)(v26 + v24 + 32) ^ ((unsigned __int8)*(_DWORD *)(v26 + v24 + 32) ^ (unsigned __int8)*(_DWORD *)(a2 + 1120)) & 8;
      *(_DWORD *)(v26 + v24 + 32) = v35;
      v36 = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(*(_DWORD *)(a2 + 1120) >> 1)) & 0x10;
      v37 = *(_DWORD *)(v26 + v24 + 72);
      *(_DWORD *)(v26 + v24 + 32) = v36;
      v38 = *(_QWORD *)(a2 + 1168);
      v39 = v60 * ((8 * *(_DWORD *)(v38 + 8) + 191) & 0xFFFFFFF8);
      *(_DWORD *)(v26 + v24 + 72) ^= (*(_DWORD *)(v39 + v38 + 188) ^ v37) & 1;
      *(_DWORD *)(v26 + v24 + 72) ^= ((unsigned __int8)*(_DWORD *)(v26 + v24 + 72) ^ (unsigned __int8)*(_DWORD *)(v39 + v38 + 188)) & 2;
      *v34 = (unsigned __int16)*(_DWORD *)(v39 + v38 + 160);
      *(_DWORD *)(v26 + v24 + 80) = (unsigned __int16)*(_DWORD *)(v39 + v38 + 164);
      *(_DWORD *)(v26 + v24 + 84) = *(unsigned __int16 *)(v39 + v38 + 162);
      *(_DWORD *)(v26 + v24 + 88) = *(unsigned __int16 *)(v39 + v38 + 166);
      *(_DWORD *)(v26 + v24 + 92) = *(__int16 *)(v39 + v38 + 168);
      *(_DWORD *)(v26 + v24 + 96) = *(__int16 *)(v39 + v38 + 172);
      *(_DWORD *)(v26 + v24 + 100) = *(unsigned __int16 *)(v39 + v38 + 170);
      *(_DWORD *)(v26 + v24 + 104) = *(unsigned __int16 *)(v39 + v38 + 174);
      *(_DWORD *)(v26 + v24 + 108) = (unsigned __int16)*(_DWORD *)(v39 + v38 + 176);
      *(_DWORD *)(v26 + v24 + 112) = (unsigned __int16)*(_DWORD *)(v39 + v38 + 180);
      *(_DWORD *)(v26 + v24 + 116) = *(unsigned __int16 *)(v39 + v38 + 178);
      *(_DWORD *)(v26 + v24 + 120) = *(unsigned __int16 *)(v39 + v38 + 182);
      if ( v15 && *(_DWORD *)v15 == v21 )
      {
        *(_DWORD *)(v26 + v24 + 144) = *(_DWORD *)(v15 + 4);
        v34 = *(_DWORD **)(v15 + 8);
        v15 = (v15 + 16) & -(__int64)(v15 < v54);
      }
      else
      {
        *(_DWORD *)(v26 + v24 + 144) = 1;
      }
      *(_QWORD *)(v26 + v24 + 152) = v34;
      *(_DWORD *)(v26 + v24 + 124) = ((*(_DWORD *)(v39 + v38 + 188) >> 3) & 3) + 1;
      *(_DWORD *)(v26 + v24 + 128) ^= (*(_DWORD *)(v26 + v24 + 128) ^ (*(_DWORD *)(v39 + v38 + 188) >> 2)) & 1;
      *(_DWORD *)(v26 + v24 + 132) = *(_DWORD *)(v39 + v38 + 184);
      v41 = *(_DWORD *)(v39 + v38 + 192);
      v20 = v60;
      *(_DWORD *)(v26 + v24 + 140) = v41;
      v11 = v55;
      v40 = -1;
      v13 &= ~(1 << v21);
      v17 = !_BitScanForward((unsigned int *)&v41, v13);
      if ( !v17 )
        v40 = v41;
      v21 = v40;
      v58 = v40;
LABEL_39:
      *(_QWORD *)(a6 + 8LL * (unsigned int)(*(_DWORD *)(v10 + 20))++) = v27;
      if ( (*(_DWORD *)(a2 + 1120) & 0x800) == 0 )
        *(_QWORD *)(v26 + v24 + 24) = ++*(_QWORD *)(v11 + 8LL * *v27 + 2344);
      v22 = v59;
      goto LABEL_42;
    }
    v42 = 1 << v22;
    if ( (*(unsigned __int16 *)(v11 + 33144) & (1 << v22)) != 0 )
    {
      *v27 = v22;
      *(_QWORD *)(v26 + v24 + 48) = 0LL;
      *(_QWORD *)(v26 + v24 + 40) = 0LL;
      *(_DWORD *)(v26 + v24 + 56) = 0;
      *(_QWORD *)(v26 + v24 + 64) = 0LL;
      *(_DWORD *)(v26 + v24 + 32) = 0;
    }
    else
    {
      v25 = 0;
      *(_QWORD *)(v26 + v24 + 24) = 0LL;
    }
    LOBYTE(v22) = -1;
    v14 &= ~v42;
    v17 = !_BitScanForward((unsigned int *)&v43, v14);
    if ( !v17 )
      LOBYTE(v22) = v43;
    v22 = (char)v22;
    v59 = (char)v22;
    if ( v25 )
      goto LABEL_39;
LABEL_42:
    v60 = ++v20;
  }
  v44 = *(_DWORD **)(a2 + 1144);
  v45 = a6;
  if ( v44 )
  {
    *(_DWORD *)(*(_QWORD *)a6 + 40LL) = *v44;
    *(_QWORD *)(*(_QWORD *)a6 + 48LL) = *(_QWORD *)(a2 + 1144) + 8LL;
  }
  v46 = *(_QWORD *)(a2 + 1152);
  if ( v46 && *(_DWORD *)(a2 + 1052) != 13 )
  {
    v47 = *(_QWORD *)(a2 + 1144);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v46 + 16), &v57);
    if ( v47 )
      _InterlockedIncrement((volatile signed __int32 *)(v47 + 4));
    v48 = *(CRefCountedBuffer **)(v46 + 8);
    if ( v48 )
      CRefCountedBuffer::RefCountedBufferRelease(v48);
    *(_QWORD *)(v46 + 8) = v47;
    KeReleaseInStackQueuedSpinLock(&v57);
    v45 = a6;
  }
  result = *(unsigned int *)(a2 + 1120);
  if ( (result & 0x200) != 0 )
  {
    v50 = *(_DWORD *)(a2 + 1176);
    *(_DWORD *)a7 = v50;
    if ( v50 )
    {
      v51 = v50 - 1;
      if ( v51 )
      {
        if ( v51 == 1 )
        {
          *(_DWORD *)(a7 + 4) = 72;
          goto LABEL_58;
        }
      }
      else
      {
        *(_DWORD *)(a7 + 4) = 28;
LABEL_58:
        *(_QWORD *)(a7 + 8) = a2 + 1180;
      }
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
      *(_QWORD *)(a7 + 8) = 0LL;
    }
    *(_QWORD *)(v10 + 48) = a7;
    result = *(unsigned int *)(a2 + 1120);
  }
  if ( (result & 0x400) != 0 )
  {
    result = a8;
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)(a2 + 1252);
    v52 = *(_OWORD *)(a2 + 1268);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v52;
    *(_QWORD *)(v10 + 32) = a8;
  }
  *(_QWORD *)(v10 + 24) = v45;
  return result;
}
