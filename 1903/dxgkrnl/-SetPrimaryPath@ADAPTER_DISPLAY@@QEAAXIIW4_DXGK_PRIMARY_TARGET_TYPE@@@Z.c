/*
 * XREFs of ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0147C78
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0147B10 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkSetPostDeviceCandidateTarget @ 0x1C001A8C0 (DxgkSetPostDeviceCandidateTarget.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPrimaryPath(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = 7984LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v10 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 124) = a3;
  *(_DWORD *)(a1 + 128) = a4;
  if ( (*(_DWORD *)(v10 + 308) & 1) != 0 && a3 != -1 )
    DxgkSetPostDeviceCandidateTarget(a3);
}
