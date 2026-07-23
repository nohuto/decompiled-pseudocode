/*
 * XREFs of MmCreatePeb @ 0x1406796F0
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400F2A84 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     KeQueryGroupAffinity @ 0x1400F3700 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiCreatePebOrTeb @ 0x1405F9B40 (MiCreatePebOrTeb.c)
 *     MmMapViewOfSection @ 0x140679D20 (MmMapViewOfSection.c)
 *     MiInitializeWowPeb @ 0x14068C7B4 (MiInitializeWowPeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_KPROCESS *a1, char *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v6; // eax
  int v7; // ebx
  void *v8; // rbx
  __int16 v9; // si
  PIMAGE_NT_HEADERS v10; // rdi
  unsigned __int16 Characteristics; // r15
  _WORD *v12; // rax
  _WORD *v13; // rbx
  int Subsystem; // r12d
  int MajorSubsystemVersion; // r13d
  unsigned int Win32VersionValue; // edx
  __int64 v17; // rbx
  bool v18; // zf
  _QWORD *v19; // rax
  __int64 v20; // rbx
  int v22; // edi
  char v23; // di
  char v24; // di
  __int64 v25; // rbx
  USHORT v27; // [rsp+60h] [rbp-168h]
  __int64 v28; // [rsp+68h] [rbp-160h] BYREF
  __int64 v29; // [rsp+70h] [rbp-158h] BYREF
  __int64 v30; // [rsp+78h] [rbp-150h] BYREF
  __int64 v31; // [rsp+80h] [rbp-148h] BYREF
  _IMAGE_NT_HEADERS64 *v32; // [rsp+88h] [rbp-140h]
  int v33; // [rsp+90h] [rbp-138h] BYREF
  int v34; // [rsp+94h] [rbp-134h]
  int MinorSubsystemVersion; // [rsp+98h] [rbp-130h]
  __int64 v36; // [rsp+9Ch] [rbp-12Ch]
  unsigned int v37; // [rsp+A4h] [rbp-124h]
  __int16 v38; // [rsp+A8h] [rbp-120h]
  __int16 v39; // [rsp+AAh] [rbp-11Eh]
  __int64 v40; // [rsp+B0h] [rbp-118h]
  __int64 v41; // [rsp+B8h] [rbp-110h]
  int v42; // [rsp+C0h] [rbp-108h]
  ULONG v43; // [rsp+C4h] [rbp-104h]
  ULONG v44; // [rsp+C8h] [rbp-100h]
  int SessionId; // [rsp+CCh] [rbp-FCh]
  __int64 v46; // [rsp+D0h] [rbp-F8h]
  __int64 v47; // [rsp+D8h] [rbp-F0h]
  __int64 v48; // [rsp+E0h] [rbp-E8h]
  __int64 v49; // [rsp+E8h] [rbp-E0h]
  char v50; // [rsp+F0h] [rbp-D8h]
  char v51; // [rsp+F1h] [rbp-D7h]
  __int64 v52; // [rsp+F8h] [rbp-D0h]
  void *v53; // [rsp+100h] [rbp-C8h]
  __int64 v54; // [rsp+108h] [rbp-C0h]
  __int64 v55; // [rsp+110h] [rbp-B8h]
  __int64 v56; // [rsp+118h] [rbp-B0h]
  __int64 v57; // [rsp+120h] [rbp-A8h]
  int v58; // [rsp+128h] [rbp-A0h]
  ULONG Size; // [rsp+130h] [rbp-98h] BYREF
  _WORD *v60; // [rsp+138h] [rbp-90h]
  __int64 v61; // [rsp+140h] [rbp-88h] BYREF
  void *v62; // [rsp+148h] [rbp-80h]
  _QWORD *v63; // [rsp+150h] [rbp-78h]
  _BYTE v64[48]; // [rsp+158h] [rbp-70h] BYREF

  v63 = a3;
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  _BitScanForward(&v6, (*(_DWORD *)&a1->0 >> 10) & 0xFFFFF);
  v27 = v6;
  *((_WORD *)a4 + 4) = v6;
  KiStackAttachProcess(a1, 0LL, (__int64)v64);
  v7 = MmMapViewOfSection(InitNlsSectionPointer, a1, &v31, 0LL, 0LL, &v28, &v29, 1, 5242880, 2);
  if ( v7 < 0
    || (v30 = 0LL,
        v28 = 0LL,
        v29 = 0LL,
        v7 = MmMapViewOfSection(ExLeapSecondDataSectionPointer, a1, &v30, 0LL, 0LL, &v28, &v29, 1, 5242880, 2),
        v7 < 0)
    || (v7 = MiCreatePebOrTeb(0, 0LL, &v61), v7 < 0) )
  {
    KiUnstackDetachProcess((__int64)v64, 0LL);
    return (unsigned int)v7;
  }
  else
  {
    v8 = (void *)a1[1].Affinity.Bitmap[18];
    v62 = v8;
    v36 = 10LL;
    v38 = 17763;
    v37 = 2;
    v9 = CmNtCSDVersion;
    v39 = CmNtCSDVersion;
    v40 = qword_1405411B8;
    v41 = qword_1405411B0;
    v42 = KeNumberProcessors_0;
    v43 = NtGlobalFlag;
    v44 = NtGlobalFlag2;
    v46 = qword_14043B0A0;
    v47 = (unsigned int)dword_140541198;
    v48 = qword_1405411A8;
    v49 = qword_1405411A0;
    v50 = *a2;
    v51 = a2[3];
    v52 = *((_QWORD *)a2 + 1);
    v53 = v8;
    v56 = v31 + (unsigned int)InitUnicodeCaseTableDataOffset;
    if ( InitUnicodeCaseTableDataOffset )
    {
      v54 = v31 + (unsigned int)InitAnsiCodePageDataOffset;
      v55 = v31 + (unsigned int)InitOemCodePageDataOffset;
    }
    else
    {
      v54 = 0LL;
      v55 = 0LL;
    }
    if ( a1[1].ActiveProcessors.Bitmap[2] )
      SessionId = MmGetSessionId((__int64)a1);
    else
      SessionId = 0;
    v57 = v30;
    v58 = 0;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_Leap_Seconds_Sixty_Second__private_propertyCache,
      13423976LL,
      (__int64)&Feature_PdttSupport_logged_traits,
      0,
      3);
    v10 = RtlImageNtHeader(v8);
    v32 = v10;
    Characteristics = v10->FileHeader.Characteristics;
    v12 = RtlImageDirectoryEntryToData(v8, 1u, 0xAu, &Size);
    v13 = v12;
    v60 = v12;
    if ( v12 )
    {
      if ( ((unsigned __int8)v12 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = v39;
      v10 = v32;
      v13 = v60;
    }
    Subsystem = v10->OptionalHeader.Subsystem;
    v33 = Subsystem;
    MajorSubsystemVersion = v10->OptionalHeader.MajorSubsystemVersion;
    v34 = MajorSubsystemVersion;
    MinorSubsystemVersion = v10->OptionalHeader.MinorSubsystemVersion;
    Win32VersionValue = v10->OptionalHeader.Win32VersionValue;
    if ( Win32VersionValue )
    {
      if ( v13 )
      {
        if ( v13[38] )
          v9 = v13[38];
        v39 = v9;
      }
      LODWORD(v36) = (unsigned __int8)Win32VersionValue;
      HIDWORD(v36) = BYTE1(Win32VersionValue);
      v38 = HIWORD(Win32VersionValue);
      v37 = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
    }
    if ( v13 )
    {
      v17 = *((_QWORD *)v13 + 8);
      *a4 = v17;
      v18 = (v17 & KeQueryGroupAffinity(v27)) == v17;
      v19 = a4;
      if ( !v18 )
        *a4 = 0LL;
    }
    else
    {
      v19 = a4;
    }
    if ( (Characteristics & 0x4000) != 0 )
    {
      v23 = _InterlockedExchangeAdd(&dword_14043B09C, 1u) + 1;
      do
      {
        v24 = v23 & 0x3F;
        v25 = 1LL << v24;
        *v19 = 1LL << v24;
        v23 = v24 + 1;
        v18 = (KeQueryGroupAffinity(v27) & v25) == 0;
        v19 = a4;
      }
      while ( v18 );
      v9 = v39;
      MajorSubsystemVersion = v34;
      Subsystem = v33;
      v10 = v32;
    }
    v20 = v61;
    *(_QWORD *)(v61 + 280) = v36;
    *(_WORD *)(v20 + 288) = v38;
    *(_DWORD *)(v20 + 292) = v37;
    *(_WORD *)(v20 + 290) = v9;
    *(_QWORD *)(v20 + 200) = v40;
    *(_QWORD *)(v20 + 208) = v41;
    *(_DWORD *)(v20 + 184) = KeNumberProcessors_0;
    *(_DWORD *)(v20 + 188) = NtGlobalFlag;
    *(_DWORD *)(v20 + 1988) = NtGlobalFlag2;
    *(_QWORD *)(v20 + 192) = qword_14043B0A0;
    *(_QWORD *)(v20 + 792) = (unsigned int)dword_140541198;
    *(_QWORD *)(v20 + 216) = qword_1405411A8;
    *(_QWORD *)(v20 + 224) = qword_1405411A0;
    *(_DWORD *)(v20 + 704) = SessionId;
    *(_DWORD *)(v20 + 296) = Subsystem;
    *(_DWORD *)(v20 + 300) = MajorSubsystemVersion;
    *(_DWORD *)(v20 + 304) = MinorSubsystemVersion;
    *(_BYTE *)v20 = v50;
    *(_BYTE *)(v20 + 3) = v51;
    *(_QWORD *)(v20 + 8) = v52;
    *(_QWORD *)(v20 + 16) = v62;
    *(_QWORD *)(v20 + 160) = v54;
    *(_QWORD *)(v20 + 168) = v55;
    *(_QWORD *)(v20 + 176) = v56;
    *(_QWORD *)(v20 + 1976) = v30;
    *(_DWORD *)(v20 + 1984) = 0;
    if ( a1[1].ActiveProcessors.Bitmap[7] && (v22 = MiInitializeWowPeb(&v33, v10, a1, a4), v22 < 0) )
    {
      KiUnstackDetachProcess((__int64)v64, 0LL);
      return (unsigned int)v22;
    }
    else
    {
      KiUnstackDetachProcess((__int64)v64, 0LL);
      *v63 = v20;
      return 0LL;
    }
  }
}
