/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C01DAB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0010B20 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(ULONG64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v4; // rcx
  __m128i *v5; // rax
  __m128i v6; // xmm1
  void *v7; // xmm0_8
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  const GUID *v19; // r8
  PVOID v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rax
  _BYTE v38[16]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v39; // [rsp+40h] [rbp-58h]
  int v40; // [rsp+50h] [rbp-48h] BYREF
  __int64 v41; // [rsp+58h] [rbp-40h]
  char v42; // [rsp+60h] [rbp-38h]
  __m128i v43; // [rsp+68h] [rbp-30h]
  __int64 v44; // [rsp+78h] [rbp-20h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 2088;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2088);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2088);
  if ( !DXGPROCESS::GetCurrent() )
    goto LABEL_45;
  v4 = MmUserProbeAddress;
  v5 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (__m128i *)MmUserProbeAddress;
  v6 = *v5;
  v39 = v6;
  v43 = v6;
  v44 = 0LL;
  v7 = (void *)_mm_srli_si128(v6, 8).m128i_u64[0];
  if ( !v7 )
  {
    v25 = _mm_cvtsi128_si32(v6);
    if ( v25 )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v38);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
      Global = DXGGLOBAL::GetGlobal(v26);
      ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v25, 2);
      v31 = ObjectA;
      if ( ObjectA )
      {
        v33 = *(_QWORD *)(ObjectA + 88);
        if ( v33 )
          goto LABEL_36;
        v34 = *(_QWORD *)(v31 + 72);
        if ( v34 )
          v33 = *(_QWORD *)(v34 + 16);
        if ( v33 )
LABEL_36:
          v44 = *(_QWORD *)(v33 + 276);
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v38);
        goto LABEL_38;
      }
      v32 = WdLogNewEntry5_WdWarning(0LL, v29, v30);
      *(_QWORD *)(v32 + 24) = v25;
      LODWORD(v12) = -1073741811;
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v38);
LABEL_16:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v18, &EventProfilerExit, v19, v40);
      return (unsigned int)v12;
    }
LABEL_45:
    v37 = WdLogNewEntry5_WdError(v4);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    goto LABEL_16;
  }
  v8 = ObReferenceObjectByHandle(v7, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v12 = v8;
  if ( v8 == -1073741788 )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v7;
    *(_QWORD *)(v13 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v13);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v40);
    }
    return 3221225508LL;
  }
  if ( v8 < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v17 + 24) = v7;
    *(_QWORD *)(v17 + 32) = v12;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_16;
  }
  v20 = Object;
  v21 = *((_QWORD *)Object + 2);
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v22 + 24) = v20;
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
  }
  v23 = *(_QWORD *)(v21 + 88);
  if ( v23 )
    goto LABEL_26;
  v24 = *(_QWORD *)(v21 + 72);
  if ( v24 )
    v23 = *(_QWORD *)(v24 + 16);
  if ( v23 )
LABEL_26:
    v44 = *(_QWORD *)(v23 + 276);
  ObfDereferenceObject(v20);
  if ( (int)v12 < 0 )
    goto LABEL_16;
LABEL_38:
  if ( a1 + 24 > MmUserProbeAddress || a1 + 24 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(__m128i *)a1 = v39;
  *(_QWORD *)(a1 + 16) = v44;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v40);
  return 0LL;
}
