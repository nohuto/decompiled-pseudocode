/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C014FB48 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     RtlStringLengthWorkerW @ 0x1C000211C (RtlStringLengthWorkerW.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000352C (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C00102E0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0010310 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0011444 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016318 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C0031954 (-RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00AD028 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0159674 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0159990 (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C015BB5C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?IsKnownMismatchedVersionedDriver@ADAPTER_RENDER@@AEAA_NPEAT_LARGE_INTEGER@@0@Z @ 0x1C01C6C7C (-IsKnownMismatchedVersionedDriver@ADAPTER_RENDER@@AEAA_NPEAT_LARGE_INTEGER@@0@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  _OWORD *v2; // rdi
  __int64 v4; // rcx
  _OWORD *v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned int VidSchSibmitDataSize; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rcx
  unsigned __int8 IsDxgmms2; // bl
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned int i; // r12d
  unsigned __int16 *v22; // r15
  DWORD v23; // r14d
  bool v24; // of
  SIZE_T v25; // rax
  char *v26; // rax
  __int64 v27; // rcx
  SIZE_T v28; // rax
  PVOID v29; // rax
  SIZE_T v30; // rax
  PVOID v31; // rax
  DXGADAPTER *v32; // rbx
  __int64 v33; // rdi
  char *v34; // rdx
  _BYTE *v35; // r14
  __int64 v36; // rcx
  union _LARGE_INTEGER v37; // rbx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rbx
  struct DXGGLOBAL *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int SynchronizationObjectInternal; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // r14d
  __int64 v49; // rax
  unsigned int v50; // ebx
  SIZE_T v51; // rax
  unsigned __int64 v52; // kr00_8
  __int64 v53; // r13
  unsigned int *v54; // rdi
  const GUID *v55; // r8
  signed int LowPart; // r15d
  __int64 v57; // rcx
  __int64 v58; // r12
  unsigned int *v59; // r15
  __int64 v60; // rbx
  int v62; // eax
  const GUID *v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  const GUID *v66; // r8
  __int64 v67; // rax
  DXGADAPTER *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  int KmdFileVersion; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rbx
  __int64 v80; // rax
  const wchar_t *v81; // r13
  const wchar_t *v82; // r14
  const wchar_t *v83; // rbx
  unsigned __int16 v84; // di
  const wchar_t *v85; // r11
  unsigned int v86; // eax
  unsigned int v87; // r12d
  __int64 v88; // rcx
  unsigned int v89; // r15d
  union _LARGE_INTEGER *v90; // rdx
  __int64 v91; // r14
  __int64 v92; // rax
  unsigned int v93; // ebx
  unsigned int *v94; // r12
  unsigned int v95; // r14d
  unsigned int v96; // edi
  __int64 v97; // rax
  int v98; // eax
  NTSTATUS v99; // eax
  __int64 v100; // rax
  size_t v101; // rdi
  __int64 v102; // rcx
  const GUID *v103; // r9
  _DWORD *v104; // rdx
  _QWORD *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rcx
  _QWORD *v108; // rax
  unsigned __int64 v109; // r15
  SIZE_T v110; // rax
  PVOID v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // r14
  unsigned int *v115; // rbx
  DXGADAPTER *v116; // rcx
  const GUID *v117; // r8
  DXGADAPTER *v118; // rcx
  const GUID *v119; // r8
  __int64 v120; // rax
  __int64 v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rax
  struct _OBJECT_HANDLE_INFORMATION *Flags; // [rsp+28h] [rbp-E0h]
  __int64 v128; // [rsp+48h] [rbp-C0h] BYREF
  char *v129; // [rsp+50h] [rbp-B8h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-B0h] BYREF
  union _LARGE_INTEGER v131; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v132; // [rsp+68h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v133; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING String; // [rsp+A0h] [rbp-68h] BYREF
  size_t v135; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v136; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v137; // [rsp+C0h] [rbp-48h]
  union _LARGE_INTEGER v138; // [rsp+C8h] [rbp-40h] BYREF
  int v139; // [rsp+D0h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO pData[2]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID *v141; // [rsp+138h] [rbp+30h]
  __int64 v142; // [rsp+140h] [rbp+38h]
  __int64 *v143; // [rsp+148h] [rbp+40h]
  __int64 v144; // [rsp+150h] [rbp+48h]
  __int64 *v145; // [rsp+158h] [rbp+50h]
  __int64 v146; // [rsp+160h] [rbp+58h]
  union _LARGE_INTEGER *v147; // [rsp+168h] [rbp+60h]
  __int64 v148; // [rsp+170h] [rbp+68h]
  size_t *p_pcchLength; // [rsp+178h] [rbp+70h]
  __int64 v150; // [rsp+180h] [rbp+78h]
  wchar_t psz[8]; // [rsp+188h] [rbp+80h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = (_OWORD *)((char *)this + 264);
  *(_OWORD *)((char *)this + 392) = *(_OWORD *)(v1 + 1400);
  *(_OWORD *)((char *)this + 408) = *(_OWORD *)(v1 + 1416);
  *(_OWORD *)((char *)this + 456) = *(_OWORD *)(v1 + 1336);
  *((_OWORD *)this + 30) = *(_OWORD *)(v1 + 1360);
  *((_DWORD *)this + 118) = *(_DWORD *)(v1 + 1352);
  *((_DWORD *)this + 119) = *(_DWORD *)(v1 + 1356);
  *((_DWORD *)this + 124) = *(_DWORD *)(v1 + 1376);
  *((_DWORD *)this + 125) = *(_DWORD *)(v1 + 1380);
  *(_OWORD *)((char *)this + 424) = *(_OWORD *)(v1 + 1432);
  *(_OWORD *)((char *)this + 440) = *(_OWORD *)(v1 + 1448);
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(v1 + 1296),
              (struct _UNICODE_STRING *)((char *)this + 264)) < 0 )
    goto LABEL_179;
  v5 = (_OWORD *)((char *)this + 328);
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 1312LL),
              (struct _UNICODE_STRING *)((char *)this + 328)) < 0 )
    goto LABEL_179;
  if ( *(_WORD *)v2 )
  {
    if ( **((_WORD **)this + 34) == 35 )
    {
      v73 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v73 + 1488) )
        *v2 = *(_OWORD *)(v73 + 1488);
    }
  }
  if ( *(_WORD *)v5 )
  {
    if ( **((_WORD **)this + 42) == 35 )
    {
      v74 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v74 + 1504) )
        *v5 = *(_OWORD *)(v74 + 1504);
    }
  }
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 136);
  v6 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 64LL);
  v7 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL);
  LODWORD(v128) = v7;
  if ( *(_BYTE *)(v6 + 185) )
    goto LABEL_11;
  if ( !*(_WORD *)v2 )
  {
LABEL_179:
    v126 = WdLogNewEntry5_WdError(v4);
    v37.LowPart = -1073741438;
    *(_QWORD *)(v126 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v126 + 32) = -1073741438LL;
    WdLogEvent5_WdError(v126);
    return v37.LowPart;
  }
  if ( (v7 < 0x6000 || *(_DWORD *)(v6 + 284) == 1297040209) && (v7 < 0x8000 || *(_DWORD *)(v6 + 284) != 1297040209) )
    goto LABEL_11;
  if ( *(_BYTE *)(v6 + 2475) )
    goto LABEL_11;
  v62 = *(_DWORD *)(v6 + 308);
  if ( (v62 & 0x10) != 0 || (v62 & 8) != 0 || (v62 & 0x200) != 0 || (v62 & 0x4000) != 0 || (v62 & 0x2000) != 0 )
    goto LABEL_11;
  v131.QuadPart = 0LL;
  KmdFileVersion = ADAPTER_RENDER::GetKmdFileVersion(this, &v131);
  v79 = KmdFileVersion;
  if ( KmdFileVersion < 0 )
  {
    v80 = WdLogNewEntry5_WdWarning(v77, v76, v78);
    *(_QWORD *)(v80 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v80 + 32) = v79;
    WdLogEvent5_WdWarning(v80);
    goto LABEL_11;
  }
  v81 = 0LL;
  v82 = 0LL;
  v83 = *(const wchar_t **)(*((_QWORD *)this + 2) + 1464LL);
  v136 = 0LL;
  if ( v83 && RtlStringLengthWorkerW(v83, 0x7FFFuLL, &pcchLength) >= 0 )
  {
    v84 = 2 * pcchLength;
    v81 = v83;
    WORD1(v136) = 2 * pcchLength + 2;
    v82 = v83;
  }
  else
  {
    v84 = v136;
  }
  wcscpy(psz, L"00000");
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  if ( RtlStringLengthWorkerW(psz, 0x7FFFuLL, &pcchLength) >= 0 )
  {
    v85 = v82;
    String.Length = 2 * pcchLength;
    String.MaximumLength = 2 * pcchLength + 2;
    String.Buffer = psz;
  }
  v86 = 0;
  v87 = v84;
  v88 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138.QuadPart = 0LL;
  v89 = v84 >> 1;
  v90 = &v138;
  v139 = 0;
  LODWORD(v91) = -1073741275;
  LODWORD(v129) = v84;
  if ( v89 )
  {
    while ( 1 )
    {
      if ( *v85 == 46 )
      {
        v90->LowPart = v86;
        v90 = (union _LARGE_INTEGER *)((char *)v90 + 4);
        v88 = (unsigned int)(v88 + 1);
      }
      if ( (_DWORD)v88 == 3 )
        break;
      ++v86;
      ++v85;
      if ( v86 >= v89 )
        goto LABEL_114;
    }
    LODWORD(v91) = 0;
  }
LABEL_114:
  if ( (int)v91 < 0 )
  {
    v92 = WdLogNewEntry5_WdError(v88);
    *(_QWORD *)(v92 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v92 + 32) = (int)v91;
    WdLogEvent5_WdError(v92);
    goto LABEL_130;
  }
  v93 = 0;
  v94 = (unsigned int *)&v138;
  while ( 1 )
  {
    if ( !v93 )
    {
      v95 = 0;
LABEL_120:
      v96 = *v94;
      goto LABEL_121;
    }
    v96 = v89;
    v95 = *((_DWORD *)&v138 + v93 - 1) + 1;
    if ( v93 != 3 )
      goto LABEL_120;
LABEL_121:
    if ( v95 >= v96 || v96 > v89 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v88);
      *(_QWORD *)(v97 + 24) = 1020LL;
      WdLogEvent5_WdAssertion(v97);
    }
    v98 = RtlUnicodeStringCchCopyStringN(&String, &v81[v95], v96 - v95);
    v91 = v98;
    if ( v98 < 0 )
      break;
    v99 = RtlUnicodeStringToInteger(&String, 0, (PULONG)&v136 + v93);
    v91 = v99;
    if ( v99 < 0 )
      break;
    ++v93;
    ++v94;
    if ( v93 > 3 )
      goto LABEL_129;
  }
  v100 = WdLogNewEntry5_WdError(v88);
  *(_QWORD *)(v100 + 24) = *((_QWORD *)this + 2);
  *(_QWORD *)(v100 + 32) = v91;
  WdLogEvent5_WdError(v100);
LABEL_129:
  v87 = (unsigned int)v129;
LABEL_130:
  v37 = v131;
  HIDWORD(pcchLength) = WORD2(v136) | ((_DWORD)v136 << 16);
  LODWORD(pcchLength) = WORD2(v137) | ((_DWORD)v137 << 16);
  v101 = pcchLength;
  if ( ((int)v91 < 0 || pcchLength != v131.QuadPart)
    && !ADAPTER_RENDER::IsKnownMismatchedVersionedDriver(this, (union _LARGE_INTEGER *)&pcchLength, &v131) )
  {
    if ( dword_1C008D838 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x400000000100uLL) )
    {
      v104 = (_DWORD *)*((_QWORD *)this + 2);
      *(_QWORD *)&pData[0].OutputDataSize = &pData[1].pInputData;
      *(_QWORD *)&pData[1].InputDataSize = &v135;
      *(_QWORD *)&pData[1].OutputDataSize = &v138;
      pData[0].hKmdProcessHandle = (HANDLE)2;
      *(_QWORD *)&pData[1].Type = v81;
      pData[1].pInputData = (void *)v87;
      v135 = v101;
      pData[1].pOutputData = (void *)8;
      v138 = v37;
      pData[1].hKmdProcessHandle = (HANDLE)8;
      LODWORD(v129) = v104[71];
      v141 = (PVOID *)&v129;
      v142 = 4LL;
      LODWORD(v128) = v104[72];
      v143 = &v128;
      v144 = 4LL;
      LODWORD(v132) = v104[73];
      v145 = &v132;
      v146 = 4LL;
      v131.LowPart = v104[74];
      v147 = &v131;
      v148 = 4LL;
      LODWORD(pcchLength) = v104[75];
      p_pcchLength = &pcchLength;
      v150 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006A3FF, 0LL, v103, 0xBu, (EVENT_DATA_DESCRIPTOR *)pData);
    }
    v105 = (_QWORD *)WdLogNewEntry5_WdError(v102);
    v106 = *((_QWORD *)this + 2);
    v105[5] = v37.QuadPart;
    v37.LowPart = -1073741438;
    v105[3] = v106;
    v105[7] = -1073741438LL;
    v105[4] = v101;
    v105[6] = (int)v91;
    WdLogEvent5_WdError(v105);
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x80BuLL, 0LL, 0LL, 0LL);
    LOBYTE(v107) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v107) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "A mismatch between the PNP/INF version and the KMD file version on the graphics adapter has been detected. The a"
        "dapter will fail to start.");
      __debugbreak();
    }
    return v37.LowPart;
  }
  v7 = v128;
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
    v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v37.LowPart = -1073741801;
    v108[3] = this;
    v108[4] = -1073741801LL;
    v108[5] = 0LL;
    WdLogEvent5_WdWarning(v108);
    return v37.LowPart;
  }
  *((_BYTE *)this + 1073) = 1;
  BYTE1(v128) = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v128);
  v12 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( !*((_BYTE *)v12 + 185) )
  {
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v12);
    v15 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(v14) + (IsDxgmms2 != 0 ? 8 : 0) + 104);
    *((_QWORD *)this + 68) = v15;
    Global = DXGGLOBAL::GetGlobal(v15);
    v17 = IsDxgmms2 != 0 ? 8 : 0;
    v18 = *(_QWORD *)((char *)Global + v17 + 120);
    *((_QWORD *)this + 65) = v18;
    if ( !*((_QWORD *)this + 68) || !v18 )
    {
LABEL_157:
      v121 = WdLogNewEntry5_WdError(v17);
      v37.QuadPart = -1073741438LL;
      goto LABEL_173;
    }
  }
  v19 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v19 + 1892) & 0x40) != 0 )
  {
    v109 = *(unsigned int *)(v19 + 256);
    v110 = 144 * v109;
    if ( !is_mul_ok(v109, 0x90uLL) )
      v110 = -1LL;
    v111 = operator new(v110, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 126) = v111;
    if ( !v111 )
    {
      v113 = WdLogNewEntry5_WdLowResource(v112);
      *(_QWORD *)(v113 + 24) = 1139LL;
      goto LABEL_170;
    }
    memset(v111, 0, 144 * v109);
    v114 = 0LL;
    if ( (_DWORD)v109 )
    {
      while ( 1 )
      {
        v115 = (unsigned int *)(*((_QWORD *)this + 126) + 144 * v114);
        memset(&v133, 0, sizeof(v133));
        v116 = (DXGADAPTER *)*((_QWORD *)this + 2);
        v133.pInputData = &pcchLength;
        v133.Type = DXGKQAITYPE_GPUMMUCAPS;
        v133.pOutputData = v115;
        v133.OutputDataSize = 24;
        LODWORD(pcchLength) = v114;
        v133.InputDataSize = 4;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v116, &v133, v117) < 0 )
          goto LABEL_157;
        v19 = v115[4];
        if ( (unsigned int)(v19 - 2) > 4 )
        {
          v120 = WdLogNewEntry5_WdError(v19);
          *(_QWORD *)(v120 + 24) = 1171LL;
          WdLogEvent5_WdError(v120);
          v37.LowPart = -1073741438;
          goto LABEL_77;
        }
        if ( v7 < 0x5014 )
          *v115 &= ~0x20u;
        v33 = 0LL;
        if ( (_DWORD)v19 )
          break;
LABEL_153:
        v114 = (unsigned int)(v114 + 1);
        if ( (unsigned int)v114 >= (unsigned int)v109 )
          goto LABEL_16;
      }
      while ( 1 )
      {
        memset(pData, 0, 0x30uLL);
        pData[0].pInputData = &v129;
        pData[0].Type = DXGKQAITYPE_PAGETABLELEVELDESC;
        LOWORD(v129) = v33;
        WORD1(v129) = v114;
        pData[0].InputDataSize = 4;
        v118 = (DXGADAPTER *)*((_QWORD *)this + 2);
        pData[0].OutputDataSize = v7 < 0x5012 ? 16 : 20;
        pData[0].pOutputData = &v115[4 * v33 + 6 + (unsigned int)v33];
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v118, pData, v119) < 0 )
          goto LABEL_157;
        v19 = v115[4 * v33 + 10 + (unsigned int)v33];
        if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
        {
          v122 = (_QWORD *)WdLogNewEntry5_WdError(v19);
LABEL_167:
          v122[4] = (unsigned int)v33;
          v122[3] = this;
          WdLogEvent5_WdError(v122);
          v37.LowPart = -1073741811;
          goto LABEL_77;
        }
        v33 = (unsigned int)(v33 + 1);
        if ( (unsigned int)v33 >= v115[4] )
          goto LABEL_153;
      }
    }
  }
LABEL_16:
  v20 = *((_QWORD *)this + 2);
  if ( *(int *)(v20 + 2160) < 4864 )
  {
LABEL_47:
    if ( !*(_BYTE *)(v20 + 185) )
    {
      v40 = *((_QWORD *)this + 65);
      v41 = DXGGLOBAL::GetGlobal(v19);
      v42 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v40 + 8) + 24LL))(
              this,
              *(_QWORD *)(v20 + 192),
              (__int64)v41 + 96);
      *((_QWORD *)this + 66) = v42;
      if ( !v42 )
        goto LABEL_171;
      v43 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 24LL))(this);
      *((_QWORD *)this + 69) = v43;
      if ( !v43 )
        goto LABEL_171;
    }
    memset(pData, 0, sizeof(pData));
    HIDWORD(pData[0].pInputData) |= 1u;
    LODWORD(Flags) = 11;
    LODWORD(pData[0].pInputData) = 3;
    SynchronizationObjectInternal = CreateSynchronizationObjectInternal(
                                      0LL,
                                      1,
                                      this,
                                      (__int64)pData,
                                      Flags,
                                      (char *)this + 672,
                                      0LL,
                                      0LL);
    v37.QuadPart = SynchronizationObjectInternal;
    if ( SynchronizationObjectInternal >= 0 )
    {
      v46 = *((_QWORD *)this + 2);
      v47 = *(_DWORD *)(v46 + 2160);
      if ( v47 >= 4864 )
      {
        if ( v47 < 0x2000 )
          v48 = 1;
        else
          v48 = *(_DWORD *)(v46 + 256);
        LODWORD(v129) = 0;
        if ( v48 )
        {
          v49 = 0LL;
          do
          {
            v50 = *(unsigned __int16 *)(352 * v49 + *(_QWORD *)(*((_QWORD *)this + 2) + 2416LL));
            v52 = *(unsigned __int16 *)(352 * v49 + *(_QWORD *)(*((_QWORD *)this + 2) + 2416LL));
            v51 = 4 * v52;
            v53 = v50;
            if ( !is_mul_ok(v52, 4uLL) )
              v51 = -1LL;
            v54 = (unsigned int *)operator new[](v51, 0x4B677844u, (POOL_TYPE)512);
            if ( !v54 )
              goto LABEL_171;
            LODWORD(pcchLength) = (_DWORD)v129;
            v133.Type = DXGKQAITYPE_HISTORYBUFFERPRECISION;
            v133.pInputData = &pcchLength;
            v133.InputDataSize = 4;
            v133.pOutputData = v54;
            v133.OutputDataSize = 4 * v50;
            if ( v48 > 1 )
            {
              v133.InputDataSize = 4;
              v133.pInputData = &v129;
            }
            v131.LowPart = DXGADAPTER::DdiQueryAdapterInfo(*((DXGADAPTER **)this + 2), &v133, v55);
            LowPart = v131.LowPart;
            LOBYTE(v57) = 1;
            if ( (v131.LowPart & 0x80000000) != 0 )
            {
              LOBYTE(v57) = 0;
            }
            else
            {
              if ( !v50 )
                goto LABEL_71;
              v58 = 0LL;
              v59 = v54;
              do
              {
                v60 = *v59;
                if ( (unsigned int)(v60 - 1) <= 0x1E || (unsigned int)v60 >= 0x41 )
                {
                  v123 = (_QWORD *)WdLogNewEntry5_WdError(v57);
                  v123[3] = this;
                  v123[4] = v60;
                  v123[5] = v58;
                  WdLogEvent5_WdError(v123);
                  LOBYTE(v57) = 0;
                }
                else if ( !(_DWORD)v60 )
                {
                  *((_BYTE *)this + 728) = 1;
                }
                ++v58;
                ++v59;
                --v53;
              }
              while ( v53 );
              LowPart = v131.LowPart;
            }
            if ( !(_BYTE)v57 )
            {
              operator delete[](v54);
              v54 = 0LL;
              *((_BYTE *)this + 728) = 0;
              if ( LowPart >= 0 )
                goto LABEL_157;
              v125 = WdLogNewEntry5_WdEvent(v17, v124);
              *(_QWORD *)(v125 + 24) = this;
              WdLogEvent5_WdEvent(v125);
            }
LABEL_71:
            *(_QWORD *)(352LL * (unsigned int)v129 + *(_QWORD *)(*((_QWORD *)this + 2) + 2416LL) + 32) = v54;
            v49 = (unsigned int)((_DWORD)v129 + 1);
            LODWORD(v129) = v49;
          }
          while ( (unsigned int)v49 < v48 );
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
      v37.LowPart = 0;
      goto LABEL_77;
    }
    v121 = WdLogNewEntry5_WdError(v45);
LABEL_173:
    *(_QWORD *)(v121 + 24) = this;
    *(union _LARGE_INTEGER *)(v121 + 32) = v37;
LABEL_174:
    WdLogEvent5_WdError(v121);
    goto LABEL_77;
  }
  for ( i = 0; ; ++i )
  {
    v20 = *((_QWORD *)this + 2);
    if ( i >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v20) )
    {
      if ( *(int *)(v20 + 2160) < 8960 )
      {
        *(_DWORD *)(v20 + 1888) &= 0xFFFFF87F;
        v20 = *((_QWORD *)this + 2);
      }
      goto LABEL_47;
    }
    v22 = (unsigned __int16 *)(*(_QWORD *)(v20 + 2416) + 352LL * i);
    v23 = *v22;
    v25 = 74LL * *v22;
    v24 = (*v22 * (unsigned __int128)0x4AuLL) >> 64 != 0;
    v131.LowPart = v23;
    if ( v24 )
      v25 = -1LL;
    v26 = (char *)operator new(v25, 0x4B677844u, 1, PagedPool);
    v129 = v26;
    if ( !v26 )
      break;
    *((_QWORD *)v22 + 3) = v26;
    v132 = *((_QWORD *)this + 2);
    v28 = 44LL * v23;
    if ( !is_mul_ok(v23, 0x2CuLL) )
      v28 = -1LL;
    v29 = operator new(v28, 0x4B677844u, 1, PagedPool);
    if ( !v29 )
      break;
    *((_QWORD *)v22 + 14) = v29;
    v30 = 8LL * v23;
    if ( !is_mul_ok(v23, 8uLL) )
      v30 = -1LL;
    v31 = operator new(v30, 0x4B677844u, 1, PagedPool);
    if ( !v31 )
      break;
    *((_QWORD *)v22 + 15) = v31;
    v32 = (DXGADAPTER *)*((_QWORD *)this + 2);
    if ( (int)DXGADAPTER::GetDriverVersion(v32) >= 2400 )
    {
      LODWORD(pcchLength) = i;
      memset(&v133, 0, sizeof(v133));
      v133.Type = DXGKQAITYPE_ADAPTERPERFDATA_CAPS;
      v133.pInputData = &pcchLength;
      v133.InputDataSize = 4;
      v133.pOutputData = v22 + 96;
      v133.OutputDataSize = 28;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v32, &v133, v63) < 0 )
      {
        v67 = WdLogNewEntry5_WdWarning(v65, v64, v66);
        *(_QWORD *)(v67 + 24) = this;
        WdLogEvent5_WdWarning(v67);
      }
      v68 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v133.pOutputData = v22 + 110;
      v133.Type = DXGKQAITYPE_GPUVERSION;
      v133.OutputDataSize = 128;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v68, &v133, v66) < 0 )
      {
        v72 = WdLogNewEntry5_WdWarning(v70, v69, v71);
        *(_QWORD *)(v72 + 24) = this;
        WdLogEvent5_WdWarning(v72);
      }
    }
    LODWORD(v33) = 0;
    if ( v23 )
    {
      v34 = v129;
      v35 = v129 + 72;
      while ( 1 )
      {
        v37.LowPart = DXGADAPTER::DdiGetNodeMetadata(
                        *((DXGADAPTER **)this + 2),
                        (unsigned int)v33 | (i << 16),
                        (struct _DXGK_NODEMETADATA *)&v34[74 * (unsigned int)v33]);
        if ( (v37.LowPart & 0x80000000) != 0 )
          break;
        if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1712LL) >= 0x9000u )
        {
          v39 = *((_DWORD *)v35 - 1);
          if ( (v39 & 1) != 0 && !*v35 && !v35[1] )
          {
            v122 = (_QWORD *)WdLogNewEntry5_WdError(v36);
            v122[5] = 1325LL;
            goto LABEL_167;
          }
          if ( (v39 & 0xFFF8) != 0 )
          {
            v122 = (_QWORD *)WdLogNewEntry5_WdError(v36);
            v122[5] = 1331LL;
            goto LABEL_167;
          }
        }
        else
        {
          *((_DWORD *)v35 - 1) = 0;
        }
        v38 = v132;
        if ( *v35 )
        {
          if ( (*(_DWORD *)(v132 + 1892) & 0x40) == 0 )
          {
            v122 = (_QWORD *)WdLogNewEntry5_WdError(v132);
            v122[5] = 1340LL;
            goto LABEL_167;
          }
          if ( (_DWORD)v33 == v22[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2458LL) )
            *((_BYTE *)v22 + 40) = 1;
        }
        if ( v35[1] )
        {
          if ( (*(_DWORD *)(v38 + 1892) & 0x80u) == 0 )
          {
            v122 = (_QWORD *)WdLogNewEntry5_WdError(v38);
            v122[5] = 1353LL;
            goto LABEL_167;
          }
          if ( (_DWORD)v33 == v22[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2458LL) )
            *((_BYTE *)v22 + 40) = 1;
        }
        v34 = v129;
        LODWORD(v33) = v33 + 1;
        v35 += 74;
        if ( (unsigned int)v33 >= v131.LowPart )
          goto LABEL_37;
      }
      v121 = WdLogNewEntry5_WdError(v36);
      *(_QWORD *)(v121 + 24) = this;
      goto LABEL_174;
    }
LABEL_37:
    ;
  }
  v113 = WdLogNewEntry5_WdLowResource(v27);
  *(_QWORD *)(v113 + 24) = this;
LABEL_170:
  WdLogEvent5_WdLowResource(v113);
LABEL_171:
  v37.LowPart = -1073741801;
LABEL_77:
  if ( BYTE1(v128) )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v128);
  return v37.LowPart;
}
