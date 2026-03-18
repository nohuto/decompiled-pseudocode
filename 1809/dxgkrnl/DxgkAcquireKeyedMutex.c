/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1C0236460
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C0233E80 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // rcx
  const GUID *v8; // r8
  _OWORD *v10; // rax
  union _LARGE_INTEGER *v11; // r9
  __int64 *v12; // rdx
  ULONG64 v13; // rcx
  _QWORD *v14; // r8
  size_t v15; // [rsp+30h] [rbp-58h]
  int v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h]
  char v18; // [rsp+50h] [rbp-38h]
  unsigned int v19[4]; // [rsp+58h] [rbp-30h]
  __int128 v20; // [rsp+68h] [rbp-20h] BYREF
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v18 = 1;
    v16 = 2054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2054);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2054);
  if ( !DXGPROCESS::GetCurrent() )
  {
    v5 = WdLogNewEntry5_WdError(v4);
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
LABEL_7:
    WdLogEvent5_WdError(v5);
    goto LABEL_8;
  }
  v10 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v19 = *v10;
  v20 = v10[1];
  v11 = 0LL;
  v12 = (__int64 *)v20;
  if ( (_QWORD)v20 )
  {
    if ( (unsigned __int64)v20 >= MmUserProbeAddress )
      v12 = (__int64 *)MmUserProbeAddress;
    v21 = *v12;
    v11 = (union _LARGE_INTEGER *)&v21;
  }
  LODWORD(v15) = 0;
  v6 = DXGKEYEDMUTEX::AcquireSync(
         v19[0],
         *(__int64 *)&v19[2],
         0,
         v11,
         (DXGKEYEDMUTEX *)((char *)&v20 + 8),
         0LL,
         v15,
         0LL);
  if ( v6 >= 0 )
  {
    v14 = (_QWORD *)(a1 + 24);
    v13 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v14 = (_QWORD *)MmUserProbeAddress;
    *v14 = *((_QWORD *)&v20 + 1);
  }
  if ( v6 < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v5 + 24) = v19[0];
    *(_QWORD *)(v5 + 32) = v6;
    goto LABEL_7;
  }
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v16);
  return (unsigned int)v6;
}
