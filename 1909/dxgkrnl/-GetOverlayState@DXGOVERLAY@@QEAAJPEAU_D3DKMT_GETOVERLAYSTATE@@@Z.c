/*
 * XREFs of ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C0253E34
 * Callers:
 *     DxgkGetOverlayState @ 0x1C0255780 (DxgkGetOverlayState.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002758 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGOVERLAY::GetOverlayState(DXGOVERLAY *this, struct _D3DKMT_GETOVERLAYSTATE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall **v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v9; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 522LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v8[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 523LL;
    WdLogEvent5_WdAssertion(v9);
  }
  a2->OverlayEnabled = *((_DWORD *)this + 8) != -1;
  return 0LL;
}
