/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1C0262B70
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0261938 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0261BC0 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  _OWORD *v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // rax
  DXGPROTECTEDSESSION **v26; // rdi
  DXGPROTECTEDSESSION *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r14
  unsigned int v34; // esi
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r14d
  __int64 v38; // rax
  _DWORD *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  HANDLE Handle[2]; // [rsp+30h] [rbp-48h] BYREF
  int v47; // [rsp+40h] [rbp-38h] BYREF
  __int64 v48; // [rsp+48h] [rbp-30h]
  char v49; // [rsp+50h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp+18h] BYREF

  v47 = -1;
  v48 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v49 = 1;
    v47 = 2152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2152);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v47, 2152LL);
  HandleInformation = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 720LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v12);
    if ( v49 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v47);
    }
    return (unsigned int)v11;
  }
  v16 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v16;
  LODWORD(Handle[1]) = 0;
  v17 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v11 = v17;
  if ( v17 == -1073741788 )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(HANDLE *)(v21 + 24) = Handle[0];
    *(_QWORD *)(v21 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v22);
    if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v47);
    return 3221225508LL;
  }
  else
  {
    if ( v17 < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(HANDLE *)(v25 + 24) = Handle[0];
      *(_QWORD *)(v25 + 32) = v11;
      WdLogEvent5_WdWarning(v25);
      goto LABEL_9;
    }
    v26 = (DXGPROTECTEDSESSION **)Object;
    v27 = *(DXGPROTECTEDSESSION **)Object;
    if ( !*(_QWORD *)Object )
    {
      v28 = WdLogNewEntry5_WdAssertion(0LL, v18);
      *(_QWORD *)(v28 + 24) = 782LL;
      WdLogEvent5_WdAssertion(v28);
      v27 = *v26;
    }
    v29 = DXGPROTECTEDSESSION::Open(v27, (unsigned int *)&Handle[1]);
    v33 = v29;
    if ( v29 >= 0 )
    {
      v37 = (int)Handle[1];
      if ( !LODWORD(Handle[1]) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v31, v30);
        *(_QWORD *)(v38 + 24) = 797LL;
        WdLogEvent5_WdAssertion(v38);
      }
      v39 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v39 = (_DWORD *)MmUserProbeAddress;
      *v39 = v37;
      ObfDereferenceObject(v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v40);
      if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v41, &EventProfilerExit, v42, v47);
      return 0LL;
    }
    else
    {
      v34 = (unsigned int)Handle[1];
      if ( LODWORD(Handle[1]) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v31, v30);
        *(_QWORD *)(v35 + 24) = 790LL;
        WdLogEvent5_WdAssertion(v35);
      }
      v36 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(HANDLE *)(v36 + 24) = Handle[0];
      *(_QWORD *)(v36 + 32) = v33;
      WdLogEvent5_WdWarning(v36);
      if ( v34 )
        DXGPROTECTEDSESSION::DestroyProtectedSession(*v26, v34);
      ObfDereferenceObject(v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v43);
      if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v44, &EventProfilerExit, v45, v47);
      return (unsigned int)v33;
    }
  }
}
