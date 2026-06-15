/*
 * XREFs of ??3@YAXPEAX@Z @ 0x14001B8B0
 * Callers:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x140015540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140015B90 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140017020 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140017300 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x14001C330 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComObject_CAPOWrapperSrv___::CreateInstance_::_1_::dtor$0 @ 0x14001FB30 (_ATL--CComCreator_ATL--CComObject_CAPOWrapperSrv___--CreateInstance_--_1_--dtor$0.c)
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x140042FD0 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x140043000 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140043550 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ??_G?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x1400447E0 (--_G-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComAggObject_CAPOWrapperSrv___::CreateInstance_::_1_::dtor$0 @ 0x14004493A (_ATL--CComCreator_ATL--CComAggObject_CAPOWrapperSrv___--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
