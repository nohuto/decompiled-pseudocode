/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x18009BD70
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x18009BD30 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18009BF70 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18009C020 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

void __fastcall CRenderData::~CRenderData(CRenderData *this)
{
  *(_QWORD *)this = &CRenderData::`vftable';
  CRenderData::DestroyRenderData(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 104);
  CDataStreamWriter::FreeResources((CRenderData *)((char *)this + 56));
  CResource::~CResource(this);
}
