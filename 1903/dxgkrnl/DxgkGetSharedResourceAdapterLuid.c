/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C02090B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006FC4 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007628 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C37C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __m128i *v15; // rax
  __m128i v16; // xmm1
  void *v17; // xmm0_8
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v26; // rax
  PVOID v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  _BYTE v46[16]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v47; // [rsp+40h] [rbp-58h]
  int v48; // [rsp+50h] [rbp-48h] BYREF
  __int64 v49; // [rsp+58h] [rbp-40h]
  char v50; // [rsp+60h] [rbp-38h]
  __m128i v51; // [rsp+68h] [rbp-30h]
  __int64 v52; // [rsp+78h] [rbp-20h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF

  v48 = -1;
  v49 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v50 = 1;
    v48 = 2088;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2088);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v48, 2088LL);
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
    goto LABEL_6;
  v7 = MmUserProbeAddress;
  v15 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (__m128i *)MmUserProbeAddress;
  v16 = *v15;
  v47 = v16;
  v51 = v16;
  v52 = 0LL;
  v17 = (void *)_mm_srli_si128(v16, 8).m128i_u64[0];
  if ( v17 )
  {
    v18 = ObReferenceObjectByHandle(v17, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
    v10 = v18;
    if ( v18 == -1073741788 )
    {
      v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = v17;
      *(_QWORD *)(v22 + 32) = -1073741788LL;
      WdLogEvent5_WdWarning(v22);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v23);
      if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, v48);
      return 3221225508LL;
    }
    if ( v18 < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v26 + 24) = v17;
      *(_QWORD *)(v26 + 32) = v10;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_7;
    }
    v27 = Object;
    v28 = *((_QWORD *)Object + 2);
    if ( !v28 )
    {
      v29 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v29 + 24) = v27;
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
    }
    v30 = *(_QWORD *)(v28 + 88);
    if ( v30 )
      goto LABEL_27;
    v31 = *(_QWORD *)(v28 + 72);
    if ( v31 )
      v30 = *(_QWORD *)(v31 + 16);
    if ( v30 )
LABEL_27:
      v52 = *(_QWORD *)(v30 + 276);
    ObfDereferenceObject(v27);
    if ( (int)v10 < 0 )
      goto LABEL_7;
  }
  else
  {
    v32 = _mm_cvtsi128_si32(v16);
    if ( !v32 )
    {
LABEL_6:
      v9 = WdLogNewEntry5_WdError(v7, v6, v8);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v9 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v9);
LABEL_7:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v11);
      if ( v50 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v12, &EventProfilerExit, v13, v48);
      }
      return (unsigned int)v10;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v46);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
    Global = DXGGLOBAL::GetGlobal(v34, v33);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v32, 2);
    v39 = ObjectA;
    if ( !ObjectA )
    {
      v40 = WdLogNewEntry5_WdWarning(0LL, v37, v38);
      *(_QWORD *)(v40 + 24) = v32;
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v40 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v40);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v46);
      goto LABEL_7;
    }
    v41 = *(_QWORD *)(ObjectA + 88);
    if ( v41 )
      goto LABEL_37;
    v42 = *(_QWORD *)(v39 + 72);
    if ( v42 )
      v41 = *(_QWORD *)(v42 + 16);
    if ( v41 )
LABEL_37:
      v52 = *(_QWORD *)(v41 + 276);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v46);
  }
  v43 = a1 + 24;
  if ( a1 + 24 > MmUserProbeAddress || v43 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(__m128i *)a1 = v47;
  *(_QWORD *)(a1 + 16) = v52;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v43);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v48);
  return 0LL;
}
