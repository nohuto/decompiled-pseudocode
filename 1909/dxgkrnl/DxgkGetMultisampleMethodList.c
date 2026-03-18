/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C02381A0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02B398C (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  struct _D3DDDI_MULTISAMPLINGMETHOD *v15; // r15
  ULONG64 v16; // rax
  __int64 v17; // r14
  SIZE_T v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGADAPTER *v26; // r14
  int PairingAdapters; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGADAPTER *v31; // r14
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rbx
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rcx
  unsigned int v56; // r11d
  __int64 v57; // rcx
  const GUID *v58; // r8
  int v60; // [rsp+40h] [rbp-148h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v61; // [rsp+48h] [rbp-140h]
  unsigned __int64 v62[6]; // [rsp+50h] [rbp-138h] BYREF
  int v63; // [rsp+80h] [rbp-108h]
  int v64; // [rsp+88h] [rbp-100h] BYREF
  __int64 v65; // [rsp+90h] [rbp-F8h]
  char v66; // [rsp+98h] [rbp-F0h]
  struct _KTHREAD **v67; // [rsp+A0h] [rbp-E8h]
  struct DXGADAPTER *v68; // [rsp+A8h] [rbp-E0h] BYREF
  struct DXGADAPTER *v69; // [rsp+B0h] [rbp-D8h] BYREF
  unsigned __int64 v70; // [rsp+B8h] [rbp-D0h] BYREF
  DXGADAPTER *v71; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v72[144]; // [rsp+D0h] [rbp-B8h] BYREF

  v62[0] = a1;
  v64 = -1;
  v65 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v66 = 1;
    v64 = 2019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2019);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v64, 2019LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v67 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v13, v12);
    WdLogEvent5_WdError(v10);
    goto LABEL_45;
  }
  memset(&v62[1], 0, 0x28uLL);
  LODWORD(v11) = 0;
  v15 = 0LL;
  v61 = 0LL;
  v16 = a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = MmUserProbeAddress;
  *(_OWORD *)&v62[1] = *(_OWORD *)v16;
  *(_OWORD *)&v62[3] = *(_OWORD *)(v16 + 16);
  v62[5] = *(_QWORD *)(v16 + 32);
  if ( _mm_srli_si128(*(__m128i *)&v62[3], 8).m128i_u64[0] && LODWORD(v62[5]) )
  {
    v17 = LODWORD(v62[5]);
    v18 = 8LL * LODWORD(v62[5]);
    if ( !is_mul_ok(LODWORD(v62[5]), 8uLL) )
      v18 = -1LL;
    v15 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new[](v18, 0x4B677844u, PagedPool);
    v61 = v15;
    if ( !v15 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v19, v14, v20, v21);
      LODWORD(v11) = -1073741801;
      v22[3] = -1073741801LL;
      v22[4] = LODWORD(v62[1]);
      v22[5] = HIDWORD(v62[1]);
      v22[6] = v17;
      WdLogEvent5_WdLowResource(v22);
    }
  }
  if ( (int)v11 >= 0 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v71, LODWORD(v62[1]), Current, &v68, 1);
    v62[0] = 0LL;
    v26 = v68;
    if ( v68 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v68, HIDWORD(v62[1]), 0LL, 0LL, &v69, &v70, 0);
      v11 = PairingAdapters;
      v60 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v31 = v69;
        if ( !v69 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v29, v28);
          *(_QWORD *)(v32 + 24) = 5865LL;
          WdLogEvent5_WdAssertion(v32);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v72, v31, 0LL);
        DXGADAPTER::ReleaseReferenceNoTracking(v31);
        v33 = COREADAPTERACCESS::AcquireShared((__int64)v72, 0xFFFFFFFFLL, 0LL);
        v11 = v33;
        v60 = v33;
        if ( v33 < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35, v34);
          v51[3] = v11;
          v51[4] = Current;
          v51[5] = LODWORD(v62[1]);
          v51[6] = v31;
          WdLogEvent5_WdDmmEvent(v51);
        }
        else
        {
          v37 = HIDWORD(v62[1]);
          if ( *(_DWORD *)(*((_QWORD *)v31 + 319) + 80LL) > HIDWORD(v62[1]) )
          {
            if ( *((_QWORD *)v31 + 320) )
            {
              v40 = LODWORD(v62[5]);
              v41 = HIDWORD(v62[1]);
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v31,
                                                              HIDWORD(v62[1]),
                                                              v62[2],
                                                              HIDWORD(v62[2]),
                                                              v62[3],
                                                              LODWORD(v62[5]),
                                                              v15,
                                                              v62);
              v11 = MultisamplingMethodSetFromClientVidPnSource;
              v60 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
                v46[3] = v40;
                v46[4] = v41;
                v46[5] = v31;
                v46[6] = v11;
                WdLogEvent5_WdWarning(v46);
                v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49);
                v50[3] = v41;
                v50[4] = v31;
                v50[5] = LODWORD(v62[2]);
                v50[6] = HIDWORD(v62[2]);
                v50[7] = SLODWORD(v62[3]);
                WdLogEvent5_WdWarning(v50);
              }
              goto LABEL_29;
            }
            v39 = WdLogNewEntry5_WdDmmEvent(v35, v34);
            *(_QWORD *)(v39 + 24) = v31;
            LODWORD(v11) = -1073741637;
            *(_QWORD *)(v39 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v39);
          }
          else
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
            LODWORD(v11) = -1073741811;
            v38[3] = -1073741811LL;
            v38[4] = v31;
            v38[5] = v37;
            WdLogEvent5_WdWarning(v38);
          }
          v60 = v11;
        }
LABEL_29:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
        goto LABEL_32;
      }
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v52[3] = v26;
      v52[4] = HIDWORD(v62[1]);
      v52[5] = v11;
      WdLogEvent5_WdWarning(v52);
    }
    else
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      LODWORD(v11) = -1073741811;
      v53[3] = -1073741811LL;
      v53[4] = Current;
      v53[5] = LODWORD(v62[1]);
      WdLogEvent5_WdWarning(v53);
      v60 = -1073741811;
    }
LABEL_32:
    if ( (int)v11 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v62[0] >> 3;
      if ( v15 )
      {
        v54 = *(_QWORD *)(a1 + 24);
        v55 = 0LL;
        v56 = v62[5];
        v15 = v61;
        while ( 1 )
        {
          v63 = v55;
          if ( (unsigned int)v55 >= v56 )
            break;
          v14 = (_QWORD *)(v54 + 12 * v55);
          if ( (unsigned __int64)(v14 + 1) > MmUserProbeAddress || v14 + 1 <= v14 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v14 = v61[v55];
          v55 = (unsigned int)(v55 + 1);
        }
        LODWORD(v11) = v60;
      }
    }
    if ( v71 )
      DXGADAPTER::ReleaseReferenceNoTracking(v71);
  }
  if ( v15 )
    operator delete[](v15);
LABEL_45:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, (__int64)v14);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v57, &EventProfilerExit, v58, v64);
  return (unsigned int)v11;
}
