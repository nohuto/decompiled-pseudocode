/*
 * XREFs of ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180098790
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800D80FC (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCDisplaySet@@AEAAPEAXI@Z @ 0x1800A376C (--_GCDisplaySet@@AEAAPEAXI@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A7788 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800A7994 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A8A7C (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x1800D7908 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800E97B0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x18015A66C (-IsStereoEnabled@CDisplaySet@@QEBA_NXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18015B3FC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ @ 0x180188EF4 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x1801890E0 (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
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
  signed int KMTDriverUpdateStatus; // eax
  CDisplaySet *v13; // rdi
  char v14; // al
  __int64 v15; // rdi
  bool v16; // al
  signed int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // rax
  CRenderTargetManager *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r14
  CDXGIEnumeration *v25; // rdi
  CDisplaySet *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct CDXGIEnumeration *v29; // rdi
  volatile signed __int32 *v30; // rax
  signed int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // edx
  int v34; // r15d
  signed int v35; // eax
  __int64 v36; // rcx
  int v37; // edi
  int v38; // [rsp+30h] [rbp-79h] BYREF
  int v39; // [rsp+34h] [rbp-75h] BYREF
  int v40; // [rsp+38h] [rbp-71h] BYREF
  int D3DObjects; // [rsp+3Ch] [rbp-6Dh] BYREF
  int AdapterPopulationUniqueness; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v44; // [rsp+70h] [rbp-39h]
  __int64 v45; // [rsp+78h] [rbp-31h]
  GUID *v46; // [rsp+80h] [rbp-29h]
  __int64 v47; // [rsp+88h] [rbp-21h]
  int *p_AdapterPopulationUniqueness; // [rsp+90h] [rbp-19h]
  __int64 v49; // [rsp+98h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+A0h] [rbp-9h] BYREF
  GUID *v51; // [rsp+C0h] [rbp+17h]
  __int64 v52; // [rsp+C8h] [rbp+1Fh]

  v1 = qword_18033CC08;
  v2 = 0;
  v3 = 0;
  v39 = 0;
  v38 = 0;
  v5 = 0;
  if ( qword_18033CC08
    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18033CC08 + 2) + 104LL))(*((_QWORD *)qword_18033CC08
                                                                                             + 2))
    && (unsigned int)DrvQueryAdapterPopulationUniqueness() == *((_DWORD *)v1 + 14)
    && (v6 = qword_18033CC08, qword_18033CC08 == v1) )
  {
LABEL_25:
    v7 = v38;
  }
  else
  {
LABEL_5:
    v7 = -2003304291;
    v8 = 0;
    v38 = -2003304291;
    do
    {
      if ( v7 != -2003304291 )
        goto LABEL_15;
      v9 = (CDisplayManager *)(10 * v8 * v8);
      if ( 10 * v8 * v8 )
        Sleep((DWORD)v9);
      v10 = CDisplayManager::EnsureDXGIEnumeration(v9, 0LL);
      ++v8;
      v38 = v10;
      v7 = v10;
    }
    while ( v8 < 0xA );
    if ( v10 == -2003304291 )
    {
      AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
      if ( dword_18033A1D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
      {
        v45 = 4LL;
        v44 = &v38;
        p_AdapterPopulationUniqueness = &AdapterPopulationUniqueness;
        v46 = &gDwmCoreTelemetryActivityId;
        v47 = 16LL;
        v49 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18033A1D0, &unk_1802D8FAC, 0LL, 0LL, 5u, &pData);
      }
      v7 = -2003304442;
      v38 = -2003304442;
    }
    else
    {
LABEL_15:
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, 0x66u, 0LL);
LABEL_24:
        v6 = qword_18033CC08;
        goto LABEL_25;
      }
    }
    v6 = qword_18033CC08;
    if ( !qword_18033CC08 )
      goto LABEL_28;
    v11 = 0;
    v40 = 0;
    if ( *((_DWORD *)qword_18033CC08 + 22) )
    {
      do
      {
        KMTDriverUpdateStatus = CDXGIAdapterLimited::GetKMTDriverUpdateStatus(
                                  *(CDXGIAdapterLimited **)(*((_QWORD *)v6 + 8) + 8LL * v11),
                                  &v40);
        if ( KMTDriverUpdateStatus >= 0 )
        {
          if ( v40 )
            goto LABEL_5;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, KMTDriverUpdateStatus, 0xB6u, 0LL);
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
    v7 = v38;
  }
LABEL_28:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, 0x7Du, 0LL);
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
       && qword_18033CC08 == (CDXGIEnumeration *)v15;
    if ( !v2 || !v16 )
    {
LABEL_47:
      v17 = CDisplayManager::DeriveCurrentDisplaySet(
              (CDisplayManager *)this,
              v6,
              (enum DisplayStateComparison::Enum *)&v39);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v5 = v39;
        v3 = 1;
        dword_18033CC10 = v17;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x89u, 0LL);
        if ( dword_18033CC10 >= 0
          && dword_18033A1D0 > 5u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
        {
          v52 = 16LL;
          v51 = &gDwmCoreTelemetryActivityId;
          TlgWrite((TraceLoggingHProvider)&dword_18033A1D0, &unk_1802D8F78, 0LL, 0LL, 3u, &v50);
        }
        v5 = v39;
        dword_18033CC10 = v7;
      }
    }
  }
  v19 = 0LL;
  v20 = &unk_1802D5A10;
  while ( *v20 != v7 )
  {
    v19 = (unsigned int)(v19 + 1);
    ++v20;
    if ( (unsigned int)v19 >= 9 )
    {
      if ( v7 < 0 && v7 != -2003304442 && v7 != -2003304307 )
        MilUnexpectedError(v7, L"Could not create display set.");
      goto LABEL_64;
    }
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v7, 0xB4u, 0LL);
LABEL_64:
  if ( v6 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v7, 0x257u, 0LL);
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
    v25 = qword_18033CC08;
    v26 = 0LL;
    if ( !qword_18033CC08 )
      goto LABEL_84;
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18033CC08 + 2) + 104LL))(*((_QWORD *)qword_18033CC08
                                                                                                + 2))
      || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v25 + 14)
      || qword_18033CC08 != v25 )
    {
      ReleaseInterface<CD3DSurface>((__int64 *)&qword_18033CC08);
    }
    if ( !qword_18033CC08 )
    {
LABEL_84:
      D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects((CD3DModuleLoaderInternal *)v19, &qword_18033CC08);
      TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
      v7 = D3DObjects;
      if ( D3DObjects < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_1802BFEC8, 1u, D3DObjects, 0xFEu, 0LL);
      v19 = qword_18033CC18;
      if ( qword_18033CC18 )
        (*(void (__fastcall **)(__int64, CDXGIEnumeration *))(*(_QWORD *)qword_18033CC18 + 32LL))(
          qword_18033CC18,
          qword_18033CC08);
    }
    v29 = qword_18033CC08;
    if ( qword_18033CC08 )
      (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18033CC08)(qword_18033CC08);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v7, 0xD8u, 0LL);
      goto LABEL_97;
    }
    v30 = (volatile signed __int32 *)g_DisplayManager;
    if ( !g_DisplayManager )
    {
      v31 = CDisplayManager::DeriveCurrentDisplaySet((CDisplayManager *)v19, v29, 0LL);
      v7 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v31, 0xDFu, 0LL);
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
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v7, 0xC9u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v7, 0xCC9u, 0LL);
        }
        if ( v26 && _InterlockedExchangeAdd((volatile signed __int32 *)v26, 0xFFFFFFFF) == 1 )
          CDisplaySet::`scalar deleting destructor'(v26, v33);
LABEL_110:
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v7, 0x269u, 0LL);
        goto LABEL_112;
      }
      v30 = (volatile signed __int32 *)g_DisplayManager;
    }
    _InterlockedIncrement(v30);
    v26 = g_DisplayManager;
    goto LABEL_97;
  }
LABEL_112:
  v34 = v5 - 2;
  if ( v34 )
  {
    if ( v34 == 1 )
    {
      CRenderTargetManager::ReleaseResourcesForDisplayChange(this[8]);
      goto LABEL_124;
    }
  }
  else
  {
    v35 = CRenderTargetManager::HandleDDAArrivalOrDeparture(this[8]);
    v37 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x275u, 0LL);
    if ( !v7 || v7 >= 0 && v37 < 0 )
      v7 = v37;
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
