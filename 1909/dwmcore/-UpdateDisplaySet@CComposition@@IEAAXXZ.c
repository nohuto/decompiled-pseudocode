/*
 * XREFs of ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800D8710 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800265E8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800267F4 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180027A50 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??_GCDisplaySet@@AEAAPEAXI@Z @ 0x18002B9B0 (--_GCDisplaySet@@AEAAPEAXI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x1800D7E78 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800EA5D0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x180158F8C (-IsStereoEnabled@CDisplaySet@@QEBA_NXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180159D1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ @ 0x180187814 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x180187A00 (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CComposition::UpdateDisplaySet(CRenderTargetManager **this)
{
  CDXGIEnumeration *v1; // rbx
  char v2; // r14
  char v3; // r12
  int v5; // r15d
  CDXGIEnumeration *v6; // rsi
  int v7; // ebx
  unsigned int v8; // edi
  CDisplayManager *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  int KMTDriverUpdateStatus; // eax
  CDisplaySet *v13; // rdi
  char v14; // al
  __int64 v15; // rdi
  bool v16; // al
  int v17; // eax
  unsigned int v18; // ecx
  CD3DModuleLoaderInternal *v19; // rcx
  _DWORD *v20; // rax
  CRenderTargetManager *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r14
  CDXGIEnumeration *v25; // rdi
  CDisplaySet *v26; // rsi
  __int64 v27; // rdx
  unsigned int v28; // ecx
  struct CDXGIEnumeration *v29; // rdi
  volatile signed __int32 *v30; // rax
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // r15d
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // edi
  int v37; // [rsp+30h] [rbp-79h] BYREF
  int v38; // [rsp+34h] [rbp-75h] BYREF
  int v39; // [rsp+38h] [rbp-71h] BYREF
  int D3DObjects; // [rsp+3Ch] [rbp-6Dh] BYREF
  int AdapterPopulationUniqueness; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v43; // [rsp+70h] [rbp-39h]
  __int64 v44; // [rsp+78h] [rbp-31h]
  GUID *v45; // [rsp+80h] [rbp-29h]
  __int64 v46; // [rsp+88h] [rbp-21h]
  int *p_AdapterPopulationUniqueness; // [rsp+90h] [rbp-19h]
  __int64 v48; // [rsp+98h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+A0h] [rbp-9h] BYREF
  GUID *v50; // [rsp+C0h] [rbp+17h]
  __int64 v51; // [rsp+C8h] [rbp+1Fh]

  v1 = qword_180339CF8;
  v2 = 0;
  v3 = 0;
  v38 = 0;
  v37 = 0;
  v5 = 0;
  if ( qword_180339CF8
    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_180339CF8 + 2) + 104LL))(*((_QWORD *)qword_180339CF8
                                                                                             + 2))
    && (unsigned int)DrvQueryAdapterPopulationUniqueness() == *((_DWORD *)v1 + 14)
    && (v6 = qword_180339CF8, qword_180339CF8 == v1) )
  {
LABEL_25:
    v7 = v37;
  }
  else
  {
LABEL_5:
    v7 = -2003304291;
    v8 = 0;
    v37 = -2003304291;
    do
    {
      if ( v7 != -2003304291 )
        goto LABEL_15;
      v9 = (CDisplayManager *)(10 * v8 * v8);
      if ( 10 * v8 * v8 )
        Sleep((DWORD)v9);
      v10 = CDisplayManager::EnsureDXGIEnumeration(v9, 0LL);
      ++v8;
      v37 = v10;
      v7 = v10;
    }
    while ( v8 < 0xA );
    if ( v10 == -2003304291 )
    {
      AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
      if ( dword_1803371D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
      {
        v44 = 4LL;
        v43 = &v37;
        p_AdapterPopulationUniqueness = &AdapterPopulationUniqueness;
        v45 = &gDwmCoreTelemetryActivityId;
        v46 = 16LL;
        v48 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802D70D8, 0LL, 0LL, 5u, &pData);
      }
      v7 = -2003304442;
      v37 = -2003304442;
    }
    else
    {
LABEL_15:
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v7, 0x66u, 0LL);
LABEL_24:
        v6 = qword_180339CF8;
        goto LABEL_25;
      }
    }
    v6 = qword_180339CF8;
    if ( !qword_180339CF8 )
      goto LABEL_28;
    v11 = 0;
    v39 = 0;
    if ( *((_DWORD *)qword_180339CF8 + 22) )
    {
      do
      {
        KMTDriverUpdateStatus = CDXGIAdapterLimited::GetKMTDriverUpdateStatus(
                                  *(CDXGIAdapterLimited **)(*((_QWORD *)v6 + 8) + 8LL * v11),
                                  &v39);
        if ( KMTDriverUpdateStatus >= 0 )
        {
          if ( v39 )
            goto LABEL_5;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, KMTDriverUpdateStatus, 0xB6u, 0LL);
        }
        ++v11;
      }
      while ( v11 < *((_DWORD *)v6 + 22) );
      goto LABEL_24;
    }
  }
  if ( v6 )
  {
    (**(void (__fastcall ***)(CDXGIEnumeration *))v6)(v6);
    v7 = v37;
  }
LABEL_28:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v7, 0x7Du, 0LL);
  }
  else
  {
    v13 = g_DisplayManager;
    if ( !g_DisplayManager )
      goto LABEL_47;
    if ( !*((_BYTE *)g_DisplayManager + 115)
      || (!g_pComposition || *((int *)g_pComposition + 274) < 3 ? (v14 = 0) : (v14 = 1),
          *((_BYTE *)g_DisplayManager + 114) == v14) )
    {
      if ( GdiEntry13() == *((_DWORD *)v13 + 1)
        && (unsigned int)DrvQueryPrivateDisplayChangeUniqueness() == *((_DWORD *)v13 + 2) )
      {
        v2 = 1;
      }
    }
    v15 = *((_QWORD *)v13 + 2);
    v16 = v15
       && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 16) + 104LL))(*(_QWORD *)(v15 + 16))
       && (unsigned int)DrvQueryAdapterPopulationUniqueness() == *(_DWORD *)(v15 + 56)
       && qword_180339CF8 == (CDXGIEnumeration *)v15;
    if ( !v2 || !v16 )
    {
LABEL_47:
      v17 = CDisplayManager::DeriveCurrentDisplaySet(
              (CDisplayManager *)this,
              v6,
              (enum DisplayStateComparison::Enum *)&v38);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v5 = v38;
        v3 = 1;
        dword_180339D00 = v17;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x89u, 0LL);
        if ( dword_180339D00 >= 0
          && dword_1803371D0 > 5u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
        {
          v51 = 16LL;
          v50 = &gDwmCoreTelemetryActivityId;
          TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802D7137, 0LL, 0LL, 3u, &v49);
        }
        v5 = v38;
        dword_180339D00 = v7;
      }
    }
  }
  LODWORD(v19) = 0;
  v20 = &unk_1802D3A50;
  while ( *v20 != v7 )
  {
    LODWORD(v19) = (_DWORD)v19 + 1;
    ++v20;
    if ( (unsigned int)v19 >= 9 )
    {
      if ( v7 < 0 && v7 != -2003304442 && v7 != -2003304307 )
        MilUnexpectedError(v7, L"Could not create display set.");
      goto LABEL_64;
    }
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v7, 0xB4u, 0LL);
LABEL_64:
  if ( v6 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v7, 0x257u, 0LL);
  if ( g_DisplayManager && *((_BYTE *)g_DisplayManager + 113) && !v5 )
    v5 = 2;
  if ( v7 >= 0 )
  {
    v21 = this[8];
    v7 = 0;
    v22 = 0LL;
    if ( !*((_DWORD *)v21 + 20) )
      goto LABEL_110;
    while ( 1 )
    {
      v23 = *(_QWORD *)(*((_QWORD *)v21 + 7) + 8 * v22);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 264LL))(v23) )
        break;
      v22 = (unsigned int)(v22 + 1);
      if ( (unsigned int)v22 >= *((_DWORD *)v21 + 20) )
        goto LABEL_110;
    }
    v24 = *(_QWORD *)(*((_QWORD *)v21 + 7) + 8 * v22);
    if ( !v24 )
      goto LABEL_110;
    v25 = qword_180339CF8;
    v26 = 0LL;
    if ( !qword_180339CF8 )
      goto LABEL_84;
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_180339CF8 + 2) + 104LL))(*((_QWORD *)qword_180339CF8
                                                                                                + 2))
      || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v25 + 14)
      || qword_180339CF8 != v25 )
    {
      ReleaseInterface<CD3DSurface>((__int64 *)&qword_180339CF8);
    }
    if ( !qword_180339CF8 )
    {
LABEL_84:
      D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v19, &qword_180339CF8);
      TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
      v7 = D3DObjects;
      if ( D3DObjects < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_1802BE018, 1u, D3DObjects, 0xFEu, 0LL);
      v19 = (CD3DModuleLoaderInternal *)qword_180339D08;
      if ( qword_180339D08 )
        (*(void (__fastcall **)(__int64, CDXGIEnumeration *))(*(_QWORD *)qword_180339D08 + 32LL))(
          qword_180339D08,
          qword_180339CF8);
    }
    v29 = qword_180339CF8;
    if ( qword_180339CF8 )
      (**(void (__fastcall ***)(CDXGIEnumeration *))qword_180339CF8)(qword_180339CF8);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v7, 0xD8u, 0LL);
      goto LABEL_97;
    }
    v30 = (volatile signed __int32 *)g_DisplayManager;
    if ( !g_DisplayManager )
    {
      v31 = CDisplayManager::DeriveCurrentDisplaySet(v19, v29, 0LL);
      v7 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v31, 0xDFu, 0LL);
LABEL_97:
        if ( v29 )
          (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v29 + 8LL))(v29);
        if ( v7 >= 0 )
        {
          LOBYTE(v27) = *((_DWORD *)this + 71) && CDisplaySet::IsStereoEnabled(v26);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 248LL))(v24, v27) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 256LL))(v24);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v7, 0xC9u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v7, 0xCC9u, 0LL);
        }
        if ( v26 && _InterlockedExchangeAdd((volatile signed __int32 *)v26, 0xFFFFFFFF) == 1 )
          CDisplaySet::`scalar deleting destructor'(v26);
LABEL_110:
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v7, 0x269u, 0LL);
        goto LABEL_112;
      }
      v30 = (volatile signed __int32 *)g_DisplayManager;
    }
    _InterlockedIncrement(v30);
    v26 = g_DisplayManager;
    goto LABEL_97;
  }
LABEL_112:
  v33 = v5 - 2;
  if ( v33 )
  {
    if ( v33 == 1 )
    {
      CRenderTargetManager::ReleaseResourcesForDisplayChange(this[8]);
      goto LABEL_124;
    }
  }
  else
  {
    v34 = CRenderTargetManager::HandleDDAArrivalOrDeparture(this[8]);
    v36 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x275u, 0LL);
    if ( !v7 || v7 >= 0 && v36 < 0 )
      v7 = v36;
  }
  if ( v3 || *((_BYTE *)this + 1279) )
  {
    CRenderTargetManager::UpdateMPOCaps(this[8]);
    *((_BYTE *)this + 1279) = 0;
  }
LABEL_124:
  if ( v7 < 0 )
    *((_BYTE *)this + 1272) = 1;
}
