/*
 * XREFs of ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z @ 0x18000390C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@@std@@QEAAPEAU?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@2@PEAU32@0@Z @ 0x180003B34 (-_Buynode0@-$_List_alloc@U-$_List_base_types@UReceiverEntry@CProjectedShadowScene@@V-$allocator@.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@@std@@QEAAPEAU?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@2@PEAU32@0@Z @ 0x180006840 (-_Buynode0@-$_List_alloc@U-$_List_base_types@UCasterEntry@CProjectedShadowScene@@V-$allocator@UC.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::CProjectedShadowScene(
        CProjectedShadowScene *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  CProjectedShadowScene *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = std::_List_alloc<std::_List_base_types<CProjectedShadowScene::CasterEntry>>::_Buynode0(
                            this,
                            0LL,
                            0LL);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = std::_List_alloc<std::_List_base_types<CProjectedShadowScene::ReceiverEntry>>::_Buynode0(
                            v3,
                            0LL,
                            0LL);
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  result = this;
  *((_DWORD *)this + 26) = 2139095039;
  *((_DWORD *)this + 31) = -1082130432;
  return result;
}
