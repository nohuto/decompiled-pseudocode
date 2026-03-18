/*
 * XREFs of DxgkSignalSynchronizationObjectInternal @ 0x1C0138F3C
 * Callers:
 *     ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1C005AB50 (-AddSignalToContext@CAdapter@@UEAAJII_K@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1C0138F20 (DxgkSignalSynchronizationObject.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0153230 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0102D10 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 a1, int a2, const GUID *a3)
{
  _OWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rsi
  unsigned int *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r15
  unsigned int v17; // r14d
  void *PoolWithTag; // rcx
  unsigned int *v19; // rbx
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v22; // rcx
  const GUID *v23; // r8
  unsigned int *v25; // rax
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v39; // rcx
  const GUID *v40; // r8
  int v41; // [rsp+60h] [rbp-278h] BYREF
  __int64 v42; // [rsp+68h] [rbp-270h]
  char v43; // [rsp+70h] [rbp-268h]
  struct DXGPROCESS *v44; // [rsp+78h] [rbp-260h]
  unsigned int v45; // [rsp+80h] [rbp-258h] BYREF
  unsigned int v46; // [rsp+84h] [rbp-254h]
  unsigned int v47[33]; // [rsp+88h] [rbp-250h] BYREF
  unsigned int v48; // [rsp+10Ch] [rbp-1CCh]
  _BYTE Src[256]; // [rsp+110h] [rbp-1C8h] BYREF
  void *v50; // [rsp+210h] [rbp-C8h] BYREF
  PVOID P; // [rsp+250h] [rbp-88h]
  unsigned int v52[16]; // [rsp+258h] [rbp-80h] BYREF
  int v53; // [rsp+298h] [rbp-40h]

  v4 = (_OWORD *)a1;
  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2044);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2044LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v27 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v27;
    }
  }
  v44 = v12;
  if ( !v12 )
  {
    v28 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v28 + 24) = PsGetCurrentProcess(v30, v29);
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    v31 = v28;
LABEL_34:
    WdLogEvent5_WdError(v31);
    goto LABEL_36;
  }
  if ( !a2 )
  {
    v25 = &v45;
    v14 = 3LL;
    do
    {
      *(_OWORD *)v25 = *v4;
      *((_OWORD *)v25 + 1) = v4[1];
      *((_OWORD *)v25 + 2) = v4[2];
      *((_OWORD *)v25 + 3) = v4[3];
      *((_OWORD *)v25 + 4) = v4[4];
      *((_OWORD *)v25 + 5) = v4[5];
      *((_OWORD *)v25 + 6) = v4[6];
      v25 += 32;
      *((_OWORD *)v25 - 1) = v4[7];
      v4 += 8;
      --v14;
    }
    while ( v14 );
    *(_OWORD *)v25 = *v4;
    *((_OWORD *)v25 + 1) = v4[1];
    *((_OWORD *)v25 + 2) = v4[2];
    *((_OWORD *)v25 + 3) = v4[3];
    *((_OWORD *)v25 + 4) = v4[4];
    LODWORD(v15) = v48;
    LODWORD(v16) = v46;
LABEL_13:
    P = 0LL;
    v53 = 0;
    v17 = v15 + 1;
    if ( (unsigned int)(v15 + 1) > 0x10 )
    {
      v14 = 0xFFFFFFFFFFFFFFFFuLL % v17;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v17 < 4 )
      {
        v19 = 0LL;
LABEL_18:
        if ( v19 )
        {
          *v19 = v45;
          if ( (_DWORD)v15 )
            memmove(v19 + 1, Src, 4LL * (unsigned int)v15);
          v21 = SignalSynchronizationObjectInternal(
                  (unsigned int)v16,
                  v47,
                  v47[32],
                  v17,
                  v19,
                  0LL,
                  (unsigned __int64)v50,
                  &v50,
                  v12,
                  a2 != 0,
                  0);
          if ( v21 < 0 )
          {
            if ( P != v52 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v53 = 0;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v20);
            if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v39, &EventProfilerExit, v40, v41);
            return (unsigned int)v21;
          }
          else
          {
            if ( P != v52 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v53 = 0;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v20);
            if ( v43 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v22, &EventProfilerExit, v23, v41);
            }
            return 0LL;
          }
        }
        else
        {
          P = 0LL;
          v53 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v14);
          if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v37, &EventProfilerExit, v38, v41);
          return 3221225495LL;
        }
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v17, 0x4B677844u);
      P = PoolWithTag;
    }
    else
    {
      PoolWithTag = v52;
      P = v52;
    }
    v53 = v15 + 1;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v17);
      PoolWithTag = P;
    }
    v19 = (unsigned int *)PoolWithTag;
    goto LABEL_18;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  v13 = &v45;
  v14 = 3LL;
  do
  {
    *(_OWORD *)v13 = *v4;
    *((_OWORD *)v13 + 1) = v4[1];
    *((_OWORD *)v13 + 2) = v4[2];
    *((_OWORD *)v13 + 3) = v4[3];
    *((_OWORD *)v13 + 4) = v4[4];
    *((_OWORD *)v13 + 5) = v4[5];
    *((_OWORD *)v13 + 6) = v4[6];
    v13 += 32;
    *((_OWORD *)v13 - 1) = v4[7];
    v4 += 8;
    --v14;
  }
  while ( v14 );
  *(_OWORD *)v13 = *v4;
  *((_OWORD *)v13 + 1) = v4[1];
  *((_OWORD *)v13 + 2) = v4[2];
  *((_OWORD *)v13 + 3) = v4[3];
  *((_OWORD *)v13 + 4) = v4[4];
  v15 = v48;
  if ( v48 <= 0x40 )
  {
    v16 = v46;
    if ( v46 <= 0x20 )
      goto LABEL_13;
    v32 = WdLogNewEntry5_WdError(128LL, 0LL, v11);
    *(_QWORD *)(v32 + 24) = v16;
    v31 = v32;
    goto LABEL_34;
  }
  v34 = WdLogNewEntry5_WdWarning(128LL, 0LL, v11);
  *(_QWORD *)(v34 + 24) = v15;
  WdLogEvent5_WdWarning(v34);
LABEL_36:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v33);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v41);
  return 3221225485LL;
}
