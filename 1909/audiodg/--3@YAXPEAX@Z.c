/*
 * XREFs of ??3@YAXPEAX@Z @ 0x140015B08
 * Callers:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140012028 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400120A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140012180 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x140016580 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComObject_CAPOWrapperSrv___::CreateInstance_::_1_::dtor$0 @ 0x14001B3B0 (_ATL--CComCreator_ATL--CComObject_CAPOWrapperSrv___--CreateInstance_--_1_--dtor$0.c)
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x140040020 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x140040050 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140040460 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140041460 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??_G?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140042190 (--_G-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComAggObject_CAPOWrapperSrv___::CreateInstance_::_1_::dtor$0 @ 0x1400422EA (_ATL--CComCreator_ATL--CComAggObject_CAPOWrapperSrv___--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
