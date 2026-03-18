/*
 * XREFs of ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C011FD6C
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011EBA8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C0122E70 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C011FB7C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmDisablePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 216);
  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v2) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v20);
  }
  v6 = *(_QWORD *)(v2 + 2520);
  v7 = *(_QWORD *)(v6 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, v7);
  v12 = WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
  *(_QWORD *)(v12 + 24) = v4;
  *(_QWORD *)(v12 + 32) = v7;
  WdLogEvent5_WdDmmEvent(v12);
  if ( (*(_DWORD *)(v2 + 308) & 0x100) != 0
    || (v13 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v6, v4, 0, 0x40u, 0), v15 = v13, v13 >= 0) )
  {
    v16 = ADAPTER_DISPLAY::DestroyCddAllocations((PERESOURCE **)v6, a1, v4);
    v18 = v16;
    if ( v16 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v22[3] = v4;
      v22[4] = v2;
      v22[5] = v18;
      WdLogEvent5_WdError(v22);
    }
    LODWORD(v15) = 0;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v21[3] = v4;
    v21[4] = v2;
    v21[5] = v15;
    WdLogEvent5_WdError(v21);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
  return (unsigned int)v15;
}
