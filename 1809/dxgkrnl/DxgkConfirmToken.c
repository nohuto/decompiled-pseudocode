/*
 * XREFs of DxgkConfirmToken @ 0x1C0141184
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z @ 0x1C001DA90 (-ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+48h] [rbp-39h] BYREF
  __int64 v21; // [rsp+50h] [rbp-31h]
  char v22; // [rsp+58h] [rbp-29h]
  _BYTE v23[8]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v24[32]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v25[40]; // [rsp+90h] [rbp+Fh] BYREF

  v20 = -1;
  v21 = 0LL;
  v7 = (unsigned int)a3;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 2095;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2095);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2095);
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v18 + 24) = 2384LL;
    WdLogEvent5_WdAssertion(v18);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, a1, 0LL);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23);
  v15 = v11;
  if ( v11 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v19 + 24) = a1;
    *(_QWORD *)(v19 + 32) = v15;
    WdLogEvent5_WdWarning(v19);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 316) + 520LL)
                                                                                          + 8LL)
                                                                              + 384LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 316) + 528LL),
      a2,
      v7,
      a4,
      a5,
      a6);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v25);
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v20);
  }
}
