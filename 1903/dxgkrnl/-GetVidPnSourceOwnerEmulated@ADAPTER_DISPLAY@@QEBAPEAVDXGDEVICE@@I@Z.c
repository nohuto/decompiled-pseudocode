/*
 * XREFs of ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001C2F4
 * Callers:
 *     ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C014ED50 (-QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02017A0 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct DXGDEVICE *__fastcall ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax

  v3 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 5863LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return (struct DXGDEVICE *)*((_QWORD *)this[14] + 496 * v3 + 88);
}
