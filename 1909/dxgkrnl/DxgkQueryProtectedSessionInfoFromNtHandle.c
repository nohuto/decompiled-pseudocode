/*
 * XREFs of DxgkQueryProtectedSessionInfoFromNtHandle @ 0x1C0262F80
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionInfoFromNtHandle(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  const GUID *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG64 v8; // rax
  char *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  char *v17; // r14
  HANDLE v18; // r15
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
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
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 530LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v36 = -1;
  v37 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2151;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v3, &EventProfilerEnter, v4, 2151);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2151LL);
  HandleInformation = 0LL;
  v8 = a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v8;
  *(_OWORD *)v40 = *(_OWORD *)(v8 + 16);
  v41 = *(_QWORD *)(v8 + 32);
  v9 = (char *)Handle[1];
  if ( !Handle[1] )
  {
    if ( !LODWORD(v40[0]) )
      goto LABEL_20;
LABEL_13:
    v10 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v7);
    v10[3] = v9;
    v11 = LODWORD(v40[0]);
LABEL_14:
    v10[4] = v11;
    LODWORD(v12) = -1073741811;
    v10[5] = -1073741811LL;
    goto LABEL_15;
  }
  if ( !LODWORD(v40[0]) )
    goto LABEL_13;
LABEL_20:
  v17 = (char *)v40[1];
  if ( v40[1] )
  {
    if ( (_DWORD)v41 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( (_DWORD)v41 )
  {
LABEL_24:
    v10 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v7);
    v10[3] = v17;
    v11 = (unsigned int)v41;
    goto LABEL_14;
  }
LABEL_25:
  v18 = Handle[0];
  v19 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v12 = v19;
  if ( v19 == -1073741788 )
  {
    v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v23 + 24) = v18;
    *(_QWORD *)(v23 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v24);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v25, &EventProfilerExit, v26, v36);
    }
    return 3221225508LL;
  }
  if ( v19 >= 0 )
  {
    v27 = (__int64 *)Object;
    if ( !*(_QWORD *)Object )
    {
      v28 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v28 + 24) = 608LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v29 = *(unsigned int *)(*v27 + 88);
    if ( LODWORD(v40[0]) >= (unsigned int)v29 )
    {
      v30 = *(const void **)(*v27 + 80);
      if ( (unsigned __int64)&v9[v29] > MmUserProbeAddress || &v9[v29] <= v9 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v9, v30, (unsigned int)v29);
    }
    v31 = (_DWORD *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v31 = (_DWORD *)MmUserProbeAddress;
    *v31 = v29;
    if ( v9 && LODWORD(v40[0]) < (unsigned int)v29 )
      LODWORD(v12) = -1073741789;
    v32 = *v27;
    v43 = *(_DWORD *)(*v27 + 104);
    v33 = v43;
    if ( (unsigned int)v41 >= v43 )
    {
      v34 = *(const void **)(v32 + 96);
      if ( (unsigned __int64)&v17[v43] > MmUserProbeAddress || &v17[v43] <= v17 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, v34, v33);
    }
    v35 = (_DWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v35 = (_DWORD *)MmUserProbeAddress;
    *v35 = v33;
    if ( v17 && (unsigned int)v41 < v33 )
      LODWORD(v12) = -1073741789;
    ObfDereferenceObject(v27);
    goto LABEL_16;
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
  v10[3] = v18;
  v10[4] = v12;
LABEL_15:
  WdLogEvent5_WdWarning(v10);
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v13);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v36);
  return (unsigned int)v12;
}
