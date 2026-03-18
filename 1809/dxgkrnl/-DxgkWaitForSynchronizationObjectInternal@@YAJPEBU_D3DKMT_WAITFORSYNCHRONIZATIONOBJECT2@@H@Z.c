/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0114E28
 * Callers:
 *     DxgkWaitForSynchronizationObject @ 0x1C00B2E20 (DxgkWaitForSynchronizationObject.c)
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0114E10 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C0117BC0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        const GUID *a3)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rdi
  D3DKMT_HANDLE *v9; // rbx
  int v10; // ebx
  __int64 v11; // rcx
  const GUID *v12; // r8
  D3DKMT_HANDLE *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  const GUID *v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v27; // [rsp+50h] [rbp-108h] BYREF
  __int64 v28; // [rsp+58h] [rbp-100h]
  char v29; // [rsp+60h] [rbp-F8h]
  struct DXGPROCESS *v30; // [rsp+68h] [rbp-F0h]
  __int128 v31; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v32; // [rsp+80h] [rbp-D8h]
  __int128 v33; // [rsp+90h] [rbp-C8h]
  __int128 v34; // [rsp+A0h] [rbp-B8h]
  __int128 v35; // [rsp+B0h] [rbp-A8h]
  __int128 v36; // [rsp+C0h] [rbp-98h]
  __int128 v37; // [rsp+D0h] [rbp-88h]
  __int128 v38; // [rsp+E0h] [rbp-78h]
  __int128 v39; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v40; // [rsp+100h] [rbp-58h]
  __int128 v41; // [rsp+110h] [rbp-48h]
  __int128 v42; // [rsp+120h] [rbp-38h]
  __int64 v43; // [rsp+130h] [rbp-28h]

  v4 = a1;
  v27 = -1;
  v28 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2043);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v23 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v23;
      }
    }
  }
  v30 = v8;
  if ( v8 )
  {
    if ( !a2 )
    {
      v31 = *(_OWORD *)&v4->hContext;
      v32 = *(_OWORD *)&v4->ObjectHandleArray[2];
      v33 = *(_OWORD *)&v4->ObjectHandleArray[6];
      v34 = *(_OWORD *)&v4->ObjectHandleArray[10];
      v35 = *(_OWORD *)&v4->ObjectHandleArray[14];
      v36 = *(_OWORD *)&v4->ObjectHandleArray[18];
      v37 = *(_OWORD *)&v4->ObjectHandleArray[22];
      v38 = *(_OWORD *)&v4->ObjectHandleArray[26];
      v9 = &v4->ObjectHandleArray[30];
      v39 = *(_OWORD *)v9;
      v40 = *((_OWORD *)v9 + 1);
      v41 = *((_OWORD *)v9 + 2);
      v42 = *((_OWORD *)v9 + 3);
      v43 = *((_QWORD *)v9 + 8);
      goto LABEL_8;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v31 = *(_OWORD *)&v4->hContext;
    v32 = *(_OWORD *)&v4->ObjectHandleArray[2];
    v33 = *(_OWORD *)&v4->ObjectHandleArray[6];
    v34 = *(_OWORD *)&v4->ObjectHandleArray[10];
    v35 = *(_OWORD *)&v4->ObjectHandleArray[14];
    v36 = *(_OWORD *)&v4->ObjectHandleArray[18];
    v37 = *(_OWORD *)&v4->ObjectHandleArray[22];
    v38 = *(_OWORD *)&v4->ObjectHandleArray[26];
    v14 = &v4->ObjectHandleArray[30];
    v39 = *(_OWORD *)v14;
    v40 = *((_OWORD *)v14 + 1);
    v41 = *((_OWORD *)v14 + 2);
    v42 = *((_OWORD *)v14 + 3);
    v43 = *((_QWORD *)v14 + 8);
    v15 = DWORD1(v31);
    if ( DWORD1(v31) )
    {
      if ( DWORD1(v31) <= 0x20 )
      {
LABEL_8:
        v10 = WaitForSynchronizationObjectFromGpu(
                DWORD1(v31),
                (const unsigned int *)&v31 + 2,
                0LL,
                *((unsigned __int64 *)&v39 + 1),
                v31,
                v8,
                a2 != 0,
                0,
                0,
                0);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v10 < 0 )
        {
          if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v11, &EventProfilerExit, v12, v27);
          return (unsigned int)v10;
        }
        else
        {
          if ( v29 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v11, &EventProfilerExit, v12, v27);
          }
          return 0LL;
        }
      }
      v19 = (_QWORD *)WdLogNewEntry5_WdError(&v39);
      v19[3] = (unsigned int)v31;
      v19[4] = v15;
      v19[5] = -1073741811LL;
      WdLogEvent5_WdError(v19);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v27);
      return 3221225485LL;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(&v39);
      *(_QWORD *)(v16 + 24) = (unsigned int)v31;
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v16);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v27);
      return 3221225485LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v24 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v25, &EventProfilerExit, v26, v27);
    return 3221225485LL;
  }
}
