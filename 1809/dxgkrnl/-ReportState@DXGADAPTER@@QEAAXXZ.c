/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01BEE70
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0211AA8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp @ 0x1C00208EC (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp.c)
 *     McTemplateK0pqqq @ 0x1C002FF60 (McTemplateK0pqqq.c)
 *     McTemplateK0pqqqq @ 0x1C002FFF8 (McTemplateK0pqqqq.c)
 *     McTemplateK0pqqqqjzqqx @ 0x1C00300A0 (McTemplateK0pqqqqjzqqx.c)
 *     McTemplateK0pqqqxx @ 0x1C00301D4 (McTemplateK0pqqqxx.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0113280 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiReportAdapter @ 0x1C014D500 (DpiReportAdapter.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C015D040 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01C47F4 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C708C (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  int *AdapterType; // rax
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx
  const GUID *v9; // r8
  wchar_t *v10; // r14
  unsigned int i; // esi
  __int64 v12; // rdi
  __int64 v13; // rdx
  const GUID *v14; // r8
  __int64 j; // rbp
  unsigned int k; // esi
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // rdi
  unsigned int v20; // r14d
  __int64 m; // rbp
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // esi
  struct _MCGEN_TRACE_CONTEXT *v25; // rcx
  ADAPTER_DISPLAY *v26; // rcx
  ADAPTER_RENDER *v27; // rcx
  unsigned int Arg1[2]; // [rsp+20h] [rbp-118h]
  __int64 Arg2; // [rsp+28h] [rbp-110h]
  unsigned int Arg3[2]; // [rsp+30h] [rbp-108h]
  __int64 v31; // [rsp+38h] [rbp-100h]
  __int64 v32; // [rsp+50h] [rbp-E8h]
  __int64 v33; // [rsp+58h] [rbp-E0h]
  int v34; // [rsp+C0h] [rbp-78h]
  int v35; // [rsp+D8h] [rbp-60h]
  struct _UNICODE_STRING v36; // [rsp+100h] [rbp-38h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-28h] BYREF
  int v38; // [rsp+140h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 8590LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( bTracingEnabled )
  {
    v4 = *((_QWORD *)this + 31);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v38);
    v6 = *((_DWORD *)this + 469);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v7 = v6 >> 14;
      LOBYTE(v7) = v7 & 7;
      McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp(
        v7,
        &EventReportAdapter,
        (const GUID *)(v6 >> 31),
        *((_QWORD *)this + 24),
        (char)this,
        *((_DWORD *)this + 332),
        *((_QWORD *)this + 228),
        *((_DWORD *)this + 458),
        *((_QWORD *)this + 230),
        *((_DWORD *)this + 462),
        *((_DWORD *)this + 463),
        *((_DWORD *)this + 465),
        *((_DWORD *)this + 466),
        *((_DWORD *)this + 467),
        *((_DWORD *)this + 470),
        *((_DWORD *)this + 464),
        *((_DWORD *)this + 468),
        v6,
        (v6 >> 10) & 0xF,
        v7,
        (v6 >> 17) & 7,
        (v6 & 0x80000000) != 0,
        *((_DWORD *)this + 471),
        *((_DWORD *)this + 472),
        v34,
        *((_DWORD *)this + 474),
        *((_DWORD *)this + 475),
        v35,
        *((_DWORD *)this + 676),
        *AdapterType,
        v4);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 24), (__int64)this);
  if ( bTracingEnabled && *((_DWORD *)this + 676) )
  {
    v10 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, PagedPool);
    if ( v10 )
    {
      for ( i = 0; i < *((_DWORD *)this + 676); ++i )
      {
        v12 = *((_QWORD *)this + 320) + 520LL * i;
        RtlInitAnsiString(&DestinationString, (PCSZ)(v12 + 236));
        v36.Buffer = v10;
        *(_QWORD *)&v36.Length = 5242880LL;
        if ( RtlAnsiStringToUnicodeString(&v36, &DestinationString, 0) < 0 )
          RtlInitUnicodeString(&v36, L"Unknown");
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v33) = *(_DWORD *)(v12 + 344);
          LODWORD(v32) = *(_DWORD *)(v12 + 216);
          LODWORD(v31) = *(_DWORD *)(v12 + 8);
          Arg3[0] = *(_DWORD *)(v12 + 212);
          LODWORD(Arg2) = *(_DWORD *)(v12 + 208);
          Arg1[0] = i;
          McTemplateK0pqqqqjzqqx(
            v12 + 220,
            v13,
            (__int64)v14,
            this,
            *(_QWORD *)Arg1,
            Arg2,
            *(_QWORD *)Arg3,
            v31,
            v12 + 220,
            v36.Buffer,
            v32,
            v33,
            *(_QWORD *)(v12 + 368));
        }
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v12 + 8); j = (unsigned int)(j + 1) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            Arg3[0] = *(_DWORD *)(v12 + 24 * j + 32);
            LODWORD(Arg2) = j;
            Arg1[0] = i;
            McTemplateK0pqqqxx(
              3 * j,
              v13,
              v14,
              this,
              *(_QWORD *)Arg1,
              Arg2,
              *(_QWORD *)Arg3,
              *(_QWORD *)(v12 + 24 * j + 16),
              *(_QWORD *)(v12 + 24 * j + 24));
          }
        }
      }
      operator delete[](v10);
    }
    for ( k = 0; k < *((_DWORD *)this + 676); ++k )
    {
      v17 = 520LL * k;
      v18 = *((_QWORD *)this + 320);
      v19 = *(unsigned int **)(v17 + v18 + 512);
      if ( v19 )
      {
        v20 = *(_DWORD *)(v17 + v18 + 212);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v31) = v19[48];
          Arg3[0] = *v19;
          LODWORD(Arg2) = *(_DWORD *)(v17 + v18 + 212);
          Arg1[0] = k;
          McTemplateK0pqqqq(v17, &Dxgk_PowerPStateComponent, v9, this, *(_QWORD *)Arg1, Arg2, *(_QWORD *)Arg3, v31);
        }
        for ( m = 0LL; (unsigned int)m < *v19; m = (unsigned int)(m + 1) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)v19[m + 1], &Dxgk_PowerPState, v9, this, v20, m, v19[m + 1]);
        }
      }
    }
  }
  v22 = (_QWORD *)*((_QWORD *)this + 24);
  v23 = v22[8];
  v24 = *(_DWORD *)(v23 + 4268);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)v23,
      &EventBrightness,
      v9,
      v22,
      *(unsigned __int8 *)(v23 + 4272),
      *(unsigned __int8 *)(v23 + 4272),
      0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqqq(v25, &EventBacklightOptimizationLevel, v9, v22, v24, v24, 0);
  }
  v26 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 315);
  if ( v26 )
    ADAPTER_DISPLAY::ReportState(v26);
  v27 = (ADAPTER_RENDER *)*((_QWORD *)this + 316);
  if ( v27 )
    ADAPTER_RENDER::ReportState(v27);
  DXGADAPTER::ReportNodeMetadata(this, v8, (__int64)v9);
}
