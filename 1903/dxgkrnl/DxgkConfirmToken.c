/*
 * XREFs of DxgkConfirmToken @ 0x1C0152F50
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z @ 0x1C001D570 (-ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkConfirmToken(
        struct DXGADAPTER *a1,
        unsigned int a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  char v25; // [rsp+50h] [rbp-B0h]
  _BYTE v26[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[64]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[72]; // [rsp+A8h] [rbp-58h] BYREF

  v23 = -1;
  v24 = 0LL;
  v7 = (unsigned int)a3;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 2095;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2095);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2095LL);
  if ( !a1 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v21 + 24) = 2405LL;
    WdLogEvent5_WdAssertion(v21);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, a1, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((__int64)v26, 0xFFFFFFFFLL, v12);
  v17 = v13;
  if ( v13 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v22 + 24) = a1;
    *(_QWORD *)(v22 + 32) = v17;
    WdLogEvent5_WdWarning(v22);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 320) + 520LL)
                                                                                          + 8LL)
                                                                              + 384LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 320) + 528LL),
      a2,
      v7,
      a4,
      a5,
      a6);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v28);
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23, v18);
  if ( v25 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v23);
  }
}
