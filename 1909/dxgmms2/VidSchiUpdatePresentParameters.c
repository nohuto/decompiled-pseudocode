/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C0003900
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004258 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0016904 (VidSchiTryEnterIndependentFlip.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00339FC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

char __fastcall VidSchiUpdatePresentParameters(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v5; // r13
  char v6; // di
  __int128 v7; // xmm1
  bool v8; // si
  __int64 v9; // rcx
  unsigned int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // edx
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // r12d
  __int64 v19; // rax
  int v20; // edi
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  unsigned int v31; // edx
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  char v35; // cl
  bool v37; // [rsp+20h] [rbp-99h]
  int v38; // [rsp+24h] [rbp-95h]
  _QWORD v39[2]; // [rsp+28h] [rbp-91h] BYREF
  char v40; // [rsp+38h] [rbp-81h]
  unsigned int v41; // [rsp+40h] [rbp-79h]
  __int64 v42; // [rsp+48h] [rbp-71h]
  __int64 v43; // [rsp+50h] [rbp-69h]
  __int64 v44; // [rsp+58h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+60h] [rbp-59h] BYREF
  __int16 v46; // [rsp+78h] [rbp-41h]
  __int128 v47; // [rsp+80h] [rbp-39h]
  __int128 v48; // [rsp+90h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-19h] BYREF
  __int128 Source2; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v51; // [rsp+C8h] [rbp+Fh] BYREF

  v41 = *(_DWORD *)(a2 + 124);
  v3 = v41;
  v5 = *(_QWORD *)(a1 + 2576 + 8LL * v41);
  v42 = a1 + 2576 + 8LL * v41;
  v37 = (*(_DWORD *)a2 & 0x800000) != 0;
  v6 = *(int *)a2 < 0;
  v7 = *(_OWORD *)(a2 + 452);
  Source2 = *(_OWORD *)(a2 + 436);
  v51 = v7;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  v8 = v6 != *(_BYTE *)(v5 + 2296);
  *(_BYTE *)(v5 + 2296) = v6;
  if ( v6
    && (RtlCompareMemory((const void *)(v5 + 2300), &Source2, 0x10uLL) != 16
     || RtlCompareMemory((const void *)(v5 + 2316), &v51, 0x10uLL) != 16) )
  {
    *(_OWORD *)(v5 + 2300) = Source2;
    *(_OWORD *)(v5 + 2316) = v51;
LABEL_34:
    v30 = *(_DWORD *)(a1 + 140);
    v31 = 0;
    if ( v30 )
    {
      v32 = *(_QWORD *)(a1 + 8 * v3 + 2576);
      do
      {
        v33 = *(int *)(216LL * v31 + v32 + 172);
        if ( (int)v33 > -1 && *(_DWORD *)(136 * v33 + *(_QWORD *)(a1 + 2704) + 112) == 2 )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v34[3] = 281LL;
          v34[4] = 0x100000LL;
          v34[5] = 0LL;
          v34[6] = v3;
          v34[7] = a1;
          WdLogEvent5_WdCriticalError(v34);
          __debugbreak();
        }
        ++v31;
      }
      while ( v31 < v30 );
    }
    goto LABEL_3;
  }
  if ( v8 )
    goto LABEL_34;
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = a2 + 552;
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 552);
  v12 = v11 & 0x3FF;
  v13 = (v11 >> 10) & 0x3FF;
  v43 = v9;
  if ( *(_BYTE *)(a1 + 144) )
    v10 = v13;
  v14 = 0;
  v15 = !_BitScanForward((unsigned int *)&v16, v12);
  v38 = 0;
  if ( v15 )
    LOBYTE(v16) = -1;
  v17 = (char)v16;
  v15 = !_BitScanForward((unsigned int *)&v16, v10);
  if ( v15 )
    LOBYTE(v16) = -1;
  v18 = (char)v16;
  while ( v12 || v10 )
  {
    if ( v17 >= v18 )
      goto LABEL_22;
    v19 = v14 * ((8 * *(_DWORD *)(v9 + 8) + 191) & 0xFFFFFFF8);
    v20 = *(_DWORD *)(v19 + v9 + 192);
    v47 = *(_OWORD *)(v19 + v9 + 160);
    v21 = *(_OWORD *)(v19 + v9 + 176);
    v46 = 0;
    v44 = a1 + 1648;
    v48 = v21;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &v45);
    LOBYTE(v46) = 1;
    v22 = v48;
    v39[1] = v39;
    v23 = v39;
    v24 = 216LL * v17;
    v25 = (_QWORD *)v42;
    v40 = 0;
    v39[0] = v39;
    *(_OWORD *)(v24 + v5 + 136) = v47;
    *(_OWORD *)(v24 + v5 + 152) = v22;
    *(_DWORD *)(v24 + v5 + 168) = v20;
    v26 = *(int *)(v24 + *v25 + 172);
    if ( (int)v26 > -1 )
    {
      v28 = *(_QWORD *)(a1 + 2704) + 136 * v26;
      if ( v28 )
      {
        if ( *(_DWORD *)(v28 + 112) == 1 )
        {
          v29 = v41;
          *(_BYTE *)(v28 + 108) = v37;
          *(_BYTE *)(v28 + 96) = 1;
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v39, (struct _VIDSCH_GLOBAL *)a1, v29, v17);
          if ( v40 )
            goto LABEL_18;
          goto LABEL_30;
        }
      }
    }
    while ( 1 )
    {
      if ( (_QWORD *)v23[1] != v39 || (v27 = *v23, *(_QWORD **)(*v23 + 8LL) != v23) )
        __fastfail(3u);
      v39[0] = *v23;
      *(_QWORD *)(v27 + 8) = v39;
      if ( v23 == v39 )
        break;
      *v23 = 0LL;
      v23[1] = 0LL;
      HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v39, (struct VIDSCH_HW_QUEUE *)(v23 - 19));
LABEL_30:
      v23 = (_QWORD *)v39[0];
    }
    v40 = 1;
LABEL_18:
    if ( (_BYTE)v46 )
    {
      if ( HIBYTE(v46) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v45);
      else
        KeReleaseInStackQueuedSpinLock(&v45);
    }
    v14 = v38;
LABEL_22:
    if ( v17 >= v18 )
    {
      v35 = -1;
      v10 &= ~(1 << v18);
      v15 = !_BitScanForward((unsigned int *)&v16, v10);
      if ( !v15 )
        v35 = v16;
      v18 = v35;
    }
    else
    {
      v12 &= ~(1 << v17);
      v15 = !_BitScanForward((unsigned int *)&v16, v12);
      if ( v15 )
        LOBYTE(v16) = -1;
      v17 = (char)v16;
    }
    v9 = v43;
    v38 = ++v14;
  }
  return v16;
}
