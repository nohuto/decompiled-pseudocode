/*
 * XREFs of ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800039E0
 * Callers:
 *     ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x1800039A0 (--_GCProjectedShadowScene@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180003C54 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?clear@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAXXZ @ 0x180003CE4 (-clear@-$list@UReceiverEntry@CProjectedShadowScene@@V-$allocator@UReceiverEntry@CProjectedShadow.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180003E2C (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?clear@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAXXZ @ 0x180003EBC (-clear@-$list@UCasterEntry@CProjectedShadowScene@@V-$allocator@UCasterEntry@CProjectedShadowScen.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180007190 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(struct CResource **this)
{
  *this = (struct CResource *)&CProjectedShadowScene::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CProjectedShadowScene::ClearShadows((CProjectedShadowScene *)this, 0);
  CProjectedShadowScene::ClearCasters((CProjectedShadowScene *)this);
  CProjectedShadowScene::ClearReceivers((CProjectedShadowScene *)this);
  std::list<CProjectedShadowScene::ReceiverEntry>::clear(this + 9);
  std::_Deallocate<16,0>(this[9], 120LL);
  std::list<CProjectedShadowScene::CasterEntry>::clear(this + 7);
  std::_Deallocate<16,0>(this[7], 176LL);
  CResource::~CResource((CResource *)this);
}
