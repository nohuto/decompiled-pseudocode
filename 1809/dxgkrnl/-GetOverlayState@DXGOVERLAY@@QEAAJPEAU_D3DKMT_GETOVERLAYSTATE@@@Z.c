/*
 * XREFs of ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C021F270
 * Callers:
 *     DxgkGetOverlayState @ 0x1C0220BA0 (DxgkGetOverlayState.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0005E6C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGOVERLAY::GetOverlayState(DXGOVERLAY *this, struct _D3DKMT_GETOVERLAYSTATE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall **v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v7; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 522LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v6[72] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[80] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 523LL;
    WdLogEvent5_WdAssertion(v7);
  }
  a2->OverlayEnabled = *((_DWORD *)this + 8) != -1;
  return 0LL;
}
