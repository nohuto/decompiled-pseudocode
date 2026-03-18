/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015FC34
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C016AD70 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0002404 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009DB0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0017E68 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F1C0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     RtlStringLengthWorkerW @ 0x1C001F250 (RtlStringLengthWorkerW.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F298 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x1C001F2C8 (-CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C0037304 (-RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2C84 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F9C74 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0160444 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0160C3C (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     DpiKsrIsSoftBoot @ 0x1C0161B38 (DpiKsrIsSoftBoot.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C017FE5C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?IsKnownMismatchedVersionedDriver@ADAPTER_RENDER@@AEAA_NPEAT_LARGE_INTEGER@@0@Z @ 0x1C01F5F68 (-IsKnownMismatchedVersionedDriver@ADAPTER_RENDER@@AEAA_NPEAT_LARGE_INTEGER@@0@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200A00 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C02A975C (DpiKsrGetSavedAdapterState.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  _OWORD *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _OWORD *v7; // rbx
  unsigned int v8; // r13d
  unsigned int VidSchSibmitDataSize; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rcx
  unsigned __int8 IsDxgmms2; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct DXGGLOBAL *Global; // rax
  const GUID *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int i; // r12d
  unsigned __int16 *v26; // r15
  DWORD v27; // r14d
  bool v28; // of
  SIZE_T v29; // rax
  char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v34; // r9
  SIZE_T v35; // rax
  PVOID v36; // rax
  SIZE_T v37; // rax
  PVOID v38; // rax
  int *v39; // rcx
  DWORD v40; // edi
  char *v41; // rdx
  char *v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rcx
  union _LARGE_INTEGER v45; // rbx
  __int64 v46; // r8
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rbx
  struct DXGGLOBAL *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  int SynchronizationObjectInternal; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rcx
  int v61; // eax
  unsigned int v62; // r14d
  __int64 v63; // rax
  unsigned int v64; // ebx
  SIZE_T v65; // rax
  unsigned __int64 v66; // kr00_8
  __int64 v67; // r13
  unsigned int *v68; // rax
  const GUID *v69; // r8
  unsigned int *v70; // rdi
  size_t *v71; // rax
  DXGADAPTER *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r8
  signed int LowPart; // r15d
  __int64 v76; // rcx
  __int64 v77; // r12
  unsigned int *v78; // r15
  __int64 v79; // rbx
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  const GUID *v84; // r8
  __int64 v85; // rax
  DXGADAPTER *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  int KmdFileVersion; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rbx
  __int64 v98; // rax
  const wchar_t *v99; // r13
  const wchar_t *v100; // r14
  const wchar_t *v101; // rbx
  unsigned __int16 v102; // di
  const wchar_t *v103; // r11
  unsigned int v104; // eax
  unsigned int v105; // r12d
  __int64 v106; // rcx
  unsigned int v107; // r15d
  union _LARGE_INTEGER *v108; // rdx
  __int64 v109; // r14
  __int64 v110; // rax
  unsigned int v111; // ebx
  unsigned int *v112; // r12
  unsigned int v113; // r14d
  unsigned int v114; // edi
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // r8
  NTSTATUS v118; // eax
  __int64 v119; // rax
  size_t v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  const GUID *v124; // r9
  _DWORD *v125; // rdx
  _QWORD *v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rcx
  _QWORD *v129; // rax
  unsigned __int64 v130; // r12
  SIZE_T v131; // rax
  PVOID v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rax
  unsigned int v138; // r14d
  DXGADAPTER *v139; // rcx
  unsigned int *v140; // rbx
  __int64 v141; // rcx
  DXGADAPTER *v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rax
  _QWORD *v146; // rax
  _QWORD *v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  struct _OBJECT_HANDLE_INFORMATION *Flags; // [rsp+28h] [rbp-E0h]
  __int64 v151; // [rsp+48h] [rbp-C0h] BYREF
  char *v152; // [rsp+50h] [rbp-B8h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-B0h] BYREF
  union _LARGE_INTEGER v154; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v155; // [rsp+68h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v156; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING String; // [rsp+A0h] [rbp-68h] BYREF
  size_t v158; // [rsp+B0h] [rbp-58h] BYREF
  union _LARGE_INTEGER v159; // [rsp+B8h] [rbp-50h] BYREF
  int v160; // [rsp+C0h] [rbp-48h]
  __int64 v161; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v162; // [rsp+D0h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO pData[2]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID *v164; // [rsp+138h] [rbp+30h]
  __int64 v165; // [rsp+140h] [rbp+38h]
  __int64 *v166; // [rsp+148h] [rbp+40h]
  __int64 v167; // [rsp+150h] [rbp+48h]
  __int64 *v168; // [rsp+158h] [rbp+50h]
  __int64 v169; // [rsp+160h] [rbp+58h]
  union _LARGE_INTEGER *v170; // [rsp+168h] [rbp+60h]
  __int64 v171; // [rsp+170h] [rbp+68h]
  size_t *p_pcchLength; // [rsp+178h] [rbp+70h]
  __int64 v173; // [rsp+180h] [rbp+78h]
  wchar_t psz[8]; // [rsp+188h] [rbp+80h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = (_OWORD *)((char *)this + 264);
  *(_OWORD *)((char *)this + 392) = *(_OWORD *)(v1 + 1416);
  *(_OWORD *)((char *)this + 408) = *(_OWORD *)(v1 + 1432);
  *(_OWORD *)((char *)this + 456) = *(_OWORD *)(v1 + 1352);
  *((_OWORD *)this + 30) = *(_OWORD *)(v1 + 1376);
  *((_DWORD *)this + 118) = *(_DWORD *)(v1 + 1368);
  *((_DWORD *)this + 119) = *(_DWORD *)(v1 + 1372);
  *((_DWORD *)this + 124) = *(_DWORD *)(v1 + 1392);
  *((_DWORD *)this + 125) = *(_DWORD *)(v1 + 1396);
  *(_OWORD *)((char *)this + 424) = *(_OWORD *)(v1 + 1448);
  *(_OWORD *)((char *)this + 440) = *(_OWORD *)(v1 + 1464);
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(v1 + 1312),
              (struct _UNICODE_STRING *)((char *)this + 264)) < 0 )
    goto LABEL_184;
  v7 = (_OWORD *)((char *)this + 328);
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 1328LL),
              (struct _UNICODE_STRING *)((char *)this + 328)) < 0 )
    goto LABEL_184;
  if ( *(_WORD *)v2 )
  {
    if ( **((_WORD **)this + 34) == 35 )
    {
      v91 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v91 + 1504) )
        *v2 = *(_OWORD *)(v91 + 1504);
    }
  }
  if ( *(_WORD *)v7 )
  {
    if ( **((_WORD **)this + 42) == 35 )
    {
      v92 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v92 + 1520) )
        *v7 = *(_OWORD *)(v92 + 1520);
    }
  }
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 136);
  v4 = *((_QWORD *)this + 2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 64LL);
  v8 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL);
  LODWORD(v151) = v8;
  if ( *(_BYTE *)(v4 + 185) )
    goto LABEL_11;
  if ( !*(_WORD *)v2 )
  {
LABEL_184:
    v149 = WdLogNewEntry5_WdError(v5, v4, v6);
    v45.LowPart = -1073741438;
    *(_QWORD *)(v149 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v149 + 32) = -1073741438LL;
    WdLogEvent5_WdError(v149);
    return v45.LowPart;
  }
  if ( (v8 < 0x6000 || *(_DWORD *)(v4 + 284) == 1297040209) && (v8 < 0x8000 || *(_DWORD *)(v4 + 284) != 1297040209) )
    goto LABEL_11;
  if ( *(_BYTE *)(v4 + 2507) )
    goto LABEL_11;
  v81 = *(_DWORD *)(v4 + 308);
  if ( (v81 & 0x10) != 0 || (v81 & 8) != 0 || (v81 & 0x200) != 0 || (v81 & 0x4000) != 0 || (v81 & 0x2000) != 0 )
    goto LABEL_11;
  v154.QuadPart = 0LL;
  KmdFileVersion = ADAPTER_RENDER::GetKmdFileVersion(this, &v154);
  v97 = KmdFileVersion;
  if ( KmdFileVersion < 0 )
  {
    v98 = WdLogNewEntry5_WdWarning(v95, v94, v96);
    *(_QWORD *)(v98 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v98 + 32) = v97;
    WdLogEvent5_WdWarning(v98);
    goto LABEL_11;
  }
  v99 = 0LL;
  v100 = 0LL;
  v101 = *(const wchar_t **)(*((_QWORD *)this + 2) + 1480LL);
  v161 = 0LL;
  if ( v101 && RtlStringLengthWorkerW(v101, 0x7FFFuLL, &pcchLength) >= 0 )
  {
    v102 = 2 * pcchLength;
    v99 = v101;
    WORD1(v161) = 2 * pcchLength + 2;
    v100 = v101;
  }
  else
  {
    v102 = v161;
  }
  wcscpy(psz, L"00000");
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  if ( RtlStringLengthWorkerW(psz, 0x7FFFuLL, &pcchLength) >= 0 )
  {
    v103 = v100;
    String.Length = 2 * pcchLength;
    String.MaximumLength = 2 * pcchLength + 2;
    String.Buffer = psz;
  }
  v104 = 0;
  v105 = v102;
  v106 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v159.QuadPart = 0LL;
  v107 = v102 >> 1;
  v108 = &v159;
  v160 = 0;
  LODWORD(v109) = -1073741275;
  LODWORD(v152) = v102;
  if ( v107 )
  {
    while ( 1 )
    {
      if ( *v103 == 46 )
      {
        v108->LowPart = v104;
        v108 = (union _LARGE_INTEGER *)((char *)v108 + 4);
        v106 = (unsigned int)(v106 + 1);
      }
      if ( (_DWORD)v106 == 3 )
        break;
      ++v104;
      ++v103;
      if ( v104 >= v107 )
        goto LABEL_117;
    }
    LODWORD(v109) = 0;
  }
LABEL_117:
  if ( (int)v109 < 0 )
  {
    v110 = WdLogNewEntry5_WdError(v106, v108, 2LL);
    *(_QWORD *)(v110 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v110 + 32) = (int)v109;
    WdLogEvent5_WdError(v110);
    goto LABEL_133;
  }
  v111 = 0;
  v112 = (unsigned int *)&v159;
  while ( 1 )
  {
    if ( !v111 )
    {
      v113 = 0;
LABEL_123:
      v114 = *v112;
      goto LABEL_124;
    }
    v114 = v107;
    v113 = *((_DWORD *)&v159 + v111 - 1) + 1;
    if ( v111 != 3 )
      goto LABEL_123;
LABEL_124:
    if ( v113 >= v114 || v114 > v107 )
    {
      v115 = WdLogNewEntry5_WdAssertion(v106, v108);
      *(_QWORD *)(v115 + 24) = 1019LL;
      WdLogEvent5_WdAssertion(v115);
    }
    v116 = RtlUnicodeStringCchCopyStringN(&String, &v99[v113], v114 - v113);
    v109 = v116;
    if ( v116 < 0 )
      break;
    v118 = RtlUnicodeStringToInteger(&String, 0, (PULONG)&v161 + v111);
    v109 = v118;
    if ( v118 < 0 )
      break;
    ++v111;
    ++v112;
    if ( v111 > 3 )
      goto LABEL_132;
  }
  v119 = WdLogNewEntry5_WdError(v106, v108, v117);
  *(_QWORD *)(v119 + 24) = *((_QWORD *)this + 2);
  *(_QWORD *)(v119 + 32) = v109;
  WdLogEvent5_WdError(v119);
LABEL_132:
  v105 = (unsigned int)v152;
LABEL_133:
  v45 = v154;
  HIDWORD(pcchLength) = WORD2(v161) | ((_DWORD)v161 << 16);
  LODWORD(pcchLength) = WORD2(v162) | ((_DWORD)v162 << 16);
  v120 = pcchLength;
  if ( ((int)v109 < 0 || pcchLength != v154.QuadPart)
    && !ADAPTER_RENDER::IsKnownMismatchedVersionedDriver(this, (union _LARGE_INTEGER *)&pcchLength, &v154) )
  {
    if ( dword_1C00A1888 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000100uLL) )
    {
      v125 = (_DWORD *)*((_QWORD *)this + 2);
      *(_QWORD *)&pData[0].OutputDataSize = &pData[1].pInputData;
      *(_QWORD *)&pData[1].InputDataSize = &v158;
      *(_QWORD *)&pData[1].OutputDataSize = &v159;
      pData[0].hKmdProcessHandle = (HANDLE)2;
      *(_QWORD *)&pData[1].Type = v99;
      pData[1].pInputData = (void *)v105;
      v158 = v120;
      pData[1].pOutputData = (void *)8;
      v159 = v45;
      pData[1].hKmdProcessHandle = (HANDLE)8;
      LODWORD(v152) = v125[71];
      v164 = (PVOID *)&v152;
      v165 = 4LL;
      LODWORD(v151) = v125[72];
      v166 = &v151;
      v167 = 4LL;
      LODWORD(v155) = v125[73];
      v168 = &v155;
      v169 = 4LL;
      v154.LowPart = v125[74];
      v170 = &v154;
      v171 = 4LL;
      LODWORD(pcchLength) = v125[75];
      p_pcchLength = &pcchLength;
      v173 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0072B14, 0LL, v124, 0xBu, (EVENT_DATA_DESCRIPTOR *)pData);
    }
    v126 = (_QWORD *)WdLogNewEntry5_WdError(v122, v121, v123);
    v127 = *((_QWORD *)this + 2);
    v126[5] = v45.QuadPart;
    v45.LowPart = -1073741438;
    v126[3] = v127;
    v126[7] = -1073741438LL;
    v126[4] = v120;
    v126[6] = (int)v109;
    WdLogEvent5_WdError(v126);
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x80BuLL, 0LL, 0LL, 0LL);
    LOBYTE(v128) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v128) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "A mismatch between the PNP/INF version and the KMD file version on the graphics adapter has been detected. The a"
        "dapter will fail to start.");
      __debugbreak();
    }
    return v45.LowPart;
  }
  v8 = v151;
LABEL_11:
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize((DXGADAPTER **)this);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)((char *)this + 1120),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) < 0 )
  {
    v129 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v45.LowPart = -1073741801;
    v129[3] = this;
    v129[4] = -1073741801LL;
    v129[5] = 0LL;
    WdLogEvent5_WdWarning(v129);
    return v45.LowPart;
  }
  *((_BYTE *)this + 1073) = 1;
  BYTE1(v151) = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v151, v10);
  v13 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( !*((_BYTE *)v13 + 185) )
  {
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v13);
    v17 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(v16, v15) + (IsDxgmms2 != 0 ? 8 : 0) + 104);
    *((_QWORD *)this + 68) = v17;
    Global = DXGGLOBAL::GetGlobal(v17, v18);
    v21 = IsDxgmms2 != 0 ? 8 : 0;
    v22 = *(_QWORD *)((char *)Global + v21 + 120);
    *((_QWORD *)this + 65) = v22;
    if ( !*((_QWORD *)this + 68) || !v22 )
    {
LABEL_160:
      v145 = WdLogNewEntry5_WdError(v21, v22, v20);
      v45.QuadPart = -1073741438LL;
      goto LABEL_178;
    }
  }
  if ( (unsigned __int8)DpiKsrIsSoftBoot() )
    DpiKsrGetSavedAdapterState(*(_QWORD *)(*((_QWORD *)this + 2) + 192LL), &pcchLength, &v159);
  v23 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v23 + 1916) & 0x40) != 0 )
  {
    v130 = *(unsigned int *)(v23 + 256);
    v131 = 144 * v130;
    if ( !is_mul_ok(v130, 0x90uLL) )
      v131 = -1LL;
    v132 = operator new[](v131, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 126) = v132;
    if ( !v132 )
    {
      v137 = WdLogNewEntry5_WdLowResource(v134, v133, v135, v136);
      *(_QWORD *)(v137 + 24) = 1153LL;
      goto LABEL_174;
    }
    memset(v132, 0, 144 * v130);
    v138 = 0;
    if ( (_DWORD)v130 )
    {
      while ( 1 )
      {
        v139 = (DXGADAPTER *)*((_QWORD *)this + 2);
        *(_QWORD *)&v156.Type = 13LL;
        *(_QWORD *)&v156.InputDataSize = 4LL;
        *(_QWORD *)&v156.Flags.0 = 0LL;
        HIDWORD(v156.hKmdProcessHandle) = 0;
        v140 = (unsigned int *)(*((_QWORD *)this + 126) + 144LL * v138);
        v156.pOutputData = v140;
        v156.OutputDataSize = 24;
        LODWORD(pcchLength) = v138;
        v156.pInputData = &pcchLength;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v139, &v156, v20) < 0 )
          goto LABEL_160;
        v141 = v140[4];
        if ( (unsigned int)(v141 - 2) > 4 )
        {
          v144 = WdLogNewEntry5_WdError(v141, v22, v20);
          *(_QWORD *)(v144 + 24) = 1185LL;
          WdLogEvent5_WdError(v144);
          v45.LowPart = -1073741438;
          goto LABEL_80;
        }
        if ( v8 < 0x5014 )
          *v140 &= ~0x20u;
        v40 = 0;
        if ( (_DWORD)v141 )
          break;
LABEL_156:
        if ( ++v138 >= (unsigned int)v130 )
          goto LABEL_18;
      }
      while ( 1 )
      {
        *(_QWORD *)&pData[0].Flags.0 = 0LL;
        HIDWORD(pData[0].hKmdProcessHandle) = 0;
        *(_QWORD *)&pData[0].Type = 14LL;
        *(_QWORD *)&pData[0].InputDataSize = 4LL;
        LOWORD(v152) = v40;
        WORD1(v152) = v138;
        pData[0].pInputData = &v152;
        v142 = (DXGADAPTER *)*((_QWORD *)this + 2);
        pData[0].pOutputData = &v140[4 * v40 + 6 + v40];
        *(_QWORD *)&pData[0].OutputDataSize = v8 < 0x5012 ? 16 : 20;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v142, pData, v20) < 0 )
          goto LABEL_160;
        v143 = v140[4 * v40 + 10 + v40];
        if ( (((_DWORD)v143 - 1) & (unsigned int)v143) != 0 )
        {
          v146 = (_QWORD *)WdLogNewEntry5_WdError(v143, v22, v20);
LABEL_171:
          v146[4] = v40;
          v146[3] = this;
          WdLogEvent5_WdError(v146);
          v45.LowPart = -1073741811;
          goto LABEL_80;
        }
        if ( ++v40 >= v140[4] )
          goto LABEL_156;
      }
    }
  }
LABEL_18:
  v24 = *((_QWORD *)this + 2);
  if ( *(int *)(v24 + 2184) < 4864 )
  {
LABEL_49:
    v49 = DXGADAPTER::CheckMcdmDdiSubmission((DXGADAPTER *)v24);
    if ( v49 < 0 )
    {
      v45.LowPart = v49;
      goto LABEL_80;
    }
    v52 = *((_QWORD *)this + 2);
    if ( !*(_BYTE *)(v52 + 185) )
    {
      v53 = *((_QWORD *)this + 65);
      v54 = DXGGLOBAL::GetGlobal(v51, v50);
      v55 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v53 + 8) + 24LL))(
              this,
              *(_QWORD *)(v52 + 192),
              (__int64)v54 + 96);
      *((_QWORD *)this + 66) = v55;
      if ( !v55 )
        goto LABEL_175;
      v56 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 24LL))(this);
      *((_QWORD *)this + 69) = v56;
      if ( !v56 )
        goto LABEL_175;
    }
    memset(pData, 0, sizeof(pData));
    HIDWORD(pData[0].pInputData) |= 1u;
    LODWORD(Flags) = 11;
    LODWORD(pData[0].pInputData) = 3;
    SynchronizationObjectInternal = CreateSynchronizationObjectInternal(
                                      0LL,
                                      1,
                                      (__int64)this,
                                      (__int64)pData,
                                      Flags,
                                      (DXGSYNCOBJECT **)this + 84,
                                      0LL,
                                      0LL);
    v45.QuadPart = SynchronizationObjectInternal;
    if ( SynchronizationObjectInternal >= 0 )
    {
      v60 = *((_QWORD *)this + 2);
      v61 = *(_DWORD *)(v60 + 2184);
      if ( v61 >= 4864 )
      {
        if ( v61 < 0x2000 )
          v62 = 1;
        else
          v62 = *(_DWORD *)(v60 + 256);
        LODWORD(v152) = 0;
        if ( v62 )
        {
          v63 = 0LL;
          do
          {
            v64 = *(unsigned __int16 *)(352 * v63 + *(_QWORD *)(*((_QWORD *)this + 2) + 2440LL));
            v66 = *(unsigned __int16 *)(352 * v63 + *(_QWORD *)(*((_QWORD *)this + 2) + 2440LL));
            v65 = 4 * v66;
            v67 = v64;
            if ( !is_mul_ok(v66, 4uLL) )
              v65 = -1LL;
            v68 = (unsigned int *)operator new[](v65, 0x4B677844u, (POOL_TYPE)512);
            v70 = v68;
            if ( !v68 )
              goto LABEL_175;
            LODWORD(pcchLength) = (_DWORD)v152;
            pData[0].pOutputData = v68;
            pData[0].OutputDataSize = 4 * v64;
            v71 = (size_t *)&v152;
            v72 = (DXGADAPTER *)*((_QWORD *)this + 2);
            if ( v62 <= 1 )
              v71 = &pcchLength;
            pData[0].pInputData = v71;
            *(_QWORD *)&pData[0].Type = 10LL;
            *(_QWORD *)&pData[0].InputDataSize = 4LL;
            *(_QWORD *)&pData[0].Flags.0 = 0LL;
            HIDWORD(pData[0].hKmdProcessHandle) = 0;
            v154.LowPart = DXGADAPTER::DdiQueryAdapterInfo(v72, pData, v69);
            LowPart = v154.LowPart;
            LOBYTE(v76) = 1;
            if ( (v154.LowPart & 0x80000000) != 0 )
            {
              LOBYTE(v76) = 0;
            }
            else
            {
              if ( !v64 )
                goto LABEL_74;
              v77 = 0LL;
              v78 = v70;
              do
              {
                v79 = *v78;
                if ( (unsigned int)(v79 - 1) <= 0x1E || (unsigned int)v79 >= 0x41 )
                {
                  v147 = (_QWORD *)WdLogNewEntry5_WdError(v76, v73, v74);
                  v147[3] = this;
                  v147[4] = v79;
                  v147[5] = v77;
                  WdLogEvent5_WdError(v147);
                  LOBYTE(v76) = 0;
                }
                else if ( !(_DWORD)v79 )
                {
                  *((_BYTE *)this + 728) = 1;
                }
                ++v77;
                ++v78;
                --v67;
              }
              while ( v67 );
              LowPart = v154.LowPart;
            }
            if ( !(_BYTE)v76 )
            {
              operator delete[](v70);
              v70 = 0LL;
              *((_BYTE *)this + 728) = 0;
              if ( LowPart >= 0 )
                goto LABEL_160;
              v148 = WdLogNewEntry5_WdEvent(v21);
              *(_QWORD *)(v148 + 24) = this;
              WdLogEvent5_WdEvent(v148);
            }
LABEL_74:
            *(_QWORD *)(352LL * (unsigned int)v152 + *(_QWORD *)(*((_QWORD *)this + 2) + 2440LL) + 32) = v70;
            v63 = (unsigned int)((_DWORD)v152 + 1);
            LODWORD(v152) = v63;
          }
          while ( (unsigned int)v63 < v62 );
        }
        if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
        {
          *((_QWORD *)this + 98) = -500000LL;
          KeInitializeTimer((PKTIMER)((char *)this + 792));
          KeInitializeDpc((PRKDPC)((char *)this + 856), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
        }
        if ( *((_BYTE *)this + 728) )
          KeInitializeSpinLock((PKSPIN_LOCK)this + 125);
      }
      v45.LowPart = 0;
      goto LABEL_80;
    }
    v145 = WdLogNewEntry5_WdError(v58, v50, v59);
LABEL_178:
    *(_QWORD *)(v145 + 24) = this;
    *(union _LARGE_INTEGER *)(v145 + 32) = v45;
LABEL_179:
    WdLogEvent5_WdError(v145);
    goto LABEL_80;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2)) )
    {
      if ( *(int *)(v24 + 2184) < 8960 )
      {
        *(_DWORD *)(v24 + 1912) &= 0xFFFFF87F;
        v24 = *((_QWORD *)this + 2);
      }
      goto LABEL_49;
    }
    v26 = (unsigned __int16 *)(*(_QWORD *)(v24 + 2440) + 352LL * i);
    v27 = *v26;
    v29 = 74LL * *v26;
    v28 = (*v26 * (unsigned __int128)0x4AuLL) >> 64 != 0;
    v154.LowPart = v27;
    if ( v28 )
      v29 = -1LL;
    v30 = (char *)operator new(v29, 0x4B677844u, 1, PagedPool);
    v152 = v30;
    if ( !v30 )
      break;
    *((_QWORD *)v26 + 3) = v30;
    v155 = *((_QWORD *)this + 2);
    v35 = 44LL * v27;
    if ( !is_mul_ok(v27, 0x2CuLL) )
      v35 = -1LL;
    v36 = operator new(v35, 0x4B677844u, 1, PagedPool);
    if ( !v36 )
      break;
    *((_QWORD *)v26 + 14) = v36;
    v37 = 8LL * v27;
    if ( !is_mul_ok(v27, 8uLL) )
      v37 = -1LL;
    v38 = operator new(v37, 0x4B677844u, 1, PagedPool);
    if ( !v38 )
      break;
    *((_QWORD *)v26 + 15) = v38;
    v39 = (int *)*((_QWORD *)this + 2);
    if ( v39[613] >= 2400 )
    {
      LODWORD(pcchLength) = i;
      v156.pInputData = &pcchLength;
      *(_QWORD *)&v156.Type = 26LL;
      v156.pOutputData = v26 + 96;
      *(_QWORD *)&v156.InputDataSize = 4LL;
      *(_QWORD *)&v156.Flags.0 = 0LL;
      HIDWORD(v156.hKmdProcessHandle) = 0;
      v156.OutputDataSize = 28;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v39, &v156, v33) < 0 )
      {
        v85 = WdLogNewEntry5_WdWarning(v83, v82, v84);
        *(_QWORD *)(v85 + 24) = this;
        WdLogEvent5_WdWarning(v85);
      }
      v86 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v156.pOutputData = v26 + 110;
      v156.Type = DXGKQAITYPE_GPUVERSION;
      v156.OutputDataSize = 128;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v86, &v156, v84) < 0 )
      {
        v90 = WdLogNewEntry5_WdWarning(v88, v87, v89);
        *(_QWORD *)(v90 + 24) = this;
        WdLogEvent5_WdWarning(v90);
      }
    }
    v40 = 0;
    if ( v27 )
    {
      v41 = v152;
      v42 = v152 + 68;
      while ( 1 )
      {
        v45.LowPart = DXGADAPTER::DdiGetNodeMetadata(
                        *((DXGADAPTER **)this + 2),
                        v40 | (i << 16),
                        (struct _DXGK_NODEMETADATA *)&v41[74 * v40]);
        if ( (v45.LowPart & 0x80000000) != 0 )
          break;
        if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1728LL) >= 0x9000u )
        {
          v48 = *(_DWORD *)v42;
          if ( (*(_DWORD *)v42 & 1) != 0 )
          {
            if ( !v42[4] && !v42[5] )
            {
              v146 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v46);
              v146[5] = 1340LL;
              goto LABEL_171;
            }
            *((_BYTE *)this + 1513) = 1;
            v48 = *(_DWORD *)v42;
          }
          if ( (v48 & 0xFFF8) != 0 )
          {
            v146 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v46);
            v146[5] = 1349LL;
            goto LABEL_171;
          }
        }
        else
        {
          *(_DWORD *)v42 = 0;
        }
        v47 = v155;
        if ( v42[4] )
        {
          if ( (*(_DWORD *)(v155 + 1916) & 0x40) == 0 )
          {
            v146 = (_QWORD *)WdLogNewEntry5_WdError(v155, v43, v46);
            v146[5] = 1358LL;
            goto LABEL_171;
          }
          if ( v40 == v26[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2490LL) )
            *((_BYTE *)v26 + 40) = 1;
        }
        if ( v42[5] )
        {
          if ( (*(_DWORD *)(v47 + 1916) & 0x80u) == 0 )
          {
            v146 = (_QWORD *)WdLogNewEntry5_WdError(v47, v43, v46);
            v146[5] = 1371LL;
            goto LABEL_171;
          }
          if ( v40 == v26[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2490LL) )
            *((_BYTE *)v26 + 40) = 1;
        }
        v41 = v152;
        ++v40;
        v42 += 74;
        if ( v40 >= v154.LowPart )
          goto LABEL_39;
      }
      v145 = WdLogNewEntry5_WdError(v44, v43, v46);
      *(_QWORD *)(v145 + 24) = this;
      goto LABEL_179;
    }
LABEL_39:
    ;
  }
  v137 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
  *(_QWORD *)(v137 + 24) = this;
LABEL_174:
  WdLogEvent5_WdLowResource(v137);
LABEL_175:
  v45.LowPart = -1073741801;
LABEL_80:
  if ( BYTE1(v151) )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v151, v50);
  return v45.LowPart;
}
