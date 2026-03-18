/*
 * XREFs of HvLoadHive @ 0x14068D07C
 * Callers:
 *     HvHiveStartFileBacked @ 0x14068CE18 (HvHiveStartFileBacked.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SetFailureLocation @ 0x14027F4C0 (SetFailureLocation.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068D968 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14068DD68 (HvpAdjustHiveFreeDisplay.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x14068E030 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpMapHiveImageFromViewMap @ 0x14068E0AC (HvpMapHiveImageFromViewMap.c)
 *     HvpViewMapStart @ 0x14068EFE8 (HvpViewMapStart.c)
 *     HvpInitMap @ 0x14068F608 (HvpInitMap.c)
 *     CmpInitializeActualFileSizes @ 0x14068FB38 (CmpInitializeActualFileSizes.c)
 *     HvpGetHiveHeader @ 0x14068FDD0 (HvpGetHiveHeader.c)
 *     CmpFileFlush @ 0x1406911D0 (CmpFileFlush.c)
 *     HvpMapHiveImageFromFile @ 0x1408305D4 (HvpMapHiveImageFromFile.c)
 *     HvpPerformLogFileRecovery @ 0x140830684 (HvpPerformLogFileRecovery.c)
 *     HvAnalyzeLogFiles @ 0x14083EF1C (HvAnalyzeLogFiles.c)
 */

__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rsi
  __int64 v3; // r13
  int v4; // r12d
  int HiveHeader; // eax
  __int64 v6; // rdx
  int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // r8
  int inited; // eax
  int v11; // ebx
  __int64 v12; // r9
  int v13; // ebx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  char v19; // r12
  int v20; // eax
  int v21; // eax
  int v23; // eax
  int v24; // r9d
  int v25; // ebx
  _DWORD *v26; // rax
  int v27; // ecx
  int v28; // r9d
  int v29; // r10d
  int v30; // eax
  int cData; // [rsp+28h] [rbp-E0h]
  int cDataa; // [rsp+28h] [rbp-E0h]
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v36[7]; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData[3]; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  _BYTE v40[48]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v35 = 0LL;
  v34 = 0LL;
  HIDWORD(v33) = 0;
  v3 = 0LL;
  v4 = 0;
  memset(pData, 0, sizeof(pData));
  memset(v36, 0, 0x30uLL);
  memset(v40, 0, sizeof(v40));
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
  {
    v23 = CmpFileFlush(BugCheckParameter2, 0LL);
    if ( v23 < 0 )
      SetFailureLocation(v1, 0, 6, v23, 8);
  }
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v34, &v35);
  v6 = 2LL;
  v7 = HiveHeader;
  switch ( HiveHeader )
  {
    case 2:
      v24 = -1073741670;
      cData = 0;
LABEL_40:
      v11 = v24;
LABEL_43:
      SetFailureLocation(v1, 0, 6, v24, cData);
      v8 = v34;
      goto LABEL_28;
    case 7:
      v11 = -1073741491;
      cData = 8;
LABEL_42:
      v24 = v11;
      goto LABEL_43;
    case 0:
      v11 = -1073741476;
      cData = 16;
      goto LABEL_42;
  }
  if ( (unsigned int)(HiveHeader - 4) <= 1 && !*(_DWORD *)(BugCheckParameter2 + 164) )
  {
    v24 = -1073741492;
    cData = 32;
    goto LABEL_40;
  }
  v8 = v34;
  v9 = 4LL;
  if ( HiveHeader == 5 )
  {
    v4 = *(_DWORD *)(v34 + 8);
  }
  else if ( HiveHeader != 4 )
  {
    goto LABEL_8;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 164) == 1 )
  {
    v36[0] = BugCheckParameter2;
    *(_QWORD *)&pData[0].Size = HvpRecoverDataReadRoutine;
    v25 = 1;
    HIDWORD(v36[2]) = 1;
    pData[1].Ptr = (ULONGLONG)v36;
    LODWORD(pData[0].Ptr) = 1;
  }
  else
  {
    v25 = 2;
    v26 = (_DWORD *)&v36[2] + 1;
    v27 = 4;
    do
    {
      *(_QWORD *)(v26 - 5) = BugCheckParameter2;
      *v26 = v27++;
      v26 += 6;
      --v6;
    }
    while ( v6 );
    LODWORD(pData[0].Ptr) = 4;
    *(_QWORD *)&pData[0].Size = HvpRecoverDataReadRoutine;
    pData[2].Ptr = (ULONGLONG)HvpRecoverDataReadRoutine;
    *(_QWORD *)&pData[2].Size = &v36[3];
    pData[1].Ptr = (ULONGLONG)v36;
    pData[1].Size = 5;
  }
  if ( v7 == 4 )
  {
    LOBYTE(v6) = 1;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v6, 875777347LL);
    if ( !v3 )
    {
      v28 = -1073741670;
      cDataa = 48;
      v11 = -1073741670;
      goto LABEL_83;
    }
    LOBYTE(v9) = 1;
  }
  else
  {
    LOBYTE(v9) = 0;
  }
  inited = HvAnalyzeLogFiles((unsigned int)&v35, v4, v9, v25, (__int64)pData, (__int64)&v33 + 4, (__int64)v40, v3);
  v11 = inited;
  if ( inited < 0 )
  {
    cDataa = 56;
    goto LABEL_82;
  }
  v4 = HIDWORD(v33);
  if ( v7 == 4 )
  {
    *(_WORD *)(BugCheckParameter2 + 200) |= 0x40u;
    v8 = v3;
    v3 = 0LL;
  }
LABEL_8:
  *(_QWORD *)(BugCheckParameter2 + 64) = v8;
  v8 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 212) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                        - 4096
                                        + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
  inited = CmpInitializeActualFileSizes(BugCheckParameter2, (char *)&v33 + 4, v9);
  v11 = inited;
  if ( inited < 0 )
  {
    cDataa = 128;
    goto LABEL_82;
  }
  v12 = *(_QWORD *)(BugCheckParameter2 + 64);
  v13 = HIDWORD(v33);
  if ( HIDWORD(v33) < *(_DWORD *)(v12 + 40) + 4096 && (BYTE2(NlsMbCodePageTag) || (CmpBootType & 6) != 0) )
  {
    if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x200000000000uLL) )
    {
      LODWORD(v34) = v13;
      HIDWORD(v33) = v29 + 4096;
      *(_QWORD *)&pData[2].Size = 4LL;
      pData[2].Ptr = (ULONGLONG)&v33 + 4;
      v38 = &v34;
      v39 = 4LL;
      TlgWrite(&stru_140425BC0, &unk_14038C12C, 0LL, 0LL, 4u, pData);
      v12 = *(_QWORD *)(BugCheckParameter2 + 64);
    }
    *(_DWORD *)(v12 + 4088) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v13 - 4096) & 0xFFFFF000;
    v12 = *(_QWORD *)(BugCheckParameter2 + 64);
  }
  if ( (unsigned int)(*(_DWORD *)(v12 + 40) - 1) > 0x7FFFDFFF )
  {
    v28 = -1073741492;
    cDataa = 112;
    v11 = -1073741492;
    goto LABEL_83;
  }
  inited = HvpInitMap(BugCheckParameter2);
  v11 = inited;
  if ( inited < 0 )
  {
    cDataa = 132;
    goto LABEL_82;
  }
  v14 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v14 & 0x20000) == 0 )
  {
    inited = HvpMapHiveImageFromFile(BugCheckParameter2);
    v11 = inited;
    if ( inited >= 0 )
      goto LABEL_17;
    cDataa = 144;
LABEL_82:
    v28 = inited;
    goto LABEL_83;
  }
  v15 = (v14 >> 22) & 2;
  v16 = v15 | 1;
  if ( (v14 & 0x8001) == 0 )
    v16 = v15;
  v17 = HvpViewMapStart(
          (int)BugCheckParameter2 + 216,
          *(_QWORD *)(BugCheckParameter2 + 1536),
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
          (unsigned int)&CmpRegistryProcess,
          v16);
  v11 = v17;
  if ( v17 < 0 )
  {
    SetFailureLocation(v1, 0, 6, v17, 136);
    goto LABEL_28;
  }
  inited = HvpMapHiveImageFromViewMap(
             BugCheckParameter2,
             0LL,
             *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  v11 = inited;
  if ( inited < 0 )
  {
    cDataa = 140;
    goto LABEL_82;
  }
LABEL_17:
  CmpTraceHiveMountBaseFileMounted(
    *(_QWORD *)(BugCheckParameter2 + 1536),
    *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  if ( v4 )
  {
    v30 = HvpPerformLogFileRecovery(BugCheckParameter2);
    if ( v30 < 0 )
      SetFailureLocation(v1, 0, 6, v30, 160);
    v18 = *(_QWORD *)(BugCheckParameter2 + 64);
    v19 = 1;
  }
  else
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 64);
    v19 = 0;
    v20 = *(_DWORD *)(v18 + 4);
    *(_DWORD *)(BugCheckParameter2 + 168) = v20;
    *(_DWORD *)(BugCheckParameter2 + 180) = v20;
    *(_DWORD *)(BugCheckParameter2 + 172) = v20;
    *(_BYTE *)(BugCheckParameter2 + 190) = 1;
  }
  inited = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(unsigned int *)(v18 + 40), 0LL);
  v11 = inited;
  if ( inited < 0 )
  {
    cDataa = 176;
    goto LABEL_82;
  }
  v11 = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
  if ( v11 != 1073741833 )
  {
    if ( v11 >= 0 )
      goto LABEL_22;
    cDataa = 192;
    v28 = v11;
LABEL_83:
    SetFailureLocation(v1, 0, 6, v28, cDataa);
    goto LABEL_28;
  }
  v19 = 1;
LABEL_22:
  if ( v7 == 4 || v19 )
    v11 = 1073741833;
  else
    v11 = 0;
  v21 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v21 & 0x20000) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 160) = v21 | 0x10000;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 8LL) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
LABEL_28:
  if ( v36[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)v36[1]);
  if ( v36[4] )
    CmSiFreeMemory((PPRIVILEGE_SET)v36[4]);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v3, *(unsigned int *)(BugCheckParameter2 + 132));
  if ( v8 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v8, *(unsigned int *)(BugCheckParameter2 + 132));
  return (unsigned int)v11;
}
