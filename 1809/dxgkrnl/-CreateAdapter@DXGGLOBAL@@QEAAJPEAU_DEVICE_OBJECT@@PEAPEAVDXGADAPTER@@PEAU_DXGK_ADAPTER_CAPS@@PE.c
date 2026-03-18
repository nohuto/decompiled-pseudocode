/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC
 * Callers:
 *     DxgkAddAdapter @ 0x1C014C59C (DxgkAddAdapter.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp @ 0x1C00208EC (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C003B89C (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0113280 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C014C600 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     DpiFdoSetDxgAdapter @ 0x1C014CC7C (DpiFdoSetDxgAdapter.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014CCC4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DpiReportAdapter @ 0x1C014D500 (DpiReportAdapter.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C015D040 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015E510 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0212020 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C025AAE8 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER **a3,
        struct _DXGK_ADAPTER_CAPS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v9; // r14d
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGADAPTER *v14; // rbx
  int v15; // esi
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // r15
  int v19; // r12d
  int *AdapterType; // rax
  unsigned int v21; // r9d
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGADAPTER **v26; // rax
  __int64 v27; // rcx
  int updated; // eax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+C0h] [rbp-88h]
  int v37; // [rsp+D8h] [rbp-70h]
  int v38; // [rsp+100h] [rbp-48h] BYREF
  _BYTE v39[8]; // [rsp+108h] [rbp-40h] BYREF
  DXGADAPTER *v40; // [rsp+110h] [rbp-38h]
  char v41; // [rsp+118h] [rbp-30h]

  v9 = 0;
  v10 = (char *)operator new(0x10E0uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v10 )
    v14 = DXGADAPTER::DXGADAPTER(v10, this);
  else
    v14 = 0LL;
  if ( v14 )
  {
    v15 = DXGADAPTER::Initialize(v14, a2, a4);
    if ( v15 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v16 = *((_QWORD *)v14 + 315);
        if ( v16 )
          v17 = *(_DWORD *)(v16 + 80);
        else
          LOBYTE(v17) = 0;
        v18 = *((_QWORD *)v14 + 31);
        v19 = *((_DWORD *)v14 + 676);
        AdapterType = DXGADAPTER::GetAdapterType(v14, &v38);
        v21 = *((_DWORD *)v14 + 469);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v33 = v21 >> 14;
          LOBYTE(v33) = v33 & 7;
          McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp(
            v33,
            &EventCreateAdapter,
            (const GUID *)(v21 >> 31),
            (__int64)a2,
            (char)v14,
            v17,
            *((_QWORD *)v14 + 228),
            *((_DWORD *)v14 + 458),
            *((_QWORD *)v14 + 230),
            *((_DWORD *)v14 + 462),
            *((_DWORD *)v14 + 463),
            *((_DWORD *)v14 + 465),
            *((_DWORD *)v14 + 466),
            *((_DWORD *)v14 + 467),
            *((_DWORD *)v14 + 470),
            *((_DWORD *)v14 + 464),
            *((_DWORD *)v14 + 468),
            v21,
            (v21 >> 10) & 0xF,
            v33,
            (v21 >> 17) & 7,
            (v21 & 0x80000000) != 0,
            *((_DWORD *)v14 + 471),
            *((_DWORD *)v14 + 472),
            v36,
            *((_DWORD *)v14 + 474),
            *((_DWORD *)v14 + 475),
            v37,
            v19,
            *AdapterType,
            v18);
        }
      }
      DpiReportAdapter(a2, v14);
      if ( *((_QWORD *)v14 + 316) )
        DXGADAPTER::ReportNodeMetadata(v14);
      DXGADAPTER::AdapterTelemetry(v14, 0LL, a5);
      DpiFdoSetDxgAdapter(*((_QWORD *)v14 + 24), v14);
      v22 = (ADAPTER_RENDER *)*((_QWORD *)v14 + 316);
      v15 = 0;
      if ( !v22 || (v15 = ADAPTER_RENDER::FinalizeInitialization(v22), v15 >= 0) )
      {
        DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 408));
        v26 = (DXGADAPTER **)((char *)this + 448);
        v27 = *((_QWORD *)this + 56);
        if ( *(DXGGLOBAL **)(v27 + 8) != (DXGGLOBAL *)((char *)this + 448) )
          __fastfail(3u);
        *(_QWORD *)v14 = v27;
        *((_QWORD *)v14 + 1) = v26;
        *(_QWORD *)(v27 + 8) = v14;
        *v26 = v14;
        if ( *((_QWORD *)v14 + 316) && (*((_DWORD *)v14 + 77) & 0x4000) == 0 )
        {
          v40 = v14;
          v41 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
          if ( *((_DWORD *)v14 + 44) == 1 )
          {
            if ( *((_DWORD *)this + 5060) != 10 || (*((_DWORD *)this + 5063) & 1) != 0 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 316) + 520LL) + 8LL)
                                                     + 952LL))(
                *(_QWORD *)(*((_QWORD *)v14 + 316) + 528LL),
                *((_DWORD *)this + 5063) & 1);
            if ( *(_QWORD *)((char *)this + 20244) != 0x1E00000032LL )
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 316) + 544LL)
                                                                         + 8LL)
                                                             + 1152LL))(
                *(_QWORD *)(*((_QWORD *)v14 + 316) + 552LL),
                *((unsigned int *)this + 5061),
                *((unsigned int *)this + 5062));
          }
          if ( v41 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)this + 51);
        if ( *((_BYTE *)v14 + 185) && !*((_QWORD *)this + 79) )
        {
          DXGGLOBAL::SetVirtualRenderAdapter(this, v14);
          v9 = *((unsigned __int8 *)v14 + 187);
        }
        *((_BYTE *)v14 + 4260) = 1;
        updated = ZwUpdateWnfStateData(&WNF_DX_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
        v30 = updated;
        if ( updated < 0 )
        {
          v35 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v35 + 24) = v14;
          *(_QWORD *)(v35 + 32) = v30;
          WdLogEvent5_WdError(v35);
        }
        if ( v9 )
          DXGVAILOBJECT::NotifyVailAdapter(1);
        *a3 = v14;
        return (unsigned int)v15;
      }
      v34 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v34 + 24) = -1073741801LL;
      *(_QWORD *)(v34 + 32) = 2172LL;
      WdLogEvent5_WdWarning(v34);
      DpiFdoSetDxgAdapter(*((_QWORD *)v14 + 24), 0LL);
      DXGADAPTER::Destroy(v14);
    }
    DXGADAPTER::`scalar deleting destructor'(v14);
    return (unsigned int)v15;
  }
  v32 = WdLogNewEntry5_WdWarning(v12, v11, v13);
  *(_QWORD *)(v32 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v32);
  return 3221225495LL;
}
