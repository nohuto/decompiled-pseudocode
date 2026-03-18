/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C000FDBC
 * Callers:
 *     VidSchCreateContext @ 0x1C007B6A0 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C0090664 (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0004B50 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiFreeQueuePacket @ 0x1C000EAB4 (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C0010760 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0032258 (McTemplateK0pqqqqqqqqppp.c)
 *     VidSchSetPriorityContext @ 0x1C007B040 (VidSchSetPriorityContext.c)
 *     VidSchTerminateContext @ 0x1C007BF20 (VidSchTerminateContext.c)
 */

__int64 __fastcall VidSchiCreateContextInternal(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rsi
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  bool v13; // cl
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r12d
  unsigned int v22; // eax
  int v23; // r13d
  SIZE_T v24; // r15
  PVOID v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v30; // rbx
  __int64 v31; // r9
  int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  bool v38; // cf
  __int64 v39; // r9
  __int64 v40; // rdx
  bool v41; // zf
  __int128 v42; // xmm1
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // r9
  int v47; // r8d
  unsigned int v48; // esi
  int v49; // r14d
  PVOID v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+80h] [rbp-80h]
  KSPIN_LOCK *v55; // [rsp+80h] [rbp-80h]
  _QWORD v56[4]; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v58[5]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) != 0 || a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x3D8uLL, 0x34616956u);
    v8 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3D8uLL);
      *(_DWORD *)v8 = 878799190;
      *(_QWORD *)(v8 + 56) = a3;
      *(_QWORD *)(v8 + 104) = a1;
      *(_QWORD *)(v8 + 80) = KeGetCurrentThread();
      *(_OWORD *)(v8 + 112) = *(_OWORD *)a2;
      *(_QWORD *)(v8 + 128) = *((_QWORD *)a2 + 2);
      *(_DWORD *)(v8 + 136) = a2[6];
      v9 = (unsigned int)a2[1];
      *(_DWORD *)(v8 + 88) = v9;
      v10 = *(_QWORD **)(v4 + 616);
      if ( (unsigned int)v9 < *(_DWORD *)(v4 + 688) )
        v10 += v9;
      *(_QWORD *)(v8 + 96) = *v10;
      v11 = ((__int64 (*)(void))DxgCoreInterface[6])();
      v12 = *(_QWORD *)(v8 + 96);
      v54 = v12;
      v13 = (*(_BYTE *)(v11 + 299) & 8) != 0;
      *(_QWORD *)(v8 + 144) = 1LL;
      *(_BYTE *)(v8 + 893) = v13;
      memset((void *)(v8 + 320), 0, 0x38uLL);
      KeInitializeEvent((PRKEVENT)(v8 + 320), SynchronizationEvent, 0);
      *(_QWORD *)(v8 + 384) = v8 + 376;
      *(_QWORD *)(v8 + 376) = v8 + 376;
      *(_QWORD *)(v8 + 664) = v8 + 656;
      *(_QWORD *)(v8 + 656) = v8 + 656;
      *(_QWORD *)(v8 + 680) = v8 + 672;
      *(_QWORD *)(v8 + 672) = v8 + 672;
      *(_QWORD *)(v8 + 696) = v8 + 688;
      *(_QWORD *)(v8 + 688) = v8 + 688;
      *(_QWORD *)(v8 + 712) = v8 + 704;
      *(_QWORD *)(v8 + 704) = v8 + 704;
      if ( (*a2 & 0x100) != 0 )
      {
        *(_QWORD *)(v8 + 736) = v8 + 728;
        *(_QWORD *)(v8 + 728) = v8 + 728;
      }
      *(_QWORD *)(v8 + 760) = v8 + 752;
      *(_QWORD *)(v8 + 752) = v8 + 752;
      *(_BYTE *)(v8 + 892) = 1;
      VidSchiIncrementContextReference(v8);
      *(_BYTE *)(v8 + 892) = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1648), &LockHandle);
      if ( *(_BYTE *)(a1 + 1092) || *(_BYTE *)(a1 + 1093) )
      {
        v14 = v12 + 2584;
        *(_DWORD *)(v8 + 184) |= 0x100u;
      }
      else
      {
        v14 = v12 + 2552;
      }
      v15 = *(_QWORD **)(v14 + 8);
      v16 = (_QWORD *)(v8 + 8);
      if ( *v15 != v14
        || (*v16 = v14,
            *(_QWORD *)(v8 + 16) = v15,
            *v15 = v16,
            *(_QWORD *)(v14 + 8) = v16,
            v17 = *(_QWORD **)(a1 + 80),
            v18 = (_QWORD *)(v8 + 24),
            *v17 != a1 + 72) )
      {
        __fastfail(3u);
      }
      *v18 = a1 + 72;
      *(_QWORD *)(v8 + 32) = v17;
      *v17 = v18;
      *(_QWORD *)(a1 + 80) = v18;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v19 = *(_QWORD *)(v4 + 2024);
      *(_QWORD *)(v8 + 464) = v19;
      v20 = *(_QWORD *)(v4 + 2072);
      *(_QWORD *)(v8 + 440) = v19;
      *(_QWORD *)(v8 + 472) = v20;
      KeInitializeTimer((PKTIMER)(v8 + 504));
      KeInitializeDpc((PRKDPC)(v8 + 568), VidSchiDelayReadyRoutine, (PVOID)v8);
      v21 = *a2;
      if ( (*a2 & 0x604) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          memset(v58, 0, 0x48uLL);
          v35 = *(unsigned int *)(v8 + 88);
          v36 = *(_QWORD *)(v4 + 616);
          v37 = v36 + 8 * v35;
          v38 = (unsigned int)v35 < *(_DWORD *)(v4 + 688);
          if ( (unsigned int)v35 >= *(_DWORD *)(v4 + 688) )
            v37 = *(_QWORD *)(v4 + 616);
          DWORD2(v58[0]) = *(unsigned __int16 *)(*(_QWORD *)v37 + 8LL);
          if ( v38 )
            v36 += 8 * v35;
          v39 = *(_QWORD *)(v4 + 8);
          HIDWORD(v58[0]) = 1 << *(_BYTE *)(*(_QWORD *)v36 + 6LL);
          LODWORD(v58[1]) = v58[1] & 0xFFFFFFE6 | ((v21 & 4 | ((v21 & 0x200 | (v21 >> 1) & 0x400) >> 4)) >> 2);
          v40 = *(_QWORD *)(a1 + 16);
          LODWORD(v58[1]) ^= (LOBYTE(v58[1]) ^ (unsigned __int8)(4
                                                               * *(_BYTE *)(352LL * *(unsigned __int16 *)(v54 + 6)
                                                                          + *(_QWORD *)(*(_QWORD *)(v39 + 16) + 2440LL)
                                                                          + 40))) & 4;
          if ( ((int (__fastcall *)(__int64, __int64, _OWORD *))DxgCoreInterface[18])(v39, v40, v58) < 0 )
          {
LABEL_49:
            VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
            return 0LL;
          }
          v41 = bTracingEnabled == 0;
          v42 = v58[1];
          v43 = *(_QWORD *)&v58[0];
          *(_OWORD *)(v8 + 896) = v58[0];
          *(_QWORD *)(v8 + 64) = v43;
          v44 = v58[2];
          *(_OWORD *)(v8 + 912) = v42;
          v45 = v58[3];
          *(_OWORD *)(v8 + 928) = v44;
          *(_QWORD *)&v44 = *(_QWORD *)&v58[4];
          *(_OWORD *)(v8 + 944) = v45;
          *(_QWORD *)(v8 + 960) = v44;
          if ( !v41 )
          {
            v46 = *(_QWORD *)(a1 + 8);
            if ( !v46 )
              LODWORD(v46) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v47 = (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) >> 4) & 1)) | 1;
              McTemplateK0pqqqqqqqqppp(
                v58[3],
                (unsigned int)&EventCreateContext,
                v47,
                v46,
                SBYTE8(v58[0]),
                SBYTE12(v58[0]),
                SBYTE4(v58[2]),
                SBYTE8(v58[2]),
                SBYTE12(v58[2]),
                v58[3],
                SBYTE4(v58[3]),
                v47,
                v8);
            }
          }
        }
        else if ( bTracingEnabled )
        {
          v30 = *(unsigned int *)(v8 + 88);
          if ( (unsigned int)v30 < *(_DWORD *)(v4 + 68) )
          {
            memset(v56, 0, sizeof(v56));
            v31 = *(_QWORD *)(a1 + 8);
            v32 = v21 & 0x40;
            v33 = *(_QWORD *)(v4 + 616);
            v34 = v33 + 8 * v30;
            if ( !v31 )
              LODWORD(v31) = a1;
            if ( (unsigned int)v30 >= *(_DWORD *)(v4 + 688) )
              v34 = *(_QWORD *)(v4 + 616);
            else
              v33 += 8 * v30;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0pqqqqqqqqppp(
                HIDWORD(v56[0]),
                (unsigned int)&EventCreateContext,
                v56[0],
                v31,
                *(_WORD *)(*(_QWORD *)v33 + 8LL),
                1 << *(_BYTE *)(*(_QWORD *)v34 + 6LL),
                v56[0],
                SBYTE4(v56[0]),
                v56[1],
                SBYTE4(v56[1]),
                v56[2],
                (2 * ((v32 != 0 ? 2 : 0) | ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0))) | 1,
                v8);
          }
        }
      }
      else
      {
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 184);
      }
      if ( (int)VidSchSetPriorityContext((struct _VIDSCH_CONTEXT *)v8) >= 0 )
      {
        v22 = *(_DWORD *)(v4 + 140) * ((*(_DWORD *)(v4 + 64) << 6) + ((8 * *(_DWORD *)(v4 + 64) + 191) & 0xFFFFFFF8))
            + 8 * (*(_DWORD *)(v4 + 64) + 105);
        if ( v22 <= 0x410 )
          v22 = 1040;
        v23 = 0;
        v24 = v22;
        do
        {
          v25 = ExAllocatePoolWithTag((POOL_TYPE)512, v24, 0x35616956u);
          v28 = (__int64)v25;
          if ( !v25 )
          {
            v53 = WdLogNewEntry5_WdWarning(v27, v26);
            WdLogEvent5_WdWarning(v53);
            goto LABEL_49;
          }
          memset(v25, 0, v24);
          v55 = (KSPIN_LOCK *)(v4 + 1656);
          VidSchiInterlockedInsertTailList(
            (KSPIN_LOCK *)(v4 + 1656),
            v8 + 752,
            (_QWORD *)(v28 + 8),
            (_DWORD *)(v8 + 768));
          VidSchiFreeQueuePacket(v8, v28);
          ++v23;
        }
        while ( v23 < 5 );
        if ( (*a2 & 0x100) == 0 )
          return v8;
        v48 = a2[6];
        if ( v48 )
        {
          v49 = 0;
          while ( 1 )
          {
            v50 = ExAllocatePoolWithTag((POOL_TYPE)512, v24, 0x35616956u);
            v51 = (__int64)v50;
            if ( !v50 )
              break;
            memset(v50, 0, v24);
            *(_DWORD *)(v51 + 64) |= 0x40u;
            VidSchiInterlockedInsertTailList(v55, v8 + 752, (_QWORD *)(v51 + 8), (_DWORD *)(v8 + 768));
            VidSchiFreeQueuePacket(v8, v51);
            if ( ++v49 >= v48 )
              return v8;
          }
        }
      }
      goto LABEL_49;
    }
  }
  v52 = WdLogNewEntry5_WdWarning(a1, a2);
  WdLogEvent5_WdWarning(v52);
  return 0LL;
}
