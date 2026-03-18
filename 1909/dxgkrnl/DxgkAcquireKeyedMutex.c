/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1C026B3B0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C0268A40 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // edi
  ULONG64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  _OWORD *v15; // rax
  union _LARGE_INTEGER *v16; // r9
  __int64 *v17; // rdx
  ULONG64 v18; // rcx
  _QWORD *v19; // r8
  size_t v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]
  char v23; // [rsp+50h] [rbp-38h]
  unsigned int v24[4]; // [rsp+58h] [rbp-30h]
  __int128 v25; // [rsp+68h] [rbp-20h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v23 = 1;
    v21 = 2054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2054);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2054LL);
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, v8);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
LABEL_7:
    WdLogEvent5_WdError(v9);
    goto LABEL_8;
  }
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v24 = *v15;
  v25 = v15[1];
  v16 = 0LL;
  v26 = 0LL;
  v17 = (__int64 *)v25;
  if ( (_QWORD)v25 )
  {
    if ( (unsigned __int64)v25 >= MmUserProbeAddress )
      v17 = (__int64 *)MmUserProbeAddress;
    v26 = *v17;
    v16 = (union _LARGE_INTEGER *)&v26;
  }
  LODWORD(v20) = 0;
  v10 = DXGKEYEDMUTEX::AcquireSync(
          v24[0],
          *(__int64 *)&v24[2],
          0,
          v16,
          (DXGKEYEDMUTEX *)((char *)&v25 + 8),
          0LL,
          v20,
          0LL);
  if ( v10 >= 0 )
  {
    v19 = (_QWORD *)(a1 + 24);
    v18 = MmUserProbeAddress;
    v11 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v19 = (_QWORD *)MmUserProbeAddress;
    *v19 = *((_QWORD *)&v25 + 1);
  }
  if ( v10 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v18, v11, v19);
    *(_QWORD *)(v9 + 24) = v24[0];
    *(_QWORD *)(v9 + 32) = v10;
    goto LABEL_7;
  }
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v11);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v21);
  return (unsigned int)v10;
}
