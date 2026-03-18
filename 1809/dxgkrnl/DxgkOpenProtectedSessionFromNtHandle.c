/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1C022DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C022CA0C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C022CC98 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  const GUID *v10; // r8
  _OWORD *v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v20; // rax
  DXGPROTECTEDSESSION **v21; // rdi
  DXGPROTECTEDSESSION *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r14
  unsigned int v29; // esi
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r14d
  __int64 v33; // rax
  _DWORD *v34; // rdx
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rcx
  const GUID *v38; // r8
  HANDLE Handle[2]; // [rsp+30h] [rbp-48h] BYREF
  int v40; // [rsp+40h] [rbp-38h] BYREF
  __int64 v41; // [rsp+48h] [rbp-30h]
  char v42; // [rsp+50h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp+18h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 2152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2152);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2152);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 720LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v7 = WdLogNewEntry5_WdError(v6);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v40);
    }
    return (unsigned int)v8;
  }
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v12;
  LODWORD(Handle[1]) = 0;
  v13 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v8 = v13;
  if ( v13 == -1073741788 )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(HANDLE *)(v17 + 24) = Handle[0];
    *(_QWORD *)(v17 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v17);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v40);
    return 3221225508LL;
  }
  else
  {
    if ( v13 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(HANDLE *)(v20 + 24) = Handle[0];
      *(_QWORD *)(v20 + 32) = v8;
      WdLogEvent5_WdWarning(v20);
      goto LABEL_9;
    }
    v21 = (DXGPROTECTEDSESSION **)Object;
    v22 = *(DXGPROTECTEDSESSION **)Object;
    if ( !*(_QWORD *)Object )
    {
      v23 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v23 + 24) = 782LL;
      WdLogEvent5_WdAssertion(v23);
      v22 = *v21;
    }
    v24 = DXGPROTECTEDSESSION::Open(v22, (unsigned int *)&Handle[1]);
    v28 = v24;
    if ( v24 >= 0 )
    {
      v32 = (int)Handle[1];
      if ( !LODWORD(Handle[1]) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v33 + 24) = 797LL;
        WdLogEvent5_WdAssertion(v33);
      }
      v34 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v34 = (_DWORD *)MmUserProbeAddress;
      *v34 = v32;
      ObfDereferenceObject(v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v35, &EventProfilerExit, v36, v40);
      return 0LL;
    }
    else
    {
      v29 = (unsigned int)Handle[1];
      if ( LODWORD(Handle[1]) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v30 + 24) = 790LL;
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(HANDLE *)(v31 + 24) = Handle[0];
      *(_QWORD *)(v31 + 32) = v28;
      WdLogEvent5_WdWarning(v31);
      if ( v29 )
        DXGPROTECTEDSESSION::DestroyProtectedSession(*v21, v29);
      ObfDereferenceObject(v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v37, &EventProfilerExit, v38, v40);
      return (unsigned int)v28;
    }
  }
}
