/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C01486F0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0144B80 (DpiFdoInvalidateChildRelations.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0147284 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     DpiGdoCreateGdiObjects @ 0x1C0147354 (DpiGdoCreateGdiObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02663D8 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C0266664 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C0267978 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoRemovePdoObjects @ 0x1C0277564 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C0277D4C (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v12; // r14d
  _QWORD *v13; // r15
  _QWORD *v14; // rsi
  unsigned __int16 v15; // ax
  PVOID PoolWithTag; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int AdapterInfoIntegratedDisplay2; // eax
  __int64 v20; // rcx
  int AdapterInfoIntegratedDisplay; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  LODWORD(v9) = 0;
  if ( (*(_BYTE *)(v4 + 3801) & 4) == 0 )
  {
LABEL_2:
    LODWORD(v9) = DpiFdoInvalidateChildRelations(a1, 6u, v5);
    if ( (int)v9 < 0 )
      goto LABEL_33;
    if ( (*(_BYTE *)(v4 + 3800) & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3792), 2);
      v9 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 3792));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3792));
      if ( (int)v9 < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v27 + 24) = v9;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        LODWORD(v9) = DpiGdoCreateGdiObjects(a1, v7, v6);
      }
    }
    if ( (int)v9 < 0 )
    {
LABEL_33:
      DpiGdoDestroyGdiObjects(a1);
      LOBYTE(v28) = 1;
      DpiPdoRemovePdoObjects(a1, v28, v5);
    }
    return (unsigned int)v9;
  }
  v12 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3232), 1u);
  v13 = *(_QWORD **)(v4 + 3392);
  if ( v13 == (_QWORD *)(v4 + 3392) )
    goto LABEL_28;
  while ( 1 )
  {
    v14 = v13 - 4;
    v13 = (_QWORD *)*v13;
    v15 = *((_WORD *)v14 + 46);
    if ( !v15 )
      goto LABEL_21;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15 + 128LL, 0x74727044u);
    v14[13] = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, *((unsigned __int16 *)v14 + 46) + 128LL);
    v18 = v14[13] + 128LL;
    v14[14] = v18;
    v14[15] = v18;
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v4 + 3792)) >= 2400 )
    {
      AdapterInfoIntegratedDisplay2 = DpiFdoQueryAdapterInfoIntegratedDisplay2(a1, v14);
      v9 = AdapterInfoIntegratedDisplay2;
      if ( AdapterInfoIntegratedDisplay2 == -1073741637 || AdapterInfoIntegratedDisplay2 == -1073741822 )
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_QueryAdapterInfoIntegrated2__private_propertyCache,
          12859558LL,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C007052C,
          0,
          v29);
      if ( (int)v9 < 0 )
        goto LABEL_23;
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v4 + 3792)) <= 2300 )
    {
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay(a1, v14);
      v9 = AdapterInfoIntegratedDisplay;
      if ( AdapterInfoIntegratedDisplay < 0 )
      {
LABEL_23:
        v23 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v23 + 24) = v9;
LABEL_25:
        WdLogEvent5_WdError(v23);
        goto LABEL_27;
      }
    }
    LODWORD(v9) = DpiFdoValidateIntegratedDisplayDescriptor(v4, v14);
    if ( (int)v9 < 0 )
      goto LABEL_27;
    LOBYTE(v22) = *(_BYTE *)(v14[13] + 122LL);
    if ( ((1 << v22) & v12) != 0 )
    {
      LODWORD(v9) = -1073741811;
      v23 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v23 + 24) = *(unsigned __int8 *)(v14[13] + 122LL);
      *(_QWORD *)(v23 + 32) = *((unsigned int *)v14 + 6);
      goto LABEL_25;
    }
    v12 |= 1 << v22;
LABEL_21:
    if ( v13 == (_QWORD *)(v4 + 3392) )
      goto LABEL_27;
  }
  v24 = WdLogNewEntry5_WdLowResource(v17);
  *(_QWORD *)(v24 + 24) = (int)v9;
  WdLogEvent5_WdLowResource(v24);
  LODWORD(v9) = -1073741670;
LABEL_27:
  v5 = a4;
LABEL_28:
  ExReleaseResourceLite((PERESOURCE)(v4 + 3232));
  KeLeaveCriticalRegion();
  if ( ((v12 + 1) & v12) != 0 )
  {
    LODWORD(v9) = -1073741811;
    v26 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v26 + 24) = v12;
    WdLogEvent5_WdError(v26);
  }
  if ( (int)v9 >= 0 )
  {
    v6 = a3;
    v7 = a2;
    goto LABEL_2;
  }
  return (unsigned int)v9;
}
