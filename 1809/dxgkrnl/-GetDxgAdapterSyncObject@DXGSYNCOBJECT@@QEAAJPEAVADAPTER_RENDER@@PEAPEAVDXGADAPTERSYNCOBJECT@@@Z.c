/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C011D214
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C011CFBC (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0214F1C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0234B88 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall DXGSYNCOBJECT::GetDxgAdapterSyncObject(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3)
{
  _QWORD *v6; // rax

  *a3 = 0LL;
  if ( (*((_DWORD *)this + 43) & 4) != 0 )
    return DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, a3);
  if ( a2 && *((struct ADAPTER_RENDER **)this + 35) != a2 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v6[3] = this;
    v6[4] = *((_QWORD *)this + 35);
    v6[5] = a2;
    v6[6] = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  else
  {
    *a3 = (DXGSYNCOBJECT *)((char *)this + 264);
    return 0LL;
  }
}
