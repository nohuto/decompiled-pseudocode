/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1400156F8
 * Callers:
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140010A80 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140011FE8 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x140012060 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x140016170 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComObject_CAPOWrapperSrv___::CreateInstance_::_1_::dtor$0 @ 0x14001AFC0 (_ATL--CComCreator_ATL--CComObject_CAPOWrapperSrv___--CreateInstance_--_1_--dtor$0.c)
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x140040050 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x140040080 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140040490 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140041490 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??_G?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x1400421C0 (--_G-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComAggObject_CAPOWrapperSrv___::CreateInstance_::_1_::dtor$0 @ 0x14004231A (_ATL--CComCreator_ATL--CComAggObject_CAPOWrapperSrv___--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
