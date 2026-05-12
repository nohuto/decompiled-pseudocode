/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x1C0004650
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C00034F0 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C00035B0 (RaUnitStartIo.c)
 *     RaidpAdapterContinueScatterGather @ 0x1C00045E0 (RaidpAdapterContinueScatterGather.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 *     RaidLogGetParm4 @ 0x1C0004E50 (RaidLogGetParm4.c)
 *     RaidAdapterRequestComplete @ 0x1C00057A0 (RaidAdapterRequestComplete.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B34 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005CC8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C00070AC (RaidAdapterReleaseStartIoLock.c)
 *     IsZonedWriteRequest @ 0x1C00120AC (IsZonedWriteRequest.c)
 *     RaAllocateConcurrentChannelToken @ 0x1C0022A3C (RaAllocateConcurrentChannelToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0quuujppiqt @ 0x1C0032480 (McTemplateK0quuujppiqt.c)
 *     McTemplateK0quuujppxii @ 0x1C0032580 (McTemplateK0quuujppxii.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C0036AAC (RaidGetIoStartingLbaAndLength.c)
 *     RaidZoneWriteGroupListPendingIoCount @ 0x1C0038824 (RaidZoneWriteGroupListPendingIoCount.c)
 *     RaidZoneWriteGroupListRemoveRequest @ 0x1C00388A4 (RaidZoneWriteGroupListRemoveRequest.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0038908 (RaidZoneWriteGroupListSearchRequest.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  __int64 ConcurrentChannelToken; // r13
  __int64 v7; // rax
  int v8; // r8d
  bool v9; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, _QWORD); // rax
  char v15; // di
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdi
  char v19; // r15
  unsigned __int8 v21; // al
  int v22; // r9d
  char *v23; // r8
  char v24; // al
  char v25; // al
  __int64 Parm4; // rax
  __int64 v27; // r10
  __int64 v28; // rdi
  __int64 v29; // r11
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  unsigned int v41; // r12d
  unsigned int i; // r15d
  __int64 v43; // rcx
  unsigned __int64 v44; // r11
  __int64 v45; // r10
  __int64 v46; // rdi
  int v47; // ecx
  int v48; // ecx
  LARGE_INTEGER v49; // rax
  __int64 v50; // r13
  _BYTE *v51; // rdi
  unsigned int v52; // r11d
  unsigned int j; // r10d
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // r8
  int v57; // ecx
  int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // r15
  signed __int64 v61; // rdi
  __int64 v62; // rax
  char v63; // r10
  char v64; // r11
  char v65; // r12
  int v66; // eax
  int v67; // eax
  __int64 v68; // r9
  char v69; // r12
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  char v74; // r15
  LARGE_INTEGER v75; // rax
  PSLIST_ENTRY ListEntry; // [rsp+70h] [rbp-49h]
  __int64 v77; // [rsp+78h] [rbp-41h] BYREF
  __int64 v78; // [rsp+80h] [rbp-39h]
  unsigned __int64 v79; // [rsp+88h] [rbp-31h]
  __int64 v80; // [rsp+90h] [rbp-29h]
  __int64 v81; // [rsp+98h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v83; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v84; // [rsp+120h] [rbp+67h]
  char v85; // [rsp+120h] [rbp+67h]
  char v86; // [rsp+128h] [rbp+6Fh]
  unsigned int v87; // [rsp+130h] [rbp+77h] BYREF
  __int64 v88; // [rsp+138h] [rbp+7Fh]

  v2 = 0;
  a2[27] = a1;
  ListEntry = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a2[21];
  v5 = a2;
  ConcurrentChannelToken = 0LL;
  v7 = a2[28];
  LOBYTE(a2) = *(_BYTE *)(v4 + 2);
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( (_BYTE)a2 == 40 )
  {
    LODWORD(a2) = *(_DWORD *)(v4 + 20);
    v8 = *(_DWORD *)(v4 + 24);
  }
  else
  {
    v8 = *(_DWORD *)(v4 + 12);
    LODWORD(a2) = (unsigned __int8)a2;
  }
  if ( v7 )
  {
    if ( *(int *)(v7 + 428) > 0 )
    {
      if ( (_DWORD)a2 == 32 || (v40 = 1, (_DWORD)a2 == 19) )
        v40 = 0;
      if ( v40 )
        goto LABEL_97;
    }
    else if ( *(_BYTE *)(v7 + 436) && (v8 & 0x10) == 0 || *(_BYTE *)(v7 + 437) && (v8 & 0x80000) == 0 )
    {
      goto LABEL_97;
    }
  }
  else if ( *(_DWORD *)(a1 + 812) && (unsigned int)((_DWORD)a2 - 36) > 1 && (*((_BYTE *)v5 + 17) & 8) == 0 )
  {
LABEL_97:
    *(_BYTE *)(v4 + 3) = 5;
    RaidAdapterRequestComplete(a1, v5, 1LL);
    return 0LL;
  }
  if ( StorEtwLoggingEnabled )
  {
    v9 = UseQPCTime == 0;
  }
  else
  {
    if ( !g_StorpTraceLoggingPerformanceEnabled )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_11;
    }
    if ( !UseQPCTime )
      goto LABEL_101;
    v9 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  }
  if ( v9 )
  {
LABEL_101:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_11;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_11:
  v9 = FUAEnabled == 0;
  v11 = v5[21];
  v5[87] = PerformanceCounter.QuadPart;
  if ( v9 && v11 )
  {
    v21 = *(_BYTE *)(v11 + 2);
    if ( v21 != 40 )
    {
      v22 = v21;
      v23 = (char *)(v11 + 72);
      goto LABEL_50;
    }
    v22 = *(_DWORD *)(v11 + 20);
    v23 = 0LL;
    if ( !v22 )
    {
      v41 = *(_DWORD *)(v11 + 56);
      for ( i = 0; i < v41; ++i )
      {
        v43 = *(unsigned int *)(v11 + 4LL * i + 120);
        if ( (unsigned int)v43 >= 0x80 )
        {
          v44 = *(unsigned int *)(v11 + 16);
          if ( (unsigned int)v43 < (unsigned int)v44 )
          {
            v45 = v43 + v11;
            v46 = (unsigned int)v43;
            v47 = *(_DWORD *)(v43 + v11) - 64;
            if ( v47 )
            {
              v48 = v47 - 1;
              if ( v48 )
              {
                if ( v48 == 1 && v46 + 40 <= v44 )
                {
                  v23 = (char *)(v45 + 32);
                  if ( !*(_DWORD *)(v45 + 12) )
                    v23 = 0LL;
                  break;
                }
              }
              else if ( v46 + 56 <= v44 )
              {
                goto LABEL_115;
              }
            }
            else if ( v46 + 40 <= v44 )
            {
LABEL_115:
              if ( *(_BYTE *)(v45 + 10) )
                v23 = (char *)(v45 + 24);
              break;
            }
          }
        }
      }
    }
LABEL_50:
    if ( v23 )
    {
      if ( !v22 )
      {
        v24 = *v23;
        if ( *v23 == 42 || v24 == -86 || v24 == -118 )
        {
          v25 = v23[1];
          if ( (v25 & 8) != 0 )
            v23[1] = v25 & 0xF7;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 4450) )
  {
    if ( (qword_1C00612B0 & 1) != 0 )
    {
      Parm4 = RaidLogGetParm4(v5, v11);
      v27 = v5[20];
      v28 = Parm4;
      v29 = v5[21];
      if ( !v27 && v29 )
      {
        if ( *(_BYTE *)(v29 + 2) == 40 )
          v27 = *(_QWORD *)(v29 + 80);
        else
          v27 = *(_QWORD *)(v29 + 48);
      }
      v30 = v5[28];
      if ( v30 )
        v31 = (unsigned __int8)BYTE2(*(_DWORD *)(v30 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v30 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v30 + 96))) << 8);
      else
        v31 = 0LL;
      v32 = v5[27];
      if ( v32 && *(_DWORD *)(v32 + 4996) && *(_QWORD *)(v32 + 5000) )
      {
        v33 = *(_QWORD *)(v32 + 5000)
            + 48LL
            * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v32 + 4992)) % *(_DWORD *)(v32 + 4996));
        *(_DWORD *)v33 = 36;
        *(_QWORD *)(v33 + 40) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v33 + 8) = v27;
        *(_QWORD *)(v33 + 16) = v31;
        *(_QWORD *)(v33 + 24) = v29;
        *(_QWORD *)(v33 + 32) = v28;
      }
    }
    v12 = v5[20];
    if ( v12 )
      *(_BYTE *)(v12 + 141) = -82;
    v13 = v5[27];
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v13 + 528) + 128LL);
    if ( v14 )
      v15 = v14(*(_QWORD *)(v13 + 536) + 16LL, v5[21]);
    else
      v15 = 1;
    if ( StorEtwLoggingEnabled && ((byte_1C0061741 & 2) != 0 || (byte_1C0061743 & 2) != 0) )
    {
      if ( UseQPCTime )
        v49 = KeQueryPerformanceCounter(0LL);
      else
        v49.QuadPart = KeQueryUnbiasedInterruptTime();
      v5[88] = v49.QuadPart;
    }
    if ( !v15 )
      return 0LL;
    if ( *(int *)(a1 + 4744) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 688) )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 680), &LockHandle);
      else
        LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
    }
    else if ( *(_DWORD *)(a1 + 4744) < KeQueryActiveProcessorCountEx(0xFFFFu) )
    {
      ConcurrentChannelToken = RaAllocateConcurrentChannelToken(a1);
      ListEntry = (PSLIST_ENTRY)ConcurrentChannelToken;
      *((_DWORD *)v5 + 6) = *(_DWORD *)(ConcurrentChannelToken + 20);
    }
    else
    {
      *((_DWORD *)v5 + 6) = HIDWORD(KeGetPcr()[1].LockArray);
    }
  }
  if ( (qword_1C00612B0 & 4) != 0 )
  {
    v34 = v5[28];
    if ( v34 )
      v79 = (unsigned __int8)BYTE2(*(_DWORD *)(v34 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v34 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v34 + 96))) << 8);
    else
      v79 = 0LL;
    v35 = RaidLogGetParm4(v5, v11);
    v36 = v5[20];
    v37 = v5[21];
    v81 = v35;
    v80 = v37;
    if ( v36 )
    {
      v78 = v36;
    }
    else if ( v37 )
    {
      if ( *(_BYTE *)(v37 + 2) == 40 )
        v39 = *(_QWORD *)(v37 + 80);
      else
        v39 = *(_QWORD *)(v37 + 48);
      v78 = v39;
    }
  }
  v16 = v5[28];
  if ( !v16 || !*(_BYTE *)(v16 + 129) )
    goto LABEL_28;
  v50 = v5[21];
  if ( *(_BYTE *)(v50 + 2) != 40 )
  {
    v51 = (_BYTE *)(v50 + 72);
    goto LABEL_146;
  }
  v51 = 0LL;
  if ( !*(_DWORD *)(v50 + 20) )
  {
    v52 = *(_DWORD *)(v50 + 56);
    for ( j = 0; j < v52; ++j )
    {
      v54 = *(unsigned int *)(v50 + 4LL * j + 120);
      if ( (unsigned int)v54 >= 0x80 )
      {
        v55 = *(unsigned int *)(v50 + 16);
        if ( (unsigned int)v54 < (unsigned int)v55 )
        {
          v56 = (unsigned int)v54;
          v57 = *(_DWORD *)(v54 + v50) - 64;
          if ( v57 )
          {
            v58 = v57 - 1;
            if ( v58 )
            {
              if ( v58 == 1 && v56 + 40 <= v55 )
              {
                v51 = (_BYTE *)(v56 + v50 + 32);
                if ( !*(_DWORD *)(v56 + v50 + 12) )
                  v51 = 0LL;
                break;
              }
            }
            else if ( v56 + 56 <= v55 )
            {
              goto LABEL_140;
            }
          }
          else if ( v56 + 40 <= v55 )
          {
LABEL_140:
            if ( *(_BYTE *)(v56 + v50 + 10) )
              v51 = (_BYTE *)(v56 + v50 + 24);
            break;
          }
        }
      }
    }
  }
LABEL_146:
  if ( (unsigned __int8)IsZonedWriteRequest(v5[28], 0LL, v5) )
  {
    v77 = 0LL;
    memset(&v83, 0, sizeof(v83));
    v59 = v5[28];
    v87 = 0;
    v60 = RaidZoneWriteGroupListSearchRequest((int)v59 + 400, 0, (_DWORD)v5, *(_DWORD *)(v59 + 580), 0);
    RaidGetIoStartingLbaAndLength(v51, &v77, &v87);
    v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v60 + 40), 0LL, 0LL);
    if ( v77 == v61 )
    {
      v62 = v87;
      v61 = v62 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v60 + 40), v87);
    }
    else
    {
      v63 = -1;
      v84 = v5[28];
      v64 = -1;
      v65 = -1;
      v66 = *(_DWORD *)(v84 + 96);
      if ( (BYTE2(v66) | ((BYTE1(v66) | ((unsigned __int8)v66 << 8)) << 8)) != 0xFFFFFF )
      {
        v63 = v66;
        v64 = BYTE1(v66);
        v65 = BYTE2(v66);
      }
      if ( (byte_1C0061744 & 0x20) != 0 )
        McTemplateK0quuujppxii(
          v84 + 1720,
          *(_QWORD *)(v84 + 24),
          v77,
          *(_DWORD *)(*(_QWORD *)(v84 + 24) + 56LL),
          v63,
          v64,
          v65,
          v84 + 1720,
          v5[20],
          v5[96],
          v87,
          v77,
          v61);
      ++*(_DWORD *)(a1 + 5664);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5[28] + 544LL), &v83);
    --*(_DWORD *)(v60 + 56);
    if ( (unsigned __int64)(v61 - *(_QWORD *)(v60 + 16)) >= *(_QWORD *)(v60 + 32) )
    {
      if ( (qword_1C00612B0 & 0x1000) != 0 )
        DbgLogRequest(a1, 41, v77, v87, v61, *(_QWORD *)(v60 + 16), 0LL);
      RaidZoneWriteGroupListRemoveRequest(v5[28] + 400LL, v60, 0LL);
    }
    KeReleaseInStackQueuedSpinLock(&v83);
    if ( (qword_1C00612B0 & 0x1000) != 0 )
      DbgLogRequest(a1, 40, v77, v87, v61, v50, 0LL);
    goto LABEL_183;
  }
  v88 = 0LL;
  if ( v51 )
  {
    LOBYTE(v67) = *(_BYTE *)(v50 + 2);
    v67 = (_BYTE)v67 == 40 ? *(_DWORD *)(v50 + 20) : (unsigned __int8)v67;
    if ( !v67 && *v51 == 0x94 && v51[1] == 4 )
    {
      v68 = v5[28];
      v69 = -1;
      v86 = -1;
      v85 = -1;
      v70 = *(_DWORD *)(v68 + 96);
      if ( (BYTE2(v70) | ((BYTE1(v70) | ((unsigned __int8)v70 << 8)) << 8)) != 0xFFFFFF )
      {
        v69 = v70;
        v86 = BYTE1(v70);
        v85 = BYTE2(v70);
      }
      v71 = v68 + 400;
      if ( (v51[14] & 1) != 0 )
      {
        v72 = 0LL;
      }
      else
      {
        v72 = RaidZoneWriteGroupListSearchRequest(v71, 0, (_DWORD)v5, *(_DWORD *)(v68 + 580), 0);
        if ( !v72 )
          goto LABEL_178;
        v71 = v5[28] + 400LL;
      }
      if ( (unsigned int)RaidZoneWriteGroupListPendingIoCount(v71, v72) )
      {
        LOBYTE(v73) = 1;
        *(_BYTE *)(v5[21] + 3LL) = 4;
        RaidAdapterRequestComplete(a1, v5, v73);
        if ( *(_BYTE *)(a1 + 4450) )
        {
          if ( *(int *)(a1 + 4744) <= 1 )
            RaidAdapterReleaseStartIoLock(a1, &LockHandle);
          else
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)LODWORD(ListEntry[1].Next) << 6)),
              ListEntry);
        }
        return 0LL;
      }
LABEL_178:
      if ( (qword_1C00612B0 & 0x1000) != 0 )
      {
        HIBYTE(v88) = v51[2];
        BYTE6(v88) = v51[3];
        BYTE5(v88) = v51[4];
        BYTE4(v88) = v51[5];
        BYTE3(v88) = v51[6];
        BYTE2(v88) = v51[7];
        BYTE1(v88) = v51[8];
        LOBYTE(v88) = v51[9];
        v74 = v88;
        DbgLogRequest(a1, 42, v88, 0LL, v50, v51[14] & 1, 0LL);
      }
      else
      {
        v74 = v88;
      }
      if ( (byte_1C0061744 & 0x40) != 0 )
        McTemplateK0quuujppiqt(
          v51[14] & 1,
          v5[28] + 1720,
          *(_QWORD *)(v5[28] + 24LL),
          *(_DWORD *)(*(_QWORD *)(v5[28] + 24LL) + 56LL),
          v69,
          v86,
          v85,
          v5[28] + 1720LL,
          v5[20],
          v5[96],
          v74,
          0,
          v51[14] & 1);
    }
  }
LABEL_183:
  ConcurrentChannelToken = (__int64)ListEntry;
LABEL_28:
  v17 = v5[20];
  if ( v17 )
    *(_BYTE *)(v17 + 141) = -86;
  *((_BYTE *)v5 + 16) = v5[2] & 0xE3 | 0xC;
  v18 = MEMORY[0xFFFFF78000000014];
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 528) + 16LL))(
          *(_QWORD *)(a1 + 536) + 16LL,
          v5[21]);
  if ( StorEtwLoggingEnabled && ((byte_1C0061741 & 2) != 0 || (byte_1C0061743 & 2) != 0) )
  {
    if ( UseQPCTime )
      v75 = KeQueryPerformanceCounter(0LL);
    else
      v75.QuadPart = KeQueryUnbiasedInterruptTime();
    v5[89] = v75.QuadPart;
  }
  if ( *(_BYTE *)(a1 + 4450) )
  {
    if ( *(int *)(a1 + 4744) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 688) )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      else
        RaidAdapterReleaseInterruptLock(a1, LOBYTE(LockHandle.LockQueue.Next));
    }
    else if ( ConcurrentChannelToken )
    {
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)*(unsigned int *)(ConcurrentChannelToken + 16) << 6)),
        (PSLIST_ENTRY)ConcurrentChannelToken);
    }
  }
  if ( (qword_1C00612B0 & 4) != 0 && *(_DWORD *)(a1 + 4996) && *(_QWORD *)(a1 + 5000) )
  {
    v38 = *(_QWORD *)(a1 + 5000)
        + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 4992)) % *(_DWORD *)(a1 + 4996));
    *(_DWORD *)v38 = 0;
    if ( v18 )
      *(_QWORD *)(v38 + 40) = v18;
    else
      *(_QWORD *)(v38 + 40) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v38 + 8) = v78;
    *(_QWORD *)(v38 + 16) = v79;
    *(_QWORD *)(v38 + 24) = v80;
    *(_QWORD *)(v38 + 32) = v81;
  }
  if ( !v19 )
    return (unsigned int)-1073741823;
  return v2;
}
