/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x1800A1FF0
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x1800A1FB0 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800A2118 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800A21D4 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800A75F0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CRenderData::~CRenderData(CRenderData *this)
{
  CDataStreamWriter *v2; // rcx
  CDataStreamWriter *v3; // rcx

  *(_QWORD *)this = &CRenderData::`vftable';
  CRenderData::DestroyRenderData(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 120);
  CDataStreamWriter::FreeBlocks(v2, (struct _LIST_ENTRY *)((char *)this + 56));
  operator delete(*((void **)this + 11));
  CDataStreamWriter::FreeBlocks(v3, (struct _LIST_ENTRY *)((char *)this + 72));
  CResource::~CResource(this);
}
