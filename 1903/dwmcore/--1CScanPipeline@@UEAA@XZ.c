/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x180223ED8
 * Callers:
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180223E7C (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x180223FB0 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void __fastcall CScanPipeline::~CScanPipeline(void **this)
{
  *this = &CScanPipeline::`vftable';
  operator delete(this[80]);
  this[80] = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 74));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 67));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 1));
}
