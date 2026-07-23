/*
 * XREFs of MmCreatePeb @ 0x1406800CC
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     KeQueryGroupMaskProcess @ 0x14000671C (KeQueryGroupMaskProcess.c)
 *     MmGetSessionId @ 0x14001D880 (MmGetSessionId.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400E86A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     RtlImageDirectoryEntryToData @ 0x1400E8950 (RtlImageDirectoryEntryToData.c)
 *     KeQueryGroupAffinity @ 0x1401353A0 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiCreatePebOrTeb @ 0x140610324 (MiCreatePebOrTeb.c)
 *     MiInitializeWowPeb @ 0x140674EDC (MiInitializeWowPeb.c)
 *     MmMapViewOfSection @ 0x140680790 (MmMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v7; // eax
  _KPROCESS *v8; // rcx
  int v9; // ebx
  void *v11; // rbx
  __int16 v12; // ax
  __int16 v13; // si
  PIMAGE_NT_HEADERS v14; // rdi
  unsigned __int16 Characteristics; // r15
  _WORD *v16; // rax
  _WORD *v17; // rbx
  int Subsystem; // r12d
  int MajorSubsystemVersion; // r13d
  unsigned int Win32VersionValue; // edx
  __int64 v21; // rbx
  bool v22; // zf
  _QWORD *v23; // rax
  char v24; // di
  char v25; // di
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // edi
  USHORT v30; // [rsp+60h] [rbp-168h]
  __int64 v31; // [rsp+68h] [rbp-160h] BYREF
  __int64 v32; // [rsp+70h] [rbp-158h] BYREF
  __int64 v33; // [rsp+78h] [rbp-150h] BYREF
  __int64 v34; // [rsp+80h] [rbp-148h] BYREF
  _IMAGE_NT_HEADERS64 *v35; // [rsp+88h] [rbp-140h]
  _QWORD v36[20]; // [rsp+90h] [rbp-138h] BYREF
  ULONG Size; // [rsp+130h] [rbp-98h] BYREF
  _WORD *v38; // [rsp+138h] [rbp-90h]
  __int64 v39; // [rsp+140h] [rbp-88h] BYREF
  void *v40; // [rsp+148h] [rbp-80h]
  _QWORD *v41; // [rsp+150h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+158h] [rbp-70h] BYREF

  v41 = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v36, 0, sizeof(v36));
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  _BitScanForward(&v7, KeQueryGroupMaskProcess((__int64)a1));
  v30 = v7;
  *((_WORD *)a4 + 4) = v7;
  KiStackAttachProcess(v8, 0, (__int64)&ApcState);
  v9 = MmMapViewOfSection(InitNlsSectionPointer, a1, &v34, 0LL, 0LL, &v31, &v32, 1, 5242880, 2);
  if ( v9 < 0
    || (v33 = 0LL,
        v31 = 0LL,
        v32 = 0LL,
        v9 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v33, 0LL, 0LL, &v31, &v32, 1, 5242880, 2),
        v9 < 0)
    || (v9 = MiCreatePebOrTeb(0, 0LL, &v39), v9 < 0) )
  {
    KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v9;
  }
  else
  {
    v11 = (void *)a1[121];
    v40 = v11;
    *(_QWORD *)((char *)&v36[1] + 4) = 10LL;
    v12 = 18363;
    if ( KernelVersionBump != 1 )
      v12 = 18362;
    LOWORD(v36[3]) = v12;
    HIDWORD(v36[2]) = 2;
    v13 = CmNtCSDVersion;
    WORD1(v36[3]) = CmNtCSDVersion;
    v36[4] = qword_1405711C8;
    v36[5] = qword_1405711C0;
    v36[6] = __PAIR64__(NtGlobalFlag, KeNumberProcessors_0);
    LODWORD(v36[7]) = NtGlobalFlag2;
    v36[8] = qword_1404656F8;
    v36[9] = (unsigned int)dword_1405711A8;
    v36[10] = qword_1405711B8;
    v36[11] = qword_1405711B0;
    LOBYTE(v36[12]) = *(_BYTE *)a2;
    BYTE1(v36[12]) = *(_BYTE *)(a2 + 3);
    v36[13] = *(_QWORD *)(a2 + 8);
    v36[14] = v11;
    v36[17] = v34 + (unsigned int)InitUnicodeCaseTableDataOffset;
    if ( InitUnicodeCaseTableDataOffset )
    {
      v36[15] = v34 + (unsigned int)InitAnsiCodePageDataOffset;
      v36[16] = v34 + (unsigned int)InitOemCodePageDataOffset;
    }
    else
    {
      v36[15] = 0LL;
      v36[16] = 0LL;
    }
    if ( a1[128] )
      HIDWORD(v36[7]) = MmGetSessionId((__int64)a1);
    else
      HIDWORD(v36[7]) = 0;
    v36[18] = v33;
    LODWORD(v36[19]) = 0;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_Leap_Seconds_Sixty_Second__private_propertyCache,
      13423976LL,
      (__int64)&Feature_PdttSupport_logged_traits,
      0,
      3);
    v14 = RtlImageNtHeader(v11);
    v35 = v14;
    Characteristics = v14->FileHeader.Characteristics;
    v16 = RtlImageDirectoryEntryToData(v11, 1u, 0xAu, &Size);
    v17 = v16;
    v38 = v16;
    if ( v16 )
    {
      if ( ((unsigned __int8)v16 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = WORD1(v36[3]);
      v14 = v35;
      v17 = v38;
    }
    Subsystem = v14->OptionalHeader.Subsystem;
    LODWORD(v36[0]) = Subsystem;
    MajorSubsystemVersion = v14->OptionalHeader.MajorSubsystemVersion;
    HIDWORD(v36[0]) = MajorSubsystemVersion;
    LODWORD(v36[1]) = v14->OptionalHeader.MinorSubsystemVersion;
    Win32VersionValue = v14->OptionalHeader.Win32VersionValue;
    if ( Win32VersionValue )
    {
      if ( v17 )
      {
        if ( v17[38] )
          v13 = v17[38];
        WORD1(v36[3]) = v13;
      }
      HIDWORD(v36[1]) = (unsigned __int8)Win32VersionValue;
      LODWORD(v36[2]) = BYTE1(Win32VersionValue);
      LOWORD(v36[3]) = HIWORD(Win32VersionValue);
      HIDWORD(v36[2]) = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
    }
    if ( v17 )
    {
      v21 = *((_QWORD *)v17 + 8);
      *a4 = v21;
      v22 = (v21 & KeQueryGroupAffinity(v30)) == v21;
      v23 = a4;
      if ( !v22 )
        *a4 = 0LL;
    }
    else
    {
      v23 = a4;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v24 = _InterlockedExchangeAdd(&dword_1404656F4, 1u) + 1;
      do
      {
        v25 = v24 & 0x3F;
        v26 = 1LL << v25;
        *v23 = 1LL << v25;
        v24 = v25 + 1;
        v22 = (KeQueryGroupAffinity(v30) & v26) == 0;
        v23 = a4;
      }
      while ( v22 );
      v13 = WORD1(v36[3]);
      MajorSubsystemVersion = HIDWORD(v36[0]);
      Subsystem = v36[0];
      v14 = v35;
    }
    v27 = v39;
    *(_QWORD *)(v39 + 280) = *(_QWORD *)((char *)&v36[1] + 4);
    *(_WORD *)(v27 + 288) = v36[3];
    *(_DWORD *)(v27 + 292) = HIDWORD(v36[2]);
    *(_WORD *)(v27 + 290) = v13;
    *(_QWORD *)(v27 + 200) = v36[4];
    *(_QWORD *)(v27 + 208) = v36[5];
    *(_DWORD *)(v27 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v27 + 188) = NtGlobalFlag;
    *(_DWORD *)(v27 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v27 + 192) = qword_1404656F8;
    *(_QWORD *)(v27 + 792) = (unsigned int)dword_1405711A8;
    *(_QWORD *)(v27 + 216) = qword_1405711B8;
    *(_QWORD *)(v27 + 224) = qword_1405711B0;
    *(_DWORD *)(v27 + 704) = HIDWORD(v36[7]);
    *(_DWORD *)(v27 + 296) = Subsystem;
    *(_DWORD *)(v27 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v27 + 304) = v36[1];
    *(_BYTE *)v27 = v36[12];
    *(_BYTE *)(v27 + 3) = BYTE1(v36[12]);
    *(_QWORD *)(v27 + 8) = v36[13];
    *(_QWORD *)(v27 + 16) = v40;
    *(_QWORD *)(v27 + 160) = v36[15];
    *(_QWORD *)(v27 + 168) = v36[16];
    *(_QWORD *)(v27 + 176) = v36[17];
    *(_QWORD *)(v27 + 1976) = v33;
    *(_DWORD *)(v27 + 1984) = 0;
    if ( a1[133] && (v28 = MiInitializeWowPeb((__int64)v36, (__int64)v14, (__int64)a1, (__int64)a4), v28 < 0) )
    {
      KeUnstackDetachProcess(&ApcState);
      return (unsigned int)v28;
    }
    else
    {
      KeUnstackDetachProcess(&ApcState);
      *v41 = v27;
      return 0LL;
    }
  }
}
