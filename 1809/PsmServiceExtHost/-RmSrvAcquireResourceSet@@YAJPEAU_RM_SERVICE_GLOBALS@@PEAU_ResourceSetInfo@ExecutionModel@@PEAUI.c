/*
 * XREFs of ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001BA50
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180009870 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18001ACB8 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180054F6C (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001B640 (-RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001B710 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001DCA0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048E40 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800606C8 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

__int64 __fastcall RmSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        const unsigned __int16 *a5,
        SID *Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int64 a10,
        struct _RM_ACTIVATOR *a11,
        bool *a12)
{
  signed __int64 *v12; // rbx
  struct _RM_SERVICE_GLOBALS *v13; // r13
  const SID *v14; // r15
  struct ExecutionModel::ResourceSet *v17; // r14
  ULONG v18; // eax
  __int64 v19; // r11
  __int16 v20; // ax
  int v21; // ecx
  signed int PackageFullNameFromKey; // eax
  DWORD v23; // esi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  struct _RM_SERVICE_GLOBALS *v26; // rsi
  struct _RM_OBJECT_HEADER *v27; // r13
  char *v28; // rbx
  unsigned __int64 v29; // r9
  __int64 v30; // r8
  unsigned int v31; // r11d
  __int64 v32; // rsi
  __int64 v33; // r10
  unsigned int v34; // esi
  _QWORD *v35; // rax
  signed __int64 v36; // rax
  signed __int64 v37; // rdx
  bool v38; // zf
  signed __int64 v39; // rtt
  bool *v40; // rdx
  bool v41; // bl
  int v42; // r9d
  __int64 v43; // rax
  const WCHAR *v44; // rcx
  int v45; // eax
  DWORD v47; // ebx
  int PartitionHandlesForPackage; // eax
  volatile signed __int64 *v49; // rbx
  __int64 v50; // rsi
  signed __int64 v51; // rax
  bool v52; // cc
  signed __int64 v53; // rax
  PVOID v54; // rcx
  int v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v56; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int16 v58; // [rsp+98h] [rbp-68h] BYREF
  HANDLE v59; // [rsp+A0h] [rbp-60h] BYREF
  int v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+ACh] [rbp-54h]
  struct _RM_SERVICE_GLOBALS *v62; // [rsp+B0h] [rbp-50h]
  struct ExecutionModel::ResourceSet *v63; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  bool *v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+D0h] [rbp-30h] BYREF
  char v67[4]; // [rsp+D4h] [rbp-2Ch] BYREF
  unsigned int v68; // [rsp+D8h] [rbp-28h] BYREF
  BOOL v69; // [rsp+DCh] [rbp-24h] BYREF
  int v70; // [rsp+E0h] [rbp-20h] BYREF
  int v71; // [rsp+E4h] [rbp-1Ch] BYREF
  int v72; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v73; // [rsp+ECh] [rbp-14h] BYREF
  unsigned __int64 v74; // [rsp+F0h] [rbp-10h]
  void *v75; // [rsp+F8h] [rbp-8h]
  struct ExecutionModel::IResourceSetCallback *v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h] BYREF
  __int64 v78; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+118h] [rbp+18h] BYREF
  EVENT_DESCRIPTOR v80; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v81[80]; // [rsp+140h] [rbp+40h] BYREF
  char v82[144]; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp+120h] BYREF
  void *v84; // [rsp+230h] [rbp+130h]
  int v85; // [rsp+238h] [rbp+138h]
  int v86; // [rsp+23Ch] [rbp+13Ch]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+240h] [rbp+140h] BYREF
  void *v88; // [rsp+250h] [rbp+150h]
  int v89; // [rsp+258h] [rbp+158h]
  int v90; // [rsp+25Ch] [rbp+15Ch]
  int *v91; // [rsp+260h] [rbp+160h]
  __int64 v92; // [rsp+268h] [rbp+168h]
  unsigned __int64 *v93; // [rsp+270h] [rbp+170h]
  __int64 v94; // [rsp+278h] [rbp+178h]
  const WCHAR *v95; // [rsp+280h] [rbp+180h]
  int v96; // [rsp+288h] [rbp+188h]
  int v97; // [rsp+28Ch] [rbp+18Ch]
  unsigned int *v98; // [rsp+290h] [rbp+190h]
  __int64 v99; // [rsp+298h] [rbp+198h]
  unsigned __int64 *v100; // [rsp+2A0h] [rbp+1A0h]
  __int64 v101; // [rsp+2A8h] [rbp+1A8h]
  BOOL *v102; // [rsp+2B0h] [rbp+1B0h]
  __int64 v103; // [rsp+2B8h] [rbp+1B8h]
  int *v104; // [rsp+2C0h] [rbp+1C0h]
  __int64 v105; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v106; // [rsp+2D0h] [rbp+1D0h]
  __int64 v107; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v108; // [rsp+2E0h] [rbp+1E0h]
  __int64 v109; // [rsp+2E8h] [rbp+1E8h]
  char *v110; // [rsp+2F0h] [rbp+1F0h]
  __int64 v111; // [rsp+2F8h] [rbp+1F8h]
  char *v112; // [rsp+300h] [rbp+200h]
  __int64 v113; // [rsp+308h] [rbp+208h]
  int *v114; // [rsp+310h] [rbp+210h]
  __int64 v115; // [rsp+318h] [rbp+218h]
  int *v116; // [rsp+320h] [rbp+220h]
  __int64 v117; // [rsp+328h] [rbp+228h]
  unsigned int *v118; // [rsp+330h] [rbp+230h]
  __int64 v119; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+340h] [rbp+240h] BYREF
  __int16 *v121; // [rsp+360h] [rbp+260h]
  __int64 v122; // [rsp+368h] [rbp+268h]
  char *v123; // [rsp+370h] [rbp+270h]
  __int64 v124; // [rsp+378h] [rbp+278h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v126[464]; // [rsp+390h] [rbp+290h] BYREF

  v12 = 0LL;
  v13 = a1;
  v14 = Sid;
  v62 = a1;
  v75 = a4;
  v76 = a3;
  v65 = a12;
  if ( HampLockTrackerId == -1 || !TlsGetValue(HampLockTrackerId) )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v82);
    v61 = 0;
  }
  else
  {
    v61 = 1;
  }
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180085784 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0B8;
    v84 = &unk_18008578F;
    UserData.Reserved = 2;
    v85 = 23;
    v86 = 1;
    EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v60 = 0;
  Handle = 0LL;
  v17 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  P = 0LL;
  if ( a8 != 2 && a8 != 4 && a8 != 8 )
  {
    PackageFullNameFromKey = -1073741578;
    goto LABEL_87;
  }
  if ( !a5 )
  {
    PackageFullNameFromKey = -1073741581;
    goto LABEL_87;
  }
  if ( !Sid )
    goto LABEL_86;
  if ( a9 == -1LL )
  {
    PackageFullNameFromKey = -1073741577;
    goto LABEL_87;
  }
  if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) > 0x44 )
  {
LABEL_86:
    PackageFullNameFromKey = -1073741580;
    goto LABEL_87;
  }
  memset_0(v81, 0, 0x44uLL);
  v18 = RtlLengthSid(Sid);
  memcpy_0(v81, Sid, v18);
  if ( !(unsigned int)RmpResourceSetInfoIsValid(a2) )
  {
    PackageFullNameFromKey = -1073741584;
    goto LABEL_87;
  }
  v20 = *((_WORD *)a2 + 8);
  if ( (v20 & 0x200) != 0 && (*((_BYTE *)v13 + 508) & 8) == 0 || (v20 & 0x400) != 0 && (v20 & 0x100) == 0 )
  {
    PackageFullNameFromKey = -1073741585;
    goto LABEL_87;
  }
  if ( a10 == -1LL )
  {
    PackageFullNameFromKey = -1073741574;
    goto LABEL_87;
  }
  if ( (*((_BYTE *)a2 + 40) & 0x20) != 0 && !a3 )
  {
    PackageFullNameFromKey = -1073741583;
    goto LABEL_87;
  }
  if ( (v19 & 0xF000000000000000uLL) == 0x2000000000000000LL
    || !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    v21 = 0;
    Handle = (HANDLE)-2LL;
    PackageFullNameFromKey = 0;
    v59 = 0LL;
    goto LABEL_23;
  }
  v66 = 464;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a5, v126, &v66);
  if ( PackageFullNameFromKey < 0 )
  {
LABEL_99:
    v21 = v55;
LABEL_23:
    if ( PackageFullNameFromKey < 0 )
      goto LABEL_87;
    goto LABEL_24;
  }
  PartitionHandlesForPackage = GetPartitionHandlesForPackage(v126, &Handle, &v59, v67);
  if ( PartitionHandlesForPackage < 0 )
  {
    PackageFullNameFromKey = PartitionHandlesForPackage & 0xEFFFFFFF;
    goto LABEL_99;
  }
  if ( (v67[0] & 1) != 0 )
    v21 = 1;
  else
    v21 = v55;
LABEL_24:
  if ( v21 )
    *((_BYTE *)a2 + 42) |= 0x80u;
  if ( v59 )
  {
    if ( v59 == (HANDLE)-2LL )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_87;
    }
    if ( (int)NtCompareObjects(*((_QWORD *)v13 + 45), v59) >= 0 )
    {
      PackageFullNameFromKey = -1073741733;
      goto LABEL_87;
    }
  }
  PackageFullNameFromKey = RmpPartitionTableFindOrCreatePartition(
                             (struct _RM_SERVICE_GLOBALS *)((char *)v13 + 312),
                             Handle,
                             (struct _RM_PARTITION **)&P);
  if ( PackageFullNameFromKey < 0 )
  {
    v12 = (signed __int64 *)P;
LABEL_87:
    v55 = PackageFullNameFromKey | 0x10000000;
    v34 = a8;
    if ( !v60 )
      goto LABEL_49;
    goto LABEL_88;
  }
  v23 = HampLockTrackerId;
  v60 = 1;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v23) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v26 = v62;
  v27 = 0LL;
  dword_18009BF18 = CurrentThreadId;
  v74 = a10;
  v28 = (char *)v62 + 552;
  v56 = a10;
  RtlAcquireSRWLockShared((char *)v62 + 552);
  v29 = v74;
  v30 = 0LL;
  v31 = *((_DWORD *)v26 + 135);
  v32 = -1LL << (v31 & 0x1F);
  v33 = v32 & (HIBYTE(v56)
             + 37
             * (BYTE6(v56)
              + 37
              * (BYTE5(v56)
               + 37
               * (BYTE4(v56)
                + 37 * (BYTE3(v56) + 37 * (BYTE2(v56) + 37 * (BYTE1(v56) + 37 * ((unsigned __int8)v74 + 11623883LL))))))));
  v56 = v33;
LABEL_33:
  if ( v30 )
    goto LABEL_36;
  if ( v31 >= 0x20 )
  {
    v29 = v74;
    v30 = *((_QWORD *)v62 + 68)
        + 8LL
        * ((37
          * (BYTE6(v56)
           + 37
           * (BYTE5(v56)
            + 37
            * (BYTE4(v56)
             + 37 * (BYTE3(v56) + 37 * (BYTE2(v56) + 37 * (BYTE1(v56) + 37 * ((unsigned __int8)v33 + 11623883)))))))
          + HIBYTE(v56)) & ((v31 >> 5) - 1));
LABEL_36:
    while ( 1 )
    {
      v30 = *(_QWORD *)v30;
      if ( (v30 & 1) != 0 )
        break;
      if ( v33 == (v32 & *(_QWORD *)(v30 + 8)) )
      {
        if ( v29 != *(_QWORD *)(v30 + 32) )
          goto LABEL_33;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v30 + 16)) <= 1 )
          __fastfail(0xEu);
        v17 = v63;
        v27 = (struct _RM_OBJECT_HEADER *)v30;
        break;
      }
    }
  }
  RtlReleaseSRWLockShared(v28);
  if ( v27 )
  {
    RmpObjectRelease(v27);
    v12 = (signed __int64 *)P;
    PackageFullNameFromKey = -1073741574;
    v13 = v62;
    goto LABEL_87;
  }
  v34 = a8;
  v13 = v62;
  v12 = (signed __int64 *)P;
  v55 = ExecutionModel::ResourceManager::AcquireResourceSet(
          *((ExecutionModel::ResourceManager **)v62 + 336),
          a2,
          (struct _RM_PARTITION *)P,
          v59,
          v76,
          v75,
          a5,
          v81,
          a7,
          a8,
          a9,
          a11,
          v65,
          a10,
          &v63);
  if ( v55 >= 0 )
  {
    dword_18009BF18 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v35 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v35 & 1) == 0 )
        __int2c();
      v38 = v35[1]-- == 1LL;
      if ( v38 )
        *v35 &= ~1uLL;
    }
    v55 = 0;
    v17 = v63;
    goto LABEL_47;
  }
  v17 = v63;
LABEL_88:
  RmpReleaseGlobalLock();
LABEL_47:
  if ( v17 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_49:
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(Handle);
  if ( (((unsigned __int64)v59 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v59);
  if ( v12 )
  {
    _m_prefetchw(v12);
    v36 = *v12;
    v37 = *v12 - 1;
    v38 = *v12 == 1;
    if ( v37 <= 0 )
    {
LABEL_115:
      if ( !v38 )
        __fastfail(0xEu);
      v49 = (volatile signed __int64 *)P;
      v50 = *((_QWORD *)P + 3);
      RtlAcquireSRWLockExclusive(v50 + 312);
      *(_DWORD *)(v50 + 320) = GetCurrentThreadId();
      v51 = _InterlockedExchangeAdd64(v49, 0xFFFFFFFFFFFFFFFFuLL);
      v52 = v51 <= 1;
      v53 = v51 - 1;
      if ( v52 )
      {
        if ( v53 )
          __fastfail(0xEu);
        v54 = P;
        if ( *((_QWORD *)P + 1) )
        {
          *((_DWORD *)P + 56) &= ~1u;
          *((_DWORD *)v54 + 56) |= 2u;
          SetEvent(*((HANDLE *)v54 + 8));
        }
        else
        {
          RmpPartitionCleanup((struct _RM_PARTITION *)P);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
        }
      }
      *(_DWORD *)(v50 + 320) = 0;
      RtlReleaseSRWLockExclusive(v50 + 312);
      v34 = a8;
    }
    else
    {
      while ( 1 )
      {
        v39 = v36;
        v36 = _InterlockedCompareExchange64((volatile signed __int64 *)P, v37, v36);
        if ( v39 == v36 )
          break;
        v37 = v36 - 1;
        v38 = v36 == 1;
        if ( v36 - 1 <= 0 )
          goto LABEL_115;
      }
    }
  }
  if ( dword_18009B0B0 )
  {
    v40 = v65;
    if ( v65 )
      v41 = *v65;
    else
      v41 = 0;
    if ( !Sid )
      v14 = (const SID *)((char *)v13 + 2548);
    v42 = 1;
    if ( dword_18009B0B0 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v122 = 2LL;
        v58 = 50;
        v124 = 200LL;
        v121 = &v58;
        v123 = (char *)a2 + 152;
        TlgCreateSid(&pDesc, v14);
        TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180085A35, 0LL, 0LL, 5u, &pData);
        v42 = 1;
      }
      v40 = v65;
    }
    if ( dword_18009B0B0 > 4u
      && (qword_18009B0C0 & 0x400000000009LL) != 0
      && (qword_18009B0C8 & 0x400000000009LL) == qword_18009B0C8 )
    {
      v92 = 4LL;
      v91 = &v55;
      v93 = &a10;
      LODWORD(v43) = 0;
      v94 = 8LL;
      v44 = &pwsz;
      if ( a5 )
      {
        v44 = a5;
        v43 = -1LL;
        do
          ++v43;
        while ( a5[v43] );
      }
      v95 = v44;
      v97 = 0;
      v96 = 2 * v43 + 2;
      v98 = &v68;
      v100 = &a9;
      v69 = v41;
      v102 = &v69;
      v70 = *((_DWORD *)a2 + 2);
      v104 = &v70;
      v77 = *((_QWORD *)a2 + 14);
      v106 = &v77;
      v78 = *((_QWORD *)a2 + 17);
      v108 = &v78;
      v110 = (char *)a2 + 42;
      v112 = (char *)a2 + 24;
      v71 = *(_DWORD *)a2;
      v114 = &v71;
      v45 = 0;
      if ( v40 )
        v45 = v42;
      v68 = v34;
      v72 = v45;
      v116 = &v72;
      v73 = a7;
      v118 = &v73;
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
      *(_DWORD *)&v80.Level = 516;
      v87.Ptr = (ULONGLONG)off_18009B0B8;
      *(_DWORD *)&v80.Id = ((unsigned int)&unk_180085440 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v80.Keyword = 0x400000000009LL;
      v87.Size = *(unsigned __int16 *)off_18009B0B8;
      v88 = &unk_18008544B;
      v90 = v42;
      v87.Reserved = 2;
      v89 = 231;
      EventWriteTransfer(qword_18009B0D0, &v80, 0LL, 0LL, 0x10u, &v87);
    }
  }
  if ( !v61 )
  {
    v47 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v47, 0LL);
    }
  }
  return (unsigned int)v55;
}
