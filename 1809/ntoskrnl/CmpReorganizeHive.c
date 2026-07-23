/*
 * XREFs of CmpReorganizeHive @ 0x1405A7F70
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmCheckRegistry @ 0x1405A948C (CmCheckRegistry.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpClearKeyAccessBits @ 0x1406B3DD0 (CmpClearKeyAccessBits.c)
 *     HvMarkBaseBlockDirty @ 0x1406CC1D4 (HvMarkBaseBlockDirty.c)
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075FA00 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x1407ED98C (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x1407F77D8 (CmpCreateEmptyHiveClone.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     CmpSwapHiveStorage @ 0x1407F7B00 (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x1407FDD60 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter2, __int16 *a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r9
  unsigned int v10; // edx
  unsigned __int64 v11; // r8
  char v12; // bl
  unsigned __int16 v13; // cx
  int v14; // eax
  _QWORD *v15; // r14
  int v16; // edi
  int v17; // r9d
  int v18; // r10d
  unsigned int v19; // r12d
  unsigned int v20; // r15d
  __int64 v21; // rcx
  LARGE_INTEGER v22; // [rsp+40h] [rbp-C0h]
  __int16 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v24; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+64h] [rbp-9Ch] BYREF
  int v29; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 *v33; // [rsp+78h] [rbp-88h]
  __int16 v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h]
  _WORD v36[176]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v38; // [rsp+210h] [rbp+110h]
  __int64 v39; // [rsp+218h] [rbp+118h]
  __int16 *v40; // [rsp+220h] [rbp+120h]
  __int64 v41; // [rsp+228h] [rbp+128h]
  __int16 *v42; // [rsp+230h] [rbp+130h]
  __int64 v43; // [rsp+238h] [rbp+138h]
  _WORD *v44; // [rsp+240h] [rbp+140h]
  __int64 v45; // [rsp+248h] [rbp+148h]
  _WORD *v46; // [rsp+250h] [rbp+150h]
  int v47; // [rsp+258h] [rbp+158h]
  int v48; // [rsp+25Ch] [rbp+15Ch]
  _WORD *v49; // [rsp+260h] [rbp+160h]
  __int64 v50; // [rsp+268h] [rbp+168h]
  _WORD *v51; // [rsp+270h] [rbp+170h]
  int v52; // [rsp+278h] [rbp+178h]
  int v53; // [rsp+27Ch] [rbp+17Ch]
  EVENT_DATA_DESCRIPTOR v54; // [rsp+280h] [rbp+180h] BYREF
  __int64 *v55; // [rsp+2A0h] [rbp+1A0h]
  __int64 v56; // [rsp+2A8h] [rbp+1A8h]
  int *v57; // [rsp+2B0h] [rbp+1B0h]
  __int64 v58; // [rsp+2B8h] [rbp+1B8h]
  int *v59; // [rsp+2C0h] [rbp+1C0h]
  __int64 v60; // [rsp+2C8h] [rbp+1C8h]
  EVENT_DATA_DESCRIPTOR v61; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v62; // [rsp+2F0h] [rbp+1F0h]
  __int64 v63; // [rsp+2F8h] [rbp+1F8h]
  int *v64; // [rsp+300h] [rbp+200h]
  __int64 v65; // [rsp+308h] [rbp+208h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+310h] [rbp+210h] BYREF
  int *v67; // [rsp+330h] [rbp+230h]
  __int64 v68; // [rsp+338h] [rbp+238h]

  v33 = a2;
  memset(v36, 0, sizeof(v36));
  v4 = *(_QWORD *)(BugCheckParameter2 + 64);
  P = 0LL;
  if ( (*(_DWORD *)(v4 + 144) & 1) != 0 )
    return 0;
  v5 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v5 & 0x10) == 0 && !*(_QWORD *)(BugCheckParameter2 + 1536) )
    return 0;
  if ( (v5 & 0x8001) != 0 || !*(_DWORD *)(BugCheckParameter2 + 164) )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 64);
    v10 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
    v22.HighPart = MEMORY[0xFFFFF78000000018];
    v11 = *(_QWORD *)(v9 + 168);
    if ( v11 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL)
      && (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v11 < 864000000000LL
                                                                    * (unsigned __int64)(unsigned int)CmpReorganizeDelayDays )
    {
      goto LABEL_11;
    }
    if ( !a2 )
    {
      v13 = 0;
      v35 = v9 + 48;
      do
      {
        if ( !*(_WORD *)(v9 + 48 + 2LL * v13) )
          break;
        ++v13;
      }
      while ( v13 < 0x1Fu );
      v34 = 2 * v13;
      v33 = &v34;
    }
    if ( v11 == 2 || v11 != 1 && (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x400) == 0 )
    {
      v22.LowPart = v10 | 2;
      CmpClearKeyAccessBits(BugCheckParameter2);
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
      HvMarkBaseBlockDirty(BugCheckParameter2);
      *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v22;
      v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
      KeAbPostRelease(BugCheckParameter2 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
      KeAbPostRelease(BugCheckParameter2 + 72);
      CmpUnlockRegistry();
      goto LABEL_11;
    }
    if ( *(_DWORD *)(v9 + 36) == -1 )
    {
LABEL_11:
      v6 = 0;
      goto LABEL_12;
    }
    v22.LowPart = v10 | 1;
    v14 = CmpCreateEmptyHiveClone(&P, BugCheckParameter2);
    v15 = P;
    v6 = v14;
    if ( v14 >= 0 )
    {
      v16 = CmpCopyKeyPartial(
              BugCheckParameter2,
              *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
              P,
              0xFFFFFFFFLL,
              6);
      if ( v16 == -1
        || (*(_DWORD *)(v15[8] + 36LL) = v16,
            HvMarkBaseBlockDirty(v15),
            !(unsigned __int8)CmpCopySyncTree(BugCheckParameter2, 66, 0)) )
      {
        v6 = -1073741670;
      }
      else
      {
        v6 = CmCheckRegistry(v15, 2031616LL, v36);
        if ( v6 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) & 4) != 0
            || *(_DWORD *)(BugCheckParameter2 + 4820) == *((_DWORD *)v15 + 1205) )
          {
            v15[7] = 0LL;
            v19 = *((_DWORD *)v15 + 68);
            v20 = *(_DWORD *)(BugCheckParameter2 + 272);
            CmpSwapHiveStorage(BugCheckParameter2, v15);
            if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
            {
              v21 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL);
              v55 = &v26;
              v57 = (int *)&v30;
              v59 = (int *)&v31;
              v26 = v21;
              v30 = v20;
              v31 = v19;
              v56 = 8LL;
              v58 = 4LL;
              v60 = 4LL;
              TlgWrite(&stru_140400AA0, &unk_14036D26C, 0LL, 0LL, 5u, &v54);
            }
            CmpLockRegistry();
            ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
            ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
            HvMarkBaseBlockDirty(BugCheckParameter2);
            *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v22;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
            KeAbPostRelease(BugCheckParameter2 + 80);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
            KeAbPostRelease(BugCheckParameter2 + 72);
            CmpUnlockRegistry();
            CmpLogReorganizeEvent(v33, v20, v19);
            if ( v19 < v20 )
            {
              if ( CmpFirstReorganize )
              {
                CmpReorganizeTotalBytesSaved = 0LL;
                CmpReorganizeLastRun = v22;
                CmpFirstReorganize = 0;
              }
              CmpReorganizeTotalBytesSaved += v20 - v19;
              CmpUpdateReorganizeRegistryValues();
            }
            v6 = 0;
          }
          else
          {
            if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
            {
              v28 = v17;
              v62 = &v28;
              v64 = &v29;
              v29 = v18;
              v63 = 4LL;
              v65 = 4LL;
              TlgWrite(&stru_140400AA0, &unk_14036D2B2, 0LL, 0LL, 4u, &v61);
            }
            CmpLockRegistry();
            ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
            ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
            HvMarkBaseBlockDirty(BugCheckParameter2);
            *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v22;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
            KeAbPostRelease(BugCheckParameter2 + 80);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
            KeAbPostRelease(BugCheckParameter2 + 72);
            CmpUnlockRegistry();
            v6 = -1073741492;
          }
        }
        else
        {
          if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
          {
            v38 = &v27;
            v40 = &v23;
            v42 = &v24;
            v44 = &v36[4];
            v46 = &v36[6];
            v23 = v36[4];
            v47 = 12 * v36[4];
            v49 = &v36[5];
            v52 = 12 * v36[5];
            v27 = v6;
            v24 = v36[5];
            v39 = 4LL;
            v41 = 2LL;
            v43 = 2LL;
            v45 = 2LL;
            v48 = 0;
            v50 = 2LL;
            v51 = &v36[54];
            v53 = 0;
            TlgWrite(&stru_140400AA0, &unk_14036D30A, 0LL, 0LL, 9u, &v37);
          }
          if ( v6 != -1073741492 && v6 != -2147483606 )
            goto LABEL_69;
          CmpLockRegistry();
          ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
          ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
          HvMarkBaseBlockDirty(BugCheckParameter2);
          *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v22;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
          KeAbPostRelease(BugCheckParameter2 + 80);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
          KeAbPostRelease(BugCheckParameter2 + 72);
          CmpUnlockRegistry();
        }
        v15 = P;
      }
    }
LABEL_69:
    if ( v15 )
      CmpDestroyHive(v15);
LABEL_12:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_23;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v6 = -1073741431;
LABEL_23:
  if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
  {
    v32 = v6;
    v67 = &v32;
    v68 = 4LL;
    TlgWrite(&stru_140400AA0, &unk_14036D23A, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v6;
}
