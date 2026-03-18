/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C0163120
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01631F8 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00D0970 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00D1A5C (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C015AF90 (DpiFdoInvalidateChildRelations.c)
 *     DpiGdoCreateGdiObjects @ 0x1C015F808 (DpiGdoCreateGdiObjects.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C01827AC (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02A2098 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02A2334 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C02A37E0 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoRemovePdoObjects @ 0x1C02B01E8 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C02B06D4 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v9; // rbx
  const GUID *v10; // r8
  const GUID *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // r14d
  _QWORD *v17; // r15
  _QWORD *v18; // rdi
  unsigned __int16 v19; // ax
  PVOID PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int AdapterInfoIntegratedDisplay; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  LODWORD(v9) = 0;
  if ( (*(_BYTE *)(v4 + 3905) & 4) == 0 )
  {
LABEL_2:
    LODWORD(v9) = DpiFdoInvalidateChildRelations(a1, 6u, v5);
    if ( (int)v9 < 0 )
      goto LABEL_30;
    if ( (*(_BYTE *)(v4 + 3904) & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3896), 2, v10);
      v9 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 3896));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3896), 2u, v11);
      if ( (int)v9 < 0 )
      {
        v39 = WdLogNewEntry5_WdError(v13, v12, v14);
        *(_QWORD *)(v39 + 24) = v9;
        WdLogEvent5_WdError(v39);
      }
      else
      {
        LODWORD(v9) = DpiGdoCreateGdiObjects(a1, v7, v6);
      }
    }
    if ( (int)v9 < 0 )
    {
LABEL_30:
      DpiGdoDestroyGdiObjects(a1);
      LOBYTE(v40) = 1;
      DpiPdoRemovePdoObjects(a1, v40, v5);
    }
    return (unsigned int)v9;
  }
  v16 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3304), 1u);
  v17 = *(_QWORD **)(v4 + 3464);
  if ( v17 == (_QWORD *)(v4 + 3464) )
    goto LABEL_25;
  while ( 1 )
  {
    v18 = v17 - 4;
    v17 = (_QWORD *)*v17;
    v19 = *((_WORD *)v18 + 46);
    if ( !v19 )
      goto LABEL_18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19 + 128LL, 0x74727044u);
    v18[13] = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, *((unsigned __int16 *)v18 + 46) + 128LL);
    v25 = v18[13] + 128LL;
    v18[14] = v25;
    v18[15] = v25;
    if ( *(int *)(*(_QWORD *)(v4 + 3896) + 2452LL) < 2400 )
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay(a1, v18);
    else
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay2(a1, v18);
    v9 = AdapterInfoIntegratedDisplay;
    if ( AdapterInfoIntegratedDisplay < 0 )
    {
      v33 = WdLogNewEntry5_WdError(v28, v27, v29);
      *(_QWORD *)(v33 + 24) = v9;
LABEL_22:
      WdLogEvent5_WdError(v33);
      goto LABEL_24;
    }
    LODWORD(v9) = DpiFdoValidateIntegratedDisplayDescriptor(v4, v18);
    if ( (int)v9 < 0 )
      goto LABEL_24;
    LOBYTE(v31) = *(_BYTE *)(v18[13] + 122LL);
    if ( ((1 << v31) & v16) != 0 )
    {
      LODWORD(v9) = -1073741811;
      v33 = WdLogNewEntry5_WdError(v31, v30, v32);
      *(_QWORD *)(v33 + 24) = *(unsigned __int8 *)(v18[13] + 122LL);
      *(_QWORD *)(v33 + 32) = *((unsigned int *)v18 + 6);
      goto LABEL_22;
    }
    v16 |= 1 << v31;
LABEL_18:
    if ( v17 == (_QWORD *)(v4 + 3464) )
      goto LABEL_24;
  }
  v34 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
  *(_QWORD *)(v34 + 24) = (int)v9;
  WdLogEvent5_WdLowResource(v34);
  LODWORD(v9) = -1073741670;
LABEL_24:
  v5 = a4;
LABEL_25:
  ExReleaseResourceLite((PERESOURCE)(v4 + 3304));
  KeLeaveCriticalRegion();
  if ( ((v16 + 1) & v16) != 0 )
  {
    LODWORD(v9) = -1073741811;
    v38 = WdLogNewEntry5_WdError(v36, v35, v37);
    *(_QWORD *)(v38 + 24) = v16;
    WdLogEvent5_WdError(v38);
  }
  if ( (int)v9 >= 0 )
  {
    v6 = a3;
    v7 = a2;
    goto LABEL_2;
  }
  return (unsigned int)v9;
}
