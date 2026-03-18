/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01EE3E0
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0245798 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp @ 0x1C0023448 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp.c)
 *     McTemplateK0pqqq @ 0x1C0035760 (McTemplateK0pqqq.c)
 *     McTemplateK0pqtqq @ 0x1C00357F8 (McTemplateK0pqtqq.c)
 *     McTemplateK0pqqqqjzqqx @ 0x1C00358A0 (McTemplateK0pqqqqjzqqx.c)
 *     McTemplateK0pqqqxx @ 0x1C00359D4 (McTemplateK0pqqqxx.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00FF710 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C015B904 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     DpiReportAdapter @ 0x1C015ED50 (DpiReportAdapter.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01F36C4 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F5CA8 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  int *AdapterType; // rax
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rdx
  const GUID *v10; // r8
  wchar_t *v11; // r15
  unsigned int i; // esi
  __int64 v13; // rdi
  __int64 v14; // rdx
  const GUID *v15; // r8
  __int64 j; // r14
  unsigned int k; // esi
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int *v20; // rdi
  unsigned int v21; // r15d
  __int64 m; // r14
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  unsigned int v25; // esi
  struct _MCGEN_TRACE_CONTEXT *v26; // rcx
  ADAPTER_DISPLAY *v27; // rcx
  ADAPTER_RENDER *v28; // rcx
  __int64 Arg1; // [rsp+28h] [rbp-160h]
  unsigned int Arg2[2]; // [rsp+30h] [rbp-158h]
  unsigned int Arg3[2]; // [rsp+38h] [rbp-150h]
  __int64 v32; // [rsp+40h] [rbp-148h]
  __int64 v33; // [rsp+58h] [rbp-130h]
  __int64 v34; // [rsp+60h] [rbp-128h]
  int v35; // [rsp+C8h] [rbp-C0h]
  int v36; // [rsp+E0h] [rbp-A8h]
  struct _UNICODE_STRING v37; // [rsp+108h] [rbp-80h] BYREF
  struct _STRING DestinationString; // [rsp+118h] [rbp-70h] BYREF
  int v39; // [rsp+148h] [rbp-40h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 8895LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( bTracingEnabled )
  {
    v5 = *((_QWORD *)this + 31);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v39);
    v7 = *((_DWORD *)this + 475);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v8 = v7 >> 14;
      LOBYTE(v8) = v8 & 7;
      McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp(
        v8,
        &EventReportAdapter,
        (const GUID *)(v7 >> 31),
        *((_QWORD *)this + 24),
        (char)this,
        *((_DWORD *)this + 336),
        *((_QWORD *)this + 231),
        *((_DWORD *)this + 464),
        *((_QWORD *)this + 233),
        *((_DWORD *)this + 468),
        *((_DWORD *)this + 469),
        *((_DWORD *)this + 471),
        *((_DWORD *)this + 472),
        *((_DWORD *)this + 473),
        *((_DWORD *)this + 476),
        *((_DWORD *)this + 470),
        *((_DWORD *)this + 474),
        v7,
        (v7 >> 10) & 0xF,
        v8,
        (v7 >> 17) & 7,
        (v7 & 0x80000000) != 0,
        *((_DWORD *)this + 477),
        *((_DWORD *)this + 478),
        v35,
        *((_DWORD *)this + 480),
        *((_DWORD *)this + 481),
        v36,
        *((_DWORD *)this + 684),
        *AdapterType,
        v5);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 24), (__int64)this);
  if ( bTracingEnabled && *((_DWORD *)this + 684) )
  {
    *(_QWORD *)&v37.Length = 0LL;
    v37.Buffer = 0LL;
    v11 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, PagedPool);
    if ( v11 )
    {
      for ( i = 0; i < *((_DWORD *)this + 684); ++i )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        v13 = *((_QWORD *)this + 324) + 520LL * i;
        DestinationString.Buffer = 0LL;
        RtlInitAnsiString(&DestinationString, (PCSZ)(v13 + 236));
        v37.Buffer = v11;
        *(_QWORD *)&v37.Length = 5242880LL;
        if ( RtlAnsiStringToUnicodeString(&v37, &DestinationString, 0) < 0 )
          RtlInitUnicodeString(&v37, L"Unknown");
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v34) = *(_DWORD *)(v13 + 344);
          LODWORD(v33) = *(_DWORD *)(v13 + 216);
          LODWORD(v32) = *(_DWORD *)(v13 + 8);
          Arg3[0] = *(_DWORD *)(v13 + 212);
          Arg2[0] = *(_DWORD *)(v13 + 208);
          LODWORD(Arg1) = i;
          McTemplateK0pqqqqjzqqx(
            v13 + 220,
            v14,
            (__int64)v15,
            this,
            Arg1,
            *(_QWORD *)Arg2,
            *(_QWORD *)Arg3,
            v32,
            v13 + 220,
            v37.Buffer,
            v33,
            v34,
            *(_QWORD *)(v13 + 368));
        }
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v13 + 8); j = (unsigned int)(j + 1) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            Arg3[0] = *(_DWORD *)(v13 + 24 * j + 32);
            Arg2[0] = j;
            LODWORD(Arg1) = i;
            McTemplateK0pqqqxx(
              3 * j,
              v14,
              v15,
              this,
              Arg1,
              *(_QWORD *)Arg2,
              *(_QWORD *)Arg3,
              *(_QWORD *)(v13 + 24 * j + 16),
              *(_QWORD *)(v13 + 24 * j + 24));
          }
        }
      }
      operator delete[](v11);
    }
    for ( k = 0; k < *((_DWORD *)this + 684); ++k )
    {
      v18 = 520LL * k;
      v19 = *((_QWORD *)this + 324);
      v20 = *(unsigned int **)(v18 + v19 + 512);
      if ( v20 )
      {
        v21 = *(_DWORD *)(v18 + v19 + 212);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v32) = v20[48];
          Arg3[0] = *v20;
          Arg2[0] = *(_DWORD *)(v18 + v19 + 212);
          LODWORD(Arg1) = k;
          McTemplateK0pqtqq(v18, &Dxgk_PowerPStateComponent, v10, this, Arg1, *(_QWORD *)Arg2, *(_QWORD *)Arg3, v32);
        }
        for ( m = 0LL; (unsigned int)m < *v20; m = (unsigned int)(m + 1) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)v20[m + 1], &Dxgk_PowerPState, v10, this, v21, m, v20[m + 1]);
        }
      }
    }
  }
  v23 = (_QWORD *)*((_QWORD *)this + 24);
  v24 = v23[8];
  v25 = *(_DWORD *)(v24 + 4380);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)v24,
      &EventBrightness,
      v10,
      v23,
      *(unsigned __int8 *)(v24 + 4384),
      *(unsigned __int8 *)(v24 + 4384),
      0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqqq(v26, &EventBacklightOptimizationLevel, v10, v23, v25, v25, 0);
  }
  v27 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 319);
  if ( v27 )
    ADAPTER_DISPLAY::ReportState(v27);
  v28 = (ADAPTER_RENDER *)*((_QWORD *)this + 320);
  if ( v28 )
    ADAPTER_RENDER::ReportState(v28);
  DXGADAPTER::ReportNodeMetadata(this, v9, (__int64)v10);
}
