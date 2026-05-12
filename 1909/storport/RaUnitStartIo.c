/*
 * XREFs of RaUnitStartIo @ 0x1C00035A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitClaimIrp @ 0x1C0003AA0 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidDmaGetScatterGatherList @ 0x1C0004FA0 (RaidDmaGetScatterGatherList.c)
 *     RaidUnitReleaseIrp @ 0x1C00074B8 (RaidUnitReleaseIrp.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     IsUntaggedRequest @ 0x1C00093EC (IsUntaggedRequest.c)
 *     StorRemoveIoGatewayItem @ 0x1C000A760 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B9D8 (RaidSrbStatusToNtStatus.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C000FFC0 (RaidProcessDeferredItemsWorker.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C00119C8 (RaidDeleteDeviceQueueEntry.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C00226AC (RaidDmaFlushDmaBuffers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C00341E8 (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C003646C (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C0038F00 (WPP_SF_qqD.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C003A934 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C003AA40 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00446B0 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitEndDeviceBusy @ 0x1C004884C (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rbx
  char v4; // r12
  ULONGLONG v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rdi
  char v9; // dl
  __int64 v10; // r14
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  char *v17; // rcx
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v19; // rax
  int v20; // eax
  int *v21; // rdi
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // rdi
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // esi
  __int64 v32; // rax
  int v33; // r14d
  unsigned int v34; // r13d
  int v35; // esi
  int v36; // ecx
  char v37; // r14
  __int64 *v38; // r12
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // r13
  bool v42; // si
  __int64 v43; // rcx
  __int64 v44; // rax
  void (__fastcall *v45)(__int64, _QWORD, bool); // rax
  __int64 v46; // rdx
  _QWORD *v47; // rdi
  int v48; // ecx
  char v49; // cl
  char v50; // cl
  char v51; // al
  __int64 v52; // rbp
  unsigned __int8 v53; // al
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // edi
  int v57; // r12d
  unsigned int v58; // esi
  char IsPowerRequired; // al
  BOOL v60; // r14d
  unsigned int v61; // edi
  unsigned int HighestNodeNumber; // r8d
  unsigned __int8 v63; // al
  int v64; // edi
  char v65; // al
  struct _KDPC *v66; // rcx
  int v68; // [rsp+60h] [rbp-58h]
  __int64 v69; // [rsp+68h] [rbp-50h]
  char v70; // [rsp+C0h] [rbp+8h]
  int v71; // [rsp+C8h] [rbp+10h]
  int v73; // [rsp+D8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v68 = 0;
  v73 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v8 = *(_QWORD *)(v3 + 24);
  v69 = 0LL;
  v70 = 0;
  *(_BYTE *)(v7 + 3) = 0;
  if ( *(int *)(v8 + 4200) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v8 + 1184)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 4200)) == 1 )
      RaidProcessDeferredItemsWorker(v8 + 1088, *(_QWORD *)(v8 + 8));
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 4200));
  }
  v9 = *(_BYTE *)(v7 + 2);
  if ( v9 != 40 )
  {
    v10 = *(_QWORD *)(v7 + 40);
    v4 = *(_BYTE *)(v7 + 72);
    v71 = *(_DWORD *)(v7 + 12);
    v70 = v4;
    if ( v10 )
      *(_QWORD *)(v7 + 40) = 0LL;
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(v7 + 104);
  v71 = *(_DWORD *)(v7 + 24);
  v69 = v7;
  if ( *(_DWORD *)(v7 + 20) )
    goto LABEL_14;
  v11 = *(_DWORD *)(v7 + 56);
  v12 = 0;
  if ( !v11 )
    goto LABEL_14;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v7 + 4LL * v12 + 120);
    if ( (unsigned int)v13 < 0x80 )
      goto LABEL_87;
    v14 = *(unsigned int *)(v7 + 16);
    if ( (unsigned int)v13 > (unsigned int)v14 )
      goto LABEL_87;
    v15 = (unsigned int)v13;
    v16 = *(_DWORD *)(v13 + v7);
    if ( v16 == 64 )
    {
      if ( v15 + 40 <= v14 )
      {
        if ( !*(_BYTE *)(v15 + v7 + 10) )
          goto LABEL_14;
LABEL_11:
        v17 = (char *)(v15 + v7 + 24);
        goto LABEL_12;
      }
      goto LABEL_87;
    }
    v48 = v16 - 65;
    if ( v48 )
      break;
    if ( v15 + 56 <= v14 )
    {
      if ( !*(_BYTE *)(v15 + v7 + 10) )
        goto LABEL_14;
      goto LABEL_11;
    }
LABEL_87:
    if ( ++v12 >= v11 )
      goto LABEL_14;
  }
  if ( v48 != 1 || v15 + 40 > v14 )
    goto LABEL_87;
  v17 = (char *)(v15 + v7 + 32);
  if ( !*(_DWORD *)(v15 + v7 + 12) )
    v17 = 0LL;
LABEL_12:
  if ( v17 )
  {
    v4 = *v17;
    v70 = *v17;
  }
LABEL_14:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v9 == 40 )
    {
      v47 = *(_QWORD **)(v7 + 96);
      v69 = v7;
      *(_QWORD *)(v7 + 96) = v47[2];
    }
    else
    {
      v47 = *(_QWORD **)(v7 + 48);
      *(_QWORD *)(v7 + 48) = v47[2];
    }
    if ( v47[1] != -1LL )
      v6 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v3 + 3000)) - v47[1];
    ExFreePoolWithTag(v47, 0x54436152u);
  }
  if ( (*(_BYTE *)(v3 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v7) )
  {
    RaUnitReleaseRemoveLock(v3);
    v49 = *(_BYTE *)(v7 + 3);
    if ( *(_BYTE *)(v7 + 2) == 40 )
    {
      v50 = ((v49 >> 7) & 0x80) + 56;
    }
    else
    {
      v51 = 56;
      if ( v49 < 0 )
        v51 = -72;
      v50 = v51;
    }
    *(_BYTE *)(v7 + 3) = v50;
    v23 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v3 + 2080));
LABEL_97:
    v21 = a3;
LABEL_98:
    v41 = v69;
LABEL_99:
    v52 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v53 = *(_BYTE *)(v52 + 2);
    if ( v53 == 40 )
    {
      v54 = *(unsigned int *)(v52 + 20);
      v41 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
      v55 = *(unsigned int *)(v52 + 24);
    }
    else
    {
      v55 = *(unsigned int *)(v52 + 12);
      v54 = v53;
    }
    v60 = IsUntaggedRequest(v55, v54) != 0;
    if ( v73 )
    {
      v61 = *v21;
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( v61 / *(_DWORD *)(v3 + 584) < HighestNodeNumber + 1 )
        HighestNodeNumber = v61 / *(_DWORD *)(v3 + 584);
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v3 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
        (PSLIST_ENTRY)(*(_QWORD *)(v3 + 576) + 16LL * v61));
    }
    RaidDeleteDeviceQueueEntry(v3 + 656, v60);
    if ( v68 )
      RaidUnitReleaseIrp(a2);
    v63 = StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v3 + 664));
    *(_QWORD *)(a2 + 56) = 0LL;
    v64 = v63;
    if ( (*(_BYTE *)(v52 + 3) & 0x3F) == 0 )
    {
      v65 = RaidNtStatusToSrbStatus((unsigned int)v23);
      *(_BYTE *)(v52 + 3) = v65;
      if ( (v65 & 0x3F) == 0x30 )
      {
        if ( *(_BYTE *)(v52 + 2) == 40 )
          *(_DWORD *)(v41 + 44) = -1073741670;
        else
          *(_DWORD *)(v52 + 64) = -1073741670;
      }
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        25LL,
        &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
        *(_QWORD *)(v3 + 8),
        a2,
        *(_DWORD *)(a2 + 48));
    }
    RaidUnitEndDeviceBusy(v3, a2);
    RaidCompleteRequestEx((PIRP)a2);
    if ( v64 )
      v66 = (struct _KDPC *)(*(_QWORD *)(v3 + 24) + 1792LL);
    else
      v66 = (struct _KDPC *)(v3 + 1208);
    LOBYTE(v32) = KeInsertQueueDpc(v66, 0LL, 0LL);
    return v32;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 512) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v19 )
  {
    v56 = 0;
    v57 = 0;
    v58 = KeQueryHighestNodeNumber() + 1;
    while ( !v58 )
    {
LABEL_105:
      ++v57;
      v56 = 0;
      if ( v57 == 10 )
      {
        v4 = v70;
        v20 = -1;
        goto LABEL_18;
      }
    }
    while ( 1 )
    {
      v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 512) + ((unsigned __int64)v56 << 6)));
      if ( v19 )
        break;
      if ( ++v56 >= v58 )
        goto LABEL_105;
    }
    v4 = v70;
  }
  v20 = *((_DWORD *)&v19->Next + 2);
LABEL_18:
  v21 = a3;
  v73 = 1;
  *a3 = v20;
  v23 = RaidUnitClaimIrp(v3, a2, v10, a3);
  if ( v23 < 0 )
  {
    LOBYTE(v32) = RaUnitReleaseRemoveLock(v3);
    goto LABEL_46;
  }
  v68 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v3 + 24) + 2156LL) && v4 != 18 && v4 != -96 )
  {
    LOBYTE(v22) = 37;
    *(_BYTE *)(v7 + 3) = 37;
    LODWORD(v32) = RaidSrbStatusToNtStatus(v22);
    v23 = v32;
    goto LABEL_46;
  }
  if ( *(char *)(v3 + 449) < 0 && *(_DWORD *)(v3 + 492) != 1 )
  {
    IsPowerRequired = RaidSrbIsPowerRequired(v3, v7);
    if ( IsPowerRequired && (v71 & 0x100000) != 0 )
    {
      v23 = -1073741823;
      *(_BYTE *)(v7 + 3) = 36;
      goto LABEL_98;
    }
  }
  v25 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v25 + 2) == 40 )
    v26 = *(_QWORD **)(v25 + 96);
  else
    v26 = *(_QWORD **)(v25 + 48);
  v26[96] = v10;
  v26[82] = RaidUnitCompleteRequest;
  v26[86] = v6;
  v27 = *(_QWORD *)(v3 + 24);
  if ( *(_QWORD *)(v27 + 5632) )
  {
    LODWORD(v32) = RaidAdapterAcquireCryptoKeyResources(v27, v26);
    v23 = v32;
    if ( (_DWORD)v32 == 259 )
      return v32;
    if ( (int)v32 < 0 )
    {
      v41 = v69;
      if ( *(_BYTE *)(v7 + 2) == 40 )
      {
        *(_BYTE *)(v69 + 3) = 48;
        *(_DWORD *)(v69 + 44) = v32;
      }
      else
      {
        *(_BYTE *)(v7 + 3) = 48;
        *(_DWORD *)(v7 + 64) = v32;
      }
      goto LABEL_47;
    }
  }
  v28 = *(_QWORD *)(v3 + 24);
  if ( !*(_BYTE *)(v28 + 4450) )
    goto LABEL_30;
  v29 = v26[21];
  v30 = *(unsigned __int8 *)(v29 + 2);
  if ( (_BYTE)v30 == 40 )
    v31 = *(_DWORD *)(v29 + 24);
  else
    v31 = *(_DWORD *)(v29 + 12);
  if ( (*(_BYTE *)(v28 + 4451) & 4) != 0 )
  {
    v42 = (v31 & 0x40) != 0;
    if ( v26[13] )
    {
      if ( v28 != -696 )
      {
        v43 = *(_QWORD *)(v28 + 696);
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 8);
          if ( v44 )
          {
            if ( *(int *)(v28 + 724) >= 3 && (v45 = *(void (__fastcall **)(__int64, _QWORD, bool))(v44 + 240)) != 0LL )
            {
              v45(v43, v26[13], v42);
            }
            else
            {
              LOBYTE(v24) = 1;
              KeFlushIoBuffers(v26[13], v42, v24);
            }
          }
        }
      }
    }
    v46 = v26[17];
    if ( v46 )
      RaidDmaFlushDmaBuffers(v28 + 696, v46, v42);
LABEL_30:
    LODWORD(v32) = RaidAdapterPostScatterGatherExecute(v28, v26);
LABEL_31:
    v23 = v32;
    goto LABEL_43;
  }
  if ( v26[17] )
  {
    LODWORD(v32) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v3 + 24), v26);
    goto LABEL_31;
  }
  if ( (v31 & 0xC0) == 0 )
    goto LABEL_30;
  if ( (_BYTE)v30 == 40 )
  {
    v33 = *(_DWORD *)(v29 + 24);
    v34 = *(_DWORD *)(v29 + 60);
    v35 = *(_DWORD *)(v29 + 20);
  }
  else
  {
    v33 = *(_DWORD *)(v29 + 12);
    v34 = *(_DWORD *)(v29 + 16);
    v35 = (unsigned __int8)v30;
  }
  LODWORD(v32) = *(_DWORD *)(v28 + 524);
  v36 = v33 & 0x40;
  v37 = (v33 & 0x80) != 0;
  if ( (v32 & 8) == 0 && (*(_BYTE *)(v28 + 109) & 2) == 0 )
  {
    LOBYTE(v24) = 1;
    LOBYTE(v30) = v36 != 0;
    LOBYTE(v32) = KeFlushIoBuffers(v26[13], v30, v24);
  }
  if ( v35 == 23 )
  {
    v32 = v26[13];
    if ( *(_DWORD *)(v32 + 40) > v34 )
      v34 = *(_DWORD *)(v32 + 40);
  }
  v38 = (__int64 *)(v28 + 696);
  if ( v28 != -696 && (v39 = *v38) != 0 && (v32 = *(_QWORD *)(v39 + 8)) != 0 && (v32 = *(_QWORD *)(v32 + 112)) != 0 )
  {
    LODWORD(v32) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, char, _QWORD *, int))v32)(
                     v39,
                     *(_QWORD *)(v28 + 8),
                     v26[13],
                     v26[23],
                     v34,
                     RaidpAdapterContinueScatterGather,
                     v26,
                     v37,
                     v26 + 29,
                     424);
    v23 = v32;
  }
  else
  {
    v23 = -1073741811;
  }
  if ( v23 == -1073741789 )
  {
    LODWORD(v32) = RaidDmaGetScatterGatherList(
                     (int)v28 + 696,
                     *(_QWORD *)(v28 + 8),
                     v26[13],
                     v26[23],
                     v34,
                     (__int64)RaidpAdapterContinueScatterGather,
                     (__int64)v26,
                     v37);
    v23 = v32;
  }
LABEL_43:
  if ( v23 < 0 )
    goto LABEL_97;
  v40 = *(_QWORD *)(v3 + 24);
  if ( *(int *)(v40 + 4200) <= 0 )
  {
    LOWORD(v32) = ExQueryDepthSList((PSLIST_HEADER)(v40 + 1184));
    if ( (_WORD)v32 )
    {
      LODWORD(v32) = _InterlockedIncrement((volatile signed __int32 *)(v40 + 4200));
      if ( (_DWORD)v32 == 1 )
        LOBYTE(v32) = RaidProcessDeferredItemsWorker(v40 + 1088, *(_QWORD *)(v40 + 8));
      _InterlockedDecrement((volatile signed __int32 *)(v40 + 4200));
    }
  }
LABEL_46:
  v41 = v69;
LABEL_47:
  if ( v23 < 0 )
  {
    v21 = a3;
    goto LABEL_99;
  }
  return v32;
}
