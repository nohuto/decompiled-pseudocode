/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01DDCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01CE760 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, const GUID *a3)
{
  struct DXGPROCESS *Current; // r15
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rsi
  ADAPTER_DISPLAY **v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  const GUID *v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v25; // [rsp+30h] [rbp-49h] BYREF
  __int64 v26; // [rsp+38h] [rbp-41h]
  char v27; // [rsp+40h] [rbp-39h]
  __int64 v28; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v29[32]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v30[88]; // [rsp+78h] [rbp-1h] BYREF
  struct DXGADAPTER *v31; // [rsp+E0h] [rbp+67h] BYREF
  struct DXGADAPTER *v32; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int64 v33; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int64 v34; // [rsp+F8h] [rbp+7Fh] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 3010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3010);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 3010);
  Current = DXGPROCESS::GetCurrent();
  PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, &v32, &v34, &v31, &v33);
  v8 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v10 = (__int64 *)v32;
    v11 = (ADAPTER_DISPLAY **)v31;
    if ( !v32 || !v31 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v12 + 24) = 2313LL;
      WdLogEvent5_WdAssertion(v12);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)&v28,
      (struct DXGADAPTER *const)v10,
      (struct DXGADAPTER *const)v11);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v10);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v11);
    v13 = COREADAPTERACCESS::AcquireExclusive(&v28, 2LL);
    v8 = v13;
    if ( v13 >= 0 )
    {
      if ( !v10[316] )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v17 + 24) = 2330LL;
        WdLogEvent5_WdAssertion(v17);
      }
      if ( !v11[315] )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v18 + 24) = 2331LL;
        WdLogEvent5_WdAssertion(v18);
      }
      ADAPTER_RENDER::FlushScheduler(v10[316], 6, 0xFFFFFFFF, 0);
      v8 = (int)ADAPTER_DISPLAY::DdiSetPalette(v11[315], a2, v19);
      ADAPTER_RENDER::FlushScheduler(v10[316], 7, 0xFFFFFFFF, 0);
      if ( (int)v8 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v21[3] = v8;
        v21[4] = v11;
        v21[5] = a2->VidPnSourceId;
        v21[6] = Current;
        WdLogEvent5_WdError(v21);
      }
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
      v16[3] = v8;
      v16[4] = v10;
      v16[5] = v11;
      v16[6] = Current;
      WdLogEvent5_WdEvent(v16);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v29);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = a1;
    *(_QWORD *)(v9 + 32) = v8;
    WdLogEvent5_WdError(v9);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v25);
  return (unsigned int)v8;
}
