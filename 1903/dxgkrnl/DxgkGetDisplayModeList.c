/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C014D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E68 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C050 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C6D88 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C014DAE8 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C014DB1C (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v9; // r8
  char v10; // r15
  struct _D3DKMT_GETDISPLAYMODELIST *v11; // rcx
  bool v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rbx
  int PairingAdapters; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  struct DXGADAPTER *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v25; // dl
  struct DXGSESSIONDATA *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGSESSIONDATA *v30; // r12
  int v31; // ebx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rcx
  __int64 VidPnSourceId; // rdx
  __int64 v38; // rdx
  __int64 ModeCount; // rcx
  int v40; // ebx
  UINT v41; // ebx
  __int64 v42; // r15
  __int64 i; // rdi
  unsigned __int64 v44; // rax
  size_t v45; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char *v47; // rcx
  UINT k; // eax
  UINT j; // r8d
  struct DXGGLOBAL *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  const GUID *v53; // r8
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  const GUID *v60; // r8
  _QWORD *v61; // rax
  DXGADAPTER *v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  const GUID *v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 hAdapter; // rcx
  unsigned __int8 v71[4]; // [rsp+40h] [rbp-1A8h] BYREF
  int v72; // [rsp+44h] [rbp-1A4h]
  int v73; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v74; // [rsp+50h] [rbp-198h]
  char v75; // [rsp+58h] [rbp-190h]
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+60h] [rbp-188h] BYREF
  UINT v77; // [rsp+78h] [rbp-170h]
  int v78; // [rsp+7Ch] [rbp-16Ch]
  UINT v79; // [rsp+80h] [rbp-168h]
  struct _KTHREAD **v80; // [rsp+88h] [rbp-160h]
  DXGADAPTER *v81; // [rsp+90h] [rbp-158h] BYREF
  struct DXGADAPTER *v82; // [rsp+A0h] [rbp-148h] BYREF
  struct DXGADAPTER *v83; // [rsp+A8h] [rbp-140h] BYREF
  struct DXGSESSIONDATA *v84; // [rsp+B0h] [rbp-138h]
  unsigned __int64 v85; // [rsp+B8h] [rbp-130h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-128h] BYREF
  char v87; // [rsp+F0h] [rbp-F8h]
  DXGADAPTER *v88[18]; // [rsp+100h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+190h] [rbp-58h]
  int v90; // [rsp+1A0h] [rbp-48h]
  int v91; // [rsp+1A4h] [rbp-44h]
  int v92; // [rsp+1A8h] [rbp-40h]

  v73 = -1;
  v74 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v75 = 1;
    v73 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2017);
  }
  else
  {
    v75 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v73, 2017LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v80 = Current;
  if ( !Current )
  {
    v55 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v55 + 24) = -1073741811LL;
    *(_QWORD *)(v55 + 32) = PsGetCurrentProcess(v57, v56);
    WdLogEvent5_WdError(v55);
    goto LABEL_59;
  }
  memset(&Src, 0, sizeof(Src));
  v71[0] = 0;
  v10 = 0;
  v11 = (struct _D3DKMT_GETDISPLAYMODELIST *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (struct _D3DKMT_GETDISPLAYMODELIST *)MmUserProbeAddress;
  Src = *v11;
  v12 = Src.pModeList != 0LL;
  Src.pModeList = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v81, Src.hAdapter, Current, &v82, 1);
  v16 = v82;
  if ( !v82 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v61[3] = -1073741811LL;
    v61[4] = Current;
    v61[5] = Src.hAdapter;
    WdLogEvent5_WdWarning(v61);
    v62 = v81;
    if ( !v81 )
      goto LABEL_59;
    goto LABEL_64;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v82, Src.VidPnSourceId, 0LL, 0LL, &v83, &v85, 0);
  v20 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v21 = v83;
    if ( !v83 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v67 + 24) = 5605LL;
      WdLogEvent5_WdAssertion(v67);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v88, v21, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v21);
    Global = DXGGLOBAL::GetGlobal(v23, v22);
    v26 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 74), v25);
    v30 = v26;
    v84 = v26;
    if ( v26 )
    {
      v87 = 0;
      v31 = *(_DWORD *)v26;
      if ( (unsigned int)PsGetCurrentProcessSessionId(v28, v27) != v31 )
      {
        v10 = 1;
        CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v30 + 2328));
      }
      v32 = COREADAPTERACCESS::AcquireShared((__int64)v88, 0xFFFFFFFFLL, 0LL);
      v35 = v32;
      v72 = v32;
      if ( v32 < 0 )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v34, v33);
        v69[3] = v35;
        v69[4] = Current;
        hAdapter = Src.hAdapter;
        v69[6] = v21;
      }
      else
      {
        v36 = *((_QWORD *)v21 + 319);
        VidPnSourceId = Src.VidPnSourceId;
        if ( Src.VidPnSourceId < *(_DWORD *)(v36 + 80)
          && ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v36, Src.VidPnSourceId) )
        {
          LODWORD(v35) = DxgkpGetDisplayModeList(v21, v88, 0, &Src, v71);
          v72 = v35;
          goto LABEL_17;
        }
        LODWORD(v35) = -1071774972;
        v72 = -1071774972;
        v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v36, VidPnSourceId);
        v69[3] = -1071774972LL;
        v69[4] = v21;
        hAdapter = Src.VidPnSourceId;
      }
      v69[5] = hAdapter;
      WdLogEvent5_WdDmmEvent(v69);
LABEL_17:
      if ( v10 && v87 )
      {
        KeUnstackDetachProcess(&ApcState);
        v87 = 0;
      }
      if ( (int)v35 >= 0 )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v90 = 31;
        v91 = 119;
        v92 = 113;
        if ( *((_QWORD *)v21 + 320) )
          v40 = 1;
        else
          v40 = 7;
        ModeCount = Src.ModeCount;
        v41 = Src.ModeCount * v40;
        if ( v12 )
        {
          if ( *(_DWORD *)(a1 + 16) < v41 )
          {
            LODWORD(v35) = -1073741789;
            v72 = -1073741789;
          }
          else
          {
            v42 = *(_QWORD *)(a1 + 8);
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v78 = i;
              v44 = *((_QWORD *)v21 + 320) ? 1LL : 7LL;
              if ( (unsigned int)i >= v44 )
                break;
              v45 = 44LL * (unsigned int)ModeCount;
              pModeList = Src.pModeList;
              v47 = (char *)(v42 + 44LL * (unsigned int)(ModeCount * i));
              if ( (unsigned __int64)&v47[v45] > MmUserProbeAddress || &v47[v45] <= v47 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v47, pModeList, v45);
              if ( (_DWORD)i )
              {
                for ( j = 0; ; ++j )
                {
                  v77 = j;
                  ModeCount = Src.ModeCount;
                  if ( j >= Src.ModeCount )
                    break;
                  v38 = si128.m128i_u32[i];
                  *(_DWORD *)(44LL * (j + Src.ModeCount * (_DWORD)i) + v42 + 8) = v38;
                }
              }
              else
              {
                ModeCount = Src.ModeCount;
              }
            }
            for ( k = 0; ; ++k )
            {
              v79 = k;
              if ( k >= v41 )
                break;
              ModeCount = (__int64)Src.pModeList;
              if ( Src.pModeList->RefreshRate.Numerator == -2 && Src.pModeList->RefreshRate.Denominator == -2 )
              {
                ModeCount = k;
                v38 = 44LL * k;
                *(_DWORD *)(v38 + v42 + 16) = 64;
                *(_DWORD *)(v38 + v42 + 20) = 1;
                *(_DWORD *)(v38 + v42 + 12) = 64;
              }
            }
          }
        }
        *(_DWORD *)(a1 + 16) = v41;
      }
      if ( v71[0] )
      {
        operator delete[](Src.pModeList);
        Src.pModeList = 0LL;
      }
      v50 = DXGGLOBAL::GetGlobal(ModeCount, v38);
      DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v50 + 74), v84);
      if ( v87 )
      {
        KeUnstackDetachProcess(&ApcState);
        v87 = 0;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
      if ( v81 )
        DXGADAPTER::ReleaseReferenceNoTracking(v81);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73, v51);
      if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v52, &EventProfilerExit, v53, v73);
      return (unsigned int)v35;
    }
    v68 = WdLogNewEntry5_WdError(v28, v27, v29);
    *(_QWORD *)(v68 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v68);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
    v62 = v81;
    if ( !v81 )
      goto LABEL_59;
LABEL_64:
    DXGADAPTER::ReleaseReferenceNoTracking(v62);
LABEL_59:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73, v58);
    if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v59, &EventProfilerExit, v60, v73);
    return 3221225485LL;
  }
  v63 = (_QWORD *)WdLogNewEntry5_WdEvent(v19);
  v63[3] = v16;
  v63[4] = Src.VidPnSourceId;
  v63[5] = v20;
  WdLogEvent5_WdEvent(v63);
  if ( v81 )
    DXGADAPTER::ReleaseReferenceNoTracking(v81);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73, v64);
  if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v65, &EventProfilerExit, v66, v73);
  return (unsigned int)v20;
}
