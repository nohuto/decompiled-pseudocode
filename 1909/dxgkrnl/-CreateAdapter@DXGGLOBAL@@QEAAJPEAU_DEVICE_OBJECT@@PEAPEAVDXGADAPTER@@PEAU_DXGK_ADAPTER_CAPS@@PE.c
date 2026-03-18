/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161C90
 * Callers:
 *     DxgkAddAdapter @ 0x1C0161C2C (DxgkAddAdapter.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp @ 0x1C0023498 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C00420E4 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C00C30BC (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C00C337C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0104860 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C015F6B4 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015F764 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoSetDxgAdapter @ 0x1C0162240 (DpiFdoSetDxgAdapter.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0162288 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DpiReportAdapter @ 0x1C0162B00 (DpiReportAdapter.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C0162D14 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC924 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C024649C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C02911D8 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER **a3,
        struct _DXGK_ADAPTER_CAPS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v9; // r14d
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGADAPTER *v14; // rbx
  __int64 v15; // rax
  int v17; // esi
  __int64 v18; // rax
  int v19; // esi
  int v20; // r11d
  unsigned int v21; // edx
  const GUID *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  ADAPTER_RENDER *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  DXGADAPTER **v32; // rax
  DXGGLOBAL **v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v37; // rax
  __int64 v38; // rcx
  NTSTATUS v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // rax
  int updated; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdi
  __int64 v50; // rax
  int v51; // [rsp+C0h] [rbp-88h]
  int v52; // [rsp+D8h] [rbp-70h]
  int v53; // [rsp+100h] [rbp-48h] BYREF
  _BYTE v54[8]; // [rsp+108h] [rbp-40h] BYREF
  DXGADAPTER *v55; // [rsp+110h] [rbp-38h]
  char v56; // [rsp+118h] [rbp-30h]

  v9 = 0;
  v10 = operator new(0x1120uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v10 )
    v14 = DXGADAPTER::DXGADAPTER(v10, this);
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v15);
    return 3221225495LL;
  }
  v17 = DXGADAPTER::Initialize(v14, a2, a4);
  if ( v17 >= 0 )
  {
    if ( bTracingEnabled )
    {
      v18 = *((_QWORD *)v14 + 319);
      if ( v18 )
        v19 = *(_DWORD *)(v18 + 80);
      else
        LOBYTE(v19) = 0;
      v20 = *DXGADAPTER::GetAdapterType(v14, &v53);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v21 = *((_DWORD *)v14 + 475);
        v22 = (const GUID *)(v21 >> 17);
        LOBYTE(v22) = (unsigned __int8)v22 & 7;
        v23 = v21 >> 10;
        LOBYTE(v23) = v23 & 0xF;
        McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp(
          v23,
          &EventCreateAdapter,
          v22,
          (__int64)a2,
          (char)v14,
          v19,
          *((_QWORD *)v14 + 231),
          *((_DWORD *)v14 + 464),
          *((_QWORD *)v14 + 233),
          *((_DWORD *)v14 + 468),
          *((_DWORD *)v14 + 469),
          *((_DWORD *)v14 + 471),
          *((_DWORD *)v14 + 472),
          *((_DWORD *)v14 + 473),
          *((_DWORD *)v14 + 476),
          *((_DWORD *)v14 + 470),
          *((_DWORD *)v14 + 474),
          v21,
          v23,
          (v21 >> 14) & 7,
          (char)v22,
          (v21 & 0x80000000) != 0,
          *((_DWORD *)v14 + 477),
          *((_DWORD *)v14 + 478),
          v51,
          *((_DWORD *)v14 + 480),
          *((_DWORD *)v14 + 481),
          v52,
          *((_DWORD *)v14 + 684),
          v20,
          *((_QWORD *)v14 + 31));
      }
    }
    DpiReportAdapter(a2, v14);
    if ( *((_QWORD *)v14 + 320) )
      DXGADAPTER::ReportNodeMetadata(v14, v24, v25);
    DXGADAPTER::AdapterTelemetry(v14, 0LL, a5);
    DpiFdoSetDxgAdapter(*((_QWORD *)v14 + 24), v14);
    v27 = (ADAPTER_RENDER *)*((_QWORD *)v14 + 320);
    v17 = 0;
    if ( !v27 || (v17 = ADAPTER_RENDER::FinalizeInitialization(v27, v26), v17 >= 0) )
    {
      DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 408));
      v32 = (DXGADAPTER **)((char *)this + 448);
      v33 = (DXGGLOBAL **)*((_QWORD *)this + 56);
      if ( v33[1] != (DXGGLOBAL *)((char *)this + 448) )
        __fastfail(3u);
      *(_QWORD *)v14 = v33;
      *((_QWORD *)v14 + 1) = v32;
      v33[1] = v14;
      *v32 = v14;
      if ( *((_QWORD *)v14 + 320) && (*((_DWORD *)v14 + 77) & 0x4000) == 0 )
      {
        v55 = v14;
        v56 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
        if ( *((_DWORD *)v14 + 44) == 1 )
        {
          if ( *((_DWORD *)this + 75976) != 10 || (*((_DWORD *)this + 75979) & 1) != 0 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 320) + 520LL) + 8LL)
                                                   + 952LL))(
              *(_QWORD *)(*((_QWORD *)v14 + 320) + 528LL),
              *((_DWORD *)this + 75979) & 1);
          if ( *(_QWORD *)((char *)this + 303908) != 0x1E00000032LL )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 320) + 544LL)
                                                                       + 8LL)
                                                           + 1152LL))(
              *(_QWORD *)(*((_QWORD *)v14 + 320) + 552LL),
              *((unsigned int *)this + 75977),
              *((unsigned int *)this + 75978));
        }
        if ( v56 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
      }
      if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v33, v14) )
      {
        if ( ++*((_DWORD *)this + 76039) == 2 )
        {
          Global = DXGGLOBAL::GetGlobal(v35, v34);
          DXGGLOBAL::RecordFeatureUsage((__int64)Global, 6, 1);
        }
        if ( *((_BYTE *)v14 + 2396) )
        {
          ++*((_DWORD *)this + 76035);
        }
        else if ( *((_BYTE *)v14 + 2391) )
        {
          ++*((_DWORD *)this + 76036);
        }
        if ( *((_DWORD *)this + 76036) && *((_DWORD *)this + 76035) )
        {
          v37 = DXGGLOBAL::GetGlobal(v35, v34);
          DXGGLOBAL::RecordFeatureUsage((__int64)v37, 9, 1);
        }
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 51);
      if ( *((_BYTE *)v14 + 185) )
      {
        if ( !*((_QWORD *)this + 76) )
        {
          DXGGLOBAL::SetVirtualRenderAdapter(this, v14);
          v9 = *((unsigned __int8 *)v14 + 187);
        }
      }
      else
      {
        v38 = *(_QWORD *)(*((_QWORD *)v14 + 24) + 64LL);
        if ( *(_BYTE *)(v38 + 5560) )
        {
          v39 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v38 + 5544), 1u);
          v43 = v39;
          if ( v39 < 0 )
          {
            v44 = WdLogNewEntry5_WdError(v41, v40, v42);
            *(_QWORD *)(v44 + 24) = v43;
            WdLogEvent5_WdError(v44);
          }
        }
      }
      *((_BYTE *)v14 + 4252) = 1;
      updated = ZwUpdateWnfStateData(&WNF_DX_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
      v49 = updated;
      if ( updated < 0 )
      {
        v50 = WdLogNewEntry5_WdError(v47, v46, v48);
        *(_QWORD *)(v50 + 24) = v14;
        *(_QWORD *)(v50 + 32) = v49;
        WdLogEvent5_WdError(v50);
      }
      if ( v9 )
        DXGVAILOBJECT::NotifyVailAdapter(1);
      *a3 = v14;
      return (unsigned int)v17;
    }
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    *(_QWORD *)(v31 + 32) = 2279LL;
    WdLogEvent5_WdWarning(v31);
    DpiFdoSetDxgAdapter(*((_QWORD *)v14 + 24), 0LL);
    DXGADAPTER::Destroy(v14);
  }
  else if ( *((int *)v14 + 613) >= 2600 && (*((_DWORD *)v14 + 606) & 8) != 0 )
  {
    DXGADAPTER::AdapterTelemetry(v14, 0LL, a5);
  }
  DXGADAPTER::`scalar deleting destructor'(v14);
  return (unsigned int)v17;
}
