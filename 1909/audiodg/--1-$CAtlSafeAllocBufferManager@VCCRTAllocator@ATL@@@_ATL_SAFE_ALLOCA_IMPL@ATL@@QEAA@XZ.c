/*
 * XREFs of ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140040290
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x14004E2F0 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 *     _ATL::CRegObject::AddReplacement_::_1_::dtor$0 @ 0x14004E37E (_ATL--CRegObject--AddReplacement_--_1_--dtor$0.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x14004E390 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     _ATL::CRegParser::AddValue_::_1_::dtor$1 @ 0x14004E805 (_ATL--CRegParser--AddValue_--_1_--dtor$1.c)
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x14004FA50 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     _ATL::CRegParser::PreProcessBuffer_::_1_::dtor$1 @ 0x14004FC43 (_ATL--CRegParser--PreProcessBuffer_--_1_--dtor$1.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x140050858 (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 *     _ATL::CRegObject::RegisterFromResource_::_1_::dtor$0 @ 0x140050A28 (_ATL--CRegObject--RegisterFromResource_--_1_--dtor$0.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x1400513B4 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     free @ 0x140016E14 (free.c)
 */

void __fastcall ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(
        _QWORD **a1)
{
  _QWORD *v2; // rcx

  while ( *a1 )
  {
    v2 = *a1;
    *a1 = (_QWORD *)**a1;
    free(v2);
  }
}
