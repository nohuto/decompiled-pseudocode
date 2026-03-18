/*
 * XREFs of OutputDuplRemoteSessionReconnected @ 0x1C0276E14
 * Callers:
 *     DxgkSessionReconnected @ 0x1C015A690 (DxgkSessionReconnected.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C788 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E9A20 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0274EDC (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 */

void __fastcall OutputDuplRemoteSessionReconnected(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v4; // rbx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  v2 = a1;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(a1, a2);
  v4 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3), 0);
    DXGPUSHLOCK::AcquireExclusive(v12);
    v13 = 2;
    v6 = OUTPUTDUPL_MGR::ReconfigureNumSources(v4, v2, v5);
    v9 = v6;
    if ( v6 != -1073741801 )
    {
      if ( v6 >= 0 )
        goto LABEL_6;
      v10 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v10 + 24) = 3952LL;
      WdLogEvent5_WdAssertion(v10);
    }
    if ( v9 < 0 )
    {
LABEL_7:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
      return;
    }
LABEL_6:
    *((_DWORD *)v4 + 12) = 1;
    goto LABEL_7;
  }
}
