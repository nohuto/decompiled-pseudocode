/*
 * XREFs of OutputDuplRemoteSessionReconnected @ 0x1C0241544
 * Callers:
 *     DxgkSessionReconnected @ 0x1C0144600 (DxgkSessionReconnected.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E2378 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C023F46C (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 */

void __fastcall OutputDuplRemoteSessionReconnected(__int64 a1)
{
  unsigned int v1; // edi
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v1 = a1;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(a1);
  v3 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3), 0);
    DXGPUSHLOCK::AcquireExclusive(v9);
    v10 = 2;
    v4 = OUTPUTDUPL_MGR::ReconfigureNumSources(v3, v1);
    v6 = v4;
    if ( v4 != -1073741801 )
    {
      if ( v4 >= 0 )
        goto LABEL_6;
      v7 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v7 + 24) = 3740LL;
      WdLogEvent5_WdAssertion(v7);
    }
    if ( v6 < 0 )
    {
LABEL_7:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
      return;
    }
LABEL_6:
    *((_DWORD *)v3 + 12) = 1;
    goto LABEL_7;
  }
}
