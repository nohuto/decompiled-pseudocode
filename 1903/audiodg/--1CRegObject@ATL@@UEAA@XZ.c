/*
 * XREFs of ??1CRegObject@ATL@@UEAA@XZ @ 0x14004DAB8
 * Callers:
 *     ??_ECRegObject@ATL@@UEAAPEAXI@Z @ 0x14004E0C0 (--_ECRegObject@ATL@@UEAAPEAXI@Z.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x1400514A4 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x14004EAE8 (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 *     ?ClearReplacements@CRegObject@ATL@@UEAAJXZ @ 0x14004EB70 (-ClearReplacements@CRegObject@ATL@@UEAAJXZ.c)
 */

void __fastcall ATL::CRegObject::~CRegObject(ATL::CRegObject *this)
{
  *(_QWORD *)this = &ATL::CRegObject::`vftable';
  ATL::CRegObject::ClearReplacements(this);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  ATL::CExpansionVector::ClearReplacements((ATL::CRegObject *)((char *)this + 8));
  ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::RemoveAll((char *)this + 8);
}
