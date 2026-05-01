/*
 * XREFs of ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E330
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180010690 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18001D61C (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x18006199C (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C754 (CempListEntryIsNull.c)
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001DF40 (-RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001E000 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001FDB0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048ABC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18006D620 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

__int64 __fastcall RmSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        wchar_t *Source,
        PSID Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int64 a10,
        struct _RM_ACTIVATOR *a11,
        bool *a12)
{
  signed __int64 *v12; // rsi
  const struct _TraceLoggingMetadata_t *v16; // rdx
  __int128 v17; // xmm0
  struct ExecutionModel::ResourceSet *v18; // r15
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  ULONG v21; // eax
  int v22; // eax
  int v23; // ecx
  signed int PackageFullNameFromKey; // eax
  DWORD v25; // esi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  unsigned __int64 v28; // rsi
  void *v29; // r13
  unsigned int v30; // r11d
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r10
  bool *v35; // r13
  _QWORD *v36; // rax
  signed __int64 v37; // rax
  bool v38; // zf
  signed __int64 v39; // rtt
  bool v40; // bl
  __int64 v41; // rax
  __int16 *v42; // rcx
  DWORD v44; // ebx
  int PartitionHandlesForPackage; // eax
  volatile signed __int64 *v46; // rbx
  __int64 v47; // rsi
  signed __int64 v48; // rax
  bool v49; // cc
  signed __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v53; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int16 v55; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v56; // [rsp+9Ch] [rbp-64h]
  int v57; // [rsp+A0h] [rbp-60h]
  unsigned int v58; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v59; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v60; // [rsp+B0h] [rbp-50h] BYREF
  struct ExecutionModel::ResourceSet *v61; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  int v63; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v64; // [rsp+CCh] [rbp-34h] BYREF
  BOOL v65; // [rsp+D0h] [rbp-30h] BYREF
  int v66; // [rsp+D4h] [rbp-2Ch] BYREF
  int v67; // [rsp+D8h] [rbp-28h] BYREF
  BOOL v68; // [rsp+DCh] [rbp-24h] BYREF
  bool *v69; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v70; // [rsp+E8h] [rbp-18h]
  void *v71; // [rsp+F0h] [rbp-10h]
  struct ExecutionModel::IResourceSetCallback *v72; // [rsp+F8h] [rbp-8h]
  __int64 v73; // [rsp+100h] [rbp+0h] BYREF
  __int64 v74; // [rsp+108h] [rbp+8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DESCRIPTOR v76; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DESCRIPTOR v77; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  _OWORD pSid[4]; // [rsp+150h] [rbp+50h] BYREF
  int v81; // [rsp+190h] [rbp+90h]
  char v82[144]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+230h] [rbp+130h] BYREF
  void *v84; // [rsp+240h] [rbp+140h]
  int v85; // [rsp+248h] [rbp+148h]
  int v86; // [rsp+24Ch] [rbp+14Ch]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+250h] [rbp+150h] BYREF
  void *v88; // [rsp+260h] [rbp+160h]
  int v89; // [rsp+268h] [rbp+168h]
  int v90; // [rsp+26Ch] [rbp+16Ch]
  int *v91; // [rsp+270h] [rbp+170h]
  __int64 v92; // [rsp+278h] [rbp+178h]
  unsigned __int64 *v93; // [rsp+280h] [rbp+180h]
  __int64 v94; // [rsp+288h] [rbp+188h]
  __int16 *v95; // [rsp+290h] [rbp+190h]
  int v96; // [rsp+298h] [rbp+198h]
  int v97; // [rsp+29Ch] [rbp+19Ch]
  unsigned int *v98; // [rsp+2A0h] [rbp+1A0h]
  __int64 v99; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 *v100; // [rsp+2B0h] [rbp+1B0h]
  __int64 v101; // [rsp+2B8h] [rbp+1B8h]
  BOOL *v102; // [rsp+2C0h] [rbp+1C0h]
  __int64 v103; // [rsp+2C8h] [rbp+1C8h]
  int *v104; // [rsp+2D0h] [rbp+1D0h]
  __int64 v105; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v106; // [rsp+2E0h] [rbp+1E0h]
  __int64 v107; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v108; // [rsp+2F0h] [rbp+1F0h]
  __int64 v109; // [rsp+2F8h] [rbp+1F8h]
  char *v110; // [rsp+300h] [rbp+200h]
  __int64 v111; // [rsp+308h] [rbp+208h]
  char *v112; // [rsp+310h] [rbp+210h]
  __int64 v113; // [rsp+318h] [rbp+218h]
  int *v114; // [rsp+320h] [rbp+220h]
  __int64 v115; // [rsp+328h] [rbp+228h]
  BOOL *v116; // [rsp+330h] [rbp+230h]
  __int64 v117; // [rsp+338h] [rbp+238h]
  unsigned int *v118; // [rsp+340h] [rbp+240h]
  __int64 v119; // [rsp+348h] [rbp+248h]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+350h] [rbp+250h] BYREF
  void *v121; // [rsp+360h] [rbp+260h]
  int v122; // [rsp+368h] [rbp+268h]
  int v123; // [rsp+36Ch] [rbp+26Ch]
  __int16 *v124; // [rsp+370h] [rbp+270h]
  __int64 v125; // [rsp+378h] [rbp+278h]
  char *v126; // [rsp+380h] [rbp+280h]
  __int64 v127; // [rsp+388h] [rbp+288h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v129[464]; // [rsp+3A0h] [rbp+2A0h] BYREF

  v12 = 0LL;
  v71 = a4;
  v72 = a3;
  v69 = a12;
  if ( HampLockTrackerId == -1 || !TlsGetValue(HampLockTrackerId) )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v82);
    v57 = 0;
  }
  else
  {
    v57 = 1;
  }
  v16 = &TraceLoggingMetadata;
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v84 = &unk_18009357C;
    UserData.Reserved = 2;
    v85 = 23;
    v86 = 1;
    v56 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v17 = *(_OWORD *)((char *)a1 + 2548);
  v18 = 0LL;
  v19 = *(_OWORD *)((char *)a1 + 2564);
  v81 = *((_DWORD *)a1 + 653);
  pSid[0] = v17;
  pSid[1] = v19;
  v56 = 0;
  v61 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v60 = 0LL;
  v20 = *(_OWORD *)((char *)a1 + 2596);
  pSid[2] = *(_OWORD *)((char *)a1 + 2580);
  pSid[3] = v20;
  if ( a8 != 2 && a8 != 4 && a8 != 8 )
  {
    PackageFullNameFromKey = -1073741578;
    goto LABEL_109;
  }
  if ( !Source )
  {
    PackageFullNameFromKey = -1073741581;
    goto LABEL_109;
  }
  if ( !Sid )
    goto LABEL_108;
  if ( a9 == -1LL )
  {
    PackageFullNameFromKey = -1073741577;
    goto LABEL_109;
  }
  if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) > 0x44 )
  {
LABEL_108:
    PackageFullNameFromKey = -1073741580;
LABEL_109:
    v52 = PackageFullNameFromKey | 0x10000000;
    v35 = v69;
    if ( !v56 )
      goto LABEL_49;
    goto LABEL_107;
  }
  memset_0(pSid, 0, 0x44uLL);
  v21 = RtlLengthSid(Sid);
  memcpy_0(pSid, Sid, v21);
  if ( !RmpResourceSetInfoIsValid(a2) )
  {
    PackageFullNameFromKey = -1073741584;
    goto LABEL_109;
  }
  v22 = *((_DWORD *)a2 + 4);
  if ( (v22 & 0x200) != 0 && (*((_BYTE *)a1 + 508) & 8) == 0 || (v22 & 0x400) != 0 && (v22 & 0x100) == 0 )
  {
    PackageFullNameFromKey = -1073741585;
    goto LABEL_109;
  }
  if ( a10 == -1LL )
  {
    PackageFullNameFromKey = -1073741574;
    goto LABEL_109;
  }
  if ( (*((_BYTE *)a2 + 40) & 0x20) != 0 && !a3 )
  {
    PackageFullNameFromKey = -1073741583;
    goto LABEL_109;
  }
  if ( (a9 & 0xF000000000000000uLL) == 0x2000000000000000LL
    || !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    v23 = 0;
    Handle = (HANDLE)-2LL;
    PackageFullNameFromKey = 0;
    goto LABEL_23;
  }
  v63 = 464;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(Source, v129, &v63);
  if ( PackageFullNameFromKey < 0 )
  {
LABEL_92:
    v23 = v52;
LABEL_23:
    if ( PackageFullNameFromKey < 0 )
      goto LABEL_109;
    goto LABEL_24;
  }
  PartitionHandlesForPackage = GetPartitionHandlesForPackage(v129, &Handle, &v60, &v59);
  if ( PartitionHandlesForPackage < 0 )
  {
    PackageFullNameFromKey = PartitionHandlesForPackage & 0xEFFFFFFF;
    goto LABEL_92;
  }
  if ( (v59 & 1) != 0 )
    v23 = 1;
  else
    v23 = v52;
LABEL_24:
  if ( v23 )
    *((_BYTE *)a2 + 42) |= 0x80u;
  if ( v60 )
  {
    if ( v60 == (HANDLE)-2LL )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_109;
    }
    if ( (int)NtCompareObjects(*((_QWORD *)a1 + 45), v60) >= 0 )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_109;
    }
  }
  PackageFullNameFromKey = RmpPartitionTableFindOrCreatePartition(
                             (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
                             Handle,
                             (struct _RM_PARTITION **)&P);
  if ( PackageFullNameFromKey < 0 )
    goto LABEL_105;
  v25 = HampLockTrackerId;
  v56 = 1;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v25) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v28 = a10;
  dword_1800AC208 = CurrentThreadId;
  v70 = a10;
  v29 = 0LL;
  v53 = a10;
  RtlAcquireSRWLockShared((char *)a1 + 552);
  v30 = *((_DWORD *)a1 + 135);
  v31 = 0LL;
  v78 = v28;
  v32 = BYTE6(v53)
      + 37
      * (BYTE5(v53)
       + 37
       * (BYTE4(v53)
        + 37 * (BYTE3(v53) + 37 * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * ((unsigned __int8)v28 + 11623883LL))))));
  v33 = -1LL << (v30 & 0x1F);
  v34 = v33 & (HIBYTE(v53) + 37 * v32);
  v53 = v34;
LABEL_33:
  if ( v31 )
    goto LABEL_36;
  if ( v30 >= 0x20 )
  {
    v79 = v34;
    v31 = *((_QWORD *)a1 + 68)
        + 8LL
        * ((37
          * (BYTE6(v53)
           + 37
           * (BYTE5(v53)
            + 37
            * (BYTE4(v53)
             + 37 * (BYTE3(v53) + 37 * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * ((unsigned __int8)v34 + 11623883)))))))
          + HIBYTE(v53)) & ((v30 >> 5) - 1));
LABEL_36:
    while ( 1 )
    {
      v31 = *(_QWORD *)v31;
      if ( (v31 & 1) != 0 )
        break;
      if ( v34 == (v33 & *(_QWORD *)(v31 + 8)) )
      {
        if ( v70 != *(_QWORD *)(v31 + 32) )
          goto LABEL_33;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v31 + 16)) <= 1 )
          __fastfail(0xEu);
        v18 = v61;
        v29 = (void *)v31;
        break;
      }
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 552);
  if ( v29 )
  {
    RmpObjectRelease(v29);
    PackageFullNameFromKey = -1073741574;
LABEL_105:
    v12 = (signed __int64 *)P;
    goto LABEL_109;
  }
  v35 = v69;
  v12 = (signed __int64 *)P;
  v52 = ExecutionModel::ResourceManager::AcquireResourceSet(
          *((ExecutionModel::ResourceManager **)a1 + 328),
          a2,
          (struct _RM_PARTITION *)P,
          v60,
          v72,
          v71,
          Source,
          pSid,
          a7,
          a8,
          a9,
          a11,
          v69,
          a10,
          &v61);
  if ( v52 >= 0 )
  {
    dword_1800AC208 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v36 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v36 & 1) == 0 )
        __int2c();
      v38 = v36[1]-- == 1LL;
      if ( v38 )
        *v36 &= ~1uLL;
    }
    v18 = v61;
    v52 = 0;
    goto LABEL_47;
  }
  v18 = v61;
LABEL_107:
  RmpReleaseGlobalLock();
LABEL_47:
  if ( v18 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_49:
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(Handle);
  if ( (((unsigned __int64)v60 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v60);
  if ( v12 )
  {
    _m_prefetchw(v12);
    v37 = *v12;
    v16 = (const struct _TraceLoggingMetadata_t *)(*v12 - 1);
    v38 = *v12 == 1;
    if ( (__int64)v16 <= 0 )
    {
LABEL_112:
      if ( !v38 )
        __fastfail(0xEu);
      v46 = (volatile signed __int64 *)P;
      v47 = *((_QWORD *)P + 3);
      RtlAcquireSRWLockExclusive(v47 + 312);
      *(_DWORD *)(v47 + 320) = GetCurrentThreadId();
      v48 = _InterlockedExchangeAdd64(v46, 0xFFFFFFFFFFFFFFFFuLL);
      v49 = v48 <= 1;
      v50 = v48 - 1;
      if ( v49 )
      {
        if ( v50 )
          __fastfail(0xEu);
        if ( (unsigned int)CempListEntryIsNull((_QWORD *)P + 1) )
        {
          RmpPartitionCleanup((struct _RM_PARTITION *)v51);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
        }
        else
        {
          *(_DWORD *)(v51 + 224) &= ~1u;
          *(_DWORD *)(v51 + 224) |= 2u;
          SetEvent(*(HANDLE *)(v51 + 64));
        }
      }
      *(_DWORD *)(v47 + 320) = 0;
      RtlReleaseSRWLockExclusive(v47 + 312);
    }
    else
    {
      while ( 1 )
      {
        v39 = v37;
        v37 = _InterlockedCompareExchange64((volatile signed __int64 *)P, (signed __int64)v16, v37);
        LOBYTE(v16) = v37;
        if ( v39 == v37 )
          break;
        v16 = (const struct _TraceLoggingMetadata_t *)(v37 - 1);
        v38 = v37 == 1;
        if ( v37 - 1 <= 0 )
          goto LABEL_112;
      }
    }
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, (UCHAR)v16, 0LL) )
  {
    if ( v35 )
      v40 = *v35;
    else
      v40 = 0;
    if ( hProvider > 5u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
    {
      v125 = 2LL;
      v55 = 50;
      v127 = 200LL;
      v124 = &v55;
      v126 = (char *)a2 + 152;
      TlgCreateSid(&pDesc, (const SID *)pSid);
      *(_DWORD *)&v76.Level = 5;
      v120.Ptr = (ULONGLONG)off_1800AB288;
      *(_DWORD *)&v76.Id = 184549376;
      v76.Keyword = 1LL;
      v120.Size = *(unsigned __int16 *)off_1800AB288;
      v121 = &unk_180093232;
      v120.Reserved = 2;
      v122 = 68;
      v123 = 1;
      v58 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800AB2A0, &v76, 0LL, 0LL, 5u, &v120);
    }
    if ( hProvider > 4u && (byte_1800AB290 & 9) != 0 && (qword_1800AB298 & 9) == qword_1800AB298 )
    {
      v92 = 4LL;
      v91 = &v52;
      v93 = &a10;
      LODWORD(v41) = 0;
      v94 = 8LL;
      v42 = &word_18008DA4C;
      if ( Source )
      {
        v42 = (__int16 *)Source;
        v41 = -1LL;
        do
          ++v41;
        while ( Source[v41] );
      }
      v95 = v42;
      v97 = 0;
      v64 = a8;
      v98 = &v64;
      v100 = &a9;
      v65 = v40;
      v102 = &v65;
      v66 = *((_DWORD *)a2 + 2);
      v104 = &v66;
      v73 = *((_QWORD *)a2 + 14);
      v106 = &v73;
      v74 = *((_QWORD *)a2 + 17);
      v108 = &v74;
      v110 = (char *)a2 + 42;
      v112 = (char *)a2 + 24;
      v67 = *(_DWORD *)a2;
      v114 = &v67;
      v96 = 2 * v41 + 2;
      v68 = v35 != 0LL;
      v116 = &v68;
      v58 = a7;
      v118 = &v58;
      v99 = 4LL;
      v101 = 8LL;
      v103 = 4LL;
      v105 = 4LL;
      v107 = 8LL;
      v109 = 8LL;
      v111 = 1LL;
      v113 = 8LL;
      v115 = 4LL;
      v117 = 4LL;
      v119 = 4LL;
      *(_DWORD *)&v77.Level = 516;
      v87.Ptr = (ULONGLONG)off_1800AB288;
      *(_DWORD *)&v77.Id = 184549376;
      v77.Keyword = 9LL;
      v87.Size = *(unsigned __int16 *)off_1800AB288;
      v88 = &unk_180092F82;
      v87.Reserved = 2;
      v89 = 231;
      v90 = 1;
      v59 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800AB2A0, &v77, 0LL, 0LL, 0x10u, &v87);
    }
  }
  if ( !v57 )
  {
    v44 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v44, 0LL);
    }
  }
  return (unsigned int)v52;
}
