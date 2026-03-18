/*
 * XREFs of CmpReorganizeHive @ 0x14068EB68
 * Callers:
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmCheckRegistry @ 0x140641AD8 (CmCheckRegistry.c)
 *     CmpClearKeyAccessBits @ 0x1406D893C (CmpClearKeyAccessBits.c)
 *     HvUnlockHiveWriter @ 0x1406E9838 (HvUnlockHiveWriter.c)
 *     HvMarkBaseBlockDirty @ 0x1406EBEC4 (HvMarkBaseBlockDirty.c)
 *     HvLockHiveWriter @ 0x1406ED658 (HvLockHiveWriter.c)
 *     CmpCopyKeyPartial @ 0x140716C74 (CmpCopyKeyPartial.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140787CB8 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x140826998 (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x14082F198 (CmpCreateEmptyHiveClone.c)
 *     CmpDestroyHive @ 0x14082F334 (CmpDestroyHive.c)
 *     CmpSwapHiveStorage @ 0x14082F4B8 (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x14083561C (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter2, __int64 *a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // ebx
  __int64 v8; // r9
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 v12; // cx
  int v13; // eax
  ULONG_PTR v14; // rsi
  int v15; // ebx
  int v16; // r9d
  int v17; // r10d
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  __int64 v20; // rcx
  LARGE_INTEGER v21; // rbx
  unsigned __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  _WORD v34[176]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v35; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v36; // [rsp+210h] [rbp+110h]
  __int64 v37; // [rsp+218h] [rbp+118h]
  __int16 *v38; // [rsp+220h] [rbp+120h]
  __int64 v39; // [rsp+228h] [rbp+128h]
  __int16 *v40; // [rsp+230h] [rbp+130h]
  __int64 v41; // [rsp+238h] [rbp+138h]
  _WORD *v42; // [rsp+240h] [rbp+140h]
  __int64 v43; // [rsp+248h] [rbp+148h]
  _WORD *v44; // [rsp+250h] [rbp+150h]
  int v45; // [rsp+258h] [rbp+158h]
  int v46; // [rsp+25Ch] [rbp+15Ch]
  _WORD *v47; // [rsp+260h] [rbp+160h]
  __int64 v48; // [rsp+268h] [rbp+168h]
  _WORD *v49; // [rsp+270h] [rbp+170h]
  int v50; // [rsp+278h] [rbp+178h]
  int v51; // [rsp+27Ch] [rbp+17Ch]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+280h] [rbp+180h] BYREF
  __int64 *v53; // [rsp+2A0h] [rbp+1A0h]
  __int64 v54; // [rsp+2A8h] [rbp+1A8h]
  int *v55; // [rsp+2B0h] [rbp+1B0h]
  __int64 v56; // [rsp+2B8h] [rbp+1B8h]
  int *v57; // [rsp+2C0h] [rbp+1C0h]
  __int64 v58; // [rsp+2C8h] [rbp+1C8h]
  EVENT_DATA_DESCRIPTOR v59; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v60; // [rsp+2F0h] [rbp+1F0h]
  __int64 v61; // [rsp+2F8h] [rbp+1F8h]
  int *v62; // [rsp+300h] [rbp+200h]
  __int64 v63; // [rsp+308h] [rbp+208h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int64 *v65; // [rsp+330h] [rbp+230h]
  __int64 v66; // [rsp+338h] [rbp+238h]

  v31 = 0LL;
  v32 = 0LL;
  memset(v34, 0, sizeof(v34));
  v4 = *(_QWORD *)(BugCheckParameter2 + 64);
  BugCheckParameter2a = 0LL;
  if ( (*(_DWORD *)(v4 + 144) & 1) != 0 )
    return 0;
  v5 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v5 & 0x10) == 0 && !*(_QWORD *)(BugCheckParameter2 + 1536) )
    return 0;
  if ( (v5 & 0x8001) != 0 || !*(_DWORD *)(BugCheckParameter2 + 164) )
    return 0;
  if ( (unsigned __int8)CmpAcquireShutdownRundown() )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 64);
    v9 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
    v22 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL;
    v10 = *(_QWORD *)(v8 + 168);
    if ( v10 > (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL)
      || (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v10 >= 864000000000LL
                                                                     * (unsigned __int64)(unsigned int)CmpReorganizeDelayDays )
    {
      if ( !a2 )
      {
        v11 = v8 + 48;
        v12 = 0;
        v32 = v11;
        do
        {
          if ( !*(_WORD *)(v11 + 2LL * v12) )
            break;
          ++v12;
        }
        while ( v12 < 0x1Fu );
        a2 = &v31;
        LOWORD(v31) = 2 * v12;
      }
      if ( v10 != 2 && (v10 == 1 || (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x400) != 0) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) != -1 )
        {
          LODWORD(v22) = v9 | 1;
          v13 = CmpCreateEmptyHiveClone(&BugCheckParameter2a, BugCheckParameter2);
          v14 = BugCheckParameter2a;
          v6 = v13;
          if ( v13 >= 0 )
          {
            v15 = CmpCopyKeyPartial(
                    BugCheckParameter2,
                    *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
                    BugCheckParameter2a,
                    0xFFFFFFFFLL,
                    6);
            if ( v15 == -1
              || (*(_DWORD *)(*(_QWORD *)(v14 + 64) + 36LL) = v15,
                  HvMarkBaseBlockDirty(v14),
                  !(unsigned __int8)CmpCopySyncTree(BugCheckParameter2, 66, 0)) )
            {
              v6 = -1073741670;
            }
            else
            {
              v6 = CmCheckRegistry(v14, 983040, (__int64)v34);
              if ( v6 >= 0 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) & 4) != 0
                  || *(_DWORD *)(BugCheckParameter2 + 4804) == *(_DWORD *)(v14 + 4804) )
                {
                  *(_QWORD *)(v14 + 56) = 0LL;
                  v18 = *(_DWORD *)(v14 + 272);
                  v19 = *(_DWORD *)(BugCheckParameter2 + 272);
                  CmpSwapHiveStorage(BugCheckParameter2, v14);
                  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
                  {
                    v20 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL);
                    v53 = &v33;
                    v55 = (int *)&v28;
                    v57 = (int *)&v29;
                    v33 = v20;
                    v28 = v19;
                    v29 = v18;
                    v54 = 8LL;
                    v56 = 4LL;
                    v58 = 4LL;
                    TlgWrite(&stru_140425BC0, &unk_14038BF93, 0LL, 0LL, 5u, &v52);
                  }
                  CmpLockRegistry();
                  HvLockHiveFlusherShared(BugCheckParameter2);
                  HvLockHiveWriter(BugCheckParameter2);
                  HvMarkBaseBlockDirty(BugCheckParameter2);
                  v21.QuadPart = v22;
                  *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v22;
                  HvUnlockHiveWriter(BugCheckParameter2);
                  HvUnlockHiveFlusherShared(BugCheckParameter2);
                  CmpUnlockRegistry();
                  CmpLogReorganizeEvent(a2, v19, v18);
                  if ( v18 < v19 )
                  {
                    if ( CmpFirstReorganize )
                    {
                      CmpReorganizeTotalBytesSaved = 0LL;
                      CmpReorganizeLastRun = v21;
                      CmpFirstReorganize = 0;
                    }
                    CmpReorganizeTotalBytesSaved += v19 - v18;
                    CmpUpdateReorganizeRegistryValues();
                  }
                  v6 = 0;
                }
                else
                {
                  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
                  {
                    v26 = v16;
                    v60 = &v26;
                    v62 = &v27;
                    v27 = v17;
                    v61 = 4LL;
                    v63 = 4LL;
                    TlgWrite(&stru_140425BC0, &unk_14038BFD9, 0LL, 0LL, 4u, &v59);
                  }
                  CmpLockRegistry();
                  HvLockHiveFlusherShared(BugCheckParameter2);
                  HvLockHiveWriter(BugCheckParameter2);
                  HvMarkBaseBlockDirty(BugCheckParameter2);
                  *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v22;
                  HvUnlockHiveWriter(BugCheckParameter2);
                  HvUnlockHiveFlusherShared(BugCheckParameter2);
                  CmpUnlockRegistry();
                  v6 = -1073741492;
                }
              }
              else
              {
                if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
                {
                  v36 = &v25;
                  v38 = &v23;
                  v40 = &v24;
                  v42 = &v34[4];
                  v44 = &v34[6];
                  v23 = v34[4];
                  v45 = 12 * v34[4];
                  v47 = &v34[5];
                  v50 = 12 * v34[5];
                  v25 = v6;
                  v24 = v34[5];
                  v37 = 4LL;
                  v39 = 2LL;
                  v41 = 2LL;
                  v43 = 2LL;
                  v46 = 0;
                  v48 = 2LL;
                  v49 = &v34[54];
                  v51 = 0;
                  TlgWrite(&stru_140425BC0, &unk_14038C031, 0LL, 0LL, 9u, &v35);
                }
                if ( v6 == -1073741492 || v6 == -2147483606 )
                {
                  CmpLockRegistry();
                  HvLockHiveFlusherShared(BugCheckParameter2);
                  HvLockHiveWriter(BugCheckParameter2);
                  HvMarkBaseBlockDirty(BugCheckParameter2);
                  *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v22;
                  HvUnlockHiveWriter(BugCheckParameter2);
                  HvUnlockHiveFlusherShared(BugCheckParameter2);
                  CmpUnlockRegistry();
                }
              }
            }
          }
          if ( v14 )
            CmpDestroyHive((PVOID)v14);
LABEL_12:
          CmpReleaseShutdownRundown();
          if ( v6 >= 0 )
            return (unsigned int)v6;
          goto LABEL_20;
        }
      }
      else
      {
        LODWORD(v22) = v9 | 2;
        CmpClearKeyAccessBits(BugCheckParameter2);
        CmpLockRegistry();
        HvLockHiveFlusherShared(BugCheckParameter2);
        HvLockHiveWriter(BugCheckParameter2);
        HvMarkBaseBlockDirty(BugCheckParameter2);
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v22;
        HvUnlockHiveWriter(BugCheckParameter2);
        HvUnlockHiveFlusherShared(BugCheckParameter2);
        CmpUnlockRegistry();
      }
    }
    v6 = 0;
    goto LABEL_12;
  }
  v6 = -1073741431;
LABEL_20:
  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
  {
    LODWORD(v22) = v6;
    v65 = &v22;
    v66 = 4LL;
    TlgWrite(&stru_140425BC0, &unk_14038BF61, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v6;
}
