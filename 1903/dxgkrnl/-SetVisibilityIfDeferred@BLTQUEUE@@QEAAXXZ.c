/*
 * XREFs of ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C027DC24
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C027BBC8 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C027D0F0 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001B890 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

void __fastcall BLTQUEUE::SetVisibilityIfDeferred(BLTQUEUE *this)
{
  struct DXGADAPTER *Adapter; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  _QWORD *v8; // rax

  if ( _InterlockedExchange((volatile __int32 *)this + 214, 0) )
  {
    Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    v3 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
           *((ADAPTER_DISPLAY **)Adapter + 319),
           *((unsigned int *)this + 24),
           1u,
           0x4000,
           0);
    v7 = v3;
    if ( v3 < 0 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4, v6);
      v8[3] = *((unsigned int *)this + 24);
      v8[4] = Adapter;
      v8[5] = v7;
      WdLogEvent5_WdError(v8);
    }
  }
}
