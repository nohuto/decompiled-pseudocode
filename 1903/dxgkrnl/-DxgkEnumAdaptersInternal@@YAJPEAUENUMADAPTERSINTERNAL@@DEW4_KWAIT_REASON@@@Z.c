/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CE604
 * Callers:
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C00C4704 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CD8B0 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0002074 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C00CE7A0 (DxgkWaitForPnPTransitionDone.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01305C0 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, char a2, const GUID *a3, unsigned int a4)
{
  char v5; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // r8
  unsigned int v26; // eax
  struct DXGGLOBAL *v27; // rax
  unsigned int v28; // eax
  struct DXGGLOBAL *v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  struct DXGPROCESS *v45; // rsi
  int v46; // [rsp+20h] [rbp-30h] BYREF
  __int64 v47; // [rsp+28h] [rbp-28h]
  char v48; // [rsp+30h] [rbp-20h]
  _BYTE v49[8]; // [rsp+38h] [rbp-18h] BYREF
  struct DXGPROCESS *v50; // [rsp+40h] [rbp-10h]
  char v51; // [rsp+48h] [rbp-8h]

  v46 = -1;
  v47 = 0LL;
  v5 = (char)a3;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v48 = 1;
    v46 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2078);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v46, 2078LL);
  if ( !a1 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v35 + 24) = 1316LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( v5 )
  {
    LOBYTE(v8) = a2;
    v10 = DxgkWaitForPnPTransitionDone(a4, v8, 0LL);
    v14 = v10;
    if ( v10 < 0 )
    {
      v36 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v36 + 24) = v14;
      WdLogEvent5_WdError(v36);
    }
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v50 = Current;
    v51 = 0;
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v49, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    Global = DXGGLOBAL::GetGlobal(v20, v19);
    v24 = DXGGLOBAL::IterateAdaptersWithCallback(Global, EnumAdaptersCallback, a1, 4LL);
    v26 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v38 + 24) = 1372LL;
      WdLogEvent5_WdAssertion(v38);
      v26 = *(_DWORD *)a1;
    }
    if ( v26 > *((_DWORD *)a1 + 2) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v39 + 24) = 1373LL;
      WdLogEvent5_WdAssertion(v39);
    }
    if ( v24 < 0 )
      goto LABEL_31;
    v27 = DXGGLOBAL::GetGlobal(v23, v22);
    v24 = DXGGLOBAL::IterateAdaptersWithCallback(v27, EnumAdaptersCallback, a1, 3LL);
    v28 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v40 + 24) = 1385LL;
      WdLogEvent5_WdAssertion(v40);
      v28 = *(_DWORD *)a1;
    }
    if ( v28 > *((_DWORD *)a1 + 2) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v41 + 24) = 1386LL;
      WdLogEvent5_WdAssertion(v41);
    }
    if ( v24 < 0 )
      goto LABEL_31;
    v29 = DXGGLOBAL::GetGlobal(v23, v22);
    v24 = DXGGLOBAL::IterateAdaptersWithCallback(v29, EnumAdaptersCallback, a1, 5LL);
    v30 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v42 + 24) = 1399LL;
      WdLogEvent5_WdAssertion(v42);
      v30 = *(_DWORD *)a1;
    }
    if ( v30 > *((_DWORD *)a1 + 2) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v43 + 24) = 1400LL;
      WdLogEvent5_WdAssertion(v43);
    }
    if ( v24 < 0 )
    {
LABEL_31:
      v44 = WdLogNewEntry5_WdError(v23, v22, v25);
      *(_QWORD *)(v44 + 24) = v24;
      WdLogEvent5_WdError(v44);
      v45 = DXGPROCESS::GetCurrent();
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(v45, *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v31 = v24;
    if ( v51 )
    {
      v51 = 0;
      (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)v50 + 12) + 40LL))(*((_QWORD *)v50 + 12), v22);
    }
  }
  else
  {
    v37 = WdLogNewEntry5_WdError(v17, v16, v18);
    v31 = -1073741811;
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v22);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v46);
  return v31;
}
