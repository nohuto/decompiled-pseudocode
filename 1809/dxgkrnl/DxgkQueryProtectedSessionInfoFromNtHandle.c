/*
 * XREFs of DxgkQueryProtectedSessionInfoFromNtHandle @ 0x1C022E0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionInfoFromNtHandle(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG64 v7; // rax
  char *v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  char *v11; // r14
  __int64 v12; // rcx
  const GUID *v13; // r8
  HANDLE v15; // r15
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 *v27; // r12
  __int64 v28; // rax
  __int64 v29; // r15
  const void *v30; // rdx
  _DWORD *v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // esi
  const void *v34; // rdx
  _DWORD *v35; // rdx
  int v36; // [rsp+38h] [rbp-90h] BYREF
  __int64 v37; // [rsp+40h] [rbp-88h]
  char v38; // [rsp+48h] [rbp-80h]
  HANDLE Handle[2]; // [rsp+50h] [rbp-78h]
  void *v40[2]; // [rsp+60h] [rbp-68h]
  __int64 v41; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v43; // [rsp+80h] [rbp-48h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-40h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 530LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2151;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2151);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2151);
  v7 = a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v7;
  *(_OWORD *)v40 = *(_OWORD *)(v7 + 16);
  v41 = *(_QWORD *)(v7 + 32);
  v8 = (char *)Handle[1];
  if ( Handle[1] )
  {
    if ( LODWORD(v40[0]) )
      goto LABEL_14;
LABEL_13:
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v6);
    v9[3] = v8;
    v10 = LODWORD(v40[0]);
    goto LABEL_19;
  }
  if ( LODWORD(v40[0]) )
    goto LABEL_13;
LABEL_14:
  v11 = (char *)v40[1];
  if ( v40[1] )
  {
    if ( (_DWORD)v41 )
    {
LABEL_23:
      v15 = Handle[0];
      v16 = ObReferenceObjectByHandle(
              Handle[0],
              0x20000u,
              g_pDxgkSharedProtectedSessionObjectType,
              1,
              &Object,
              &HandleInformation);
      v20 = v16;
      if ( v16 == -1073741788 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = v15;
        *(_QWORD *)(v21 + 32) = -1073741788LL;
        WdLogEvent5_WdWarning(v21);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
        if ( v38 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v22, &EventProfilerExit, v23, v36);
        }
        return 3221225508LL;
      }
      else
      {
        if ( v16 >= 0 )
        {
          v27 = (__int64 *)Object;
          if ( !*(_QWORD *)Object )
          {
            v28 = WdLogNewEntry5_WdAssertion(v18);
            *(_QWORD *)(v28 + 24) = 608LL;
            WdLogEvent5_WdAssertion(v28);
          }
          v29 = *(unsigned int *)(*v27 + 88);
          if ( LODWORD(v40[0]) >= (unsigned int)v29 )
          {
            v30 = *(const void **)(*v27 + 80);
            if ( (unsigned __int64)&v8[v29] > MmUserProbeAddress || &v8[v29] <= v8 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v8, v30, (unsigned int)v29);
          }
          v31 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v31 = (_DWORD *)MmUserProbeAddress;
          *v31 = v29;
          if ( v8 && LODWORD(v40[0]) < (unsigned int)v29 )
            LODWORD(v20) = -1073741789;
          v32 = *v27;
          v43 = *(_DWORD *)(*v27 + 104);
          v33 = v43;
          if ( (unsigned int)v41 >= v43 )
          {
            v34 = *(const void **)(v32 + 96);
            if ( (unsigned __int64)&v11[v43] > MmUserProbeAddress || &v11[v43] <= v11 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v11, v34, v33);
          }
          v35 = (_DWORD *)(a1 + 32);
          if ( a1 + 32 >= MmUserProbeAddress )
            v35 = (_DWORD *)MmUserProbeAddress;
          *v35 = v33;
          if ( v11 && (unsigned int)v41 < v33 )
            LODWORD(v20) = -1073741789;
          ObfDereferenceObject(v27);
        }
        else
        {
          v24 = WdLogNewEntry5_WdWarning(v18, v17, v19);
          *(_QWORD *)(v24 + 24) = v15;
          *(_QWORD *)(v24 + 32) = v20;
          WdLogEvent5_WdWarning(v24);
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
        if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v25, &EventProfilerExit, v26, v36);
        return (unsigned int)v20;
      }
    }
  }
  else if ( !(_DWORD)v41 )
  {
    goto LABEL_23;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v6);
  v9[3] = v11;
  v10 = (unsigned int)v41;
LABEL_19:
  v9[4] = v10;
  v9[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v9);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v36);
  return 3221225485LL;
}
