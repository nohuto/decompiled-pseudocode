/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C02061A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C027B194 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _D3DDDI_MULTISAMPLINGMETHOD *v10; // r15
  ULONG64 v11; // rax
  __int64 v12; // r14
  SIZE_T v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // r14
  int PairingAdapters; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGADAPTER *v24; // r14
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rbx
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rcx
  unsigned int v50; // r11d
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  const GUID *v53; // r8
  int v55; // [rsp+40h] [rbp-108h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v56; // [rsp+48h] [rbp-100h]
  _BYTE v57[40]; // [rsp+50h] [rbp-F8h] BYREF
  int v58; // [rsp+78h] [rbp-D0h]
  int v59; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+88h] [rbp-C0h]
  char v61; // [rsp+90h] [rbp-B8h]
  struct DXGADAPTER *v62; // [rsp+98h] [rbp-B0h] BYREF
  unsigned __int64 v63; // [rsp+A0h] [rbp-A8h] BYREF
  DXGADAPTER *v64; // [rsp+A8h] [rbp-A0h] BYREF
  _BYTE v65[136]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned __int64 v66; // [rsp+158h] [rbp+10h] BYREF
  struct _KTHREAD **v67; // [rsp+160h] [rbp+18h]
  struct DXGADAPTER *v68; // [rsp+168h] [rbp+20h] BYREF

  v59 = -1;
  v60 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v61 = 1;
    v59 = 2019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2019);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v59, 2019);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v67 = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    LODWORD(v7) = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    *(_QWORD *)(v6 + 32) = PsGetCurrentProcess(v9, v8);
    WdLogEvent5_WdError(v6);
    goto LABEL_45;
  }
  memset(v57, 0, sizeof(v57));
  LODWORD(v7) = 0;
  v10 = 0LL;
  v56 = 0LL;
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)v57 = *(_OWORD *)v11;
  *(_OWORD *)&v57[16] = *(_OWORD *)(v11 + 16);
  *(_QWORD *)&v57[32] = *(_QWORD *)(v11 + 32);
  if ( _mm_srli_si128(*(__m128i *)&v57[16], 8).m128i_u64[0] && *(_DWORD *)&v57[32] )
  {
    v12 = *(unsigned int *)&v57[32];
    v13 = 8LL * *(unsigned int *)&v57[32];
    if ( !is_mul_ok(*(unsigned int *)&v57[32], 8uLL) )
      v13 = -1LL;
    v10 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new(v13, 0x4B677844u, PagedPool);
    v56 = v10;
    if ( !v10 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
      LODWORD(v7) = -1073741801;
      v15[3] = -1073741801LL;
      v15[4] = *(unsigned int *)v57;
      v15[5] = *(unsigned int *)&v57[4];
      v15[6] = v12;
      WdLogEvent5_WdLowResource(v15);
    }
  }
  if ( (int)v7 >= 0 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v64, *(unsigned int *)v57, Current, &v68, 1);
    v66 = 0LL;
    v19 = v68;
    if ( v68 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v68, *(unsigned int *)&v57[4], 0LL, 0LL, &v62, &v63);
      v7 = PairingAdapters;
      v55 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v24 = v62;
        if ( !v62 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v25 + 24) = 5388LL;
          WdLogEvent5_WdAssertion(v25);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, v24, 0LL);
        DXGADAPTER::ReleaseReference(v24);
        v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65);
        v7 = v26;
        v55 = v26;
        if ( v26 < 0 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v28, v27, v29, v30);
          v45[3] = v7;
          v45[4] = Current;
          v45[5] = *(unsigned int *)v57;
          v45[6] = v24;
          WdLogEvent5_WdDmmEvent(v45);
        }
        else
        {
          v31 = *(unsigned int *)&v57[4];
          if ( *(_DWORD *)(*((_QWORD *)v24 + 315) + 80LL) > *(_DWORD *)&v57[4] )
          {
            if ( *((_QWORD *)v24 + 316) )
            {
              v34 = *(unsigned int *)&v57[32];
              v35 = *(unsigned int *)&v57[4];
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v24,
                                                              *(unsigned int *)&v57[4],
                                                              *(unsigned int *)&v57[8],
                                                              *(unsigned int *)&v57[12],
                                                              *(enum _D3DDDIFORMAT *)&v57[16],
                                                              *(unsigned int *)&v57[32],
                                                              v10,
                                                              &v66);
              v7 = MultisamplingMethodSetFromClientVidPnSource;
              v55 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
                v40[3] = v34;
                v40[4] = v35;
                v40[5] = v24;
                v40[6] = v7;
                WdLogEvent5_WdWarning(v40);
                v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
                v44[3] = v35;
                v44[4] = v24;
                v44[5] = *(unsigned int *)&v57[8];
                v44[6] = *(unsigned int *)&v57[12];
                v44[7] = *(int *)&v57[16];
                WdLogEvent5_WdWarning(v44);
              }
              goto LABEL_29;
            }
            v33 = WdLogNewEntry5_WdDmmEvent(v28, v27, v29, v30);
            *(_QWORD *)(v33 + 24) = v24;
            LODWORD(v7) = -1073741637;
            *(_QWORD *)(v33 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v33);
          }
          else
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
            LODWORD(v7) = -1073741811;
            v32[3] = -1073741811LL;
            v32[4] = v24;
            v32[5] = v31;
            WdLogEvent5_WdWarning(v32);
          }
          v55 = v7;
        }
LABEL_29:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
        goto LABEL_32;
      }
      v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
      v46[3] = v19;
      v46[4] = *(unsigned int *)&v57[4];
      v46[5] = v7;
      WdLogEvent5_WdWarning(v46);
    }
    else
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
      LODWORD(v7) = -1073741811;
      v47[3] = -1073741811LL;
      v47[4] = Current;
      v47[5] = *(unsigned int *)v57;
      WdLogEvent5_WdWarning(v47);
      v55 = -1073741811;
    }
LABEL_32:
    if ( (int)v7 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v66 >> 3;
      if ( v10 )
      {
        v48 = *(_QWORD *)(a1 + 24);
        v49 = 0LL;
        v50 = *(_DWORD *)&v57[32];
        v10 = v56;
        while ( 1 )
        {
          v58 = v49;
          if ( (unsigned int)v49 >= v50 )
            break;
          v51 = (_QWORD *)(v48 + 12 * v49);
          if ( (unsigned __int64)(v51 + 1) > MmUserProbeAddress || v51 + 1 <= v51 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v51 = v56[v49];
          v49 = (unsigned int)(v49 + 1);
        }
        LODWORD(v7) = v55;
      }
    }
    if ( v64 )
      DXGADAPTER::ReleaseReference(v64);
  }
  if ( v10 )
    operator delete[](v10);
LABEL_45:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v52, &EventProfilerExit, v53, v59);
  return (unsigned int)v7;
}
