/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C0002640
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0002CD0 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0002948 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0017520 (VidSchiTryEnterIndependentFlip.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FDC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

__int64 __fastcall VidSchiUpdatePresentParameters(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v5; // r13
  char v6; // di
  KSPIN_LOCK *v7; // r12
  bool v8; // r14
  __int64 v9; // r14
  unsigned int v10; // ecx
  __int64 result; // rax
  bool v12; // zf
  unsigned int v13; // ecx
  int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // edi
  _QWORD *v17; // r15
  unsigned int v18; // eax
  int v19; // ebx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  unsigned int v29; // r8d
  __int64 v30; // r10
  __int64 v31; // rax
  _QWORD *v32; // rax
  bool v33; // [rsp+20h] [rbp-E0h]
  _QWORD v34[2]; // [rsp+28h] [rbp-D8h] BYREF
  char v35; // [rsp+38h] [rbp-C8h]
  unsigned int v36; // [rsp+40h] [rbp-C0h]
  _QWORD v37[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-A8h]
  unsigned int v39; // [rsp+5Ch] [rbp-A4h]
  int v40; // [rsp+60h] [rbp-A0h]
  unsigned int v41; // [rsp+64h] [rbp-9Ch]
  unsigned int v42; // [rsp+68h] [rbp-98h]
  KSPIN_LOCK *v43; // [rsp+70h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+78h] [rbp-88h] BYREF
  __int16 v45; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+98h] [rbp-68h]
  __int128 v47; // [rsp+A8h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-48h] BYREF
  KSPIN_LOCK_QUEUE LockQueue; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  __int128 Source2; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v52; // [rsp+F8h] [rbp-8h] BYREF

  v36 = *(_DWORD *)(a2 + 124);
  v3 = v36;
  v5 = *(_QWORD *)(a1 + 2576 + 8LL * v36);
  *(_QWORD *)&v46 = a1 + 2576 + 8LL * v36;
  v33 = (*(_DWORD *)a2 & 0x800000) != 0;
  v6 = *(int *)a2 < 0;
  v7 = (KSPIN_LOCK *)(a1 + 1648);
  Source2 = *(_OWORD *)(a2 + 436);
  v52 = *(_OWORD *)(a2 + 452);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  v8 = v6 != *(_BYTE *)(v5 + 2288);
  *(_BYTE *)(v5 + 2288) = v6;
  if ( !v6
    || RtlCompareMemory((const void *)(v5 + 2292), &Source2, 0x10uLL) == 16
    && RtlCompareMemory((const void *)(v5 + 2308), &v52, 0x10uLL) == 16 )
  {
    if ( !v8 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)(v5 + 2292) = Source2;
    *(_OWORD *)(v5 + 2308) = v52;
  }
  v28 = *(_DWORD *)(a1 + 140);
  v29 = 0;
  if ( v28 )
  {
    v30 = *(_QWORD *)(a1 + 8 * v3 + 2576);
    do
    {
      v31 = *(int *)(216LL * v29 + v30 + 164);
      if ( (int)v31 > -1 && *(_DWORD *)(136 * v31 + *(_QWORD *)(a1 + 2704) + 112) == 2 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v32[3] = 281LL;
        v32[4] = 0x100000LL;
        v32[5] = 0LL;
        v32[6] = v3;
        v32[7] = a1;
        WdLogEvent5_WdCriticalError(v32);
        __debugbreak();
      }
      ++v29;
    }
    while ( v29 < v28 );
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = a2 + 560;
  v37[0] = a1;
  v10 = *(_DWORD *)(a2 + 560);
  result = v10 & 0x3FF;
  v37[1] = a2 + 560;
  v12 = *(_BYTE *)(a1 + 144) == 0;
  v38 = v10 & 0x3FF;
  if ( v12 )
    v13 = 0;
  else
    v13 = (v10 >> 10) & 0x3FF;
  v14 = 0;
  v39 = v13;
  v12 = !_BitScanForward(&v15, result);
  v40 = 0;
  if ( v12 )
    LOBYTE(v15) = -1;
  v16 = (char)v15;
  v12 = !_BitScanForward(&v15, v13);
  v41 = v16;
  if ( v12 )
    LOBYTE(v15) = -1;
  v17 = (_QWORD *)v46;
  v15 = (char)v15;
  v42 = (char)v15;
  while ( (_DWORD)result || v13 )
  {
    if ( v16 < v15 )
    {
      v18 = v14 * (*(_DWORD *)(v9 + 8) + 23);
      v50 = *(_QWORD *)&v44.OldIrql;
      v18 *= 8;
      v19 = *(_DWORD *)(v18 + v9 + 192);
      v46 = *(_OWORD *)(v18 + v9 + 160);
      v20 = *(_OWORD *)(v18 + v9 + 176);
      v43 = v7;
      v45 = 0;
      v47 = v20;
      LockQueue = v44.LockQueue;
      KeAcquireInStackQueuedSpinLock(v7, &v44);
      LOBYTE(v45) = 1;
      v21 = v47;
      v34[1] = v34;
      v34[0] = v34;
      v35 = 0;
      v22 = 216LL * v16;
      *(_OWORD *)(v22 + v5 + 128) = v46;
      *(_OWORD *)(v22 + v5 + 144) = v21;
      *(_DWORD *)(v22 + v5 + 160) = v19;
      v23 = *(int *)(v22 + *v17 + 164);
      if ( (int)v23 > -1 )
      {
        v26 = *(_QWORD *)(a1 + 2704) + 136 * v23;
        if ( v26 )
        {
          if ( *(_DWORD *)(v26 + 112) == 1 )
          {
            v27 = v36;
            *(_BYTE *)(v26 + 108) = v33;
            *(_BYTE *)(v26 + 96) = 1;
            VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v34, (struct _VIDSCH_GLOBAL *)a1, v27, v16);
          }
        }
      }
      if ( !v35 )
      {
        while ( 1 )
        {
          v24 = (_QWORD *)v34[0];
          if ( *(_QWORD **)(v34[0] + 8LL) != v34
            || (v25 = *(_QWORD *)v34[0], *(_QWORD *)(*(_QWORD *)v34[0] + 8LL) != v34[0]) )
          {
            __fastfail(3u);
          }
          v34[0] = *(_QWORD *)v34[0];
          *(_QWORD *)(v25 + 8) = v34;
          if ( v24 == v34 )
            break;
          *v24 = 0LL;
          v24[1] = 0LL;
          HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v34, (struct VIDSCH_HW_QUEUE *)(v24 - 19));
        }
        v35 = 1;
      }
      if ( (_BYTE)v45 )
      {
        if ( HIBYTE(v45) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
        else
          KeReleaseInStackQueuedSpinLock(&v44);
      }
    }
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v37);
    v15 = v42;
    v14 = v40;
    v13 = v39;
    result = v38;
    v16 = v41;
  }
  return result;
}
