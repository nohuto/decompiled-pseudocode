/*
 * XREFs of ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9388
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C00C6EF0 (DxgkDisplayOnOff.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD270 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CE2F0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall DmmDisablePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  ADAPTER_DISPLAY *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 216);
  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v2) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v21);
  }
  v7 = *(ADAPTER_DISPLAY **)(v2 + 2552);
  v8 = *((_QWORD *)v7 + 11);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v24, v8);
  v9 = WdLogNewEntry5_WdDmmEvent();
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = v8;
  WdLogEvent5_WdDmmEvent(v9);
  if ( (*(_DWORD *)(v2 + 308) & 0x100) != 0
    || (v10 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v7, v4, 0, 0x40u, 0), v14 = v10, v10 >= 0) )
  {
    v15 = ADAPTER_DISPLAY::DestroyCddAllocations(v7, a1, v4);
    v19 = v15;
    if ( v15 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
      v23[3] = v4;
      v23[4] = v2;
      v23[5] = v19;
      WdLogEvent5_WdError(v23);
    }
    LODWORD(v14) = 0;
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v22[3] = v4;
    v22[4] = v2;
    v22[5] = v14;
    WdLogEvent5_WdError(v22);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v24 + 40));
  return (unsigned int)v14;
}
