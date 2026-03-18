/*
 * XREFs of DxgkSessionDisconnected @ 0x1C013D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C580 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00F37C8 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C013DBC0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C013DD00 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0274770 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSessionDisconnected(__int64 a1, __int64 a2, const GUID *a3)
{
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v10; // rbx
  __int64 v11; // rcx
  const GUID *v12; // r8
  int v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  char v15; // [rsp+30h] [rbp-20h]
  _BYTE v16[8]; // [rsp+38h] [rbp-18h] BYREF
  DXGPUSHLOCK *v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+48h] [rbp-8h]
  __int64 v19; // [rsp+68h] [rbp+18h] BYREF

  v13 = -1;
  v3 = a1;
  v14 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v15 = 1;
    v13 = 2198;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2198);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2198LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    Global = DXGGLOBAL::GetGlobal(v5, v4);
    LOBYTE(v7) = 1;
    *((_DWORD *)Global + 76031) = 0;
    v19 = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(v7, &v19, 129LL);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v5, v4);
    v10 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3), 0);
      DXGPUSHLOCK::AcquireExclusive(v17);
      *((_DWORD *)v10 + 12) = 0;
      v18 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v10);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13, v8);
  if ( v15 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v13);
  }
}
