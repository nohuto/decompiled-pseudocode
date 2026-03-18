/*
 * XREFs of DxgkSignalSynchronizationObjectInternal @ 0x1C0129F38
 * Callers:
 *     ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1C0053F80 (-AddSignalToContext@CAdapter@@UEAAJII_K@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1C00B2E40 (DxgkSignalSynchronizationObject.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0129F20 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 a1, int a2, const GUID *a3)
{
  _OWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGPROCESS *v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r14
  unsigned int v16; // r15d
  void *PoolWithTag; // rcx
  unsigned int *v18; // rbx
  int v19; // ebx
  __int64 v20; // rcx
  const GUID *v21; // r8
  unsigned int *v23; // rax
  __int64 v24; // rdx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 v36; // rcx
  const GUID *v37; // r8
  int v38; // [rsp+60h] [rbp-278h] BYREF
  __int64 v39; // [rsp+68h] [rbp-270h]
  char v40; // [rsp+70h] [rbp-268h]
  struct DXGPROCESS *v41; // [rsp+78h] [rbp-260h]
  unsigned int v42; // [rsp+80h] [rbp-258h] BYREF
  unsigned int v43; // [rsp+84h] [rbp-254h]
  unsigned int v44[33]; // [rsp+88h] [rbp-250h] BYREF
  unsigned int v45; // [rsp+10Ch] [rbp-1CCh]
  _BYTE Src[256]; // [rsp+110h] [rbp-1C8h] BYREF
  void *v47; // [rsp+210h] [rbp-C8h] BYREF
  PVOID P; // [rsp+250h] [rbp-88h]
  unsigned int v49[16]; // [rsp+258h] [rbp-80h] BYREF
  int v50; // [rsp+298h] [rbp-40h]

  v4 = (_OWORD *)a1;
  v38 = -1;
  v39 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v40 = 1;
    v38 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2044);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2044);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v26 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v26;
      }
    }
  }
  v41 = v11;
  if ( v11 )
  {
    if ( !a2 )
    {
      v12 = &v42;
      v13 = 3LL;
      do
      {
        *(_OWORD *)v12 = *v4;
        *((_OWORD *)v12 + 1) = v4[1];
        *((_OWORD *)v12 + 2) = v4[2];
        *((_OWORD *)v12 + 3) = v4[3];
        *((_OWORD *)v12 + 4) = v4[4];
        *((_OWORD *)v12 + 5) = v4[5];
        *((_OWORD *)v12 + 6) = v4[6];
        v12 += 32;
        *((_OWORD *)v12 - 1) = v4[7];
        v4 += 8;
        --v13;
      }
      while ( v13 );
      *(_OWORD *)v12 = *v4;
      *((_OWORD *)v12 + 1) = v4[1];
      *((_OWORD *)v12 + 2) = v4[2];
      *((_OWORD *)v12 + 3) = v4[3];
      *((_OWORD *)v12 + 4) = v4[4];
      LODWORD(v14) = v45;
      LODWORD(v15) = v43;
LABEL_10:
      P = 0LL;
      v50 = 0;
      v16 = v14 + 1;
      if ( (unsigned int)(v14 + 1) > 0x10 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v16 < 4 )
        {
          v18 = 0LL;
LABEL_15:
          if ( v18 )
          {
            *v18 = v42;
            if ( (_DWORD)v14 )
              memmove(v18 + 1, Src, 4LL * (unsigned int)v14);
            v19 = SignalSynchronizationObjectInternal(
                    (unsigned int)v15,
                    v44,
                    (struct _D3DDDICB_SIGNALFLAGS)v44[32],
                    v16,
                    v18,
                    0LL,
                    (unsigned __int64)v47,
                    &v47,
                    v11,
                    a2 != 0,
                    0);
            if ( v19 < 0 )
            {
              if ( P != v49 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v50 = 0;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
              if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v36, &EventProfilerExit, v37, v38);
              return (unsigned int)v19;
            }
            else
            {
              if ( P != v49 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v50 = 0;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
              if ( v40 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                  McTemplateK0q(v20, &EventProfilerExit, v21, v38);
              }
              return 0LL;
            }
          }
          else
          {
            P = 0LL;
            v50 = 0;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
            if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v34, &EventProfilerExit, v35, v38);
            return 3221225495LL;
          }
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v16, 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = v49;
        P = v49;
      }
      v50 = v14 + 1;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4LL * v16);
        PoolWithTag = P;
      }
      v18 = (unsigned int *)PoolWithTag;
      goto LABEL_15;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    v23 = &v42;
    v24 = 3LL;
    do
    {
      *(_OWORD *)v23 = *v4;
      *((_OWORD *)v23 + 1) = v4[1];
      *((_OWORD *)v23 + 2) = v4[2];
      *((_OWORD *)v23 + 3) = v4[3];
      *((_OWORD *)v23 + 4) = v4[4];
      *((_OWORD *)v23 + 5) = v4[5];
      *((_OWORD *)v23 + 6) = v4[6];
      v23 += 32;
      *((_OWORD *)v23 - 1) = v4[7];
      v4 += 8;
      --v24;
    }
    while ( v24 );
    *(_OWORD *)v23 = *v4;
    *((_OWORD *)v23 + 1) = v4[1];
    *((_OWORD *)v23 + 2) = v4[2];
    *((_OWORD *)v23 + 3) = v4[3];
    *((_OWORD *)v23 + 4) = v4[4];
    v14 = v45;
    if ( v45 > 0x40 )
    {
      v30 = WdLogNewEntry5_WdWarning(128LL, 0LL, v10);
      *(_QWORD *)(v30 + 24) = v14;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_36;
    }
    v15 = v43;
    if ( v43 <= 0x20 )
      goto LABEL_10;
    v31 = WdLogNewEntry5_WdError(128LL);
    *(_QWORD *)(v31 + 24) = v15;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v27 + 24) = PsGetCurrentProcess(v29, v28);
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    v31 = v27;
  }
  WdLogEvent5_WdError(v31);
LABEL_36:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v38);
  return 3221225485LL;
}
