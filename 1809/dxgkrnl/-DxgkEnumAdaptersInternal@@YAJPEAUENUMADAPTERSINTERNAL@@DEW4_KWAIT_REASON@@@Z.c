/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E1578
 * Callers:
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C00B3680 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CD6C0 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGUSERCRIT@@QEAAXXZ @ 0x1C001322C (-Release@DXGUSERCRIT@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EE924 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C012D328 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(
        struct ENUMADAPTERSINTERNAL *a1,
        char a2,
        const GUID *a3,
        enum _KWAIT_REASON a4)
{
  char v5; // di
  __int64 v8; // rcx
  __int64 v9; // rax
  struct DXGGLOBAL *Global; // rax
  union _LARGE_INTEGER *v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // rcx
  int v23; // edi
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  struct DXGGLOBAL *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGPROCESS *v32; // rsi
  __int64 v33; // rcx
  const GUID *v34; // r8
  int v36; // [rsp+20h] [rbp-30h] BYREF
  __int64 v37; // [rsp+28h] [rbp-28h]
  char v38; // [rsp+30h] [rbp-20h]
  _BYTE v39[8]; // [rsp+38h] [rbp-18h] BYREF
  struct DXGPROCESS *v40; // [rsp+40h] [rbp-10h]
  char v41; // [rsp+48h] [rbp-8h]

  v36 = -1;
  v37 = 0LL;
  v5 = (char)a3;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2078);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2078);
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 1018LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v5 )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    v12 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((DXGSESSIONMGR **)Global + 77), a4, a2, v11);
    v14 = v12;
    if ( v12 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdError(v15);
    }
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v40 = Current;
    v41 = 0;
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v39, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v21 = DXGGLOBAL::GetGlobal(v20);
    v23 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v21,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            4);
    v24 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v25 + 24) = 1076LL;
      WdLogEvent5_WdAssertion(v25);
      v24 = *(_DWORD *)a1;
    }
    if ( v24 > *((_DWORD *)a1 + 2) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v26 + 24) = 1077LL;
      WdLogEvent5_WdAssertion(v26);
    }
    if ( v23 < 0 )
      goto LABEL_22;
    v27 = DXGGLOBAL::GetGlobal(v22);
    v23 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v27,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            3);
    v28 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v29 + 24) = 1089LL;
      WdLogEvent5_WdAssertion(v29);
      v28 = *(_DWORD *)a1;
    }
    if ( v28 > *((_DWORD *)a1 + 2) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v30 + 24) = 1090LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( v23 < 0 )
    {
LABEL_22:
      v31 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v31 + 24) = v23;
      WdLogEvent5_WdError(v31);
      v32 = DXGPROCESS::GetCurrent();
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(v32, *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v19 = v23;
    if ( v41 )
      DXGUSERCRIT::Release((DXGUSERCRIT *)v39);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v17);
    v19 = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v33, &EventProfilerExit, v34, v36);
  return v19;
}
