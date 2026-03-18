/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C013D490
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013164 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C013D954 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C013D988 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // r13
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  struct _D3DKMT_GETDISPLAYMODELIST *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // r14
  int PairingAdapters; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct DXGADAPTER *v15; // r14
  __int64 v16; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v18; // dl
  struct DXGSESSIONDATA *v19; // rax
  __int64 v20; // rcx
  struct DXGSESSIONDATA *v21; // r15
  int v22; // ebx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 VidPnSourceId; // rdx
  unsigned __int64 v30; // rcx
  UINT v31; // esi
  __int64 v32; // r13
  unsigned int v33; // r15d
  size_t v34; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char *v36; // rcx
  UINT j; // edx
  UINT v38; // r8d
  struct DXGGLOBAL *v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  const GUID *v51; // r8
  _QWORD *v52; // rax
  __int64 hAdapter; // rcx
  char v54; // [rsp+30h] [rbp-168h]
  unsigned __int8 v55[3]; // [rsp+31h] [rbp-167h] BYREF
  int v56; // [rsp+34h] [rbp-164h]
  int v57; // [rsp+38h] [rbp-160h] BYREF
  __int64 v58; // [rsp+40h] [rbp-158h]
  char v59; // [rsp+48h] [rbp-150h]
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+50h] [rbp-148h] BYREF
  BOOL v61; // [rsp+68h] [rbp-130h]
  UINT v62; // [rsp+6Ch] [rbp-12Ch]
  unsigned int i; // [rsp+70h] [rbp-128h]
  UINT v64; // [rsp+74h] [rbp-124h]
  struct _KTHREAD **v65; // [rsp+78h] [rbp-120h]
  DXGADAPTER *v66; // [rsp+80h] [rbp-118h] BYREF
  struct DXGADAPTER *v67; // [rsp+90h] [rbp-108h] BYREF
  struct DXGADAPTER *v68; // [rsp+98h] [rbp-100h] BYREF
  ULONG64 v69; // [rsp+A0h] [rbp-F8h]
  struct DXGSESSIONDATA *v70; // [rsp+A8h] [rbp-F0h]
  unsigned __int64 v71; // [rsp+B0h] [rbp-E8h] BYREF
  DXGADAPTER *v72[10]; // [rsp+C0h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-88h] BYREF
  char v74; // [rsp+140h] [rbp-58h]
  __m128i si128; // [rsp+148h] [rbp-50h]
  int v76; // [rsp+158h] [rbp-40h]
  int v77; // [rsp+15Ch] [rbp-3Ch]
  int v78; // [rsp+160h] [rbp-38h]

  v3 = a1;
  v69 = a1;
  v57 = -1;
  v58 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v59 = 1;
    v57 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2017);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v57, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v65 = Current;
  if ( Current )
  {
    memset(&Src, 0, sizeof(Src));
    v55[0] = 0;
    v54 = 0;
    v6 = (struct _D3DKMT_GETDISPLAYMODELIST *)v3;
    if ( v3 >= MmUserProbeAddress )
      v6 = (struct _D3DKMT_GETDISPLAYMODELIST *)MmUserProbeAddress;
    Src = *v6;
    v61 = Src.pModeList != 0LL;
    Src.pModeList = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v66, Src.hAdapter, Current, &v67, 1);
    v10 = v67;
    if ( v67 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v67, Src.VidPnSourceId, 0LL, 0LL, &v68, &v71);
      v14 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
        v47[3] = v10;
        v47[4] = Src.VidPnSourceId;
        v47[5] = v14;
        WdLogEvent5_WdEvent(v47);
LABEL_45:
        if ( v66 )
          DXGADAPTER::ReleaseReference(v66);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
        if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v40, &EventProfilerExit, v41, v57);
        return (unsigned int)v14;
      }
      v15 = v68;
      if ( !v68 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v48 + 24) = 5128LL;
        WdLogEvent5_WdAssertion(v48);
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v72, v15, 0LL);
      DXGADAPTER::ReleaseReference(v15);
      Global = DXGGLOBAL::GetGlobal(v16);
      v19 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 77), v18);
      v21 = v19;
      v70 = v19;
      if ( v19 )
      {
        v74 = 0;
        v22 = *(_DWORD *)v19;
        if ( (unsigned int)PsGetCurrentProcessSessionId(v20) != v22 )
        {
          v54 = 1;
          CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v21 + 2328));
        }
        v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v72);
        v14 = v23;
        v56 = v23;
        if ( v23 < 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v25, v24, v26, v27);
          v52[3] = v14;
          v52[4] = Current;
          hAdapter = Src.hAdapter;
          v52[6] = v15;
        }
        else
        {
          v28 = *((_QWORD *)v15 + 315);
          VidPnSourceId = Src.VidPnSourceId;
          if ( Src.VidPnSourceId < *(_DWORD *)(v28 + 80)
            && ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v28, Src.VidPnSourceId) )
          {
            LODWORD(v14) = DxgkpGetDisplayModeList(v15, v72, 0, &Src, v55);
            v56 = v14;
            goto LABEL_17;
          }
          LODWORD(v14) = -1071774972;
          v56 = -1071774972;
          v52 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v28, VidPnSourceId, v26, v27);
          v52[3] = -1071774972LL;
          v52[4] = v15;
          hAdapter = Src.VidPnSourceId;
        }
        v52[5] = hAdapter;
        WdLogEvent5_WdDmmEvent(v52);
LABEL_17:
        if ( v54 && v74 )
        {
          KeUnstackDetachProcess(&ApcState);
          v74 = 0;
        }
        if ( (int)v14 >= 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v76 = 31;
          v77 = 119;
          v78 = 113;
          v31 = Src.ModeCount * (*((_QWORD *)v15 + 316) != 0LL ? 1 : 7);
          if ( v61 )
          {
            if ( *(_DWORD *)(v3 + 16) < v31 )
            {
              LODWORD(v14) = -1073741789;
              v56 = -1073741789;
            }
            else
            {
              v32 = *(_QWORD *)(v3 + 8);
              v33 = 0;
              for ( i = 0; ; i = v33 )
              {
                v30 = (-(__int64)(*((_QWORD *)v15 + 316) != 0LL) & 0xFFFFFFFFFFFFFFFAuLL) + 7;
                if ( v33 >= v30 )
                  break;
                v34 = 44LL * Src.ModeCount;
                pModeList = Src.pModeList;
                v36 = (char *)(v32 + 44LL * Src.ModeCount * v33);
                if ( (unsigned __int64)&v36[v34] > MmUserProbeAddress || &v36[v34] <= v36 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v36, pModeList, v34);
                if ( v33 )
                {
                  v38 = 0;
                  v62 = 0;
                  while ( v38 < Src.ModeCount )
                  {
                    *(_DWORD *)(44LL * (v38 + Src.ModeCount * v33) + v32 + 8) = si128.m128i_i32[v33];
                    v62 = ++v38;
                  }
                }
                ++v33;
              }
              for ( j = 0; ; ++j )
              {
                v64 = j;
                if ( j >= v31 )
                  break;
                if ( Src.pModeList->RefreshRate.Numerator == -2 && Src.pModeList->RefreshRate.Denominator == -2 )
                {
                  v30 = 44LL * j;
                  *(_DWORD *)(v30 + v32 + 16) = 64;
                  *(_DWORD *)(v30 + v32 + 20) = 1;
                  *(_DWORD *)(v30 + v32 + 12) = 64;
                }
              }
              v3 = v69;
            }
          }
          *(_DWORD *)(v3 + 16) = v31;
        }
        if ( v55[0] )
        {
          operator delete[](Src.pModeList);
          Src.pModeList = 0LL;
        }
        v39 = DXGGLOBAL::GetGlobal(v30);
        DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v39 + 77), v70);
        if ( v74 )
        {
          KeUnstackDetachProcess(&ApcState);
          v74 = 0;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
        goto LABEL_45;
      }
      v49 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v49 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v49);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
    }
    else
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
      v46[3] = -1073741811LL;
      v46[4] = Current;
      v46[5] = Src.hAdapter;
      WdLogEvent5_WdWarning(v46);
    }
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
  }
  else
  {
    v43 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    *(_QWORD *)(v43 + 32) = PsGetCurrentProcess(v45, v44);
    WdLogEvent5_WdError(v43);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
  if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v50, &EventProfilerExit, v51, v57);
  return 3221225485LL;
}
