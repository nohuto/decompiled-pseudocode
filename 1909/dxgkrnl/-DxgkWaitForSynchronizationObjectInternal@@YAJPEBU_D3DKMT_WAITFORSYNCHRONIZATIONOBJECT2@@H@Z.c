/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C01215C8
 * Callers:
 *     DxgkWaitForSynchronizationObject @ 0x1C0121940 (DxgkWaitForSynchronizationObject.c)
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01570D0 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011EBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        const GUID *a3)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rdi
  D3DKMT_HANDLE *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // rcx
  const GUID *v27; // r8
  D3DKMT_HANDLE *v28; // rbx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rcx
  const GUID *v38; // r8
  int v39; // [rsp+50h] [rbp-108h] BYREF
  __int64 v40; // [rsp+58h] [rbp-100h]
  char v41; // [rsp+60h] [rbp-F8h]
  struct DXGPROCESS *v42; // [rsp+68h] [rbp-F0h]
  __int128 v43; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v44; // [rsp+80h] [rbp-D8h]
  __int128 v45; // [rsp+90h] [rbp-C8h]
  __int128 v46; // [rsp+A0h] [rbp-B8h]
  __int128 v47; // [rsp+B0h] [rbp-A8h]
  __int128 v48; // [rsp+C0h] [rbp-98h]
  __int128 v49; // [rsp+D0h] [rbp-88h]
  __int128 v50; // [rsp+E0h] [rbp-78h]
  __int128 v51; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v52; // [rsp+100h] [rbp-58h]
  __int128 v53; // [rsp+110h] [rbp-48h]
  __int128 v54; // [rsp+120h] [rbp-38h]
  __int64 v55; // [rsp+130h] [rbp-28h]

  v4 = a1;
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2043LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v30 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v30;
    }
  }
  v42 = v12;
  if ( v12 )
  {
    if ( !a2 )
    {
      v43 = *(_OWORD *)&v4->hContext;
      v44 = *(_OWORD *)&v4->ObjectHandleArray[2];
      v45 = *(_OWORD *)&v4->ObjectHandleArray[6];
      v46 = *(_OWORD *)&v4->ObjectHandleArray[10];
      v47 = *(_OWORD *)&v4->ObjectHandleArray[14];
      v48 = *(_OWORD *)&v4->ObjectHandleArray[18];
      v49 = *(_OWORD *)&v4->ObjectHandleArray[22];
      v50 = *(_OWORD *)&v4->ObjectHandleArray[26];
      v28 = &v4->ObjectHandleArray[30];
      v51 = *(_OWORD *)v28;
      v52 = *((_OWORD *)v28 + 1);
      v53 = *((_OWORD *)v28 + 2);
      v54 = *((_OWORD *)v28 + 3);
      v55 = *((_QWORD *)v28 + 8);
      goto LABEL_20;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v43 = *(_OWORD *)&v4->hContext;
    v44 = *(_OWORD *)&v4->ObjectHandleArray[2];
    v45 = *(_OWORD *)&v4->ObjectHandleArray[6];
    v46 = *(_OWORD *)&v4->ObjectHandleArray[10];
    v47 = *(_OWORD *)&v4->ObjectHandleArray[14];
    v48 = *(_OWORD *)&v4->ObjectHandleArray[18];
    v49 = *(_OWORD *)&v4->ObjectHandleArray[22];
    v50 = *(_OWORD *)&v4->ObjectHandleArray[26];
    v13 = &v4->ObjectHandleArray[30];
    v51 = *(_OWORD *)v13;
    v52 = *((_OWORD *)v13 + 1);
    v53 = *((_OWORD *)v13 + 2);
    v54 = *((_OWORD *)v13 + 3);
    v55 = *((_QWORD *)v13 + 8);
    v14 = DWORD1(v43);
    if ( DWORD1(v43) )
    {
      if ( DWORD1(v43) <= 0x20 )
      {
LABEL_20:
        v25 = WaitForSynchronizationObjectFromGpu(
                DWORD1(v43),
                (unsigned int *)&v43 + 2,
                0LL,
                *((unsigned __int64 *)&v51 + 1),
                v43,
                v12,
                a2 != 0,
                0,
                0,
                0);
        if ( v25 < 0 )
        {
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v24);
          if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v37, &EventProfilerExit, v38, v39);
          return (unsigned int)v25;
        }
        else
        {
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v24);
          if ( v41 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v26, &EventProfilerExit, v27, v39);
          }
          return 0LL;
        }
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdError(&v51, v9, v11);
      v20[3] = (unsigned int)v43;
      v20[4] = v14;
      v20[5] = -1073741811LL;
      WdLogEvent5_WdError(v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v21);
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v22, &EventProfilerExit, v23, v39);
      return 3221225485LL;
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(&v51, v9, v11);
      *(_QWORD *)(v15 + 24) = (unsigned int)v43;
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v15);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v16);
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v39);
      return 3221225485LL;
    }
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v31 + 24) = PsGetCurrentProcess(v33, v32);
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v34);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v35, &EventProfilerExit, v36, v39);
    return 3221225485LL;
  }
}
