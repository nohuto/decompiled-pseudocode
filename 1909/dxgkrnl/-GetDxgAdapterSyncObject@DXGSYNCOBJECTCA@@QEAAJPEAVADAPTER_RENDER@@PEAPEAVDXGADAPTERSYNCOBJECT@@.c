/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269B04
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00FAF80 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00FB380 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011EBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269A74 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0044D0C (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0044D74 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C00FAE3C (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
        DXGSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGADAPTERSYNCOBJECT *AdapterObject; // rbx
  __int64 v10; // rax
  DXGADAPTERSYNCOBJECT *v11; // rax

  v6 = 0;
  AdapterObject = DXGSYNCOBJECTCA::FindAdapterObject(this, a2);
  if ( AdapterObject || !v7 )
    goto LABEL_12;
  if ( (*(_DWORD *)(v8 + 196) & 4) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v10 + 24) = 1999LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (DXGADAPTERSYNCOBJECT *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
  AdapterObject = v11;
  if ( v11 )
  {
    *((_QWORD *)v11 + 2) = a2;
    *(_QWORD *)v11 = 0LL;
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_WORD *)v11 + 12) = 0;
    *((_BYTE *)v11 + 26) = 0;
    *((_QWORD *)v11 + 7) = this;
    *((_QWORD *)v11 + 5) = 0LL;
    *((_QWORD *)v11 + 6) = 0LL;
  }
  else
  {
    AdapterObject = 0LL;
  }
  if ( !AdapterObject )
    return 3221225495LL;
  v6 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject(AdapterObject, this);
  if ( v6 >= 0 )
LABEL_12:
    *a3 = AdapterObject;
  else
    DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(AdapterObject);
  return (unsigned int)v6;
}
