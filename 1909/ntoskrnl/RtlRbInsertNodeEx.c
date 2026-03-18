/*
 * XREFs of RtlRbInsertNodeEx @ 0x140064630
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x14001EC20 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14005EEB0 (RtlpHpSegFreeRangeInsert.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060C30 (KiAbEntryGetLockedHeadEntry.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1400615A0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkSplit @ 0x140062140 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140062FC0 (RtlpHpVsContextFree.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x14008AA5C (MiBitmapsCachedEntryLengthChanged.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14009F190 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400C6DF0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400C70A8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     PfSnGetFileInformation @ 0x1400D20B0 (PfSnGetFileInformation.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400DC578 (MiInvalidatePageFileBitmapsCache.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400EBD88 (IoStartDiskIoAttributionForContext.c)
 *     RtlpHpLargeAlloc @ 0x14010F9B4 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x140110AE8 (RtlpHpVaMgrFree.c)
 *     KiSetClockInterval @ 0x140111E80 (KiSetClockInterval.c)
 *     KiInsertSchedulingGroupQueue @ 0x140115BBC (KiInsertSchedulingGroupQueue.c)
 *     MiRescanPageFileBitmapPortion @ 0x14012502C (MiRescanPageFileBitmapPortion.c)
 *     MiInitializePagefileBitmapsCache @ 0x140193658 (MiInitializePagefileBitmapsCache.c)
 *     MiInsertSlabEntry @ 0x1402DC654 (MiInsertSlabEntry.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1403078F4 (PspJobIoRateVolumeEntryInsert.c)
 *     VmpFaultEntryInsert @ 0x14032969C (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x140329DC0 (VmpInsertMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14032AF18 (VmpSplitMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C48F0 (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14068DC9C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14068F09C (HvpViewMapCreateViewsForRegion.c)
 *     KiGetSystemServiceTraceTable @ 0x14087FAA0 (KiGetSystemServiceTraceTable.c)
 *     MiGetHotPatchEntry @ 0x14088DC74 (MiGetHotPatchEntry.c)
 *     EtwpRegisterPrivateSession @ 0x1408FC894 (EtwpRegisterPrivateSession.c)
 *     KeInitializeClock @ 0x1409FCFBC (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  bool v5; // r11
  char v6; // cl
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  char v11; // si
  unsigned __int64 v12; // r8
  char v13; // bl
  __int64 v14; // rcx
  _BOOL8 v15; // rbp
  _BOOL8 v16; // rdi
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // r11d
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 *v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // r11
  __int64 *v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rdi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rbx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax

  *(_QWORD *)a4 = 0LL;
  v5 = a3;
  *(_QWORD *)(a4 + 8) = 0LL;
  v6 = *((_BYTE *)a1 + 8);
  LOBYTE(v7) = v6 & 1;
  if ( !a2 )
  {
    v43 = a4 ^ (unsigned __int64)a1;
    if ( (_BYTE)v7 )
    {
      *a1 = v43;
      v6 = *((_BYTE *)a1 + 8);
    }
    else
    {
      *a1 = a4;
    }
    if ( (v6 & 1) != 0 )
    {
      a1[1] = v43;
      *((_BYTE *)a1 + 8) = v43 | 1;
    }
    else
    {
      a1[1] = a4;
    }
    *(_QWORD *)(a4 + 16) = 0LL;
    return v7;
  }
  v8 = a4;
  v9 = (_BYTE)v7 == 0;
  LOBYTE(v7) = a3;
  if ( !v9 )
    v8 = a2 ^ a4;
  *(_QWORD *)(a2 + 8LL * a3) = v8;
  v10 = a2;
  if ( (a1[1] & 1) != 0 )
    v10 = a2 ^ a4;
  *(_QWORD *)(a4 + 16) = v10 | 1;
  if ( !a3 )
  {
    v7 = a1[1];
    if ( (v7 & 1) != 0 )
      v42 = v7 == 1 ? 0LL : v7 ^ ((unsigned __int64)a1 | 1);
    else
      v42 = a1[1];
    if ( a2 == v42 )
    {
      if ( (v7 & 1) != 0 )
      {
        a1[1] = a4 ^ (unsigned __int64)a1;
        LOBYTE(v7) = a4 ^ (unsigned __int8)a1 | 1;
        *((_BYTE *)a1 + 8) = v7;
      }
      else
      {
        a1[1] = a4;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    v11 = *((_BYTE *)a1 + 8);
    while ( 1 )
    {
      v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v13 = v11 & 1;
      if ( (v11 & 1) != 0 && v12 )
        v12 ^= a2;
      v14 = *(_QWORD *)v12;
      if ( v13 && v14 )
        v14 ^= v12;
      LOBYTE(v7) = v14 != a2;
      v15 = v14 == a2;
      v16 = v14 != a2;
      v17 = *(_QWORD *)(v12 + 8 * v15);
      if ( v13 )
      {
        if ( !v17 )
          break;
        v17 ^= v12;
      }
      if ( !v17 || (*(_BYTE *)(v17 + 16) & 1) == 0 )
        break;
      *(_BYTE *)(a2 + 16) &= ~1u;
      a4 = v12;
      *(_BYTE *)(v17 + 16) &= ~1u;
      a2 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !a2 )
          return v7;
        a2 ^= v12;
      }
      if ( a2 )
      {
        *(_BYTE *)(v12 + 16) = *(_QWORD *)(v12 + 16) | 1;
        v11 = *((_BYTE *)a1 + 8);
        v7 = *(_QWORD *)a2;
        if ( (v11 & 1) != 0 && v7 )
          v7 ^= a2;
        v5 = v12 != v7;
        if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
          continue;
      }
      return v7;
    }
    if ( v5 == v16 )
    {
LABEL_37:
      v29 = *a1;
      if ( (a1[1] & 1) != 0 )
      {
        if ( v29 )
          v29 ^= (unsigned __int64)a1;
        else
          v29 = 0LL;
      }
      v30 = (unsigned int)v16 ^ 1;
      v31 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v32 = a1[1] & 1;
      if ( (a1[1] & 1) != 0 && v31 )
        v31 ^= a2;
      if ( v31 != v12 )
        goto LABEL_138;
      v33 = (unsigned int)v30;
      v34 = (__int64 *)(v12 + 8 * ((unsigned int)v30 ^ 1LL));
      v35 = *v34;
      if ( (a1[1] & 1) != 0 && v35 )
        v35 ^= v12;
      if ( v35 != a2 )
        goto LABEL_138;
      v36 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_83;
        v36 ^= v12;
      }
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 8);
        if ( (a1[1] & 1) != 0 && v37 )
          v37 ^= v36;
        if ( v37 == v12 )
        {
          v38 = v36 ^ a2;
          if ( (a1[1] & 1) == 0 )
            v38 = a2;
          *(_QWORD *)(v36 + 8) = v38;
        }
        else
        {
          v47 = *(_QWORD *)v36;
          if ( (a1[1] & 1) != 0 && v47 )
            v47 ^= v36;
          if ( v47 != v12 )
            goto LABEL_138;
          v48 = v36 ^ a2;
          if ( (a1[1] & 1) == 0 )
            v48 = a2;
          *(_QWORD *)v36 = v48;
        }
        goto LABEL_49;
      }
LABEL_83:
      if ( v29 != v12 )
        goto LABEL_138;
      v29 = a2;
LABEL_49:
      if ( v32 && v36 )
        v36 ^= a2;
      *(_QWORD *)(a2 + 16) = v36 | *(_DWORD *)(a2 + 16) & 3;
      v39 = *(_QWORD *)(a2 + 8 * v30);
      if ( v32 )
      {
        if ( !v39 )
        {
LABEL_52:
          if ( v32 && v39 )
            v39 ^= v12;
          *v34 = v39;
          v40 = a2 ^ v12;
          v41 = a2 ^ v12;
          if ( !v32 )
          {
            v41 = v12;
            v40 = a2;
          }
          *(_QWORD *)(a2 + 8 * v33) = v41;
          v7 = v29;
          *(_QWORD *)(v12 + 16) = *(_DWORD *)(v12 + 16) & 3 | v40;
          if ( (a1[1] & 1) != 0 )
          {
            v7 = (unsigned __int64)a1 ^ v29;
            if ( !v29 )
              v7 = 0LL;
          }
          *a1 = v7;
          *(_BYTE *)(v12 + 16) |= 1u;
          *(_BYTE *)(a2 + 16) &= ~1u;
          return v7;
        }
        v39 ^= a2;
      }
      if ( !v39 )
        goto LABEL_52;
      v44 = *(_QWORD *)(v39 + 16);
      v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v32 && v45 )
        v45 ^= v39;
      if ( v45 == a2 )
      {
        v46 = v39 ^ v12;
        if ( !v32 )
          v46 = v12;
        *(_QWORD *)(v39 + 16) = v44 & 3 | v46;
        goto LABEL_52;
      }
LABEL_138:
      __fastfail(0x1Du);
    }
    v18 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v19 = v11 & 1;
    if ( (v11 & 1) != 0 && v18 )
      v18 ^= a4;
    if ( v18 != a2 )
      goto LABEL_138;
    v20 = *(_QWORD *)(a2 + 8 * v15);
    if ( (v11 & 1) != 0 && v20 )
      v20 ^= a2;
    if ( v20 != a4 )
      goto LABEL_138;
    v21 = *(_QWORD *)(v12 + 8 * v16);
    if ( (v11 & 1) != 0 && v21 )
      v21 ^= v12;
    if ( v21 != a2 )
      goto LABEL_138;
    v22 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v11 & 1) != 0 && v22 )
      v22 ^= a2;
    if ( v22 != v12 )
      goto LABEL_138;
    v23 = (unsigned __int64 *)(a4 + 8 * v16);
    v24 = a4 ^ v12;
    v25 = a4 ^ v12;
    if ( !v19 )
    {
      v25 = a4;
      v24 = v12;
    }
    *(_QWORD *)(v12 + 8 * v16) = v25;
    *(_QWORD *)(a4 + 16) = *(_DWORD *)(a4 + 16) & 3 | v24;
    v26 = *v23;
    if ( v19 )
    {
      if ( !v26 )
      {
LABEL_33:
        if ( v19 && v26 )
          v26 ^= a2;
        *(_QWORD *)(a2 + 8 * v15) = v26;
        v27 = a2 ^ a4;
        v28 = a2 ^ a4;
        if ( !v19 )
        {
          v28 = a2;
          v27 = a4;
        }
        *v23 = v28;
        *(_QWORD *)(a2 + 16) = *(_DWORD *)(a2 + 16) & 3 | v27;
        a2 = a4;
        goto LABEL_37;
      }
      v26 ^= a4;
    }
    if ( v26 )
    {
      v49 = *(_QWORD *)(v26 + 16);
      v50 = v49 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v19 && v50 )
        v50 ^= v26;
      if ( v50 != a4 )
        goto LABEL_138;
      v51 = v26 ^ a2;
      if ( !v19 )
        v51 = a2;
      *(_QWORD *)(v26 + 16) = v49 & 3 | v51;
    }
    goto LABEL_33;
  }
  return v7;
}
