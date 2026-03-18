/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C0011938
 * Callers:
 *     VidSchCreateContext @ 0x1C007B2D0 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C008CDCC (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0003990 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiFreeQueuePacket @ 0x1C0012140 (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C00125D0 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0031A08 (McTemplateK0pqqqqqqqqppp.c)
 *     VidSchTerminateContext @ 0x1C007AB50 (VidSchTerminateContext.c)
 *     VidSchSetPriorityContext @ 0x1C007B380 (VidSchSetPriorityContext.c)
 */

char *__fastcall VidSchiCreateContextInternal(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // r14
  char *PoolWithTag; // rax
  char *v8; // rsi
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
  SIZE_T v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  __int64 v30; // rbx
  __int64 v31; // r9
  int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // r8
  __int64 v36; // rdx
  unsigned int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rdx
  bool v41; // zf
  __int128 v42; // xmm1
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // r9
  int v47; // r8d
  unsigned int v48; // r14d
  int v49; // r15d
  _DWORD *v50; // rax
  _DWORD *v51; // rbx
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
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x3D8uLL, 0x34616956u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3D8uLL);
      *(_DWORD *)v8 = 878799190;
      *((_QWORD *)v8 + 7) = a3;
      *((_QWORD *)v8 + 13) = a1;
      *((_QWORD *)v8 + 10) = KeGetCurrentThread();
      *((_OWORD *)v8 + 7) = *(_OWORD *)a2;
      *((_QWORD *)v8 + 16) = *((_QWORD *)a2 + 2);
      *((_DWORD *)v8 + 34) = a2[6];
      v9 = (unsigned int)a2[1];
      *((_DWORD *)v8 + 22) = v9;
      v10 = *(_QWORD **)(v4 + 616);
      if ( (unsigned int)v9 < *(_DWORD *)(v4 + 688) )
        v10 += v9;
      *((_QWORD *)v8 + 12) = *v10;
      v11 = ((__int64 (*)(void))DxgCoreInterface[6])();
      v12 = *((_QWORD *)v8 + 12);
      v54 = v12;
      v13 = (*(_BYTE *)(v11 + 323) & 8) != 0;
      *((_QWORD *)v8 + 18) = 1LL;
      v8[893] = v13;
      memset(v8 + 320, 0, 0x38uLL);
      KeInitializeEvent((PRKEVENT)(v8 + 320), SynchronizationEvent, 0);
      *((_QWORD *)v8 + 48) = v8 + 376;
      *((_QWORD *)v8 + 47) = v8 + 376;
      *((_QWORD *)v8 + 83) = v8 + 656;
      *((_QWORD *)v8 + 82) = v8 + 656;
      *((_QWORD *)v8 + 85) = v8 + 672;
      *((_QWORD *)v8 + 84) = v8 + 672;
      *((_QWORD *)v8 + 87) = v8 + 688;
      *((_QWORD *)v8 + 86) = v8 + 688;
      *((_QWORD *)v8 + 89) = v8 + 704;
      *((_QWORD *)v8 + 88) = v8 + 704;
      if ( (*a2 & 0x100) != 0 )
      {
        *((_QWORD *)v8 + 92) = v8 + 728;
        *((_QWORD *)v8 + 91) = v8 + 728;
      }
      *((_QWORD *)v8 + 95) = v8 + 752;
      *((_QWORD *)v8 + 94) = v8 + 752;
      v8[892] = 1;
      VidSchiIncrementContextReference(v8);
      v8[892] = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1648), &LockHandle);
      if ( *(_BYTE *)(a1 + 1092) || *(_BYTE *)(a1 + 1093) )
      {
        v14 = v12 + 2584;
        *((_DWORD *)v8 + 46) |= 0x100u;
      }
      else
      {
        v14 = v12 + 2552;
      }
      v15 = *(_QWORD **)(v14 + 8);
      v16 = v8 + 8;
      if ( *v15 != v14
        || (*v16 = v14,
            *((_QWORD *)v8 + 2) = v15,
            *v15 = v16,
            *(_QWORD *)(v14 + 8) = v16,
            v17 = *(_QWORD **)(a1 + 80),
            v18 = v8 + 24,
            *v17 != a1 + 72) )
      {
        __fastfail(3u);
      }
      *v18 = a1 + 72;
      *((_QWORD *)v8 + 4) = v17;
      *v17 = v18;
      *(_QWORD *)(a1 + 80) = v18;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v19 = *(_QWORD *)(v4 + 2024);
      *((_QWORD *)v8 + 58) = v19;
      v20 = *(_QWORD *)(v4 + 2072);
      *((_QWORD *)v8 + 55) = v19;
      *((_QWORD *)v8 + 59) = v20;
      KeInitializeTimer((PKTIMER)(v8 + 504));
      KeInitializeDpc((PRKDPC)(v8 + 568), (PKDEFERRED_ROUTINE)VidSchiDelayReadyRoutine, v8);
      v21 = *a2;
      if ( (*a2 & 0x604) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          memset(v58, 0, 0x48uLL);
          v35 = *((unsigned int *)v8 + 22);
          v36 = *(_QWORD *)(v4 + 616);
          *(_QWORD *)&v58[0] = 0LL;
          v37 = *(_DWORD *)(v4 + 688);
          v38 = v36 + 8 * v35;
          if ( (unsigned int)v35 >= v37 )
            v38 = v36;
          DWORD2(v58[0]) = *(unsigned __int16 *)(*(_QWORD *)v38 + 8LL);
          if ( (unsigned int)v35 < v37 )
            v36 += 8 * v35;
          v39 = *(_QWORD *)(v4 + 8);
          HIDWORD(v58[0]) = 1 << *(_BYTE *)(*(_QWORD *)v36 + 6LL);
          LODWORD(v58[1]) = v58[1] & 0xFFFFFFE6 | ((v21 & 4 | ((v21 & 0x200 | (v21 >> 1) & 0x400) >> 4)) >> 2);
          v40 = *(_QWORD *)(a1 + 16);
          LODWORD(v58[1]) ^= (LOBYTE(v58[1]) ^ (unsigned __int8)(4
                                                               * *(_BYTE *)(352LL * *(unsigned __int16 *)(v54 + 6)
                                                                          + *(_QWORD *)(*(_QWORD *)(v39 + 16) + 2416LL)
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
          *((_OWORD *)v8 + 56) = v58[0];
          *((_QWORD *)v8 + 8) = v43;
          v44 = v58[2];
          *((_OWORD *)v8 + 57) = v42;
          v45 = v58[3];
          *((_OWORD *)v8 + 58) = v44;
          *(_QWORD *)&v44 = *(_QWORD *)&v58[4];
          *((_OWORD *)v8 + 59) = v45;
          *((_QWORD *)v8 + 120) = v44;
          if ( !v41 )
          {
            v46 = *(_QWORD *)(a1 + 8);
            if ( !v46 )
              LODWORD(v46) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v47 = *(_DWORD *)(*((_QWORD *)v8 + 13) + 48LL) >> 4;
              McTemplateK0pqqqqqqqqppp(
                v58[3],
                (unsigned int)&EventCreateContext,
                (2 * (v47 & 1)) | 1,
                v46,
                SBYTE8(v58[0]),
                SBYTE12(v58[0]),
                SBYTE4(v58[2]),
                SBYTE8(v58[2]),
                SBYTE12(v58[2]),
                v58[3],
                SBYTE4(v58[3]),
                (2 * (v47 & 1)) | 1,
                (char)v8);
            }
          }
        }
        else if ( bTracingEnabled )
        {
          v30 = *((unsigned int *)v8 + 22);
          if ( (unsigned int)v30 < *(_DWORD *)(v4 + 68) )
          {
            memset(v56, 0, sizeof(v56));
            v31 = *(_QWORD *)(v4 + 616);
            v32 = v21 & 0x40;
            v33 = v31 + 8 * v30;
            v34 = *(_QWORD *)(a1 + 8);
            if ( !v34 )
              LODWORD(v34) = a1;
            if ( (unsigned int)v30 >= *(_DWORD *)(v4 + 688) )
              v33 = *(_QWORD *)(v4 + 616);
            else
              v31 += 8 * v30;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0pqqqqqqqqppp(
                *(unsigned __int16 *)(*(_QWORD *)v31 + 8LL),
                (unsigned int)&EventCreateContext,
                HIDWORD(v56[0]),
                v34,
                *(_WORD *)(*(_QWORD *)v31 + 8LL),
                1 << *(_BYTE *)(*(_QWORD *)v33 + 6LL),
                v56[0],
                SBYTE4(v56[0]),
                v56[1],
                SBYTE4(v56[1]),
                v56[2],
                (2 * (((*(_DWORD *)(*((_QWORD *)v8 + 13) + 48LL) & 0x10) != 0) | (v32 != 0 ? 2 : 0))) | 1,
                (char)v8);
          }
        }
      }
      else
      {
        *((_QWORD *)v8 + 8) = *(_QWORD *)(a3 + 184);
      }
      if ( (int)VidSchSetPriorityContext((struct _VIDSCH_CONTEXT *)v8) >= 0 )
      {
        v22 = *(_DWORD *)(v4 + 140) * ((*(_DWORD *)(v4 + 64) << 6) + ((8 * *(_DWORD *)(v4 + 64) + 191) & 0xFFFFFFF8))
            + 8 * (*(_DWORD *)(v4 + 64) + 106);
        if ( v22 <= 0x410 )
          v22 = 1040;
        v23 = 0;
        v24 = v22;
        do
        {
          v25 = ExAllocatePoolWithTag((POOL_TYPE)512, v24, 0x35616956u);
          v28 = v25;
          if ( !v25 )
          {
            v53 = WdLogNewEntry5_WdWarning(v27, v26);
            WdLogEvent5_WdWarning(v53);
            goto LABEL_49;
          }
          memset(v25, 0, v24);
          v55 = (KSPIN_LOCK *)(v4 + 1656);
          VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1656), (__int64)(v8 + 752), v28 + 1, (_DWORD *)v8 + 192);
          VidSchiFreeQueuePacket(v8);
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
            v51 = v50;
            if ( !v50 )
              break;
            memset(v50, 0, v24);
            v51[16] |= 0x40u;
            VidSchiInterlockedInsertTailList(v55, (__int64)(v8 + 752), (_QWORD *)v51 + 1, (_DWORD *)v8 + 192);
            VidSchiFreeQueuePacket(v8);
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
