/*
 * XREFs of HvLoadHive @ 0x1405A5C9C
 * Callers:
 *     HvHiveStartFileBacked @ 0x1405A5A3C (HvHiveStartFileBacked.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1405A5FA8 (HvpAdjustHiveFreeDisplay.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x1405A6128 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpViewMapStart @ 0x1405A61A0 (HvpViewMapStart.c)
 *     HvpInitMap @ 0x1405A6BE0 (HvpInitMap.c)
 *     CmpInitializeActualFileSizes @ 0x1405A7144 (CmpInitializeActualFileSizes.c)
 *     HvpGetHiveHeader @ 0x1405A73B8 (HvpGetHiveHeader.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405FA6A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImageFromViewMap @ 0x1405FAC30 (HvpMapHiveImageFromViewMap.c)
 *     CmpFileFlush @ 0x1406B9BB8 (CmpFileFlush.c)
 *     HvpMapHiveImageFromFile @ 0x1407F8CB4 (HvpMapHiveImageFromFile.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 *     HvAnalyzeLogFiles @ 0x1408072D4 (HvAnalyzeLogFiles.c)
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
  unsigned int v14; // r8d
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  char v18; // r12
  int v19; // eax
  int v20; // eax
  int v22; // eax
  int v23; // r9d
  int v24; // ebx
  _DWORD *v25; // rax
  int v26; // ecx
  int v27; // r9d
  int v28; // r10d
  int cData; // [rsp+28h] [rbp-E0h]
  int cDataa; // [rsp+28h] [rbp-E0h]
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v34[7]; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData[3]; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  _BYTE v38[48]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v32 = 0LL;
  HIDWORD(v31) = 0;
  v3 = 0LL;
  v4 = 0;
  memset(pData, 0, sizeof(pData));
  memset(v34, 0, 0x30uLL);
  memset(v38, 0, sizeof(v38));
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
  {
    v22 = CmpFileFlush(BugCheckParameter2, 0LL);
    if ( v22 < 0 )
      SetFailureLocation(v1, 0, 6, v22, 8);
  }
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v32, &v33);
  v6 = 2LL;
  v7 = HiveHeader;
  switch ( HiveHeader )
  {
    case 2:
      v23 = -1073741670;
      cData = 0;
LABEL_40:
      v11 = v23;
LABEL_43:
      SetFailureLocation(v1, 0, 6, v23, cData);
      v8 = v32;
      goto LABEL_28;
    case 7:
      v11 = -1073741491;
      cData = 8;
LABEL_42:
      v23 = v11;
      goto LABEL_43;
    case 0:
      v11 = -1073741476;
      cData = 16;
      goto LABEL_42;
  }
  if ( (unsigned int)(HiveHeader - 4) <= 1 && !*(_DWORD *)(BugCheckParameter2 + 164) )
  {
    v23 = -1073741492;
    cData = 32;
    goto LABEL_40;
  }
  v8 = v32;
  v9 = 4LL;
  if ( HiveHeader == 5 )
  {
    v4 = *(_DWORD *)(v32 + 8);
  }
  else if ( HiveHeader != 4 )
  {
    goto LABEL_8;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 164) == 1 )
  {
    v34[0] = BugCheckParameter2;
    *(_QWORD *)&pData[0].Size = HvpRecoverDataReadRoutine;
    v24 = 1;
    HIDWORD(v34[2]) = 1;
    pData[1].Ptr = (ULONGLONG)v34;
    LODWORD(pData[0].Ptr) = 1;
  }
  else
  {
    v24 = 2;
    v25 = (_DWORD *)&v34[2] + 1;
    v26 = 4;
    do
    {
      *(_QWORD *)(v25 - 5) = BugCheckParameter2;
      *v25 = v26++;
      v25 += 6;
      --v6;
    }
    while ( v6 );
    LODWORD(pData[0].Ptr) = 4;
    *(_QWORD *)&pData[0].Size = HvpRecoverDataReadRoutine;
    pData[2].Ptr = (ULONGLONG)HvpRecoverDataReadRoutine;
    *(_QWORD *)&pData[2].Size = &v34[3];
    pData[1].Ptr = (ULONGLONG)v34;
    pData[1].Size = 5;
  }
  if ( v7 == 4 )
  {
    LOBYTE(v6) = 1;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v6, 875777347LL);
    if ( !v3 )
    {
      v27 = -1073741670;
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
  inited = HvAnalyzeLogFiles((unsigned int)&v33, v4, v9, v24, (__int64)pData, (__int64)&v31 + 4, (__int64)v38, v3);
  v11 = inited;
  if ( inited < 0 )
  {
    cDataa = 56;
    goto LABEL_82;
  }
  v4 = HIDWORD(v31);
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
  inited = CmpInitializeActualFileSizes(BugCheckParameter2, (char *)&v31 + 4, v9);
  v11 = inited;
  if ( inited < 0 )
  {
    cDataa = 128;
    goto LABEL_82;
  }
  v12 = *(_QWORD *)(BugCheckParameter2 + 64);
  v13 = HIDWORD(v31);
  if ( HIDWORD(v31) < *(_DWORD *)(v12 + 40) + 4096 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
  {
    if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x200000000000uLL) )
    {
      LODWORD(v32) = v13;
      HIDWORD(v31) = v28 + 4096;
      *(_QWORD *)&pData[2].Size = 4LL;
      pData[2].Ptr = (ULONGLONG)&v31 + 4;
      v36 = &v32;
      v37 = 4LL;
      TlgWrite(&stru_140400AA0, &unk_14036D405, 0LL, 0LL, 4u, pData);
      v12 = *(_QWORD *)(BugCheckParameter2 + 64);
    }
    *(_DWORD *)(v12 + 4088) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v13 - 4096) & 0xFFFFF000;
    v12 = *(_QWORD *)(BugCheckParameter2 + 64);
  }
  if ( (unsigned int)(*(_DWORD *)(v12 + 40) - 1) > 0x7FFFDFFF )
  {
    v27 = -1073741492;
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
    v27 = inited;
    goto LABEL_83;
  }
  v15 = (v14 >> 22) & 2 | 1;
  if ( (v14 & 0x8001) == 0 )
    v15 = (v14 >> 22) & 2;
  v16 = HvpViewMapStart(
          (int)BugCheckParameter2 + 216,
          *(_QWORD *)(BugCheckParameter2 + 1536),
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
          (unsigned int)&CmpRegistryProcess,
          v15);
  v11 = v16;
  if ( v16 < 0 )
  {
    SetFailureLocation(v1, 0, 6, v16, 136);
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
  if ( !v4 )
  {
    v17 = *(_QWORD *)(BugCheckParameter2 + 64);
    v18 = 0;
    v19 = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(BugCheckParameter2 + 168) = v19;
    *(_DWORD *)(BugCheckParameter2 + 180) = v19;
    *(_DWORD *)(BugCheckParameter2 + 172) = v19;
    *(_BYTE *)(BugCheckParameter2 + 190) = 1;
    goto LABEL_19;
  }
  inited = HvpPerformLogFileRecovery(BugCheckParameter2);
  v11 = inited;
  if ( inited < 0 )
  {
    cDataa = 160;
    goto LABEL_82;
  }
  v17 = *(_QWORD *)(BugCheckParameter2 + 64);
  v18 = 1;
LABEL_19:
  inited = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(unsigned int *)(v17 + 40), 0LL);
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
    v27 = v11;
LABEL_83:
    SetFailureLocation(v1, 0, 6, v27, cDataa);
    goto LABEL_28;
  }
  v18 = 1;
LABEL_22:
  if ( v7 == 4 || v18 )
    v11 = 1073741833;
  else
    v11 = 0;
  v20 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v20 & 0x20000) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 160) = v20 | 0x10000;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 8LL) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
LABEL_28:
  if ( v34[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)v34[1]);
  if ( v34[4] )
    CmSiFreeMemory((PPRIVILEGE_SET)v34[4]);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v3, *(unsigned int *)(BugCheckParameter2 + 132));
  if ( v8 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v8, *(unsigned int *)(BugCheckParameter2 + 132));
  return (unsigned int)v11;
}
