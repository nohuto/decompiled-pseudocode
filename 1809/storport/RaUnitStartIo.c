/*
 * XREFs of RaUnitStartIo @ 0x1C0003430
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitClaimIrp @ 0x1C0003E50 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00049A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitReleaseIrp @ 0x1C0008DD4 (RaidUnitReleaseIrp.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     IsUntaggedRequest @ 0x1C000AF94 (IsUntaggedRequest.c)
 *     StorRemoveIoGatewayItem @ 0x1C000CD00 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000DC5C (RaidSrbStatusToNtStatus.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C00116D8 (RaidProcessDeferredItemsWorker.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0015980 (RaidDeleteDeviceQueueEntry.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C002563C (RaidDmaFlushDmaBuffers.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C002727C (RaidUpdateZoneIoMetadata.c)
 *     McTemplateK0zqjuuujssssxx @ 0x1C002773C (McTemplateK0zqjuuujssssxx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C0037258 (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0039454 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C003D364 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C003D470 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0046028 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0049D1C (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  int v5; // r14d
  char v6; // r12
  __int64 v8; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rsi
  char v12; // bl
  int v13; // edx
  unsigned int v14; // r11d
  unsigned int v15; // r10d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  char *v23; // r9
  unsigned __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rbx
  char v27; // cl
  char v28; // cl
  char v29; // al
  int v30; // ebp
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v32; // rax
  unsigned int v33; // ebp
  unsigned int v34; // ebx
  int v35; // eax
  __int64 v36; // r14
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rbx
  _QWORD *v41; // rbx
  __int64 v42; // r14
  bool v43; // zf
  LARGE_INTEGER v44; // r15
  const char *v45; // rbp
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rsi
  unsigned __int8 v49; // al
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // esi
  int v57; // r15d
  unsigned int v58; // esi
  int v59; // ebp
  int v60; // ecx
  bool v61; // r15
  __int64 *v62; // r12
  __int64 v63; // rcx
  __int64 v64; // rcx
  bool v65; // si
  __int64 v66; // rcx
  __int64 v67; // rax
  void (__fastcall *v68)(__int64, _QWORD, bool); // rax
  __int64 v69; // rdx
  __int64 v70; // rbx
  BOOL v71; // r14d
  unsigned int v72; // ebx
  unsigned int HighestNodeNumber; // r8d
  unsigned __int8 v74; // al
  int v75; // ebx
  char v76; // al
  struct _KDPC *v77; // rcx
  int v79; // [rsp+38h] [rbp-B0h]
  int v80; // [rsp+80h] [rbp-68h]
  __int64 v81; // [rsp+88h] [rbp-60h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp-58h] BYREF
  __int64 v83; // [rsp+98h] [rbp-50h]
  int v84; // [rsp+F0h] [rbp+8h]
  __int64 v85; // [rsp+F0h] [rbp+8h]
  int v86; // [rsp+F8h] [rbp+10h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v80 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v6 = 0;
  v8 = *(_QWORD *)(v4 + 24);
  v86 = 0;
  v10 = 0LL;
  v81 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  *(_BYTE *)(v11 + 3) = 0;
  if ( *(int *)(v8 + 4264) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v8 + 1248)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 4264)) == 1 )
      RaidProcessDeferredItemsWorker(v8 + 1152, *(_QWORD *)(v8 + 8), a4);
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 4264));
  }
  v12 = *(_BYTE *)(v11 + 2);
  if ( v12 != 40 )
  {
    v25 = *(_DWORD *)(v11 + 12);
    v6 = *(_BYTE *)(v11 + 72);
    v83 = *(_QWORD *)(v11 + 40);
    v84 = v25;
    if ( v83 )
      *(_QWORD *)(v11 + 40) = 0LL;
    goto LABEL_29;
  }
  v13 = *(_DWORD *)(v11 + 24);
  v83 = *(_QWORD *)(v11 + 104);
  v81 = v11;
  v84 = v13;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_29;
  v14 = *(_DWORD *)(v11 + 56);
  v15 = 0;
  if ( !v14 )
    goto LABEL_29;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v11 + 4LL * v15 + 120);
    if ( (unsigned int)v16 < 0x80 )
      goto LABEL_21;
    v17 = *(unsigned int *)(v11 + 16);
    if ( (unsigned int)v16 > (unsigned int)v17 )
      goto LABEL_21;
    v18 = v16 + v11;
    v19 = (unsigned int)v16;
    v20 = *(_DWORD *)(v16 + v11) - 64;
    if ( !v20 )
      break;
    v21 = v20 - 1;
    if ( !v21 )
    {
      v24 = v19 + 56;
      goto LABEL_20;
    }
    if ( v21 == 1 && v19 + 40 <= v17 )
    {
      v22 = *(_DWORD *)(v18 + 12);
      v23 = (char *)(v18 + 32);
      if ( !v22 )
        v23 = 0LL;
      goto LABEL_25;
    }
LABEL_21:
    if ( ++v15 >= v14 )
      goto LABEL_29;
  }
  v24 = v19 + 40;
LABEL_20:
  if ( v24 > v17 )
    goto LABEL_21;
  if ( !*(_BYTE *)(v18 + 10) )
    goto LABEL_29;
  v23 = (char *)(v18 + 24);
LABEL_25:
  if ( v23 )
    v6 = *v23;
LABEL_29:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v12 == 40 )
    {
      v26 = *(_QWORD **)(v11 + 96);
      v81 = v11;
      *(_QWORD *)(v11 + 96) = v26[2];
    }
    else
    {
      v26 = *(_QWORD **)(v11 + 48);
      *(_QWORD *)(v11 + 48) = v26[2];
    }
    if ( v26[1] != -1LL )
      v10 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v4 + 3216)) - v26[1];
    ExFreePoolWithTag(v26, 0x54436152u);
  }
  if ( (*(_BYTE *)(v4 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v11) )
  {
    RaUnitReleaseRemoveLock(v4);
    v27 = *(_BYTE *)(v11 + 3);
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      v28 = ((v27 >> 7) & 0x80) + 56;
    }
    else
    {
      v29 = 56;
      if ( v27 < 0 )
        v29 = -72;
      v28 = v29;
    }
    *(_BYTE *)(v11 + 3) = v28;
    v30 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2080));
LABEL_97:
    RaidUpdateZoneIoMetadata(v4, a2, 0LL);
LABEL_98:
    v48 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v49 = *(_BYTE *)(v48 + 2);
    if ( v49 == 40 )
    {
      v50 = *(unsigned int *)(v48 + 20);
      v51 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
      v52 = *(unsigned int *)(v48 + 24);
    }
    else
    {
      v52 = *(unsigned int *)(v48 + 12);
      v51 = v81;
      v50 = v49;
    }
    v71 = IsUntaggedRequest(v52, v50) != 0;
    if ( v86 )
    {
      v72 = *a3;
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( v72 / *(_DWORD *)(v4 + 584) < HighestNodeNumber + 1 )
        HighestNodeNumber = v72 / *(_DWORD *)(v4 + 584);
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
        (PSLIST_ENTRY)(*(_QWORD *)(v4 + 576) + 16LL * v72));
    }
    RaidDeleteDeviceQueueEntry(v4 + 656, v71);
    if ( v80 )
      RaidUnitReleaseIrp(a2);
    v74 = StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v4 + 664));
    *(_QWORD *)(a2 + 56) = 0LL;
    v75 = v74;
    if ( (*(_BYTE *)(v48 + 3) & 0x3F) == 0 )
    {
      v76 = RaidNtStatusToSrbStatus((unsigned int)v30);
      *(_BYTE *)(v48 + 3) = v76;
      if ( (v76 & 0x3F) == 0x30 )
      {
        if ( *(_BYTE *)(v48 + 2) == 40 )
          *(_DWORD *)(v51 + 44) = -1073741670;
        else
          *(_DWORD *)(v48 + 64) = -1073741670;
      }
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        25LL,
        &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
        *(_QWORD *)(v4 + 8),
        a2,
        *(_DWORD *)(a2 + 48));
    }
    RaidUnitEndDeviceBusy(v4, a2);
    RaidCompleteRequestEx((PIRP)a2);
    if ( v75 )
      v77 = (struct _KDPC *)(*(_QWORD *)(v4 + 24) + 1856LL);
    else
      v77 = (struct _KDPC *)(v4 + 1184);
    LOBYTE(v47) = KeInsertQueueDpc(v77, 0LL, 0LL);
    return v47;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v32 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v32 )
  {
    v33 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      v34 = 0;
      if ( v33 )
        break;
LABEL_49:
      if ( ++v5 == 10 )
      {
        v35 = -1;
        goto LABEL_52;
      }
    }
    while ( 1 )
    {
      v32 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)v34 << 6)));
      if ( v32 )
        break;
      if ( ++v34 >= v33 )
        goto LABEL_49;
    }
  }
  v35 = *((_DWORD *)&v32->Next + 2);
LABEL_52:
  v36 = v83;
  v37 = v83;
  v86 = 1;
  *a3 = v35;
  v30 = RaidUnitClaimIrp(v4, a2, v37, a3);
  if ( v30 < 0 )
  {
    RaUnitReleaseRemoveLock(v4);
    goto LABEL_97;
  }
  v80 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v4 + 24) + 2220LL) && v6 != 18 && v6 != -96 )
  {
    LOBYTE(v38) = 37;
    *(_BYTE *)(v11 + 3) = 37;
    v30 = RaidSrbStatusToNtStatus(v38);
    goto LABEL_97;
  }
  if ( *(char *)(v4 + 449) < 0
    && *(_DWORD *)(v4 + 492) != 1
    && (unsigned __int8)RaidSrbIsPowerRequired(v4, v11)
    && (v84 & 0x100000) != 0 )
  {
    v30 = -1073741823;
    *(_BYTE *)(v11 + 3) = 36;
    goto LABEL_97;
  }
  v40 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v40 + 2) == 40 )
    v41 = *(_QWORD **)(v40 + 96);
  else
    v41 = *(_QWORD **)(v40 + 48);
  v41[96] = v36;
  v41[82] = RaidUnitCompleteRequest;
  if ( v10 || *(_BYTE *)(v11 + 2) != 40 )
  {
    v42 = v81;
  }
  else
  {
    v42 = v11;
    v81 = v11;
    if ( *(_DWORD *)(v11 + 4) || *(_DWORD *)(v11 + 28) )
    {
      v43 = StorEtwLoggingEnabled == 0;
      LODWORD(v85) = *(_DWORD *)(v11 + 4);
      HIDWORD(v85) = *(_DWORD *)(v11 + 28);
      *(_DWORD *)(v11 + 28) = 0;
      *(_DWORD *)(v11 + 4) = 0;
      if ( !v43 )
      {
        v43 = UseQPCTime == 0;
        goto LABEL_72;
      }
      if ( g_StorpTraceLoggingPerformanceEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_77;
        v43 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_72:
        if ( v43 )
LABEL_77:
          v44.QuadPart = KeQueryUnbiasedInterruptTime();
        else
          v44 = KeQueryPerformanceCounter(&PerformanceFrequency);
      }
      else
      {
        v44.QuadPart = 0LL;
      }
      v10 = v44.QuadPart - v85;
      if ( UseQPCTime && (g_StorpTraceLoggingPerformanceHighResolutionTimer || StorEtwLoggingEnabled) )
        v10 = 10000000 * v10 / PerformanceFrequency.QuadPart;
    }
  }
  v41[86] = v10;
  if ( v10 < DeviceQueueIoWaitThreshold )
  {
    if ( _InterlockedExchange64((volatile __int64 *)(v4 + 2208), 0LL) )
    {
      v45 = "End";
      goto LABEL_89;
    }
  }
  else if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2208)) == 1 )
  {
    v45 = "Start";
LABEL_89:
    if ( (byte_1C00617E5 & 0x10) != 0 )
      McTemplateK0zqjuuujssssxx(
        v4 + 169,
        v4 + 160,
        v4 + 1976,
        *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4864LL),
        *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
        *(_QWORD *)(v4 + 24) + 5256LL,
        *(_BYTE *)(v4 + 96),
        *(_BYTE *)(v4 + 97),
        *(_BYTE *)(v4 + 98),
        v4 + 1976,
        v4 + 160,
        v4 + 169,
        v4 + 186,
        (__int64)v45);
  }
  v46 = *(_QWORD *)(v4 + 24);
  if ( *(_QWORD *)(v46 + 5768) )
  {
    LODWORD(v47) = RaidAdapterAcquireCryptoKeyResources(v46, v41);
    v30 = v47;
    if ( (_DWORD)v47 == 259 )
      return v47;
    if ( (int)v47 < 0 )
    {
      if ( *(_BYTE *)(v11 + 2) == 40 )
      {
        *(_BYTE *)(v42 + 3) = 48;
        *(_DWORD *)(v42 + 44) = v47;
      }
      else
      {
        *(_BYTE *)(v11 + 3) = 48;
        *(_DWORD *)(v11 + 64) = v47;
      }
      goto LABEL_97;
    }
  }
  v53 = *(_QWORD *)(v4 + 24);
  if ( !*(_BYTE *)(v53 + 4514) )
    goto LABEL_140;
  v54 = v41[21];
  v55 = *(unsigned __int8 *)(v54 + 2);
  if ( (_BYTE)v55 == 40 )
    v56 = *(_DWORD *)(v54 + 24);
  else
    v56 = *(_DWORD *)(v54 + 12);
  if ( (*(_BYTE *)(v53 + 4515) & 4) != 0 )
  {
    v65 = (v56 & 0x40) != 0;
    if ( v41[13] )
    {
      if ( v53 != -720 )
      {
        v66 = *(_QWORD *)(v53 + 720);
        if ( v66 )
        {
          v67 = *(_QWORD *)(v66 + 8);
          if ( v67 )
          {
            if ( *(int *)(v53 + 748) >= 3 && (v68 = *(void (__fastcall **)(__int64, _QWORD, bool))(v67 + 240)) != 0LL )
            {
              v68(v66, v41[13], v65);
            }
            else
            {
              LOBYTE(v39) = 1;
              KeFlushIoBuffers(v41[13], v65, v39);
            }
          }
        }
      }
    }
    v69 = v41[17];
    if ( v69 )
      RaidDmaFlushDmaBuffers(v53 + 720, v69, v65);
    goto LABEL_140;
  }
  if ( v41[17] )
  {
    LODWORD(v47) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v4 + 24), v41);
    goto LABEL_141;
  }
  if ( (v56 & 0xC0) == 0 )
  {
LABEL_140:
    LODWORD(v47) = RaidAdapterPostScatterGatherExecute(v53, v41);
LABEL_141:
    v30 = v47;
    goto LABEL_142;
  }
  if ( (_BYTE)v55 == 40 )
  {
    v57 = *(_DWORD *)(v54 + 24);
    v58 = *(_DWORD *)(v54 + 60);
    v59 = *(_DWORD *)(v54 + 20);
  }
  else
  {
    v57 = *(_DWORD *)(v54 + 12);
    v58 = *(_DWORD *)(v54 + 16);
    v59 = (unsigned __int8)v55;
  }
  LODWORD(v47) = *(_DWORD *)(v53 + 540);
  v60 = v57 & 0x40;
  v61 = (v57 & 0x80) != 0;
  if ( (v47 & 8) == 0 && (*(_BYTE *)(v53 + 109) & 2) == 0 )
  {
    LOBYTE(v39) = 1;
    LOBYTE(v55) = v60 != 0;
    LOBYTE(v47) = KeFlushIoBuffers(v41[13], v55, v39);
  }
  if ( v59 == 23 )
  {
    v47 = v41[13];
    if ( *(_DWORD *)(v47 + 40) > v58 )
      v58 = *(_DWORD *)(v47 + 40);
  }
  v62 = (__int64 *)(v53 + 720);
  if ( v53 != -720 && (v63 = *v62) != 0 && (v47 = *(_QWORD *)(v63 + 8)) != 0 && (v47 = *(_QWORD *)(v47 + 112)) != 0 )
  {
    LOBYTE(v79) = v61;
    LODWORD(v47) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int, _QWORD *, int))v47)(
                     v63,
                     *(_QWORD *)(v53 + 8),
                     v41[13],
                     v41[23],
                     v58,
                     RaidpAdapterContinueScatterGather,
                     v41,
                     v79,
                     v41 + 29,
                     424);
    v30 = v47;
  }
  else
  {
    v30 = -1073741811;
  }
  if ( v30 == -1073741789 )
  {
    if ( v53 != -720 )
    {
      v64 = *v62;
      if ( *v62 )
      {
        v47 = *(_QWORD *)(v64 + 8);
        if ( v47 )
        {
          v47 = *(_QWORD *)(v47 + 88);
          if ( v47 )
          {
            LOBYTE(v79) = v61;
            LODWORD(v47) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int))v47)(
                             v64,
                             *(_QWORD *)(v53 + 8),
                             v41[13],
                             v41[23],
                             v58,
                             RaidpAdapterContinueScatterGather,
                             v41,
                             v79);
            goto LABEL_141;
          }
        }
      }
    }
    v30 = -1073741811;
  }
LABEL_142:
  if ( v30 < 0 )
    goto LABEL_98;
  v70 = *(_QWORD *)(v4 + 24);
  if ( *(int *)(v70 + 4264) <= 0 )
  {
    LOWORD(v47) = ExQueryDepthSList((PSLIST_HEADER)(v70 + 1248));
    if ( (_WORD)v47 )
    {
      LODWORD(v47) = _InterlockedIncrement((volatile signed __int32 *)(v70 + 4264));
      if ( (_DWORD)v47 == 1 )
        LOBYTE(v47) = RaidProcessDeferredItemsWorker(v70 + 1152, *(_QWORD *)(v70 + 8), a4);
      _InterlockedDecrement((volatile signed __int32 *)(v70 + 4264));
    }
  }
  return v47;
}
