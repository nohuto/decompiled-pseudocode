/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269A74
 * Callers:
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0249948 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269B04 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall DXGSYNCOBJECT::GetDxgAdapterSyncObject(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3)
{
  _QWORD *v5; // rax

  *a3 = 0LL;
  if ( (*((_DWORD *)this + 49) & 4) != 0 )
    return DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, a3);
  if ( !a2 || *((struct ADAPTER_RENDER **)this + 38) == a2 )
  {
    *a3 = (DXGSYNCOBJECT *)((char *)this + 288);
    return 0LL;
  }
  else
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
    v5[3] = this;
    v5[4] = *((_QWORD *)this + 38);
    v5[5] = a2;
    v5[6] = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
