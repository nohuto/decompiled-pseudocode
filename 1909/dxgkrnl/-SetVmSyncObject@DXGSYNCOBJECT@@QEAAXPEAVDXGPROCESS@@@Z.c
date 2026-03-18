/*
 * XREFs of ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00FA7F8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA870 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSYNCOBJECT::SetVmSyncObject(DXGSYNCOBJECT *this, unsigned __int64 a2)
{
  char v4; // si
  bool v5; // al
  char v6; // al
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  v4 = 1;
  v5 = a2 && (*(_BYTE *)(a2 + 299) & 0xC) != 0;
  *((_BYTE *)this + 278) = v5;
  if ( v5 )
  {
    v6 = *(_BYTE *)(a2 + 299);
    if ( (v6 & 8) != 0 )
      v7 = *(_QWORD *)(a2 + 432);
    else
      v7 = a2 & -(__int64)((v6 & 4) != 0);
    *((_QWORD *)this + 35) = v7;
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v8 + 24) = 5405LL;
      WdLogEvent5_WdAssertion(v8);
    }
  }
  else
  {
    *((_QWORD *)this + 35) = 0LL;
  }
  if ( !a2
    || (*(_BYTE *)(a2 + 299) & 8) == 0
    || !*(_BYTE *)(a2 + 298) && (!g_OSTestSigningEnabled || !(_BYTE)KdDebuggerEnabled) )
  {
    v4 = 0;
  }
  *((_BYTE *)this + 279) = v4;
}
