/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiPowerArbiterThread @ 0x1C017D7D0 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A0D00 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _TlgCreateWsz @ 0x1C000E2B8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C00381CC (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C00427F8 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00FF710 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0107000 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C01234C4 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0123524 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C01EBE54 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC2F4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C01EC834 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C01F4248 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6200 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0244448 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, unsigned __int8 a2, unsigned __int8 a3)
{
  char v4; // r15
  __int64 v7; // rax
  const WCHAR *v8; // rdx
  unsigned __int16 *v9; // rax
  int v10; // ecx
  int v11; // r10d
  LPCGUID v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  KSPIN_LOCK *Global; // rax
  __int64 v20; // rcx
  DXGGLOBAL *v21; // rax
  ADAPTER_DISPLAY *v22; // rcx
  ADAPTER_RENDER *v23; // rcx
  BOOLEAN v24; // bl
  BOOLEAN v25; // al
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DXGGLOBAL *v28; // rax
  __int64 v29; // rax
  __int16 v30; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v31; // [rsp+4Ah] [rbp-BEh] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  int v33; // [rsp+50h] [rbp-B8h] BYREF
  int v34; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v37; // [rsp+60h] [rbp-A8h] BYREF
  int v38; // [rsp+64h] [rbp-A4h] BYREF
  int v39; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v40[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  _DWORD *v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h]
  _DWORD v48[2]; // [rsp+D0h] [rbp-38h] BYREF
  char *v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  char *v51; // [rsp+E8h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-18h]
  char *v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  char *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  _DWORD *v57; // [rsp+118h] [rbp+10h]
  __int64 v58; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  char *v60; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]
  __int16 *v62; // [rsp+148h] [rbp+40h]
  __int64 v63; // [rsp+150h] [rbp+48h]
  int *v64; // [rsp+158h] [rbp+50h]
  __int64 v65; // [rsp+160h] [rbp+58h]
  int *v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  unsigned int *v68; // [rsp+178h] [rbp+70h]
  __int64 v69; // [rsp+180h] [rbp+78h]
  int *v70; // [rsp+188h] [rbp+80h]
  __int64 v71; // [rsp+190h] [rbp+88h]
  unsigned int *v72; // [rsp+198h] [rbp+90h]
  __int64 v73; // [rsp+1A0h] [rbp+98h]
  int *v74; // [rsp+1A8h] [rbp+A0h]
  __int64 v75; // [rsp+1B0h] [rbp+A8h]
  unsigned int *v76; // [rsp+1B8h] [rbp+B0h]
  __int64 v77; // [rsp+1C0h] [rbp+B8h]
  int *v78; // [rsp+1C8h] [rbp+C0h]
  __int64 v79; // [rsp+1D0h] [rbp+C8h]

  v4 = 0;
  v7 = WdLogNewEntry5_WdEvent(this);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  DXGADAPTER::GetAdapterType(this, (int *)&v32);
  v40[0] = *((_DWORD *)this + 69);
  v40[1] = *((_DWORD *)this + 70);
  if ( dword_1C00A1888 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000800uLL) )
  {
    v8 = (const WCHAR *)*((_QWORD *)this + 185);
    v45 = v48;
    v43 = &v30;
    v9 = (unsigned __int16 *)*((_QWORD *)this + 176);
    v30 = 1;
    v44 = 2LL;
    v46 = 2LL;
    v10 = *v9;
    v47 = *((_QWORD *)v9 + 1);
    v49 = (char *)this + 284;
    v51 = (char *)this + 288;
    v53 = (char *)this + 292;
    v55 = (char *)this + 296;
    v48[0] = v10;
    v57 = v40;
    v48[1] = 0;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 8LL;
    TlgCreateWsz(&pDesc, v8);
    v31 = *((_WORD *)this + 1226);
    v62 = &v31;
    v33 = *((unsigned __int8 *)this + 2391);
    v64 = &v33;
    v34 = *((unsigned __int8 *)this + 2396);
    v66 = &v34;
    v60 = (char *)this + 1488;
    v61 = 8LL;
    v35 = (v32 >> 2) & 1;
    v68 = &v35;
    v36 = v32 & 1;
    v37 = (v32 >> 1) & 1;
    v63 = 2LL;
    v72 = &v37;
    v74 = &v38;
    v76 = &v32;
    v39 = a2;
    v78 = &v39;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v70 = &v36;
    v71 = 4LL;
    v73 = 4LL;
    v38 = v11;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C00728B9, 0LL, v12, 0x15u, &pData);
  }
  KeSetEvent((PRKEVENT)((char *)this + 2528), 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v15 + 24) = 8385LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *((_DWORD *)this + 44) = 5;
  if ( !*((_BYTE *)this + 185) )
  {
    v16 = *((_QWORD *)this + 320);
    if ( v16 )
    {
      if ( a2 )
      {
        *(_BYTE *)(v16 + 777) = 1;
        ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 320), 1, 1);
      }
    }
  }
  DXGADAPTER::AcquireLocksForStop(this, &v41);
  if ( !*((_BYTE *)this + 185) )
  {
    v18 = *((_QWORD *)this + 320);
    if ( v18 )
    {
      ADAPTER_RENDER::FlushScheduler(v18, 5, 0xFFFFFFFF, 0);
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 320), 1u, 0);
      ADAPTER_RENDER::ResumeVidMmWorkerThread(*((PERESOURCE ***)this + 320), 0, 1);
    }
    if ( *((_BYTE *)this + 182) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v18, v17);
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
    }
    v20 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
    if ( *(_BYTE *)(v20 + 5560) )
    {
      v21 = DXGGLOBAL::GetGlobal(v20, v17);
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(v21, this);
    }
  }
  v22 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 319);
  if ( v22 )
    ADAPTER_DISPLAY::Stop(v22, a3);
  v23 = (ADAPTER_RENDER *)*((_QWORD *)this + 320);
  if ( v23 )
  {
    v4 = 1;
    ADAPTER_RENDER::Stop(v23, a2, a3);
  }
  if ( *((_QWORD *)this + 384) )
  {
    *((_BYTE *)this + 3030) = 1;
    v24 = KeCancelTimer((PKTIMER)((char *)this + 3144));
    v25 = KeCancelTimer((PKTIMER)((char *)this + 3976));
    if ( !v24 || !v25 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 3144)) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 384));
    *((_QWORD *)this + 384) = 0LL;
  }
  if ( a3 )
  {
    *((_DWORD *)this + 44) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 3033)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 3033) = 0;
    }
    DXGADAPTER::Destroy(this);
    *((_DWORD *)this + 44) = 2;
    DXGADAPTER::ReleaseReferenceNoTracking(this);
  }
  *((_QWORD *)this + 175) = 0LL;
  *((_QWORD *)this + 185) = 0LL;
  DXGADAPTER::ReleaseCoreResource((__int64)this, -1, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  *((_QWORD *)this + 16) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  if ( v4 )
  {
    v28 = DXGGLOBAL::GetGlobal(v27, v26);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v28,
      (__int64)CheckPairedRenderAdapterForStopCallBack,
      (__int64)this,
      1);
  }
  v29 = WdLogNewEntry5_WdEvent(v27);
  *(_QWORD *)(v29 + 24) = this;
  WdLogEvent5_WdEvent(v29);
}
